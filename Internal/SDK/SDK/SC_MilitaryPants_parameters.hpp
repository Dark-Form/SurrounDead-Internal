﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SC_MilitaryPants

#include "Basic.hpp"


namespace SDK::Params
{

// Function SC_MilitaryPants.SC_MilitaryPants_C.ExecuteUbergraph_SC_MilitaryPants
// 0x0018 (0x0018 - 0x0000)
struct SC_MilitaryPants_C_ExecuteUbergraph_SC_MilitaryPants final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UJSIContainer_C*>                K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(SC_MilitaryPants_C_ExecuteUbergraph_SC_MilitaryPants) == 0x000008, "Wrong alignment on SC_MilitaryPants_C_ExecuteUbergraph_SC_MilitaryPants");
static_assert(sizeof(SC_MilitaryPants_C_ExecuteUbergraph_SC_MilitaryPants) == 0x000018, "Wrong size on SC_MilitaryPants_C_ExecuteUbergraph_SC_MilitaryPants");
static_assert(offsetof(SC_MilitaryPants_C_ExecuteUbergraph_SC_MilitaryPants, EntryPoint) == 0x000000, "Member 'SC_MilitaryPants_C_ExecuteUbergraph_SC_MilitaryPants::EntryPoint' has a wrong offset!");
static_assert(offsetof(SC_MilitaryPants_C_ExecuteUbergraph_SC_MilitaryPants, K2Node_MakeArray_Array) == 0x000008, "Member 'SC_MilitaryPants_C_ExecuteUbergraph_SC_MilitaryPants::K2Node_MakeArray_Array' has a wrong offset!");

}

