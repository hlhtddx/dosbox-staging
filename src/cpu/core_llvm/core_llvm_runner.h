#include "core_llvm_common.h"

#ifndef PROJECT_CORE_LLVM_H
#define PROJECT_CORE_LLVM_H
namespace core_llvm {

class CpuRunnerLLVM : public CpuRunnerLLVMBase {

private:

	/* Segment override prefix */
	inline bool handler_pr26();

	/* Segment override prefix */
	inline bool handler_pr2E();

	/* Segment override prefix */
	inline bool handler_pr36();

	/* Segment override prefix */
	inline bool handler_pr3E();

	/* Segment override prefix */
	inline bool handler_pr64();

	/* Segment override prefix */
	inline bool handler_pr65();

	/* Operand-size override prefix */
	inline bool handler_pr66();

	/* Address-size override prefix */
	inline bool handler_pr67();

	/* Lock prefix */
	inline bool handler_prF0();

	/* REP/REPZ/REPNZ prefix */
	inline bool handler_prF2();

	/* REP/REPZ/REPNZ prefix */
	inline bool handler_prF3();

	/*
	 ADD
	*/
	inline bool handler_in_00_ADD_Eb_Gb();

	/*
	 ADD
	*/
	inline bool handler_in_01_ADD_Evqp_Gvqp();

	/*
	 ADD for 16-Bit operand
	*/
	inline bool handler_in_01_ADD_Evqp_Gvqp_16();

	/*
	 ADD for 32-Bit operand
	*/
	inline bool handler_in_01_ADD_Evqp_Gvqp_32();

	/*
	 ADD
	*/
	inline bool handler_in_02_ADD_Gb_Eb();

	/*
	 ADD
	*/
	inline bool handler_in_03_ADD_Gvqp_Evqp();

	/*
	 ADD for 16-Bit operand
	*/
	inline bool handler_in_03_ADD_Gvqp_Evqp_16();

	/*
	 ADD for 32-Bit operand
	*/
	inline bool handler_in_03_ADD_Gvqp_Evqp_32();

	/*
	 ADD
	*/
	inline bool handler_in_04_ADD_ALb_Ib();

	/*
	 ADD
	*/
	inline bool handler_in_05_ADD_rAXvqp_Ivds();

	/*
	 ADD for 16-Bit operand
	*/
	inline bool handler_in_05_ADD_rAXvqp_Ivds_16();

	/*
	 ADD for 32-Bit operand
	*/
	inline bool handler_in_05_ADD_rAXvqp_Ivds_32();

	/*
	 PUSH
	*/
	inline bool handler_in_06_PUSH_ESw();

	/*
	 POP
	*/
	inline bool handler_in_07_POP_ESw();

	/*
	 OR
	*/
	inline bool handler_in_08_OR_Eb_Gb();

	/*
	 OR
	*/
	inline bool handler_in_09_OR_Evqp_Gvqp();

	/*
	 OR for 16-Bit operand
	*/
	inline bool handler_in_09_OR_Evqp_Gvqp_16();

	/*
	 OR for 32-Bit operand
	*/
	inline bool handler_in_09_OR_Evqp_Gvqp_32();

	/*
	 OR
	*/
	inline bool handler_in_0A_OR_Gb_Eb();

	/*
	 OR
	*/
	inline bool handler_in_0B_OR_Gvqp_Evqp();

	/*
	 OR for 16-Bit operand
	*/
	inline bool handler_in_0B_OR_Gvqp_Evqp_16();

	/*
	 OR for 32-Bit operand
	*/
	inline bool handler_in_0B_OR_Gvqp_Evqp_32();

	/*
	 OR
	*/
	inline bool handler_in_0C_OR_ALb_Ib();

	/*
	 OR
	*/
	inline bool handler_in_0D_OR_rAXvqp_Ivds();

	/*
	 OR for 16-Bit operand
	*/
	inline bool handler_in_0D_OR_rAXvqp_Ivds_16();

	/*
	 OR for 32-Bit operand
	*/
	inline bool handler_in_0D_OR_rAXvqp_Ivds_32();

	/*
	 PUSH
	*/
	inline bool handler_in_0E_PUSH_CSw();

	/*
	 SLDT
	*/
	inline bool handler_in_0F_00_00_SLDT_Mw(uint8_t rmmod);

	/*
	 STR
	*/
	inline bool handler_in_0F_00_01_STR_Mw(uint8_t rmmod);

	/*
	 LLDT
	*/
	inline bool handler_in_0F_00_02_LLDT_Ew(uint8_t rmmod);

	/*
	 LTR
	*/
	inline bool handler_in_0F_00_03_LTR_Ew(uint8_t rmmod);

	/*
	 VERR
	*/
	inline bool handler_in_0F_00_04_VERR_Ew(uint8_t rmmod);

	/*
	 VERW
	*/
	inline bool handler_in_0F_00_05_VERW_Ew(uint8_t rmmod);

	/*
	 SGDT
	*/
	inline bool handler_in_0F_01_00_SGDT_Ms(uint8_t rmmod);

	/*
	 SIDT
	*/
	inline bool handler_in_0F_01_01_SIDT_Ms(uint8_t rmmod);

	/*
	 LGDT
	*/
	inline bool handler_in_0F_01_02_LGDT_Ms(uint8_t rmmod);

	/*
	 LIDT
	*/
	inline bool handler_in_0F_01_03_LIDT_Ms(uint8_t rmmod);

	/*
	 SMSW
	*/
	inline bool handler_in_0F_01_04_SMSW_Mw(uint8_t rmmod);

	/*
	 LMSW
	*/
	inline bool handler_in_0F_01_06_LMSW_Ew(uint8_t rmmod);

	/*
	 INVLPG
	*/
	inline bool handler_in_0F_01_07_INVLPG(uint8_t rmmod);

	/*
	 LAR
	*/
	inline bool handler_in_0F_02_LAR_Gvqp_Mw();

	/*
	 LAR for 16-Bit operand
	*/
	inline bool handler_in_0F_02_LAR_Gvqp_Mw_16();

	/*
	 LAR for 32-Bit operand
	*/
	inline bool handler_in_0F_02_LAR_Gvqp_Mw_32();

	/*
	 LSL
	*/
	inline bool handler_in_0F_03_LSL_Gvqp_Mw();

	/*
	 LSL for 16-Bit operand
	*/
	inline bool handler_in_0F_03_LSL_Gvqp_Mw_16();

	/*
	 LSL for 32-Bit operand
	*/
	inline bool handler_in_0F_03_LSL_Gvqp_Mw_32();

	/*
	 CLTS
	*/
	inline bool handler_in_0F_06_CLTS();

	/*
	 LOADALL
	*/
	inline bool handler_in_0F_07_LOADALL();

	/*
	 INVD
	*/
	inline bool handler_in_0F_08_INVD();

	/*
	 WBINVD
	*/
	inline bool handler_in_0F_09_WBINVD();

	/*
	 MOV
	*/
	inline bool handler_in_0F_20_MOV_Hd_Cd();

	/*
	 MOV
	*/
	inline bool handler_in_0F_21_MOV_Hd_Dd();

	/*
	 MOV
	*/
	inline bool handler_in_0F_22_MOV_Cd_Hd();

	/*
	 MOV
	*/
	inline bool handler_in_0F_23_MOV_Dq_Hq();

	/*
	 MOV
	*/
	inline bool handler_in_0F_24_MOV_Hd_Td();

	/*
	 MOV
	*/
	inline bool handler_in_0F_26_MOV_Td_Hd();

	/*
	 JO
	*/
	inline bool handler_in_0F_80_JO_Jvds();

	/*
	 JO for 16-Bit operand
	*/
	inline bool handler_in_0F_80_JO_Jvds_16();

	/*
	 JO for 32-Bit operand
	*/
	inline bool handler_in_0F_80_JO_Jvds_32();

	/*
	 JNO
	*/
	inline bool handler_in_0F_81_JNO_Jvds();

	/*
	 JNO for 16-Bit operand
	*/
	inline bool handler_in_0F_81_JNO_Jvds_16();

	/*
	 JNO for 32-Bit operand
	*/
	inline bool handler_in_0F_81_JNO_Jvds_32();

	/*
	 JB
	*/
	inline bool handler_in_0F_82_JB_Jvds();

	/*
	 JB for 16-Bit operand
	*/
	inline bool handler_in_0F_82_JB_Jvds_16();

	/*
	 JB for 32-Bit operand
	*/
	inline bool handler_in_0F_82_JB_Jvds_32();

	/*
	 JNB
	*/
	inline bool handler_in_0F_83_JNB_Jvds();

	/*
	 JNB for 16-Bit operand
	*/
	inline bool handler_in_0F_83_JNB_Jvds_16();

	/*
	 JNB for 32-Bit operand
	*/
	inline bool handler_in_0F_83_JNB_Jvds_32();

	/*
	 JZ
	*/
	inline bool handler_in_0F_84_JZ_Jvds();

	/*
	 JZ for 16-Bit operand
	*/
	inline bool handler_in_0F_84_JZ_Jvds_16();

	/*
	 JZ for 32-Bit operand
	*/
	inline bool handler_in_0F_84_JZ_Jvds_32();

	/*
	 JNZ
	*/
	inline bool handler_in_0F_85_JNZ_Jvds();

	/*
	 JNZ for 16-Bit operand
	*/
	inline bool handler_in_0F_85_JNZ_Jvds_16();

	/*
	 JNZ for 32-Bit operand
	*/
	inline bool handler_in_0F_85_JNZ_Jvds_32();

	/*
	 JBE
	*/
	inline bool handler_in_0F_86_JBE_Jvds();

	/*
	 JBE for 16-Bit operand
	*/
	inline bool handler_in_0F_86_JBE_Jvds_16();

	/*
	 JBE for 32-Bit operand
	*/
	inline bool handler_in_0F_86_JBE_Jvds_32();

	/*
	 JNBE
	*/
	inline bool handler_in_0F_87_JNBE_Jvds();

	/*
	 JNBE for 16-Bit operand
	*/
	inline bool handler_in_0F_87_JNBE_Jvds_16();

	/*
	 JNBE for 32-Bit operand
	*/
	inline bool handler_in_0F_87_JNBE_Jvds_32();

	/*
	 JS
	*/
	inline bool handler_in_0F_88_JS_Jvds();

	/*
	 JS for 16-Bit operand
	*/
	inline bool handler_in_0F_88_JS_Jvds_16();

	/*
	 JS for 32-Bit operand
	*/
	inline bool handler_in_0F_88_JS_Jvds_32();

	/*
	 JNS
	*/
	inline bool handler_in_0F_89_JNS_Jvds();

	/*
	 JNS for 16-Bit operand
	*/
	inline bool handler_in_0F_89_JNS_Jvds_16();

	/*
	 JNS for 32-Bit operand
	*/
	inline bool handler_in_0F_89_JNS_Jvds_32();

	/*
	 JP
	*/
	inline bool handler_in_0F_8A_JP_Jvds();

	/*
	 JP for 16-Bit operand
	*/
	inline bool handler_in_0F_8A_JP_Jvds_16();

	/*
	 JP for 32-Bit operand
	*/
	inline bool handler_in_0F_8A_JP_Jvds_32();

	/*
	 JNP
	*/
	inline bool handler_in_0F_8B_JNP_Jvds();

	/*
	 JNP for 16-Bit operand
	*/
	inline bool handler_in_0F_8B_JNP_Jvds_16();

	/*
	 JNP for 32-Bit operand
	*/
	inline bool handler_in_0F_8B_JNP_Jvds_32();

	/*
	 JL
	*/
	inline bool handler_in_0F_8C_JL_Jvds();

	/*
	 JL for 16-Bit operand
	*/
	inline bool handler_in_0F_8C_JL_Jvds_16();

	/*
	 JL for 32-Bit operand
	*/
	inline bool handler_in_0F_8C_JL_Jvds_32();

	/*
	 JNL
	*/
	inline bool handler_in_0F_8D_JNL_Jvds();

	/*
	 JNL for 16-Bit operand
	*/
	inline bool handler_in_0F_8D_JNL_Jvds_16();

	/*
	 JNL for 32-Bit operand
	*/
	inline bool handler_in_0F_8D_JNL_Jvds_32();

	/*
	 JLE
	*/
	inline bool handler_in_0F_8E_JLE_Jvds();

	/*
	 JLE for 16-Bit operand
	*/
	inline bool handler_in_0F_8E_JLE_Jvds_16();

	/*
	 JLE for 32-Bit operand
	*/
	inline bool handler_in_0F_8E_JLE_Jvds_32();

	/*
	 JNLE
	*/
	inline bool handler_in_0F_8F_JNLE_Jvds();

