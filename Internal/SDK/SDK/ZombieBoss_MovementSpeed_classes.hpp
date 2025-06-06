﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ZombieBoss_MovementSpeed

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ZombieBoss_MovementSpeed.ZombieBoss_MovementSpeed_C
// 0x0010 (0x00A8 - 0x0098)
class UZombieBoss_MovementSpeed_C final : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0098(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Speed;                                             // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ZombieBoss_MovementSpeed(int32 EntryPoint);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ZombieBoss_MovementSpeed_C">();
	}
	static class UZombieBoss_MovementSpeed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UZombieBoss_MovementSpeed_C>();
	}
};
static_assert(alignof(UZombieBoss_MovementSpeed_C) == 0x000008, "Wrong alignment on UZombieBoss_MovementSpeed_C");
static_assert(sizeof(UZombieBoss_MovementSpeed_C) == 0x0000A8, "Wrong size on UZombieBoss_MovementSpeed_C");
static_assert(offsetof(UZombieBoss_MovementSpeed_C, UberGraphFrame) == 0x000098, "Member 'UZombieBoss_MovementSpeed_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UZombieBoss_MovementSpeed_C, Speed) == 0x0000A0, "Member 'UZombieBoss_MovementSpeed_C::Speed' has a wrong offset!");

}

