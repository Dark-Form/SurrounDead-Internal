﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BarrelFire

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_BarrelFire.BP_BarrelFire_C.BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct BP_BarrelFire_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature final
{
public:
	bool                                          bIsBeyondLastLayer;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LayerIndex;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSeen;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BarrelFire_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature) == 0x000004, "Wrong alignment on BP_BarrelFire_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature");
static_assert(sizeof(BP_BarrelFire_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature) == 0x00000C, "Wrong size on BP_BarrelFire_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature");
static_assert(offsetof(BP_BarrelFire_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature, bIsBeyondLastLayer) == 0x000000, "Member 'BP_BarrelFire_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature::bIsBeyondLastLayer' has a wrong offset!");
static_assert(offsetof(BP_BarrelFire_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature, LayerIndex) == 0x000004, "Member 'BP_BarrelFire_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature::LayerIndex' has a wrong offset!");
static_assert(offsetof(BP_BarrelFire_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature, bIsSeen) == 0x000008, "Member 'BP_BarrelFire_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature::bIsSeen' has a wrong offset!");

// Function BP_BarrelFire.BP_BarrelFire_C.ExecuteUbergraph_BP_BarrelFire
// 0x0010 (0x0010 - 0x0000)
struct BP_BarrelFire_C_ExecuteUbergraph_BP_BarrelFire final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsBeyondLastLayer;     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_LayerIndex;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsSeen;                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BarrelFire_C_ExecuteUbergraph_BP_BarrelFire) == 0x000004, "Wrong alignment on BP_BarrelFire_C_ExecuteUbergraph_BP_BarrelFire");
static_assert(sizeof(BP_BarrelFire_C_ExecuteUbergraph_BP_BarrelFire) == 0x000010, "Wrong size on BP_BarrelFire_C_ExecuteUbergraph_BP_BarrelFire");
static_assert(offsetof(BP_BarrelFire_C_ExecuteUbergraph_BP_BarrelFire, EntryPoint) == 0x000000, "Member 'BP_BarrelFire_C_ExecuteUbergraph_BP_BarrelFire::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BarrelFire_C_ExecuteUbergraph_BP_BarrelFire, K2Node_ComponentBoundEvent_bIsBeyondLastLayer) == 0x000004, "Member 'BP_BarrelFire_C_ExecuteUbergraph_BP_BarrelFire::K2Node_ComponentBoundEvent_bIsBeyondLastLayer' has a wrong offset!");
static_assert(offsetof(BP_BarrelFire_C_ExecuteUbergraph_BP_BarrelFire, K2Node_ComponentBoundEvent_LayerIndex) == 0x000008, "Member 'BP_BarrelFire_C_ExecuteUbergraph_BP_BarrelFire::K2Node_ComponentBoundEvent_LayerIndex' has a wrong offset!");
static_assert(offsetof(BP_BarrelFire_C_ExecuteUbergraph_BP_BarrelFire, K2Node_ComponentBoundEvent_bIsSeen) == 0x00000C, "Member 'BP_BarrelFire_C_ExecuteUbergraph_BP_BarrelFire::K2Node_ComponentBoundEvent_bIsSeen' has a wrong offset!");
static_assert(offsetof(BP_BarrelFire_C_ExecuteUbergraph_BP_BarrelFire, K2Node_SwitchInteger_CmpSuccess) == 0x00000D, "Member 'BP_BarrelFire_C_ExecuteUbergraph_BP_BarrelFire::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

}

