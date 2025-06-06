﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buildable_Radio

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Buildable_MASTER_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Buildable_Radio.Buildable_Radio_C
// 0x0018 (0x0440 - 0x0428)
class ABuildable_Radio_C final : public ABuildable_MASTER_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Buildable_Radio_C;                  // 0x0428(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMediaSoundComponent*                   MediaSound;                                        // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URadioComponent_C*                      RadioComponent;                                    // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void ExecuteUbergraph_Buildable_Radio(int32 EntryPoint);
	void Off();
	void On();
	void OnDestroy(class AActor* Actor);
	void OnInteractBuildable(class AActor* Actor);
	void OnServerExecuteInteract(const struct FGameplayTag& Option, class AActor* ByActor, const struct FS_JigPayload& Payload);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Buildable_Radio_C">();
	}
	static class ABuildable_Radio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABuildable_Radio_C>();
	}
};
static_assert(alignof(ABuildable_Radio_C) == 0x000008, "Wrong alignment on ABuildable_Radio_C");
static_assert(sizeof(ABuildable_Radio_C) == 0x000440, "Wrong size on ABuildable_Radio_C");
static_assert(offsetof(ABuildable_Radio_C, UberGraphFrame_Buildable_Radio_C) == 0x000428, "Member 'ABuildable_Radio_C::UberGraphFrame_Buildable_Radio_C' has a wrong offset!");
static_assert(offsetof(ABuildable_Radio_C, MediaSound) == 0x000430, "Member 'ABuildable_Radio_C::MediaSound' has a wrong offset!");
static_assert(offsetof(ABuildable_Radio_C, RadioComponent) == 0x000438, "Member 'ABuildable_Radio_C::RadioComponent' has a wrong offset!");

}

