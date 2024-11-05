/*
 *  Copyright (C) 2002-2017  The DOSBox Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#include <stdio.h>

#include "dosbox.h"
#include "mem.h"
#include "cpu.h"
#include "lazyflags.h"
#include "inout.h"
#include "callback.h"
#include "pic.h"
#include "fpu.h"
#include "paging.h"

#if C_DEBUG
#include "debug.h"
#endif

#if (!C_CORE_INLINE)
#define LoadMb(off) mem_readb(off)
#define LoadMw(off) mem_readw(off)
#define LoadMd(off) mem_readd(off)
#define SaveMb(off, val)    mem_writeb(off,val)
#define SaveMw(off, val)    mem_writew(off,val)
#define SaveMd(off, val)    mem_writed(off,val)
#else
#include "paging.h"
#define LoadMb(off) mem_readb_inline(off)
#define LoadMw(off) mem_readw_inline(off)
#define LoadMd(off) mem_readd_inline(off)
#define SaveMb(off,val)	mem_writeb_inline(off,val)
#define SaveMw(off,val)	mem_writew_inline(off,val)
#define SaveMd(off,val)	mem_writed_inline(off,val)
#endif

extern Bitu cycle_count;

#if C_FPU
#define CPU_FPU    1                        //Enable FPU escape instructions
#endif

#include "core_llvm/core_llvm_runner.h"

#define CPU_PIC_CHECK	1
#define CPU_TRAP_CHECK	1

#define OPCODE_NONE			0x000
#define OPCODE_0F			0x100
#define OPCODE_SIZE			0x200

#define PREFIX_ADDR			0x1
#define PREFIX_REP			0x2

#define TEST_PREFIX_ADDR	(core.prefixes & PREFIX_ADDR)
#define TEST_PREFIX_REP		(core.prefixes & PREFIX_REP)

#define DO_PREFIX_SEG(_SEG)				\
    BaseDS=SegBase(_SEG);				\
    BaseSS=SegBase(_SEG);				\
    core.base_val_ds=_SEG;				\
    goto restart_opcode;

#define DO_PREFIX_ADDR()								\
    core.prefixes=(core.prefixes & ~PREFIX_ADDR) |		\
    (cpu.code.big ^ PREFIX_ADDR);						\
    core.ea_table=&EATable[(core.prefixes&1) * 256];	\
    goto restart_opcode;

#define DO_PREFIX_REP(_ZERO)				\
    core.prefixes|=PREFIX_REP;				\
    core.rep_zero=_ZERO;					\
    goto restart_opcode;

typedef PhysPt(*GetEAHandler)();

namespace core_llvm {


uint32_t CpuRunnerLLVMBase::SIBZero = 0;
uint32_t * CpuRunnerLLVMBase::SIBIndex[8] = { &reg_eax,&reg_ecx,&reg_edx,&reg_ebx,&CpuRunnerLLVMBase::SIBZero,&reg_ebp,&reg_esi,&reg_edi };

GeneralRegister<uint8_t> **CpuRunnerLLVMBase::mGeneralRegister8Bit = nullptr;
GeneralRegister<uint16_t> **CpuRunnerLLVMBase::mGeneralRegister16Bit = nullptr;
GeneralRegister<uint32_t> **CpuRunnerLLVMBase::mGeneralRegister32Bit = nullptr;
SegmentRegister<uint16_t> **CpuRunnerLLVMBase::mSegmentRegister16Bit = nullptr;

}

static const uint32_t AddrMaskTable[2] = {0x0000ffff, 0xffffffff};

core_llvm::CpuRunnerLLVM llvm_runner;

Bits CPU_Core_LLVM_Run() {
	while (CPU_Cycles-- > 0) {
		llvm_runner.PrepareParsing();

#if C_DEBUG
#if C_HEAVY_DEBUG
		if (DEBUG_HeavyIsBreakpoint()) {
			FillFlags();
			return debugCallback;
		}
#endif
		cycle_count++;
#endif
		if (!llvm_runner.Parse()) {
#if C_DEBUG
			llvm_runner.LogUDException();
#endif
			CPU_Exception(EXCEPTION_UD, 0);
		    continue;
		}
		if (llvm_runner.RestoreEIP()) {
            llvm_runner.SaveIP();
		}
		if (llvm_runner.m_nReturnVal) {
		    return llvm_runner.m_nReturnVal;
		}
	}
	FillFlags();
	return llvm_runner.m_nReturnVal;
}

Bits CPU_Core_LLVM_Trap_Run() {
	Bits oldCycles = CPU_Cycles;
	CPU_Cycles = 1;
	cpu.trap_skip = false;

	Bits ret = CPU_Core_LLVM_Run();
	if (!cpu.trap_skip) CPU_HW_Interrupt(1);
	CPU_Cycles = oldCycles - 1;
	cpudecoder = &CPU_Core_LLVM_Run;

	return ret;
}

void CPU_Core_LLVM_Init() {

}
