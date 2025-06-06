﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FlyingPlayerCamera

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FlyingPlayerCamera.FlyingPlayerCamera_C
// 0x0050 (0x0398 - 0x0348)
class AFlyingPlayerCamera_C final : public ASpectatorPawn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                       Camera;                                            // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIOInvokerComponent*                   AIOInvoker;                                        // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              MovingFreeCamera;                                  // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              NotMovingFreeCamera;                               // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        FocusLoc;                                          // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  Pawn;                                              // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void AutoDOF();
	void ExecuteUbergraph_FlyingPlayerCamera(int32 EntryPoint);
	void InpActEvt_Escape_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FlyingPlayerCamera_C">();
	}
	static class AFlyingPlayerCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFlyingPlayerCamera_C>();
	}
};
static_assert(alignof(AFlyingPlayerCamera_C) == 0x000008, "Wrong alignment on AFlyingPlayerCamera_C");
static_assert(sizeof(AFlyingPlayerCamera_C) == 0x000398, "Wrong size on AFlyingPlayerCamera_C");
static_assert(offsetof(AFlyingPlayerCamera_C, UberGraphFrame) == 0x000348, "Member 'AFlyingPlayerCamera_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFlyingPlayerCamera_C, Camera) == 0x000350, "Member 'AFlyingPlayerCamera_C::Camera' has a wrong offset!");
static_assert(offsetof(AFlyingPlayerCamera_C, AIOInvoker) == 0x000358, "Member 'AFlyingPlayerCamera_C::AIOInvoker' has a wrong offset!");
static_assert(offsetof(AFlyingPlayerCamera_C, SpringArm) == 0x000360, "Member 'AFlyingPlayerCamera_C::SpringArm' has a wrong offset!");
static_assert(offsetof(AFlyingPlayerCamera_C, MovingFreeCamera) == 0x000368, "Member 'AFlyingPlayerCamera_C::MovingFreeCamera' has a wrong offset!");
static_assert(offsetof(AFlyingPlayerCamera_C, NotMovingFreeCamera) == 0x000378, "Member 'AFlyingPlayerCamera_C::NotMovingFreeCamera' has a wrong offset!");
static_assert(offsetof(AFlyingPlayerCamera_C, FocusLoc) == 0x000388, "Member 'AFlyingPlayerCamera_C::FocusLoc' has a wrong offset!");
static_assert(offsetof(AFlyingPlayerCamera_C, Pawn) == 0x000390, "Member 'AFlyingPlayerCamera_C::Pawn' has a wrong offset!");

}