	/*
	 JNLE for 16-Bit operand
	*/
	inline bool handler_in_0F_8F_JNLE_Jvds_16();

	/*
	 JNLE for 32-Bit operand
	*/
	inline bool handler_in_0F_8F_JNLE_Jvds_32();

	/*
	 SETO
	*/
	inline bool handler_in_0F_90_00_SETO_Eb(uint8_t rmmod);

	/*
	 SETNO
	*/
	inline bool handler_in_0F_91_00_SETNO_Eb(uint8_t rmmod);

	/*
	 SETB
	*/
	inline bool handler_in_0F_92_00_SETB_Eb(uint8_t rmmod);

	/*
	 SETNB
	*/
	inline bool handler_in_0F_93_00_SETNB_Eb(uint8_t rmmod);

	/*
	 SETZ
	*/
	inline bool handler_in_0F_94_00_SETZ_Eb(uint8_t rmmod);

	/*
	 SETNZ
	*/
	inline bool handler_in_0F_95_00_SETNZ_Eb(uint8_t rmmod);

	/*
	 SETBE
	*/
	inline bool handler_in_0F_96_00_SETBE_Eb(uint8_t rmmod);

	/*
	 SETNBE
	*/
	inline bool handler_in_0F_97_00_SETNBE_Eb(uint8_t rmmod);

	/*
	 SETS
	*/
	inline bool handler_in_0F_98_00_SETS_Eb(uint8_t rmmod);

	/*
	 SETNS
	*/
	inline bool handler_in_0F_99_00_SETNS_Eb(uint8_t rmmod);

	/*
	 SETP
	*/
	inline bool handler_in_0F_9A_00_SETP_Eb(uint8_t rmmod);

	/*
	 SETNP
	*/
	inline bool handler_in_0F_9B_00_SETNP_Eb(uint8_t rmmod);

	/*
	 SETL
	*/
	inline bool handler_in_0F_9C_00_SETL_Eb(uint8_t rmmod);

	/*
	 SETNL
	*/
	inline bool handler_in_0F_9D_00_SETNL_Eb(uint8_t rmmod);

	/*
	 SETLE
	*/
	inline bool handler_in_0F_9E_00_SETLE_Eb(uint8_t rmmod);

	/*
	 SETNLE
	*/
	inline bool handler_in_0F_9F_00_SETNLE_Eb(uint8_t rmmod);

	/*
	 PUSH
	*/
	inline bool handler_in_0F_A0_PUSH_FSw();

	/*
	 POP
	*/
	inline bool handler_in_0F_A1_POP_FSw();

	/*
	 CPUID
	*/
	inline bool handler_in_0F_A2_CPUID();

	/*
	 BT
	*/
	inline bool handler_in_0F_A3_BT_Gvqp();

	/*
	 BT for 16-Bit operand
	*/
	inline bool handler_in_0F_A3_BT_Gvqp_16();

	/*
	 BT for 32-Bit operand
	*/
	inline bool handler_in_0F_A3_BT_Gvqp_32();

	/*
	 SHLD
	*/
	inline bool handler_in_0F_A4_SHLD_Evqp_Ib();

	/*
	 SHLD for 16-Bit operand
	*/
	inline bool handler_in_0F_A4_SHLD_Evqp_Ib_16();

	/*
	 SHLD for 32-Bit operand
	*/
	inline bool handler_in_0F_A4_SHLD_Evqp_Ib_32();

	/*
	 SHLD
	*/
	inline bool handler_in_0F_A5_SHLD_Evqp_CLb();

	/*
	 SHLD for 16-Bit operand
	*/
	inline bool handler_in_0F_A5_SHLD_Evqp_CLb_16();

	/*
	 SHLD for 32-Bit operand
	*/
	inline bool handler_in_0F_A5_SHLD_Evqp_CLb_32();

	/*
	 PUSH
	*/
	inline bool handler_in_0F_A8_PUSH_GSw();

	/*
	 POP
	*/
	inline bool handler_in_0F_A9_POP_GSw();

	/*
	 RSM
	*/
	inline bool handler_in_0F_AA_RSM();

	/*
	 BTS
	*/
	inline bool handler_in_0F_AB_BTS_Evqp_Gvqp();

	/*
	 BTS for 16-Bit operand
	*/
	inline bool handler_in_0F_AB_BTS_Evqp_Gvqp_16();

	/*
	 BTS for 32-Bit operand
	*/
	inline bool handler_in_0F_AB_BTS_Evqp_Gvqp_32();

	/*
	 SHRD
	*/
	inline bool handler_in_0F_AC_SHRD_Evqp_Ib();

	/*
	 SHRD for 16-Bit operand
	*/
	inline bool handler_in_0F_AC_SHRD_Evqp_Ib_16();

	/*
	 SHRD for 32-Bit operand
	*/
	inline bool handler_in_0F_AC_SHRD_Evqp_Ib_32();

	/*
	 SHRD
	*/
	inline bool handler_in_0F_AD_SHRD_Evqp_CLb();

	/*
	 SHRD for 16-Bit operand
	*/
	inline bool handler_in_0F_AD_SHRD_Evqp_CLb_16();

	/*
	 SHRD for 32-Bit operand
	*/
	inline bool handler_in_0F_AD_SHRD_Evqp_CLb_32();

	/*
	 IMUL
	*/
	inline bool handler_in_0F_AF_IMUL_Gvqp_Evqp();

	/*
	 IMUL for 16-Bit operand
	*/
	inline bool handler_in_0F_AF_IMUL_Gvqp_Evqp_16();

	/*
	 IMUL for 32-Bit operand
	*/
	inline bool handler_in_0F_AF_IMUL_Gvqp_Evqp_32();

	/*
	 CMPXCHG
	*/
	inline bool handler_in_0F_B0_CMPXCHG_Eb_Gb();

	/*
	 CMPXCHG
	*/
	inline bool handler_in_0F_B1_CMPXCHG_Evqp_Gvqp();

	/*
	 CMPXCHG for 16-Bit operand
	*/
	inline bool handler_in_0F_B1_CMPXCHG_Evqp_Gvqp_16();

	/*
	 CMPXCHG for 32-Bit operand
	*/
	inline bool handler_in_0F_B1_CMPXCHG_Evqp_Gvqp_32();

	/*
	 LSS
	*/
	inline bool handler_in_0F_B2_LSS_Gvqp_Mptp();

	/*
	 LSS for 16-Bit operand
	*/
	inline bool handler_in_0F_B2_LSS_Gvqp_Mptp_16();

	/*
	 LSS for 32-Bit operand
	*/
	inline bool handler_in_0F_B2_LSS_Gvqp_Mptp_32();

	/*
	 BTR
	*/
	inline bool handler_in_0F_B3_BTR_Evqp_Gvqp();

	/*
	 BTR for 16-Bit operand
	*/
	inline bool handler_in_0F_B3_BTR_Evqp_Gvqp_16();

	/*
	 BTR for 32-Bit operand
	*/
	inline bool handler_in_0F_B3_BTR_Evqp_Gvqp_32();

	/*
	 LFS
	*/
	inline bool handler_in_0F_B4_LFS_Gvqp_Mptp();

	/*
	 LFS for 16-Bit operand
	*/
	inline bool handler_in_0F_B4_LFS_Gvqp_Mptp_16();

	/*
	 LFS for 32-Bit operand
	*/
	inline bool handler_in_0F_B4_LFS_Gvqp_Mptp_32();

	/*
	 LGS
	*/
	inline bool handler_in_0F_B5_LGS_Gvqp_Mptp();

	/*
	 LGS for 16-Bit operand
	*/
	inline bool handler_in_0F_B5_LGS_Gvqp_Mptp_16();

	/*
	 LGS for 32-Bit operand
	*/
	inline bool handler_in_0F_B5_LGS_Gvqp_Mptp_32();

	/*
	 MOVZX
	*/
	inline bool handler_in_0F_B6_MOVZX_Gvqp_Eb();

	/*
	 MOVZX for 16-Bit operand
	*/
	inline bool handler_in_0F_B6_MOVZX_Gvqp_Eb_16();

	/*
	 MOVZX for 32-Bit operand
	*/
	inline bool handler_in_0F_B6_MOVZX_Gvqp_Eb_32();

	/*
	 MOVZX
	*/
	inline bool handler_in_0F_B7_MOVZX_Gvqp_Ew();

	/*
	 MOVZX for 16-Bit operand
	*/
	inline bool handler_in_0F_B7_MOVZX_Gvqp_Ew_16();

	/*
	 MOVZX for 32-Bit operand
	*/
	inline bool handler_in_0F_B7_MOVZX_Gvqp_Ew_32();

	/*
	 BT
	*/
	inline bool handler_in_0F_BA_04_BT_Ib(uint8_t rmmod);

	/*
	 BTS
	*/
	inline bool handler_in_0F_BA_05_BTS_Evqp_Ib(uint8_t rmmod);

	/*
	 BTS for 16-Bit operand
	*/
	inline bool handler_in_0F_BA_05_BTS_Evqp_Ib_16(uint8_t rmmod);

	/*
	 BTS for 32-Bit operand
	*/
	inline bool handler_in_0F_BA_05_BTS_Evqp_Ib_32(uint8_t rmmod);

	/*
	 BTR
	*/
	inline bool handler_in_0F_BA_06_BTR_Evqp_Ib(uint8_t rmmod);

	/*
	 BTR for 16-Bit operand
	*/
	inline bool handler_in_0F_BA_06_BTR_Evqp_Ib_16(uint8_t rmmod);

	/*
	 BTR for 32-Bit operand
	*/
	inline bool handler_in_0F_BA_06_BTR_Evqp_Ib_32(uint8_t rmmod);

	/*
	 BTC
	*/
	inline bool handler_in_0F_BA_07_BTC_Evqp_Ib(uint8_t rmmod);

	/*
	 BTC for 16-Bit operand
	*/
	inline bool handler_in_0F_BA_07_BTC_Evqp_Ib_16(uint8_t rmmod);

	/*
	 BTC for 32-Bit operand
	*/
	inline bool handler_in_0F_BA_07_BTC_Evqp_Ib_32(uint8_t rmmod);

	/*
	 BTC
	*/
	inline bool handler_in_0F_BB_BTC_Evqp_Gvqp();

	/*
	 BTC for 16-Bit operand
	*/
	inline bool handler_in_0F_BB_BTC_Evqp_Gvqp_16();

	/*
	 BTC for 32-Bit operand
	*/
	inline bool handler_in_0F_BB_BTC_Evqp_Gvqp_32();

	/*
	 BSF
	*/
	inline bool handler_in_0F_BC_BSF_Gvqp_Evqp();

	/*
	 BSF for 16-Bit operand
	*/
	inline bool handler_in_0F_BC_BSF_Gvqp_Evqp_16();

	/*
	 BSF for 32-Bit operand
	*/
	inline bool handler_in_0F_BC_BSF_Gvqp_Evqp_32();

	/*
	 BSR
	*/
	inline bool handler_in_0F_BD_BSR_Gvqp_Evqp();

	/*
	 BSR for 16-Bit operand
	*/
	inline bool handler_in_0F_BD_BSR_Gvqp_Evqp_16();

	/*
	 BSR for 32-Bit operand
	*/
	inline bool handler_in_0F_BD_BSR_Gvqp_Evqp_32();

	/*
	 MOVSX
	*/
	inline bool handler_in_0F_BE_MOVSX_Gvqp_Eb();

	/*
	 MOVSX for 16-Bit operand
	*/
	inline bool handler_in_0F_BE_MOVSX_Gvqp_Eb_16();

	/*
	 MOVSX for 32-Bit operand
	*/
	inline bool handler_in_0F_BE_MOVSX_Gvqp_Eb_32();

	/*
	 MOVSX
	*/
	inline bool handler_in_0F_BF_MOVSX_Gvqp_Ew();

	/*
	 MOVSX for 16-Bit operand
	*/
	inline bool handler_in_0F_BF_MOVSX_Gvqp_Ew_16();

	/*
	 MOVSX for 32-Bit operand
	*/
	inline bool handler_in_0F_BF_MOVSX_Gvqp_Ew_32();

	/*
	 XADD
	*/
	inline bool handler_in_0F_C0_XADD_Gb();

	/*
	 XADD
	*/
	inline bool handler_in_0F_C1_XADD_Gvqp();

	/*
	 XADD for 16-Bit operand
	*/
	inline bool handler_in_0F_C1_XADD_Gvqp_16();

	/*
	 XADD for 32-Bit operand
	*/
	inline bool handler_in_0F_C1_XADD_Gvqp_32();

	/*
	 BSWAP
	*/
	inline bool handler_in_0F_C8_BSWAP_rAXvqp();

