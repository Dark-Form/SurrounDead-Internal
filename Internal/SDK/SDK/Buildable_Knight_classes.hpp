﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buildable_Knight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Buildable_MASTER_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Buildable_Knight.Buildable_Knight_C
// 0x0008 (0x0430 - 0x0428)
class ABuildable_Knight_C final : public ABuildable_MASTER_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Buildable_Knight_C;                 // 0x0428(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Buildable_Knight(int32 EntryPoint);
	void BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Buildable_Knight_C">();
	}
	static class ABuildable_Knight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABuildable_Knight_C>();
	}
};
static_assert(alignof(ABuildable_Knight_C) == 0x000008, "Wrong alignment on ABuildable_Knight_C");
static_assert(sizeof(ABuildable_Knight_C) == 0x000430, "Wrong size on ABuildable_Knight_C");
static_assert(offsetof(ABuildable_Knight_C, UberGraphFrame_Buildable_Knight_C) == 0x000428, "Member 'ABuildable_Knight_C::UberGraphFrame_Buildable_Knight_C' has a wrong offset!");

}

