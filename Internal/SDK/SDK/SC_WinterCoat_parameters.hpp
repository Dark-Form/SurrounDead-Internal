﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SC_WinterCoat

#include "Basic.hpp"


namespace SDK::Params
{

// Function SC_WinterCoat.SC_WinterCoat_C.ExecuteUbergraph_SC_WinterCoat
// 0x0018 (0x0018 - 0x0000)
struct SC_WinterCoat_C_ExecuteUbergraph_SC_WinterCoat final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UJSIContainer_C*>                K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(SC_WinterCoat_C_ExecuteUbergraph_SC_WinterCoat) == 0x000008, "Wrong alignment on SC_WinterCoat_C_ExecuteUbergraph_SC_WinterCoat");
static_assert(sizeof(SC_WinterCoat_C_ExecuteUbergraph_SC_WinterCoat) == 0x000018, "Wrong size on SC_WinterCoat_C_ExecuteUbergraph_SC_WinterCoat");
static_assert(offsetof(SC_WinterCoat_C_ExecuteUbergraph_SC_WinterCoat, EntryPoint) == 0x000000, "Member 'SC_WinterCoat_C_ExecuteUbergraph_SC_WinterCoat::EntryPoint' has a wrong offset!");
static_assert(offsetof(SC_WinterCoat_C_ExecuteUbergraph_SC_WinterCoat, K2Node_MakeArray_Array) == 0x000008, "Member 'SC_WinterCoat_C_ExecuteUbergraph_SC_WinterCoat::K2Node_MakeArray_Array' has a wrong offset!");

}

