/*
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *
 *  Copyright (C) 2024-2024  The DOSBox Staging Team
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
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#include "plugin_manager.h"

#include <cassert>
#include <optional>

#include "clap/all.h"

#include "cross.h"
#include "logging.h"
#include "support.h"

namespace Clap {

static const clap_host_t dosbox_clap_host = {
        .clap_version = CLAP_VERSION,

        .host_data = nullptr,

        .name    = "DOSBox Staging",
        .vendor  = "The DOSBox Staging Team",
        .url     = "http://www.dosbox-staging.org",
        .version = "1.0",

        .get_extension = []([[maybe_unused]] const clap_host_t* host,
                            [[maybe_unused]] const char* extension_id) -> const void* {
	        return nullptr;
        },

        .request_restart  = []([[maybe_unused]] const clap_host_t* host) {},
        .request_process  = []([[maybe_unused]] const clap_host_t* host) {},
        .request_callback = []([[maybe_unused]] const clap_host_t* host) {}};

static std::pair<dynlib_handle, const clap_plugin_entry_t*> load_plugin(
        const std_fs::path& path)
{
	const auto lib = dynlib_open(path);
	if (!lib) {
		LOG_ERR("CLAP: Error loading plugin '%s'", path.c_str());
		return {};
	}

	const auto plugin_entry = reinterpret_cast<const clap_plugin_entry_t*>(
	        dynlib_get_symbol(lib, "clap_entry"));

	if (!plugin_entry) {
		dynlib_close(lib);
		return {};
	}

	plugin_entry->init(path.c_str());
	return {lib, plugin_entry};
}

static std::vector<PluginInfo> get_plugin_infos(const std_fs::path& path,
                                                const clap_plugin_entry_t* plugin_entry)
{
	const auto factory = static_cast<const clap_plugin_factory*>(
	        plugin_entry->get_factory(CLAP_PLUGIN_FACTORY_ID));
	assert(factory);

	const auto num_plugins = factory->get_plugin_count(factory);
	std::vector<PluginInfo> plugin_infos = {};

	for (size_t plugin_index = 0; plugin_index < num_plugins; ++plugin_index) {
		const auto desc = factory->get_plugin_descriptor(factory,
		                                                 plugin_index);
		if (desc) {
			LOG_INFO("CLAP: Found plugin '%s'", desc->name);

			const PluginInfo info = {path,
			                         desc->id,
			                         desc->name,
			                         desc->description};

			plugin_infos.emplace_back(info);
		}
	}

	return plugin_infos;
}

[[maybe_unused]] static std::optional<std_fs::path> find_first_file(const std_fs::path& path)
{
	std::vector<std_fs::path> files = {};

	std::error_code ec;
	for (const auto& entry : std_fs::directory_iterator(path, ec)) {
		if (ec) {
			return {};
		}
		if (entry.is_regular_file(ec)) {
			files.emplace_back(entry.path());
		}
	}

	if (files.size() == 0) {
		return {};
	}

	std::sort(files.begin(), files.end());
	return files.front();
}

void PluginManager::EnumeratePlugins()
{
	plugin_infos.clear();

	const auto dir = GetConfigDir() / PluginsDir;
	LOG_DEBUG("CLAP: Enumerating CLAP plugins in '%s'", dir.c_str());

	constexpr auto OnlyRegularFiles = false;

	for (const auto& [dir, plugin_names] :
	     get_resource_dir_entries(dir, ".clap", OnlyRegularFiles)) {

		for (const auto& name : plugin_names) {
			auto path = dir / name;

			LOG_DEBUG("CLAP: Trying to load plugin '%s'", path.c_str());
#ifdef MACOSX
			// The dynamic-link library is inside the application
			// bundle on macOS
			if (const auto f = find_first_file(path / "Contents" / "MacOS");
			    f) {
				path = *f;
			}
#endif
			const auto [_, plugin_entry] = load_plugin(path);

			if (!plugin_entry) {
				LOG_WARNING("CLAP: Invalid plugin '%s'",
				            path.c_str());
				continue;
			}
			const auto pi = get_plugin_infos(path, plugin_entry);

			plugin_infos.insert(plugin_infos.end(), pi.begin(), pi.end());
		}
	}

	plugins_enumerated = true;
}

const std::vector<PluginInfo> PluginManager::GetPluginInfos()
{
	if (!plugins_enumerated) {
		EnumeratePlugins();
	}
	return plugin_infos;
}

const std::unique_ptr<Plugin> PluginManager::LoadPlugin(
        const std_fs::path& plugin_path, const std::string& plugin_id) const
{
	const auto [lib, plugin_entry] = load_plugin(plugin_path);

	auto factory = static_cast<const clap_plugin_factory*>(
	        plugin_entry->get_factory(CLAP_PLUGIN_FACTORY_ID));
	assert(factory);

	const auto plugin = factory->create_plugin(factory,
	                                           &dosbox_clap_host,
	                                           plugin_id.c_str());
	if (!plugin || !plugin->init(plugin)) {
		return {};
	}
	return std::make_unique<Plugin>(lib, plugin_entry, plugin);
}

} // namespace Clap
