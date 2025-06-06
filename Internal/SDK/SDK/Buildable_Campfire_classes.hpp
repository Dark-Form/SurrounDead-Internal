﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buildable_Campfire

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Buildable_MASTER_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Buildable_Campfire.Buildable_Campfire_C
// 0x0028 (0x0450 - 0x0428)
class ABuildable_Campfire_C final : public ABuildable_MASTER_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Buildable_Campfire_C;               // 0x0428(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               Particles;                                         // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Sound;                                             // 0x0440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void ExecuteUbergraph_Buildable_Campfire(int32 EntryPoint);
	void ReceiveBeginPlay();
	void JigMP_OnRequestDropItem(const struct FRepItemInfo& ItemInfo, class FName ContainerName, class AActor** ActorRef);
	void OnInteractBuildable(class AActor* Actor);
	void OnServerExecuteInteract(const struct FGameplayTag& Option, class AActor* ByActor, const struct FS_JigPayload& Payload);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Buildable_Campfire_C">();
	}
	static class ABuildable_Campfire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABuildable_Campfire_C>();
	}
};
static_assert(alignof(ABuildable_Campfire_C) == 0x000008, "Wrong alignment on ABuildable_Campfire_C");
static_assert(sizeof(ABuildable_Campfire_C) == 0x000450, "Wrong size on ABuildable_Campfire_C");
static_assert(offsetof(ABuildable_Campfire_C, UberGraphFrame_Buildable_Campfire_C) == 0x000428, "Member 'ABuildable_Campfire_C::UberGraphFrame_Buildable_Campfire_C' has a wrong offset!");
static_assert(offsetof(ABuildable_Campfire_C, Particles) == 0x000430, "Member 'ABuildable_Campfire_C::Particles' has a wrong offset!");
static_assert(offsetof(ABuildable_Campfire_C, PointLight) == 0x000438, "Member 'ABuildable_Campfire_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABuildable_Campfire_C, Sound) == 0x000440, "Member 'ABuildable_Campfire_C::Sound' has a wrong offset!");
static_assert(offsetof(ABuildable_Campfire_C, Sphere) == 0x000448, "Member 'ABuildable_Campfire_C::Sphere' has a wrong offset!");

}