	/*
	 BSWAP for 16-Bit operand
	*/
	inline bool handler_in_0F_C8_BSWAP_rAXvqp_16();

	/*
	 BSWAP for 32-Bit operand
	*/
	inline bool handler_in_0F_C8_BSWAP_rAXvqp_32();

	/*
	 BSWAP
	*/
	inline bool handler_in_0F_C9_BSWAP_rCXvqp();

	/*
	 BSWAP for 16-Bit operand
	*/
	inline bool handler_in_0F_C9_BSWAP_rCXvqp_16();

	/*
	 BSWAP for 32-Bit operand
	*/
	inline bool handler_in_0F_C9_BSWAP_rCXvqp_32();

	/*
	 BSWAP
	*/
	inline bool handler_in_0F_CA_BSWAP_rDXvqp();

	/*
	 BSWAP for 16-Bit operand
	*/
	inline bool handler_in_0F_CA_BSWAP_rDXvqp_16();

	/*
	 BSWAP for 32-Bit operand
	*/
	inline bool handler_in_0F_CA_BSWAP_rDXvqp_32();

	/*
	 BSWAP
	*/
	inline bool handler_in_0F_CB_BSWAP_rBXvqp();

	/*
	 BSWAP for 16-Bit operand
	*/
	inline bool handler_in_0F_CB_BSWAP_rBXvqp_16();

	/*
	 BSWAP for 32-Bit operand
	*/
	inline bool handler_in_0F_CB_BSWAP_rBXvqp_32();

	/*
	 BSWAP
	*/
	inline bool handler_in_0F_CC_BSWAP_rSPvqp();

	/*
	 BSWAP for 16-Bit operand
	*/
	inline bool handler_in_0F_CC_BSWAP_rSPvqp_16();

	/*
	 BSWAP for 32-Bit operand
	*/
	inline bool handler_in_0F_CC_BSWAP_rSPvqp_32();

	/*
	 BSWAP
	*/
	inline bool handler_in_0F_CD_BSWAP_rBPvqp();

	/*
	 BSWAP for 16-Bit operand
	*/
	inline bool handler_in_0F_CD_BSWAP_rBPvqp_16();

	/*
	 BSWAP for 32-Bit operand
	*/
	inline bool handler_in_0F_CD_BSWAP_rBPvqp_32();

	/*
	 BSWAP
	*/
	inline bool handler_in_0F_CE_BSWAP_rSIvqp();

	/*
	 BSWAP for 16-Bit operand
	*/
	inline bool handler_in_0F_CE_BSWAP_rSIvqp_16();

	/*
	 BSWAP for 32-Bit operand
	*/
	inline bool handler_in_0F_CE_BSWAP_rSIvqp_32();

	/*
	 BSWAP
	*/
	inline bool handler_in_0F_CF_BSWAP_rDIvqp();

	/*
	 BSWAP for 16-Bit operand
	*/
	inline bool handler_in_0F_CF_BSWAP_rDIvqp_16();

	/*
	 BSWAP for 32-Bit operand
	*/
	inline bool handler_in_0F_CF_BSWAP_rDIvqp_32();

	/*
	 ADC
	*/
	inline bool handler_in_10_ADC_Eb_Gb();

	/*
	 ADC
	*/
	inline bool handler_in_11_ADC_Evqp_Gvqp();

	/*
	 ADC for 16-Bit operand
	*/
	inline bool handler_in_11_ADC_Evqp_Gvqp_16();

	/*
	 ADC for 32-Bit operand
	*/
	inline bool handler_in_11_ADC_Evqp_Gvqp_32();

	/*
	 ADC
	*/
	inline bool handler_in_12_ADC_Gb_Eb();

	/*
	 ADC
	*/
	inline bool handler_in_13_ADC_Gvqp_Evqp();

	/*
	 ADC for 16-Bit operand
	*/
	inline bool handler_in_13_ADC_Gvqp_Evqp_16();

	/*
	 ADC for 32-Bit operand
	*/
	inline bool handler_in_13_ADC_Gvqp_Evqp_32();

	/*
	 ADC
	*/
	inline bool handler_in_14_ADC_ALb_Ib();

	/*
	 ADC
	*/
	inline bool handler_in_15_ADC_rAXvqp_Ivds();

	/*
	 ADC for 16-Bit operand
	*/
	inline bool handler_in_15_ADC_rAXvqp_Ivds_16();

	/*
	 ADC for 32-Bit operand
	*/
	inline bool handler_in_15_ADC_rAXvqp_Ivds_32();

	/*
	 PUSH
	*/
	inline bool handler_in_16_PUSH_SSw();

	/*
	 POP
	*/
	inline bool handler_in_17_POP_SSw();

	/*
	 SBB
	*/
	inline bool handler_in_18_SBB_Eb_Gb();

	/*
	 SBB
	*/
	inline bool handler_in_19_SBB_Evqp_Gvqp();

	/*
	 SBB for 16-Bit operand
	*/
	inline bool handler_in_19_SBB_Evqp_Gvqp_16();

	/*
	 SBB for 32-Bit operand
	*/
	inline bool handler_in_19_SBB_Evqp_Gvqp_32();

	/*
	 SBB
	*/
	inline bool handler_in_1A_SBB_Gb_Eb();

	/*
	 SBB
	*/
	inline bool handler_in_1B_SBB_Gvqp_Evqp();

	/*
	 SBB for 16-Bit operand
	*/
	inline bool handler_in_1B_SBB_Gvqp_Evqp_16();

	/*
	 SBB for 32-Bit operand
	*/
	inline bool handler_in_1B_SBB_Gvqp_Evqp_32();

	/*
	 SBB
	*/
	inline bool handler_in_1C_SBB_ALb_Ib();

	/*
	 SBB
	*/
	inline bool handler_in_1D_SBB_rAXvqp_Ivds();

	/*
	 SBB for 16-Bit operand
	*/
	inline bool handler_in_1D_SBB_rAXvqp_Ivds_16();

	/*
	 SBB for 32-Bit operand
	*/
	inline bool handler_in_1D_SBB_rAXvqp_Ivds_32();

	/*
	 PUSH
	*/
	inline bool handler_in_1E_PUSH_DSw();

	/*
	 POP
	*/
	inline bool handler_in_1F_POP_DSw();

	/*
	 AND
	*/
	inline bool handler_in_20_AND_Eb_Gb();

	/*
	 AND
	*/
	inline bool handler_in_21_AND_Evqp_Gvqp();

	/*
	 AND for 16-Bit operand
	*/
	inline bool handler_in_21_AND_Evqp_Gvqp_16();

	/*
	 AND for 32-Bit operand
	*/
	inline bool handler_in_21_AND_Evqp_Gvqp_32();

	/*
	 AND
	*/
	inline bool handler_in_22_AND_Gb_Eb();

	/*
	 AND
	*/
	inline bool handler_in_23_AND_Gvqp_Evqp();

	/*
	 AND for 16-Bit operand
	*/
	inline bool handler_in_23_AND_Gvqp_Evqp_16();

	/*
	 AND for 32-Bit operand
	*/
	inline bool handler_in_23_AND_Gvqp_Evqp_32();

	/*
	 AND
	*/
	inline bool handler_in_24_AND_ALb_Ib();

	/*
	 AND
	*/
	inline bool handler_in_25_AND_rAXvqp_Ivds();

	/*
	 AND for 16-Bit operand
	*/
	inline bool handler_in_25_AND_rAXvqp_Ivds_16();

	/*
	 AND for 32-Bit operand
	*/
	inline bool handler_in_25_AND_rAXvqp_Ivds_32();

	/*
	 DAA
	*/
	inline bool handler_in_27_DAA();

	/*
	 SUB
	*/
	inline bool handler_in_28_SUB_Eb_Gb();

	/*
	 SUB
	*/
	inline bool handler_in_29_SUB_Evqp_Gvqp();

	/*
	 SUB for 16-Bit operand
	*/
	inline bool handler_in_29_SUB_Evqp_Gvqp_16();

	/*
	 SUB for 32-Bit operand
	*/
	inline bool handler_in_29_SUB_Evqp_Gvqp_32();

	/*
	 SUB
	*/
	inline bool handler_in_2A_SUB_Gb_Eb();

	/*
	 SUB
	*/
	inline bool handler_in_2B_SUB_Gvqp_Evqp();

	/*
	 SUB for 16-Bit operand
	*/
	inline bool handler_in_2B_SUB_Gvqp_Evqp_16();

	/*
	 SUB for 32-Bit operand
	*/
	inline bool handler_in_2B_SUB_Gvqp_Evqp_32();

	/*
	 SUB
	*/
	inline bool handler_in_2C_SUB_ALb_Ib();

	/*
	 SUB
	*/
	inline bool handler_in_2D_SUB_rAXvqp_Ivds();

	/*
	 SUB for 16-Bit operand
	*/
	inline bool handler_in_2D_SUB_rAXvqp_Ivds_16();

	/*
	 SUB for 32-Bit operand
	*/
	inline bool handler_in_2D_SUB_rAXvqp_Ivds_32();

	/*
	 DAS
	*/
	inline bool handler_in_2F_DAS();

	/*
	 XOR
	*/
	inline bool handler_in_30_XOR_Eb_Gb();

	/*
	 XOR
	*/
	inline bool handler_in_31_XOR_Evqp_Gvqp();

	/*
	 XOR for 16-Bit operand
	*/
	inline bool handler_in_31_XOR_Evqp_Gvqp_16();

	/*
	 XOR for 32-Bit operand
	*/
	inline bool handler_in_31_XOR_Evqp_Gvqp_32();

	/*
	 XOR
	*/
	inline bool handler_in_32_XOR_Gb_Eb();

	/*
	 XOR
	*/
	inline bool handler_in_33_XOR_Gvqp_Evqp();

	/*
	 XOR for 16-Bit operand
	*/
	inline bool handler_in_33_XOR_Gvqp_Evqp_16();

	/*
	 XOR for 32-Bit operand
	*/
	inline bool handler_in_33_XOR_Gvqp_Evqp_32();

	/*
	 XOR
	*/
	inline bool handler_in_34_XOR_ALb_Ib();

	/*
	 XOR
	*/
	inline bool handler_in_35_XOR_rAXvqp_Ivds();

	/*
	 XOR for 16-Bit operand
	*/
	inline bool handler_in_35_XOR_rAXvqp_Ivds_16();

	/*
	 XOR for 32-Bit operand
	*/
	inline bool handler_in_35_XOR_rAXvqp_Ivds_32();

	/*
	 AAA
	*/
	inline bool handler_in_37_AAA();

	/*
	 CMP
	*/
	inline bool handler_in_38_CMP_Gb();

	/*
	 CMP
	*/
	inline bool handler_in_39_CMP_Gvqp();

	/*
	 CMP for 16-Bit operand
	*/
	inline bool handler_in_39_CMP_Gvqp_16();

	/*
	 CMP for 32-Bit operand
	*/
	inline bool handler_in_39_CMP_Gvqp_32();

	/*
	 CMP
	*/
	inline bool handler_in_3A_CMP_Eb();

	/*
	 CMP
	*/
	inline bool handler_in_3B_CMP_Evqp();

	/*
	 CMP for 16-Bit operand
	*/
	inline bool handler_in_3B_CMP_Evqp_16();

	/*
	 CMP for 32-Bit operand
	*/
	inline bool handler_in_3B_CMP_Evqp_32();

	/*
	 CMP
	*/
	inline bool handler_in_3C_CMP_Ib();

	/*
	 CMP
	*/
	inline bool handler_in_3D_CMP_Ivds();

	/*
	 CMP for 16-Bit operand
	*/
	inline bool handler_in_3D_CMP_Ivds_16();

	/*
	 CMP for 32-Bit operand
	*/
	inline bool handler_in_3D_CMP_Ivds_32();

	/*
	 AAS
	*/
	inline bool handler_in_3F_AAS();

	/*
	 INC
	*/
	inline bool handler_in_40_INC_rAXv();

	/*
	 INC for 16-Bit operand
	*/
	inline bool handler_in_40_INC_rAXv_16();

	/*
	 INC for 32-Bit operand
	*/
	inline bool handler_in_40_INC_rAXv_32();

	/*
	 INC
	*/
	inline bool handler_in_41_INC_rCXv();

	/*
	 INC for 16-Bit operand
	*/
	inline bool handler_in_41_INC_rCXv_16();

	/*
	 INC for 32-Bit operand
	*/
	inline bool handler_in_41_INC_rCXv_32();

	/*
	 INC
	*/
	inline bool handler_in_42_INC_rDXv();

	/*
	 INC for 16-Bit operand
	*/
	inline bool handler_in_42_INC_rDXv_16();

	/*
	 INC for 32-Bit operand
	*/
	inline bool handler_in_42_INC_rDXv_32();

