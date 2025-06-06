﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RandomCivilian_Controller

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MainFriendlyAIController_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RandomCivilian_Controller.BP_RandomCivilian_Controller_C
// 0x0010 (0x03D0 - 0x03C0)
class ABP_RandomCivilian_Controller_C final : public ABP_MainFriendlyAIController_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 SensedActor;                                       // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_RandomCivilian_Controller(int32 EntryPoint);
	void Death(class AActor* Actor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RandomCivilian_Controller_C">();
	}
	static class ABP_RandomCivilian_Controller_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RandomCivilian_Controller_C>();
	}
};
static_assert(alignof(ABP_RandomCivilian_Controller_C) == 0x000008, "Wrong alignment on ABP_RandomCivilian_Controller_C");
static_assert(sizeof(ABP_RandomCivilian_Controller_C) == 0x0003D0, "Wrong size on ABP_RandomCivilian_Controller_C");
static_assert(offsetof(ABP_RandomCivilian_Controller_C, UberGraphFrame) == 0x0003C0, "Member 'ABP_RandomCivilian_Controller_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_RandomCivilian_Controller_C, SensedActor) == 0x0003C8, "Member 'ABP_RandomCivilian_Controller_C::SensedActor' has a wrong offset!");

}

