﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SC_WandererJacket

#include "Basic.hpp"


namespace SDK::Params
{

// Function SC_WandererJacket.SC_WandererJacket_C.ExecuteUbergraph_SC_WandererJacket
// 0x0018 (0x0018 - 0x0000)
struct SC_WandererJacket_C_ExecuteUbergraph_SC_WandererJacket final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UJSIContainer_C*>                K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(SC_WandererJacket_C_ExecuteUbergraph_SC_WandererJacket) == 0x000008, "Wrong alignment on SC_WandererJacket_C_ExecuteUbergraph_SC_WandererJacket");
static_assert(sizeof(SC_WandererJacket_C_ExecuteUbergraph_SC_WandererJacket) == 0x000018, "Wrong size on SC_WandererJacket_C_ExecuteUbergraph_SC_WandererJacket");
static_assert(offsetof(SC_WandererJacket_C_ExecuteUbergraph_SC_WandererJacket, EntryPoint) == 0x000000, "Member 'SC_WandererJacket_C_ExecuteUbergraph_SC_WandererJacket::EntryPoint' has a wrong offset!");
static_assert(offsetof(SC_WandererJacket_C_ExecuteUbergraph_SC_WandererJacket, K2Node_MakeArray_Array) == 0x000008, "Member 'SC_WandererJacket_C_ExecuteUbergraph_SC_WandererJacket::K2Node_MakeArray_Array' has a wrong offset!");

}

