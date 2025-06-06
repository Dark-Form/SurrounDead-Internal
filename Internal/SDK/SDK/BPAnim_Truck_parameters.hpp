﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPAnim_Truck

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BPAnim_Truck.BPAnim_Truck_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct BPAnim_Truck_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(BPAnim_Truck_C_AnimGraph) == 0x000008, "Wrong alignment on BPAnim_Truck_C_AnimGraph");
static_assert(sizeof(BPAnim_Truck_C_AnimGraph) == 0x000010, "Wrong size on BPAnim_Truck_C_AnimGraph");
static_assert(offsetof(BPAnim_Truck_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'BPAnim_Truck_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function BPAnim_Truck.BPAnim_Truck_C.ExecuteUbergraph_BPAnim_Truck
// 0x0004 (0x0004 - 0x0000)
struct BPAnim_Truck_C_ExecuteUbergraph_BPAnim_Truck final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPAnim_Truck_C_ExecuteUbergraph_BPAnim_Truck) == 0x000004, "Wrong alignment on BPAnim_Truck_C_ExecuteUbergraph_BPAnim_Truck");
static_assert(sizeof(BPAnim_Truck_C_ExecuteUbergraph_BPAnim_Truck) == 0x000004, "Wrong size on BPAnim_Truck_C_ExecuteUbergraph_BPAnim_Truck");
static_assert(offsetof(BPAnim_Truck_C_ExecuteUbergraph_BPAnim_Truck, EntryPoint) == 0x000000, "Member 'BPAnim_Truck_C_ExecuteUbergraph_BPAnim_Truck::EntryPoint' has a wrong offset!");

}