	/*
	 INC
	*/
	inline bool handler_in_43_INC_rBXv();

	/*
	 INC for 16-Bit operand
	*/
	inline bool handler_in_43_INC_rBXv_16();

	/*
	 INC for 32-Bit operand
	*/
	inline bool handler_in_43_INC_rBXv_32();

	/*
	 INC
	*/
	inline bool handler_in_44_INC_rSPv();

	/*
	 INC for 16-Bit operand
	*/
	inline bool handler_in_44_INC_rSPv_16();

	/*
	 INC for 32-Bit operand
	*/
	inline bool handler_in_44_INC_rSPv_32();

	/*
	 INC
	*/
	inline bool handler_in_45_INC_rBPv();

	/*
	 INC for 16-Bit operand
	*/
	inline bool handler_in_45_INC_rBPv_16();

	/*
	 INC for 32-Bit operand
	*/
	inline bool handler_in_45_INC_rBPv_32();

	/*
	 INC
	*/
	inline bool handler_in_46_INC_rSIv();

	/*
	 INC for 16-Bit operand
	*/
	inline bool handler_in_46_INC_rSIv_16();

	/*
	 INC for 32-Bit operand
	*/
	inline bool handler_in_46_INC_rSIv_32();

	/*
	 INC
	*/
	inline bool handler_in_47_INC_rDIv();

	/*
	 INC for 16-Bit operand
	*/
	inline bool handler_in_47_INC_rDIv_16();

	/*
	 INC for 32-Bit operand
	*/
	inline bool handler_in_47_INC_rDIv_32();

	/*
	 DEC
	*/
	inline bool handler_in_48_DEC_rAXv();

	/*
	 DEC for 16-Bit operand
	*/
	inline bool handler_in_48_DEC_rAXv_16();

	/*
	 DEC for 32-Bit operand
	*/
	inline bool handler_in_48_DEC_rAXv_32();

	/*
	 DEC
	*/
	inline bool handler_in_49_DEC_rCXv();

	/*
	 DEC for 16-Bit operand
	*/
	inline bool handler_in_49_DEC_rCXv_16();

	/*
	 DEC for 32-Bit operand
	*/
	inline bool handler_in_49_DEC_rCXv_32();

	/*
	 DEC
	*/
	inline bool handler_in_4A_DEC_rDXv();

	/*
	 DEC for 16-Bit operand
	*/
	inline bool handler_in_4A_DEC_rDXv_16();

	/*
	 DEC for 32-Bit operand
	*/
	inline bool handler_in_4A_DEC_rDXv_32();

	/*
	 DEC
	*/
	inline bool handler_in_4B_DEC_rBXv();

	/*
	 DEC for 16-Bit operand
	*/
	inline bool handler_in_4B_DEC_rBXv_16();

	/*
	 DEC for 32-Bit operand
	*/
	inline bool handler_in_4B_DEC_rBXv_32();

	/*
	 DEC
	*/
	inline bool handler_in_4C_DEC_rSPv();

	/*
	 DEC for 16-Bit operand
	*/
	inline bool handler_in_4C_DEC_rSPv_16();

	/*
	 DEC for 32-Bit operand
	*/
	inline bool handler_in_4C_DEC_rSPv_32();

	/*
	 DEC
	*/
	inline bool handler_in_4D_DEC_rBPv();

	/*
	 DEC for 16-Bit operand
	*/
	inline bool handler_in_4D_DEC_rBPv_16();

	/*
	 DEC for 32-Bit operand
	*/
	inline bool handler_in_4D_DEC_rBPv_32();

	/*
	 DEC
	*/
	inline bool handler_in_4E_DEC_rSIv();

	/*
	 DEC for 16-Bit operand
	*/
	inline bool handler_in_4E_DEC_rSIv_16();

	/*
	 DEC for 32-Bit operand
	*/
	inline bool handler_in_4E_DEC_rSIv_32();

	/*
	 DEC
	*/
	inline bool handler_in_4F_DEC_rDIv();

	/*
	 DEC for 16-Bit operand
	*/
	inline bool handler_in_4F_DEC_rDIv_16();

	/*
	 DEC for 32-Bit operand
	*/
	inline bool handler_in_4F_DEC_rDIv_32();

	/*
	 PUSH
	*/
	inline bool handler_in_50_PUSH_rAXv();

	/*
	 PUSH for 16-Bit operand
	*/
	inline bool handler_in_50_PUSH_rAXv_16();

	/*
	 PUSH for 32-Bit operand
	*/
	inline bool handler_in_50_PUSH_rAXv_32();

	/*
	 PUSH
	*/
	inline bool handler_in_51_PUSH_rCXv();

	/*
	 PUSH for 16-Bit operand
	*/
	inline bool handler_in_51_PUSH_rCXv_16();

	/*
	 PUSH for 32-Bit operand
	*/
	inline bool handler_in_51_PUSH_rCXv_32();

	/*
	 PUSH
	*/
	inline bool handler_in_52_PUSH_rDXv();

	/*
	 PUSH for 16-Bit operand
	*/
	inline bool handler_in_52_PUSH_rDXv_16();

	/*
	 PUSH for 32-Bit operand
	*/
	inline bool handler_in_52_PUSH_rDXv_32();

	/*
	 PUSH
	*/
	inline bool handler_in_53_PUSH_rBXv();

	/*
	 PUSH for 16-Bit operand
	*/
	inline bool handler_in_53_PUSH_rBXv_16();

	/*
	 PUSH for 32-Bit operand
	*/
	inline bool handler_in_53_PUSH_rBXv_32();

	/*
	 PUSH
	*/
	inline bool handler_in_54_PUSH_rSPv();

	/*
	 PUSH for 16-Bit operand
	*/
	inline bool handler_in_54_PUSH_rSPv_16();

	/*
	 PUSH for 32-Bit operand
	*/
	inline bool handler_in_54_PUSH_rSPv_32();

	/*
	 PUSH
	*/
	inline bool handler_in_55_PUSH_rBPv();

	/*
	 PUSH for 16-Bit operand
	*/
	inline bool handler_in_55_PUSH_rBPv_16();

	/*
	 PUSH for 32-Bit operand
	*/
	inline bool handler_in_55_PUSH_rBPv_32();

	/*
	 PUSH
	*/
	inline bool handler_in_56_PUSH_rSIv();

	/*
	 PUSH for 16-Bit operand
	*/
	inline bool handler_in_56_PUSH_rSIv_16();

	/*
	 PUSH for 32-Bit operand
	*/
	inline bool handler_in_56_PUSH_rSIv_32();

	/*
	 PUSH
	*/
	inline bool handler_in_57_PUSH_rDIv();

	/*
	 PUSH for 16-Bit operand
	*/
	inline bool handler_in_57_PUSH_rDIv_16();

	/*
	 PUSH for 32-Bit operand
	*/
	inline bool handler_in_57_PUSH_rDIv_32();

	/*
	 POP
	*/
	inline bool handler_in_58_POP_rAXv();

	/*
	 POP for 16-Bit operand
	*/
	inline bool handler_in_58_POP_rAXv_16();

	/*
	 POP for 32-Bit operand
	*/
	inline bool handler_in_58_POP_rAXv_32();

	/*
	 POP
	*/
	inline bool handler_in_59_POP_rCXv();

	/*
	 POP for 16-Bit operand
	*/
	inline bool handler_in_59_POP_rCXv_16();

	/*
	 POP for 32-Bit operand
	*/
	inline bool handler_in_59_POP_rCXv_32();

	/*
	 POP
	*/
	inline bool handler_in_5A_POP_rDXv();

	/*
	 POP for 16-Bit operand
	*/
	inline bool handler_in_5A_POP_rDXv_16();

	/*
	 POP for 32-Bit operand
	*/
	inline bool handler_in_5A_POP_rDXv_32();

	/*
	 POP
	*/
	inline bool handler_in_5B_POP_rBXv();

	/*
	 POP for 16-Bit operand
	*/
	inline bool handler_in_5B_POP_rBXv_16();

	/*
	 POP for 32-Bit operand
	*/
	inline bool handler_in_5B_POP_rBXv_32();

	/*
	 POP
	*/
	inline bool handler_in_5C_POP_rSPv();

	/*
	 POP for 16-Bit operand
	*/
	inline bool handler_in_5C_POP_rSPv_16();

	/*
	 POP for 32-Bit operand
	*/
	inline bool handler_in_5C_POP_rSPv_32();

	/*
	 POP
	*/
	inline bool handler_in_5D_POP_rBPv();

	/*
	 POP for 16-Bit operand
	*/
	inline bool handler_in_5D_POP_rBPv_16();

	/*
	 POP for 32-Bit operand
	*/
	inline bool handler_in_5D_POP_rBPv_32();

	/*
	 POP
	*/
	inline bool handler_in_5E_POP_rSIv();

	/*
	 POP for 16-Bit operand
	*/
	inline bool handler_in_5E_POP_rSIv_16();

	/*
	 POP for 32-Bit operand
	*/
	inline bool handler_in_5E_POP_rSIv_32();

	/*
	 POP
	*/
	inline bool handler_in_5F_POP_rDIv();

	/*
	 POP for 16-Bit operand
	*/
	inline bool handler_in_5F_POP_rDIv_16();

	/*
	 POP for 32-Bit operand
	*/
	inline bool handler_in_5F_POP_rDIv_32();

	/*
	 PUSHA
	*/
	inline bool handler_in_60_PUSHA();

	/*
	 PUSHA
	*/
	inline bool handler_in_60_PUSHA_16();

	/*
	 PUSHA
	*/
	inline bool handler_in_60_PUSHA_32();

	/*
	 POPA
	*/
	inline bool handler_in_61_POPA();

	/*
	 POPA
	*/
	inline bool handler_in_61_POPA_16();

	/*
	 POPA
	*/
	inline bool handler_in_61_POPA_32();

	/*
	 BOUND
	*/
	inline bool handler_in_62_BOUND_Ma();

	/*
	 BOUND for 16-Bit operand
	*/
	inline bool handler_in_62_BOUND_Ma_16();

	/*
	 BOUND for 32-Bit operand
	*/
	inline bool handler_in_62_BOUND_Ma_32();

	/*
	 ARPL
	*/
	inline bool handler_in_63_ARPL_Gw();

	/*
	 PUSH
	*/
	inline bool handler_in_68_PUSH_Ivs();

	/*
	 PUSH for 16-Bit operand
	*/
	inline bool handler_in_68_PUSH_Ivs_16();

	/*
	 PUSH for 32-Bit operand
	*/
	inline bool handler_in_68_PUSH_Ivs_32();

	/*
	 IMUL
	*/
	inline bool handler_in_69_IMUL_Gvqp_Ivds();

	/*
	 IMUL for 16-Bit operand
	*/
	inline bool handler_in_69_IMUL_Gvqp_Ivds_16();

	/*
	 IMUL for 32-Bit operand
	*/
	inline bool handler_in_69_IMUL_Gvqp_Ivds_32();

	/*
	 PUSH
	*/
	inline bool handler_in_6A_PUSH_Ibss();

	/*
	 IMUL
	*/
	inline bool handler_in_6B_IMUL_Gvqp_Ibs();

	/*
	 IMUL for 16-Bit operand
	*/
	inline bool handler_in_6B_IMUL_Gvqp_Ibs_16();

	/*
	 IMUL for 32-Bit operand
	*/
	inline bool handler_in_6B_IMUL_Gvqp_Ibs_32();

	/*
	 INS
	*/
	inline bool handler_in_6C_INS_Yb_DXw();

	/*
	 INS
	*/
	inline bool handler_in_6D_INS_Ywo_DXw();

	/*
	 INS for 16-Bit operand
	*/
	inline bool handler_in_6D_INS_Ywo_DXw_16();

	/*
	 INS for 32-Bit operand
	*/
	inline bool handler_in_6D_INS_Ywo_DXw_32();

	/*
	 OUTS
	*/
	inline bool handler_in_6E_OUTS_DXw_Xb();

	/*
	 OUTS
	*/
	inline bool handler_in_6F_OUTS_DXw_Xwo();

	/*
	 OUTS for 16-Bit operand
	*/
	inline bool handler_in_6F_OUTS_DXw_Xwo_16();

	/*
	 OUTS for 32-Bit operand
	*/
	inline bool handler_in_6F_OUTS_DXw_Xwo_32();

	/*
	 JO
	*/
	inline bool handler_in_70_JO_Jbs();

	/*
	 JNO
	*/
	inline bool handler_in_71_JNO_Jbs();

	/*
	 JB
	*/
	inline bool handler_in_72_JB_Jbs();

	/*
	 JNB
	*/
	inline bool handler_in_73_JNB_Jbs();

