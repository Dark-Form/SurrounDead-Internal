﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buildable_WoodenFence

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Buildable_MASTER_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Buildable_WoodenFence.Buildable_WoodenFence_C
// 0x0010 (0x0438 - 0x0428)
class ABuildable_WoodenFence_C final : public ABuildable_MASTER_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Buildable_WoodenFence_C;            // 0x0428(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void ExecuteUbergraph_Buildable_WoodenFence(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Buildable_WoodenFence_C">();
	}
	static class ABuildable_WoodenFence_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABuildable_WoodenFence_C>();
	}
};
static_assert(alignof(ABuildable_WoodenFence_C) == 0x000008, "Wrong alignment on ABuildable_WoodenFence_C");
static_assert(sizeof(ABuildable_WoodenFence_C) == 0x000438, "Wrong size on ABuildable_WoodenFence_C");
static_assert(offsetof(ABuildable_WoodenFence_C, UberGraphFrame_Buildable_WoodenFence_C) == 0x000428, "Member 'ABuildable_WoodenFence_C::UberGraphFrame_Buildable_WoodenFence_C' has a wrong offset!");
static_assert(offsetof(ABuildable_WoodenFence_C, Sphere) == 0x000430, "Member 'ABuildable_WoodenFence_C::Sphere' has a wrong offset!");

}

