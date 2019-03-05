/*
 * Copyright (c) 2018 Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
#pragma once
#include <switch.h>
#include <stratosphere.hpp>

#include "dmnt_cheat_types.hpp"

class DmntCheatManager {
    public:
        static constexpr size_t MaxCheatCount = 0x80;
    private:
        static Handle PrepareDebugNextApplication();
        static void OnNewApplicationLaunch();
        static void DetectThread(void *arg);
        static void VmThread(void *arg);
        
        static bool HasActiveCheatProcess();
        static void CloseActiveCheatProcess();
        static void ContinueCheatProcess();
        
        static void ResetCheatEntry(size_t i);
        static void ResetAllCheatEntries();
        static CheatEntry *GetFreeCheatEntry();
        static bool ParseCheats(const char *cht_txt, size_t len);
        static bool LoadCheats(u64 title_id, const u8 *build_id);
    public:
        static bool GetHasActiveCheatProcess();
        static Handle GetCheatProcessEventHandle();
        static Result GetCheatProcessMetadata(CheatProcessMetadata *out);
        static Result ForceOpenCheatProcess();
        
        static Result ReadCheatProcessMemoryForVm(u64 proc_addr, void *out_data, size_t size);
        static Result WriteCheatProcessMemoryForVm(u64 proc_addr, const void *data, size_t size);
        
        static Result GetCheatProcessMappingCount(u64 *out_count);
        static Result GetCheatProcessMappings(MemoryInfo *mappings, size_t max_count, u64 *out_count, u64 offset);
        static Result ReadCheatProcessMemory(u64 proc_addr, void *out_data, size_t size);
        static Result WriteCheatProcessMemory(u64 proc_addr, const void *data, size_t size);
        static Result QueryCheatProcessMemory(MemoryInfo *mapping, u64 address);
        
        static void InitializeCheatManager();
};