	/*
	 JZ
	*/
	inline bool handler_in_74_JZ_Jbs();

	/*
	 JNZ
	*/
	inline bool handler_in_75_JNZ_Jbs();

	/*
	 JBE
	*/
	inline bool handler_in_76_JBE_Jbs();

	/*
	 JNBE
	*/
	inline bool handler_in_77_JNBE_Jbs();

	/*
	 JS
	*/
	inline bool handler_in_78_JS_Jbs();

	/*
	 JNS
	*/
	inline bool handler_in_79_JNS_Jbs();

	/*
	 JP
	*/
	inline bool handler_in_7A_JP_Jbs();

	/*
	 JNP
	*/
	inline bool handler_in_7B_JNP_Jbs();

	/*
	 JL
	*/
	inline bool handler_in_7C_JL_Jbs();

	/*
	 JNL
	*/
	inline bool handler_in_7D_JNL_Jbs();

	/*
	 JLE
	*/
	inline bool handler_in_7E_JLE_Jbs();

	/*
	 JNLE
	*/
	inline bool handler_in_7F_JNLE_Jbs();

	/*
	 ADD
	*/
	inline bool handler_in_81_00_ADD_Evqp_Ivds(uint8_t rmmod);

	/*
	 ADD for 16-Bit operand
	*/
	inline bool handler_in_81_00_ADD_Evqp_Ivds_16(uint8_t rmmod);

	/*
	 ADD for 32-Bit operand
	*/
	inline bool handler_in_81_00_ADD_Evqp_Ivds_32(uint8_t rmmod);

	/*
	 OR
	*/
	inline bool handler_in_81_01_OR_Evqp_Ivds(uint8_t rmmod);

	/*
	 OR for 16-Bit operand
	*/
	inline bool handler_in_81_01_OR_Evqp_Ivds_16(uint8_t rmmod);

	/*
	 OR for 32-Bit operand
	*/
	inline bool handler_in_81_01_OR_Evqp_Ivds_32(uint8_t rmmod);

	/*
	 ADC
	*/
	inline bool handler_in_81_02_ADC_Evqp_Ivds(uint8_t rmmod);

	/*
	 ADC for 16-Bit operand
	*/
	inline bool handler_in_81_02_ADC_Evqp_Ivds_16(uint8_t rmmod);

	/*
	 ADC for 32-Bit operand
	*/
	inline bool handler_in_81_02_ADC_Evqp_Ivds_32(uint8_t rmmod);

	/*
	 SBB
	*/
	inline bool handler_in_81_03_SBB_Evqp_Ivds(uint8_t rmmod);

	/*
	 SBB for 16-Bit operand
	*/
	inline bool handler_in_81_03_SBB_Evqp_Ivds_16(uint8_t rmmod);

	/*
	 SBB for 32-Bit operand
	*/
	inline bool handler_in_81_03_SBB_Evqp_Ivds_32(uint8_t rmmod);

	/*
	 AND
	*/
	inline bool handler_in_81_04_AND_Evqp_Ivds(uint8_t rmmod);

	/*
	 AND for 16-Bit operand
	*/
	inline bool handler_in_81_04_AND_Evqp_Ivds_16(uint8_t rmmod);

	/*
	 AND for 32-Bit operand
	*/
	inline bool handler_in_81_04_AND_Evqp_Ivds_32(uint8_t rmmod);

	/*
	 SUB
	*/
	inline bool handler_in_81_05_SUB_Evqp_Ivds(uint8_t rmmod);

	/*
	 SUB for 16-Bit operand
	*/
	inline bool handler_in_81_05_SUB_Evqp_Ivds_16(uint8_t rmmod);

	/*
	 SUB for 32-Bit operand
	*/
	inline bool handler_in_81_05_SUB_Evqp_Ivds_32(uint8_t rmmod);

	/*
	 XOR
	*/
	inline bool handler_in_81_06_XOR_Evqp_Ivds(uint8_t rmmod);

	/*
	 XOR for 16-Bit operand
	*/
	inline bool handler_in_81_06_XOR_Evqp_Ivds_16(uint8_t rmmod);

	/*
	 XOR for 32-Bit operand
	*/
	inline bool handler_in_81_06_XOR_Evqp_Ivds_32(uint8_t rmmod);

	/*
	 CMP
	*/
	inline bool handler_in_81_07_CMP_Ivds(uint8_t rmmod);

	/*
	 CMP for 16-Bit operand
	*/
	inline bool handler_in_81_07_CMP_Ivds_16(uint8_t rmmod);

	/*
	 CMP for 32-Bit operand
	*/
	inline bool handler_in_81_07_CMP_Ivds_32(uint8_t rmmod);

	/*
	 ADD
	*/
	inline bool handler_in_82_00_ADD_Eb_Ib(uint8_t rmmod);

	/*
	 OR
	*/
	inline bool handler_in_82_01_OR_Eb_Ib(uint8_t rmmod);

	/*
	 ADC
	*/
	inline bool handler_in_82_02_ADC_Eb_Ib(uint8_t rmmod);

	/*
	 SBB
	*/
	inline bool handler_in_82_03_SBB_Eb_Ib(uint8_t rmmod);

	/*
	 AND
	*/
	inline bool handler_in_82_04_AND_Eb_Ib(uint8_t rmmod);

	/*
	 SUB
	*/
	inline bool handler_in_82_05_SUB_Eb_Ib(uint8_t rmmod);

	/*
	 XOR
	*/
	inline bool handler_in_82_06_XOR_Eb_Ib(uint8_t rmmod);

	/*
	 CMP
	*/
	inline bool handler_in_82_07_CMP_Ib(uint8_t rmmod);

	/*
	 ADD
	*/
	inline bool handler_in_83_00_ADD_Evqp_Ibs(uint8_t rmmod);

	/*
	 ADD for 16-Bit operand
	*/
	inline bool handler_in_83_00_ADD_Evqp_Ibs_16(uint8_t rmmod);

	/*
	 ADD for 32-Bit operand
	*/
	inline bool handler_in_83_00_ADD_Evqp_Ibs_32(uint8_t rmmod);

	/*
	 OR
	*/
	inline bool handler_in_83_01_OR_Evqp_Ibs(uint8_t rmmod);

	/*
	 OR for 16-Bit operand
	*/
	inline bool handler_in_83_01_OR_Evqp_Ibs_16(uint8_t rmmod);

	/*
	 OR for 32-Bit operand
	*/
	inline bool handler_in_83_01_OR_Evqp_Ibs_32(uint8_t rmmod);

	/*
	 ADC
	*/
	inline bool handler_in_83_02_ADC_Evqp_Ibs(uint8_t rmmod);

	/*
	 ADC for 16-Bit operand
	*/
	inline bool handler_in_83_02_ADC_Evqp_Ibs_16(uint8_t rmmod);

	/*
	 ADC for 32-Bit operand
	*/
	inline bool handler_in_83_02_ADC_Evqp_Ibs_32(uint8_t rmmod);

	/*
	 SBB
	*/
	inline bool handler_in_83_03_SBB_Evqp_Ibs(uint8_t rmmod);

	/*
	 SBB for 16-Bit operand
	*/
	inline bool handler_in_83_03_SBB_Evqp_Ibs_16(uint8_t rmmod);

	/*
	 SBB for 32-Bit operand
	*/
	inline bool handler_in_83_03_SBB_Evqp_Ibs_32(uint8_t rmmod);

	/*
	 AND
	*/
	inline bool handler_in_83_04_AND_Evqp_Ibs(uint8_t rmmod);

	/*
	 AND for 16-Bit operand
	*/
	inline bool handler_in_83_04_AND_Evqp_Ibs_16(uint8_t rmmod);

	/*
	 AND for 32-Bit operand
	*/
	inline bool handler_in_83_04_AND_Evqp_Ibs_32(uint8_t rmmod);

	/*
	 SUB
	*/
	inline bool handler_in_83_05_SUB_Evqp_Ibs(uint8_t rmmod);

	/*
	 SUB for 16-Bit operand
	*/
	inline bool handler_in_83_05_SUB_Evqp_Ibs_16(uint8_t rmmod);

	/*
	 SUB for 32-Bit operand
	*/
	inline bool handler_in_83_05_SUB_Evqp_Ibs_32(uint8_t rmmod);

	/*
	 XOR
	*/
	inline bool handler_in_83_06_XOR_Evqp_Ibs(uint8_t rmmod);

	/*
	 XOR for 16-Bit operand
	*/
	inline bool handler_in_83_06_XOR_Evqp_Ibs_16(uint8_t rmmod);

	/*
	 XOR for 32-Bit operand
	*/
	inline bool handler_in_83_06_XOR_Evqp_Ibs_32(uint8_t rmmod);

	/*
	 CMP
	*/
	inline bool handler_in_83_07_CMP_Evqp_Ibs(uint8_t rmmod);

	/*
	 CMP for 16-Bit operand
	*/
	inline bool handler_in_83_07_CMP_Evqp_Ibs_16(uint8_t rmmod);

	/*
	 CMP for 32-Bit operand
	*/
	inline bool handler_in_83_07_CMP_Evqp_Ibs_32(uint8_t rmmod);

	/*
	 TEST
	*/
	inline bool handler_in_84_TEST_Gb();

	/*
	 TEST
	*/
	inline bool handler_in_85_TEST_Gvqp();

	/*
	 TEST for 16-Bit operand
	*/
	inline bool handler_in_85_TEST_Gvqp_16();

	/*
	 TEST for 32-Bit operand
	*/
	inline bool handler_in_85_TEST_Gvqp_32();

	/*
	 XCHG
	*/
	inline bool handler_in_86_XCHG_Eb();

	/*
	 XCHG
	*/
	inline bool handler_in_87_XCHG_Evqp();

	/*
	 XCHG for 16-Bit operand
	*/
	inline bool handler_in_87_XCHG_Evqp_16();

	/*
	 XCHG for 32-Bit operand
	*/
	inline bool handler_in_87_XCHG_Evqp_32();

	/*
	 MOV
	*/
	inline bool handler_in_88_MOV_Eb_Gb();

	/*
	 MOV
	*/
	inline bool handler_in_89_MOV_Evqp_Gvqp();

	/*
	 MOV for 16-Bit operand
	*/
	inline bool handler_in_89_MOV_Evqp_Gvqp_16();

	/*
	 MOV for 32-Bit operand
	*/
	inline bool handler_in_89_MOV_Evqp_Gvqp_32();

	/*
	 MOV
	*/
	inline bool handler_in_8A_MOV_Gb_Eb();

	/*
	 MOV
	*/
	inline bool handler_in_8B_MOV_Gvqp_Evqp();

	/*
	 MOV for 16-Bit operand
	*/
	inline bool handler_in_8B_MOV_Gvqp_Evqp_16();

	/*
	 MOV for 32-Bit operand
	*/
	inline bool handler_in_8B_MOV_Gvqp_Evqp_32();

	/*
	 MOV
	*/
	inline bool handler_in_8C_MOV_Mw_Sw();

	/*
	 LEA
	*/
	inline bool handler_in_8D_LEA_Gvqp();

	/*
	 LEA for 16-Bit operand
	*/
	inline bool handler_in_8D_LEA_Gvqp_16();

	/*
	 LEA for 32-Bit operand
	*/
	inline bool handler_in_8D_LEA_Gvqp_32();

	/*
	 MOV
	*/
	inline bool handler_in_8E_MOV_Sw_Ew();

	/*
	 POP
	*/
	inline bool handler_in_8F_00_POP_Ev(uint8_t rmmod);

	/*
	 POP for 16-Bit operand
	*/
	inline bool handler_in_8F_00_POP_Ev_16(uint8_t rmmod);

	/*
	 POP for 32-Bit operand
	*/
	inline bool handler_in_8F_00_POP_Ev_32(uint8_t rmmod);

	/*
	 XCHG
	*/
	inline bool handler_in_90_NOP();

	/*
	 XCHG
	*/
	inline bool handler_in_91_XCHG_rAXvqp();

	/*
	 XCHG for 16-Bit operand
	*/
	inline bool handler_in_91_XCHG_rAXvqp_16();

	/*
	 XCHG for 32-Bit operand
	*/
	inline bool handler_in_91_XCHG_rAXvqp_32();

	/*
	 XCHG
	*/
	inline bool handler_in_92_XCHG_rAXvqp();

	/*
	 XCHG for 16-Bit operand
	*/
	inline bool handler_in_92_XCHG_rAXvqp_16();

	/*
	 XCHG for 32-Bit operand
	*/
	inline bool handler_in_92_XCHG_rAXvqp_32();

	/*
	 XCHG
	*/
	inline bool handler_in_93_XCHG_rAXvqp();

