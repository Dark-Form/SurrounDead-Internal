﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Zombie_Radiated

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MasterZombie_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Zombie_Radiated.BP_Zombie_Radiated_C
// 0x0010 (0x08C0 - 0x08B0)
class ABP_Zombie_Radiated_C final : public ABP_MasterZombie_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Zombie_Radiated_C;               // 0x08B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void BndEvt__BP_Zombie_Master_AIOSubject_K2Node_ComponentBoundEvent_2_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void ExecuteUbergraph_BP_Zombie_Radiated(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Zombie_Radiated_C">();
	}
	static class ABP_Zombie_Radiated_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Zombie_Radiated_C>();
	}
};
static_assert(alignof(ABP_Zombie_Radiated_C) == 0x000010, "Wrong alignment on ABP_Zombie_Radiated_C");
static_assert(sizeof(ABP_Zombie_Radiated_C) == 0x0008C0, "Wrong size on ABP_Zombie_Radiated_C");
static_assert(offsetof(ABP_Zombie_Radiated_C, UberGraphFrame_BP_Zombie_Radiated_C) == 0x0008B0, "Member 'ABP_Zombie_Radiated_C::UberGraphFrame_BP_Zombie_Radiated_C' has a wrong offset!");

}

