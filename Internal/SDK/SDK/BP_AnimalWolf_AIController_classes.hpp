﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnimalWolf_AIController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MainNeutralAIController_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AnimalWolf_AIController.BP_AnimalWolf_AIController_C
// 0x0020 (0x03E0 - 0x03C0)
class ABP_AnimalWolf_AIController_C final : public ABP_MainNeutralAIController_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAIPerceptionComponent*                 AIPerception;                                      // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USD_AIComponent_C*                      AIComp;                                            // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          PossessionComplete;                                // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanSeeActor;                                       // 0x03D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ReceivePossess(class APawn* PossessedPawn);
	void PerceptionUpdate(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void GetCurrentlyPerceived(class AActor* Target, bool* CanSee);
	void ExecuteUbergraph_BP_AnimalWolf_AIController(int32 EntryPoint);
	void BndEvt__BP_ZombieRoamer_AIController_AIPerceptionSight_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AnimalWolf_AIController_C">();
	}
	static class ABP_AnimalWolf_AIController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AnimalWolf_AIController_C>();
	}
};
static_assert(alignof(ABP_AnimalWolf_AIController_C) == 0x000008, "Wrong alignment on ABP_AnimalWolf_AIController_C");
static_assert(sizeof(ABP_AnimalWolf_AIController_C) == 0x0003E0, "Wrong size on ABP_AnimalWolf_AIController_C");
static_assert(offsetof(ABP_AnimalWolf_AIController_C, UberGraphFrame) == 0x0003C0, "Member 'ABP_AnimalWolf_AIController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AnimalWolf_AIController_C, AIPerception) == 0x0003C8, "Member 'ABP_AnimalWolf_AIController_C::AIPerception' has a wrong offset!");
static_assert(offsetof(ABP_AnimalWolf_AIController_C, AIComp) == 0x0003D0, "Member 'ABP_AnimalWolf_AIController_C::AIComp' has a wrong offset!");
static_assert(offsetof(ABP_AnimalWolf_AIController_C, PossessionComplete) == 0x0003D8, "Member 'ABP_AnimalWolf_AIController_C::PossessionComplete' has a wrong offset!");
static_assert(offsetof(ABP_AnimalWolf_AIController_C, CanSeeActor) == 0x0003D9, "Member 'ABP_AnimalWolf_AIController_C::CanSeeActor' has a wrong offset!");

}