	/*
	 XCHG for 16-Bit operand
	*/
	inline bool handler_in_93_XCHG_rAXvqp_16();

	/*
	 XCHG for 32-Bit operand
	*/
	inline bool handler_in_93_XCHG_rAXvqp_32();

	/*
	 XCHG
	*/
	inline bool handler_in_94_XCHG_rAXvqp();

	/*
	 XCHG for 16-Bit operand
	*/
	inline bool handler_in_94_XCHG_rAXvqp_16();

	/*
	 XCHG for 32-Bit operand
	*/
	inline bool handler_in_94_XCHG_rAXvqp_32();

	/*
	 XCHG
	*/
	inline bool handler_in_95_XCHG_rAXvqp();

	/*
	 XCHG for 16-Bit operand
	*/
	inline bool handler_in_95_XCHG_rAXvqp_16();

	/*
	 XCHG for 32-Bit operand
	*/
	inline bool handler_in_95_XCHG_rAXvqp_32();

	/*
	 XCHG
	*/
	inline bool handler_in_96_XCHG_rAXvqp();

	/*
	 XCHG for 16-Bit operand
	*/
	inline bool handler_in_96_XCHG_rAXvqp_16();

	/*
	 XCHG for 32-Bit operand
	*/
	inline bool handler_in_96_XCHG_rAXvqp_32();

	/*
	 XCHG
	*/
	inline bool handler_in_97_XCHG_rAXvqp();

	/*
	 XCHG for 16-Bit operand
	*/
	inline bool handler_in_97_XCHG_rAXvqp_16();

	/*
	 XCHG for 32-Bit operand
	*/
	inline bool handler_in_97_XCHG_rAXvqp_32();

	/*
	 CBW/CWDE
	*/
	inline bool handler_in_98_CBW_CWDE();

	/*
	 CWD/CDQ
	*/
	inline bool handler_in_99_CWD_CDQ();

	/*
	 CALLF
	*/
	inline bool handler_in_9A_CALLF_Ap();

	/*
	 CALLF for 16-Bit operand
	*/
	inline bool handler_in_9A_CALLF_Ap_16();

	/*
	 CALLF for 32-Bit operand
	*/
	inline bool handler_in_9A_CALLF_Ap_32();

	/*
	 FWAIT
	*/
	inline bool handler_in_9B_FWAIT();

	/*
	 PUSHF
	*/
	inline bool handler_in_9C_PUSHF();

	/*
	 POPF
	*/
	inline bool handler_in_9D_POPF();

	/*
	 SAHF
	*/
	inline bool handler_in_9E_SAHF();

	/*
	 LAHF
	*/
	inline bool handler_in_9F_LAHF();

	/*
	 MOV
	*/
	inline bool handler_in_A0_MOV_ALb_Ob();

	/*
	 MOV
	*/
	inline bool handler_in_A1_MOV_rAXvqp_Ovqp();

	/*
	 MOV for 16-Bit operand
	*/
	inline bool handler_in_A1_MOV_rAXvqp_Ovqp_16();

	/*
	 MOV for 32-Bit operand
	*/
	inline bool handler_in_A1_MOV_rAXvqp_Ovqp_32();

	/*
	 MOV
	*/
	inline bool handler_in_A2_MOV_Ob_ALb();

	/*
	 MOV
	*/
	inline bool handler_in_A3_MOV_Ovqp_rAXvqp();

	/*
	 MOV for 16-Bit operand
	*/
	inline bool handler_in_A3_MOV_Ovqp_rAXvqp_16();

	/*
	 MOV for 32-Bit operand
	*/
	inline bool handler_in_A3_MOV_Ovqp_rAXvqp_32();

	/*
	 MOVS
	*/
	inline bool handler_in_A4_MOVS_Yb_Xb();

	/*
	 MOVS
	*/
	inline bool handler_in_A5_MOVS_Ywo_Xwo();

	/*
	 CMPS
	*/
	inline bool handler_in_A6_CMPS_Xb();

	/*
	 CMPS
	*/
	inline bool handler_in_A7_CMPS_Xwo();

	/*
	 TEST
	*/
	inline bool handler_in_A8_TEST_Ib();

	/*
	 TEST
	*/
	inline bool handler_in_A9_TEST_Ivds();

	/*
	 TEST for 16-Bit operand
	*/
	inline bool handler_in_A9_TEST_Ivds_16();

	/*
	 TEST for 32-Bit operand
	*/
	inline bool handler_in_A9_TEST_Ivds_32();

	/*
	 STOS
	*/
	inline bool handler_in_AA_STOS_Yb();

	/*
	 STOS
	*/
	inline bool handler_in_AB_STOS_Ywo();

	/*
	 LODS
	*/
	inline bool handler_in_AC_LODS_Xb();

	/*
	 LODS
	*/
	inline bool handler_in_AD_LODS_Xwo();

	/*
	 SCAS
	*/
	inline bool handler_in_AE_SCAS_Yb();

	/*
	 SCAS
	*/
	inline bool handler_in_AF_SCAS_Ywo();

	/*
	 MOV
	*/
	inline bool handler_in_B0_MOV_ALb_Ib();

	/*
	 MOV
	*/
	inline bool handler_in_B1_MOV_CLb_Ib();

	/*
	 MOV
	*/
	inline bool handler_in_B2_MOV_DLb_Ib();

	/*
	 MOV
	*/
	inline bool handler_in_B3_MOV_BLb_Ib();

	/*
	 MOV
	*/
	inline bool handler_in_B4_MOV_AHb_Ib();

	/*
	 MOV
	*/
	inline bool handler_in_B5_MOV_CHb_Ib();

	/*
	 MOV
	*/
	inline bool handler_in_B6_MOV_DHb_Ib();

	/*
	 MOV
	*/
	inline bool handler_in_B7_MOV_BHb_Ib();

	/*
	 MOV
	*/
	inline bool handler_in_B8_MOV_rAXvqp_Ivqp();

	/*
	 MOV for 16-Bit operand
	*/
	inline bool handler_in_B8_MOV_rAXvqp_Ivqp_16();

	/*
	 MOV for 32-Bit operand
	*/
	inline bool handler_in_B8_MOV_rAXvqp_Ivqp_32();

	/*
	 MOV
	*/
	inline bool handler_in_B9_MOV_rCXvqp_Ivqp();

	/*
	 MOV for 16-Bit operand
	*/
	inline bool handler_in_B9_MOV_rCXvqp_Ivqp_16();

	/*
	 MOV for 32-Bit operand
	*/
	inline bool handler_in_B9_MOV_rCXvqp_Ivqp_32();

	/*
	 MOV
	*/
	inline bool handler_in_BA_MOV_rDXvqp_Ivqp();

	/*
	 MOV for 16-Bit operand
	*/
	inline bool handler_in_BA_MOV_rDXvqp_Ivqp_16();

	/*
	 MOV for 32-Bit operand
	*/
	inline bool handler_in_BA_MOV_rDXvqp_Ivqp_32();

	/*
	 MOV
	*/
	inline bool handler_in_BB_MOV_rBXvqp_Ivqp();

	/*
	 MOV for 16-Bit operand
	*/
	inline bool handler_in_BB_MOV_rBXvqp_Ivqp_16();

	/*
	 MOV for 32-Bit operand
	*/
	inline bool handler_in_BB_MOV_rBXvqp_Ivqp_32();

	/*
	 MOV
	*/
	inline bool handler_in_BC_MOV_rSPvqp_Ivqp();

	/*
	 MOV for 16-Bit operand
	*/
	inline bool handler_in_BC_MOV_rSPvqp_Ivqp_16();

	/*
	 MOV for 32-Bit operand
	*/
	inline bool handler_in_BC_MOV_rSPvqp_Ivqp_32();

	/*
	 MOV
	*/
	inline bool handler_in_BD_MOV_rBPvqp_Ivqp();

	/*
	 MOV for 16-Bit operand
	*/
	inline bool handler_in_BD_MOV_rBPvqp_Ivqp_16();

	/*
	 MOV for 32-Bit operand
	*/
	inline bool handler_in_BD_MOV_rBPvqp_Ivqp_32();

	/*
	 MOV
	*/
	inline bool handler_in_BE_MOV_rSIvqp_Ivqp();

	/*
	 MOV for 16-Bit operand
	*/
	inline bool handler_in_BE_MOV_rSIvqp_Ivqp_16();

	/*
	 MOV for 32-Bit operand
	*/
	inline bool handler_in_BE_MOV_rSIvqp_Ivqp_32();

	/*
	 MOV
	*/
	inline bool handler_in_BF_MOV_rDIvqp_Ivqp();

	/*
	 MOV for 16-Bit operand
	*/
	inline bool handler_in_BF_MOV_rDIvqp_Ivqp_16();

	/*
	 MOV for 32-Bit operand
	*/
	inline bool handler_in_BF_MOV_rDIvqp_Ivqp_32();

	/*
	 ROL
	*/
	inline bool handler_in_C0_00_ROL_Eb_Ib(uint8_t rmmod);

	/*
	 ROR
	*/
	inline bool handler_in_C0_01_ROR_Eb_Ib(uint8_t rmmod);

	/*
	 RCL
	*/
	inline bool handler_in_C0_02_RCL_Eb_Ib(uint8_t rmmod);

	/*
	 RCR
	*/
	inline bool handler_in_C0_03_RCR_Eb_Ib(uint8_t rmmod);

	/*
	 SHL
	*/
	inline bool handler_in_C0_04_SHL_Eb_Ib(uint8_t rmmod);

	/*
	 SHR
	*/
	inline bool handler_in_C0_05_SHR_Eb_Ib(uint8_t rmmod);

	/*
	 SAL
	*/
	inline bool handler_in_C0_06_SAL_Eb_Ib(uint8_t rmmod);

	/*
	 SAR
	*/
	inline bool handler_in_C0_07_SAR_Eb_Ib(uint8_t rmmod);

	/*
	 ROL
	*/
	inline bool handler_in_C1_00_ROL_Evqp_Ib(uint8_t rmmod);

	/*
	 ROL for 16-Bit operand
	*/
	inline bool handler_in_C1_00_ROL_Evqp_Ib_16(uint8_t rmmod);

	/*
	 ROL for 32-Bit operand
	*/
	inline bool handler_in_C1_00_ROL_Evqp_Ib_32(uint8_t rmmod);

	/*
	 ROR
	*/
	inline bool handler_in_C1_01_ROR_Evqp_Ib(uint8_t rmmod);

	/*
	 ROR for 16-Bit operand
	*/
	inline bool handler_in_C1_01_ROR_Evqp_Ib_16(uint8_t rmmod);

	/*
	 ROR for 32-Bit operand
	*/
	inline bool handler_in_C1_01_ROR_Evqp_Ib_32(uint8_t rmmod);

	/*
	 RCL
	*/
	inline bool handler_in_C1_02_RCL_Evqp_Ib(uint8_t rmmod);

	/*
	 RCL for 16-Bit operand
	*/
	inline bool handler_in_C1_02_RCL_Evqp_Ib_16(uint8_t rmmod);

	/*
	 RCL for 32-Bit operand
	*/
	inline bool handler_in_C1_02_RCL_Evqp_Ib_32(uint8_t rmmod);

	/*
	 RCR
	*/
	inline bool handler_in_C1_03_RCR_Evqp_Ib(uint8_t rmmod);

	/*
	 RCR for 16-Bit operand
	*/
	inline bool handler_in_C1_03_RCR_Evqp_Ib_16(uint8_t rmmod);

	/*
	 RCR for 32-Bit operand
	*/
	inline bool handler_in_C1_03_RCR_Evqp_Ib_32(uint8_t rmmod);

	/*
	 SHL
	*/
	inline bool handler_in_C1_04_SHL_Evqp_Ib(uint8_t rmmod);

	/*
	 SHL for 16-Bit operand
	*/
	inline bool handler_in_C1_04_SHL_Evqp_Ib_16(uint8_t rmmod);

	/*
	 SHL for 32-Bit operand
	*/
	inline bool handler_in_C1_04_SHL_Evqp_Ib_32(uint8_t rmmod);

	/*
	 SHR
	*/
	inline bool handler_in_C1_05_SHR_Evqp_Ib(uint8_t rmmod);

	/*
	 SHR for 16-Bit operand
	*/
	inline bool handler_in_C1_05_SHR_Evqp_Ib_16(uint8_t rmmod);

	/*
	 SHR for 32-Bit operand
	*/
	inline bool handler_in_C1_05_SHR_Evqp_Ib_32(uint8_t rmmod);

	/*
	 SAL
	*/
	inline bool handler_in_C1_06_SAL_Evqp_Ib(uint8_t rmmod);

	/*
	 SAL for 16-Bit operand
	*/
	inline bool handler_in_C1_06_SAL_Evqp_Ib_16(uint8_t rmmod);

