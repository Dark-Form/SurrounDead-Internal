﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buildable_BearMount

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Buildable_MASTER_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Buildable_BearMount.Buildable_BearMount_C
// 0x0008 (0x0430 - 0x0428)
class ABuildable_BearMount_C final : public ABuildable_MASTER_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Buildable_BearMount_C;              // 0x0428(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void ExecuteUbergraph_Buildable_BearMount(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Buildable_BearMount_C">();
	}
	static class ABuildable_BearMount_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABuildable_BearMount_C>();
	}
};
static_assert(alignof(ABuildable_BearMount_C) == 0x000008, "Wrong alignment on ABuildable_BearMount_C");
static_assert(sizeof(ABuildable_BearMount_C) == 0x000430, "Wrong size on ABuildable_BearMount_C");
static_assert(offsetof(ABuildable_BearMount_C, UberGraphFrame_Buildable_BearMount_C) == 0x000428, "Member 'ABuildable_BearMount_C::UberGraphFrame_Buildable_BearMount_C' has a wrong offset!");

}