	/*
	 SAL for 32-Bit operand
	*/
	inline bool handler_in_C1_06_SAL_Evqp_Ib_32(uint8_t rmmod);

	/*
	 SAR
	*/
	inline bool handler_in_C1_07_SAR_Evqp_Ib(uint8_t rmmod);

	/*
	 SAR for 16-Bit operand
	*/
	inline bool handler_in_C1_07_SAR_Evqp_Ib_16(uint8_t rmmod);

	/*
	 SAR for 32-Bit operand
	*/
	inline bool handler_in_C1_07_SAR_Evqp_Ib_32(uint8_t rmmod);

	/*
	 RETN
	*/
	inline bool handler_in_C2_RETN_Iw();

	/*
	 RETN
	*/
	inline bool handler_in_C3_RETN();

	/*
	 LES
	*/
	inline bool handler_in_C4_LES_Gv_Mp();

	/*
	 LES for 16-Bit operand
	*/
	inline bool handler_in_C4_LES_Gv_Mp_16();

	/*
	 LES for 32-Bit operand
	*/
	inline bool handler_in_C4_LES_Gv_Mp_32();

	/*
	 LDS
	*/
	inline bool handler_in_C5_LDS_Gv_Mp();

	/*
	 LDS for 16-Bit operand
	*/
	inline bool handler_in_C5_LDS_Gv_Mp_16();

	/*
	 LDS for 32-Bit operand
	*/
	inline bool handler_in_C5_LDS_Gv_Mp_32();

	/*
	 MOV
	*/
	inline bool handler_in_C6_00_MOV_Eb_Ib(uint8_t rmmod);

	/*
	 MOV
	*/
	inline bool handler_in_C7_00_MOV_Evqp_Ivds(uint8_t rmmod);

	/*
	 MOV for 16-Bit operand
	*/
	inline bool handler_in_C7_00_MOV_Evqp_Ivds_16(uint8_t rmmod);

	/*
	 MOV for 32-Bit operand
	*/
	inline bool handler_in_C7_00_MOV_Evqp_Ivds_32(uint8_t rmmod);

	/*
	 ENTER
	*/
	inline bool handler_in_C8_ENTER_Ib();

	/*
	 LEAVE
	*/
	inline bool handler_in_C9_LEAVE();

	/*
	 RETF
	*/
	inline bool handler_in_CA_RETF_Iw();

	/*
	 RETF
	*/
	inline bool handler_in_CB_RETF();

	/*
	 INT
	*/
	inline bool handler_in_CC_INT();

	/*
	 INT
	*/
	inline bool handler_in_CD_INT_Ib();

	/*
	 INTO
	*/
	inline bool handler_in_CE_INTO();

	/*
	 IRET
	*/
	inline bool handler_in_CF_IRET();

	/*
	 ROL
	*/
	inline bool handler_in_D0_00_ROL_Eb(uint8_t rmmod);

	/*
	 ROR
	*/
	inline bool handler_in_D0_01_ROR_Eb(uint8_t rmmod);

	/*
	 RCL
	*/
	inline bool handler_in_D0_02_RCL_Eb(uint8_t rmmod);

	/*
	 RCR
	*/
	inline bool handler_in_D0_03_RCR_Eb(uint8_t rmmod);

	/*
	 SHL
	*/
	inline bool handler_in_D0_04_SHL_Eb(uint8_t rmmod);

	/*
	 SHR
	*/
	inline bool handler_in_D0_05_SHR_Eb(uint8_t rmmod);

	/*
	 SAL
	*/
	inline bool handler_in_D0_06_SAL_Eb(uint8_t rmmod);

	/*
	 SAR
	*/
	inline bool handler_in_D0_07_SAR_Eb(uint8_t rmmod);

	/*
	 ROL
	*/
	inline bool handler_in_D1_00_ROL_Evqp(uint8_t rmmod);

	/*
	 ROL for 16-Bit operand
	*/
	inline bool handler_in_D1_00_ROL_Evqp_16(uint8_t rmmod);

	/*
	 ROL for 32-Bit operand
	*/
	inline bool handler_in_D1_00_ROL_Evqp_32(uint8_t rmmod);

	/*
	 ROR
	*/
	inline bool handler_in_D1_01_ROR_Evqp(uint8_t rmmod);

	/*
	 ROR for 16-Bit operand
	*/
	inline bool handler_in_D1_01_ROR_Evqp_16(uint8_t rmmod);

	/*
	 ROR for 32-Bit operand
	*/
	inline bool handler_in_D1_01_ROR_Evqp_32(uint8_t rmmod);

	/*
	 RCL
	*/
	inline bool handler_in_D1_02_RCL_Evqp(uint8_t rmmod);

	/*
	 RCL for 16-Bit operand
	*/
	inline bool handler_in_D1_02_RCL_Evqp_16(uint8_t rmmod);

	/*
	 RCL for 32-Bit operand
	*/
	inline bool handler_in_D1_02_RCL_Evqp_32(uint8_t rmmod);

	/*
	 RCR
	*/
	inline bool handler_in_D1_03_RCR_Evqp(uint8_t rmmod);

	/*
	 RCR for 16-Bit operand
	*/
	inline bool handler_in_D1_03_RCR_Evqp_16(uint8_t rmmod);

	/*
	 RCR for 32-Bit operand
	*/
	inline bool handler_in_D1_03_RCR_Evqp_32(uint8_t rmmod);

	/*
	 SHL
	*/
	inline bool handler_in_D1_04_SHL_Evqp(uint8_t rmmod);

	/*
	 SHL for 16-Bit operand
	*/
	inline bool handler_in_D1_04_SHL_Evqp_16(uint8_t rmmod);

	/*
	 SHL for 32-Bit operand
	*/
	inline bool handler_in_D1_04_SHL_Evqp_32(uint8_t rmmod);

	/*
	 SHR
	*/
	inline bool handler_in_D1_05_SHR_Evqp(uint8_t rmmod);

	/*
	 SHR for 16-Bit operand
	*/
	inline bool handler_in_D1_05_SHR_Evqp_16(uint8_t rmmod);

	/*
	 SHR for 32-Bit operand
	*/
	inline bool handler_in_D1_05_SHR_Evqp_32(uint8_t rmmod);

	/*
	 SAL
	*/
	inline bool handler_in_D1_06_SAL_Evqp(uint8_t rmmod);

	/*
	 SAL for 16-Bit operand
	*/
	inline bool handler_in_D1_06_SAL_Evqp_16(uint8_t rmmod);

	/*
	 SAL for 32-Bit operand
	*/
	inline bool handler_in_D1_06_SAL_Evqp_32(uint8_t rmmod);

	/*
	 SAR
	*/
	inline bool handler_in_D1_07_SAR_Evqp(uint8_t rmmod);

	/*
	 SAR for 16-Bit operand
	*/
	inline bool handler_in_D1_07_SAR_Evqp_16(uint8_t rmmod);

	/*
	 SAR for 32-Bit operand
	*/
	inline bool handler_in_D1_07_SAR_Evqp_32(uint8_t rmmod);

	/*
	 ROL
	*/
	inline bool handler_in_D2_00_ROL_Eb_CLb(uint8_t rmmod);

	/*
	 ROR
	*/
	inline bool handler_in_D2_01_ROR_Eb_CLb(uint8_t rmmod);

	/*
	 RCL
	*/
	inline bool handler_in_D2_02_RCL_Eb_CLb(uint8_t rmmod);

	/*
	 RCR
	*/
	inline bool handler_in_D2_03_RCR_Eb_CLb(uint8_t rmmod);

	/*
	 SHL
	*/
	inline bool handler_in_D2_04_SHL_Eb_CLb(uint8_t rmmod);

	/*
	 SHR
	*/
	inline bool handler_in_D2_05_SHR_Eb_CLb(uint8_t rmmod);

	/*
	 SAL
	*/
	inline bool handler_in_D2_06_SAL_Eb_CLb(uint8_t rmmod);

	/*
	 SAR
	*/
	inline bool handler_in_D2_07_SAR_Eb_CLb(uint8_t rmmod);

	/*
	 ROL
	*/
	inline bool handler_in_D3_00_ROL_Evqp_CLb(uint8_t rmmod);

	/*
	 ROL for 16-Bit operand
	*/
	inline bool handler_in_D3_00_ROL_Evqp_CLb_16(uint8_t rmmod);

	/*
	 ROL for 32-Bit operand
	*/
	inline bool handler_in_D3_00_ROL_Evqp_CLb_32(uint8_t rmmod);

	/*
	 ROR
	*/
	inline bool handler_in_D3_01_ROR_Evqp_CLb(uint8_t rmmod);

	/*
	 ROR for 16-Bit operand
	*/
	inline bool handler_in_D3_01_ROR_Evqp_CLb_16(uint8_t rmmod);

	/*
	 ROR for 32-Bit operand
	*/
	inline bool handler_in_D3_01_ROR_Evqp_CLb_32(uint8_t rmmod);

	/*
	 RCL
	*/
	inline bool handler_in_D3_02_RCL_Evqp_CLb(uint8_t rmmod);

	/*
	 RCL for 16-Bit operand
	*/
	inline bool handler_in_D3_02_RCL_Evqp_CLb_16(uint8_t rmmod);

	/*
	 RCL for 32-Bit operand
	*/
	inline bool handler_in_D3_02_RCL_Evqp_CLb_32(uint8_t rmmod);

	/*
	 RCR
	*/
	inline bool handler_in_D3_03_RCR_Evqp_CLb(uint8_t rmmod);

	/*
	 RCR for 16-Bit operand
	*/
	inline bool handler_in_D3_03_RCR_Evqp_CLb_16(uint8_t rmmod);

	/*
	 RCR for 32-Bit operand
	*/
	inline bool handler_in_D3_03_RCR_Evqp_CLb_32(uint8_t rmmod);

	/*
	 SHL
	*/
	inline bool handler_in_D3_04_SHL_Evqp_CLb(uint8_t rmmod);

	/*
	 SHL for 16-Bit operand
	*/
	inline bool handler_in_D3_04_SHL_Evqp_CLb_16(uint8_t rmmod);

	/*
	 SHL for 32-Bit operand
	*/
	inline bool handler_in_D3_04_SHL_Evqp_CLb_32(uint8_t rmmod);

	/*
	 SHR
	*/
	inline bool handler_in_D3_05_SHR_Evqp_CLb(uint8_t rmmod);

	/*
	 SHR for 16-Bit operand
	*/
	inline bool handler_in_D3_05_SHR_Evqp_CLb_16(uint8_t rmmod);

	/*
	 SHR for 32-Bit operand
	*/
	inline bool handler_in_D3_05_SHR_Evqp_CLb_32(uint8_t rmmod);

	/*
	 SAL
	*/
	inline bool handler_in_D3_06_SAL_Evqp_CLb(uint8_t rmmod);

	/*
	 SAL for 16-Bit operand
	*/
	inline bool handler_in_D3_06_SAL_Evqp_CLb_16(uint8_t rmmod);

	/*
	 SAL for 32-Bit operand
	*/
	inline bool handler_in_D3_06_SAL_Evqp_CLb_32(uint8_t rmmod);

	/*
	 SAR
	*/
	inline bool handler_in_D3_07_SAR_Evqp_CLb(uint8_t rmmod);

	/*
	 SAR for 16-Bit operand
	*/
	inline bool handler_in_D3_07_SAR_Evqp_CLb_16(uint8_t rmmod);

	/*
	 SAR for 32-Bit operand
	*/
	inline bool handler_in_D3_07_SAR_Evqp_CLb_32(uint8_t rmmod);

	/*
	 AMX
	*/
	inline bool handler_in_D4_AMX_Ib();

	/*
	 ADX
	*/
	inline bool handler_in_D5_ADX_Ib();

	/*
	 SALC
	*/
	inline bool handler_in_D6_SALC();

	/*
	 XLAT
	*/
	inline bool handler_in_D7_XLAT_BBb();

	/*
	 LOOPNZ
	*/
	inline bool handler_in_E0_LOOPNZ_Jbs();

	/*
	 LOOPZ
	*/
	inline bool handler_in_E1_LOOPZ_Jbs();

	/*
	 LOOP
	*/
	inline bool handler_in_E2_LOOP_Jbs();

	/*
	 JCXZ
	*/
	inline bool handler_in_E3_JCXZ_Jbs();

	/*
	 IN
	*/
	inline bool handler_in_E4_IN_ALb_Ib();

	/*
	 IN
	*/
	inline bool handler_in_E5_IN_rAXv_Ib();

	/*
	 IN for 16-Bit operand
	*/
	inline bool handler_in_E5_IN_rAXv_Ib_16();

	/*
	 IN for 32-Bit operand
	*/
	inline bool handler_in_E5_IN_rAXv_Ib_32();

	/*
	 OUT
	*/
	inline bool handler_in_E6_OUT_Ib_ALb();

	/*
	 OUT
	*/
	inline bool handler_in_E7_OUT_Ib_rAXv();

	/*
	 OUT for 16-Bit operand
	*/
	inline bool handler_in_E7_OUT_Ib_rAXv_16();

	/*
	 OUT for 32-Bit operand
	*/
	inline bool handler_in_E7_OUT_Ib_rAXv_32();

	/*
	 CALL
	*/
	inline bool handler_in_E8_CALL_Jvds();

	/*
	 CALL for 16-Bit operand
	*/
	inline bool handler_in_E8_CALL_Jvds_16();

	/*
	 CALL for 32-Bit operand
	*/
	inline bool handler_in_E8_CALL_Jvds_32();

	/*
	 JMP
	*/
	inline bool handler_in_E9_JMP_Jvds();

	/*
	 JMP for 16-Bit operand
	*/
	inline bool handler_in_E9_JMP_Jvds_16();

	/*
	 JMP for 32-Bit operand
	*/
	inline bool handler_in_E9_JMP_Jvds_32();

	/*
	 JMPF
	*/
	inline bool handler_in_EA_JMPF_Ap();

	/*
	 JMPF for 16-Bit operand
	*/
	inline bool handler_in_EA_JMPF_Ap_16();

	/*
	 JMPF for 32-Bit operand
	*/
	inline bool handler_in_EA_JMPF_Ap_32();

	/*
	 JMP
	*/
	inline bool handler_in_EB_JMP_Jbs();

	/*
	 JMP
	*/
	inline bool handler_in_EB_JMP_Jbs_16();

	/*
	 JMP
	*/
	inline bool handler_in_EB_JMP_Jws_32();

	/*
	 IN
	*/
	inline bool handler_in_EC_IN_ALb_DXw();

	/*
	 IN
	*/
	inline bool handler_in_ED_IN_rAXv_DXw();

	/*
	 IN for 16-Bit operand
	*/
	inline bool handler_in_ED_IN_rAXv_DXw_16();

	/*
	 IN for 32-Bit operand
	*/
	inline bool handler_in_ED_IN_rAXv_DXw_32();

	/*
	 OUT
	*/
	inline bool handler_in_EE_OUT_DXw_ALb();

	/*
	 OUT
	*/
	inline bool handler_in_EF_OUT_DXw_rAXv();

	/*
	 OUT for 16-Bit operand
	*/
	inline bool handler_in_EF_OUT_DXw_rAXv_16();

	/*
	 OUT for 32-Bit operand
	*/
	inline bool handler_in_EF_OUT_DXw_rAXv_32();

	/*
	 INT1
	*/
	inline bool handler_in_F1_INT1();

	/*
	 NOP
	*/
	inline bool handler_in_F3_90_NOP();

	/*
	 HLT
	*/
	inline bool handler_in_F4_HLT();

	/*
	 CMC
	*/
	inline bool handler_in_F5_CMC();

	/*
	 TEST
	*/
	inline bool handler_in_F6_01_TEST_Ib(uint8_t rmmod);

	/*
	 NOT
	*/
	inline bool handler_in_F6_02_NOT_Eb(uint8_t rmmod);

	/*
	 NEG
	*/
	inline bool handler_in_F6_03_NEG_Eb(uint8_t rmmod);

	/*
	 MUL
	*/
	inline bool handler_in_F6_04_MUL_Eb(uint8_t rmmod);

	/*
	 IMUL
	*/
	inline bool handler_in_F6_05_IMUL_Eb(uint8_t rmmod);

	/*
	 DIV
	*/
	inline bool handler_in_F6_06_DIV_Eb(uint8_t rmmod);

	/*
	 IDIV
	*/
	inline bool handler_in_F6_07_IDIV_Eb(uint8_t rmmod);

	/*
	 TEST
	*/
	inline bool handler_in_F7_01_TEST_Ivqp(uint8_t rmmod);

	/*
	 TEST for 16-Bit operand
	*/
	inline bool handler_in_F7_01_TEST_Ivqp_16(uint8_t rmmod);

	/*
	 TEST for 32-Bit operand
	*/
	inline bool handler_in_F7_01_TEST_Ivqp_32(uint8_t rmmod);

	/*
	 NOT
	*/
	inline bool handler_in_F7_02_NOT_Evqp(uint8_t rmmod);

	/*
	 NOT for 16-Bit operand
	*/
	inline bool handler_in_F7_02_NOT_Evqp_16(uint8_t rmmod);

	/*
	 NOT for 32-Bit operand
	*/
	inline bool handler_in_F7_02_NOT_Evqp_32(uint8_t rmmod);

	/*
	 NEG
	*/
	inline bool handler_in_F7_03_NEG_Evqp(uint8_t rmmod);

	/*
	 NEG for 16-Bit operand
	*/
	inline bool handler_in_F7_03_NEG_Evqp_16(uint8_t rmmod);

	/*
	 NEG for 32-Bit operand
	*/
	inline bool handler_in_F7_03_NEG_Evqp_32(uint8_t rmmod);

	/*
	 MUL
	*/
	inline bool handler_in_F7_04_MUL_Evqp(uint8_t rmmod);

	/*
	 MUL for 16-Bit operand
	*/
	inline bool handler_in_F7_04_MUL_Evqp_16(uint8_t rmmod);

	/*
	 MUL for 32-Bit operand
	*/
	inline bool handler_in_F7_04_MUL_Evqp_32(uint8_t rmmod);

	/*
	 IMUL
	*/
	inline bool handler_in_F7_05_IMUL_Evqp(uint8_t rmmod);

	/*
	 IMUL for 16-Bit operand
	*/
	inline bool handler_in_F7_05_IMUL_Evqp_16(uint8_t rmmod);

	/*
	 IMUL for 32-Bit operand
	*/
	inline bool handler_in_F7_05_IMUL_Evqp_32(uint8_t rmmod);

	/*
	 DIV
	*/
	inline bool handler_in_F7_06_DIV_Evqp(uint8_t rmmod);

	/*
	 DIV for 16-Bit operand
	*/
	inline bool handler_in_F7_06_DIV_Evqp_16(uint8_t rmmod);

	/*
	 DIV for 32-Bit operand
	*/
	inline bool handler_in_F7_06_DIV_Evqp_32(uint8_t rmmod);

	/*
	 IDIV
	*/
	inline bool handler_in_F7_07_IDIV_Evqp(uint8_t rmmod);

	/*
	 IDIV for 16-Bit operand
	*/
	inline bool handler_in_F7_07_IDIV_Evqp_16(uint8_t rmmod);

	/*
	 IDIV for 32-Bit operand
	*/
	inline bool handler_in_F7_07_IDIV_Evqp_32(uint8_t rmmod);

	/*
	 CLC
	*/
	inline bool handler_in_F8_CLC();

	/*
	 STC
	*/
	inline bool handler_in_F9_STC();

	/*
	 CLI
	*/
	inline bool handler_in_FA_CLI();

	/*
	 STI
	*/
	inline bool handler_in_FB_STI();

	/*
	 CLD
	*/
	inline bool handler_in_FC_CLD();

	/*
	 STD
	*/
	inline bool handler_in_FD_STD();

	/*
	 INC
	*/
	inline bool handler_in_FE_00_INC_Eb(uint8_t rmmod);

	/*
	 DEC
	*/
	inline bool handler_in_FE_01_DEC_Eb(uint8_t rmmod);

	/*
	 CALLBACK
	*/
	inline bool handler_in_FE_07_CALLBACK(uint8_t rmmod);

	/*
	 INC
	*/
	inline bool handler_in_FF_00_INC_Evqp(uint8_t rmmod);

	/*
	 INC for 16-Bit operand
	*/
	inline bool handler_in_FF_00_INC_Evqp_16(uint8_t rmmod);

	/*
	 INC for 32-Bit operand
	*/
	inline bool handler_in_FF_00_INC_Evqp_32(uint8_t rmmod);

	/*
	 DEC
	*/
	inline bool handler_in_FF_01_DEC_Evqp(uint8_t rmmod);

	/*
	 DEC for 16-Bit operand
	*/
	inline bool handler_in_FF_01_DEC_Evqp_16(uint8_t rmmod);

	/*
	 DEC for 32-Bit operand
	*/
	inline bool handler_in_FF_01_DEC_Evqp_32(uint8_t rmmod);

	/*
	 CALL
	*/
	inline bool handler_in_FF_02_CALL_Ev(uint8_t rmmod);

	/*
	 CALL for 16-Bit operand
	*/
	inline bool handler_in_FF_02_CALL_Ev_16(uint8_t rmmod);

	/*
	 CALL for 32-Bit operand
	*/
	inline bool handler_in_FF_02_CALL_Ev_32(uint8_t rmmod);

	/*
	 CALLF
	*/
	inline bool handler_in_FF_03_CALLF_Mptp(uint8_t rmmod);

	/*
	 CALLF for 16-Bit operand
	*/
	inline bool handler_in_FF_03_CALLF_Mptp_16(uint8_t rmmod);

	/*
	 CALLF for 32-Bit operand
	*/
	inline bool handler_in_FF_03_CALLF_Mptp_32(uint8_t rmmod);

	/*
	 JMP
	*/
	inline bool handler_in_FF_04_JMP_Ev(uint8_t rmmod);

	/*
	 JMP for 16-Bit operand
	*/
	inline bool handler_in_FF_04_JMP_Ev_16(uint8_t rmmod);

	/*
	 JMP for 32-Bit operand
	*/
	inline bool handler_in_FF_04_JMP_Ev_32(uint8_t rmmod);

	/*
	 JMPF
	*/
	inline bool handler_in_FF_05_JMPF_Mptp(uint8_t rmmod);

	/*
	 JMPF for 16-Bit operand
	*/
	inline bool handler_in_FF_05_JMPF_Mptp_16(uint8_t rmmod);

	/*
	 JMPF for 32-Bit operand
	*/
	inline bool handler_in_FF_05_JMPF_Mptp_32(uint8_t rmmod);

	/*
	 PUSH
	*/
	inline bool handler_in_FF_06_PUSH_Ev(uint8_t rmmod);

	/*
	 PUSH for 16-Bit operand
	*/
	inline bool handler_in_FF_06_PUSH_Ev_16(uint8_t rmmod);

	/*
	 PUSH for 32-Bit operand
	*/
	inline bool handler_in_FF_06_PUSH_Ev_32(uint8_t rmmod);

	/* Init state */
	inline bool handler_s0(uint8_t rmmod);

	/*  */
	inline bool handler_st_0F();

	/*  */
	inline bool handler_st_0F_00();

	/*  */
	inline bool handler_st_0F_01();

	/*  */
	inline bool handler_st_0F_90();

	/*  */
	inline bool handler_st_0F_91();

	/*  */
	inline bool handler_st_0F_92();

	/*  */
	inline bool handler_st_0F_93();

	/*  */
	inline bool handler_st_0F_94();

	/*  */
	inline bool handler_st_0F_95();

	/*  */
	inline bool handler_st_0F_96();

	/*  */
	inline bool handler_st_0F_97();

	/*  */
	inline bool handler_st_0F_98();

	/*  */
	inline bool handler_st_0F_99();

	/*  */
	inline bool handler_st_0F_9A();

	/*  */
	inline bool handler_st_0F_9B();

	/*  */
	inline bool handler_st_0F_9C();

	/*  */
	inline bool handler_st_0F_9D();

	/*  */
	inline bool handler_st_0F_9E();

	/*  */
	inline bool handler_st_0F_9F();

	/*  */
	inline bool handler_st_0F_BA();

	/*  */
	inline bool handler_st_81();

	/*  */
	inline bool handler_st_82();

	/*  */
	inline bool handler_st_83();

	/*  */
	inline bool handler_st_8F();

	/*  */
	inline bool handler_st_C0();

	/*  */
	inline bool handler_st_C1();

	/*  */
	inline bool handler_st_C6();

	/*  */
	inline bool handler_st_C7();

	/*  */
	inline bool handler_st_D0();

	/*  */
	inline bool handler_st_D1();

	/*  */
	inline bool handler_st_D2();

	/*  */
	inline bool handler_st_D3();

	/*  */
	inline bool handler_st_F3();

	/*  */
	inline bool handler_st_F6();

	/*  */
	inline bool handler_st_F7();

	/*  */
	inline bool handler_st_FE();

	/*  */
	inline bool handler_st_FF();
	uint8_t ParsePrefix();

public:
	bool Parse();
};

}

#endif //PROJECT_CORE_LLVM_H
