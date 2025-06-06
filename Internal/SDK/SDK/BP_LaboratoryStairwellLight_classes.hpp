﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LaboratoryStairwellLight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_LaboratoryMaster_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LaboratoryStairwellLight.BP_LaboratoryStairwellLight_C
// 0x0018 (0x02C0 - 0x02A8)
class ABP_LaboratoryStairwellLight_C final : public ABP_LaboratoryMaster_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Audio;                                             // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_LaboratoryLight_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void ExecuteUbergraph_BP_LaboratoryStairwellLight(int32 EntryPoint);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LaboratoryStairwellLight_C">();
	}
	static class ABP_LaboratoryStairwellLight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LaboratoryStairwellLight_C>();
	}
};
static_assert(alignof(ABP_LaboratoryStairwellLight_C) == 0x000008, "Wrong alignment on ABP_LaboratoryStairwellLight_C");
static_assert(sizeof(ABP_LaboratoryStairwellLight_C) == 0x0002C0, "Wrong size on ABP_LaboratoryStairwellLight_C");
static_assert(offsetof(ABP_LaboratoryStairwellLight_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_LaboratoryStairwellLight_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_LaboratoryStairwellLight_C, Audio) == 0x0002B0, "Member 'ABP_LaboratoryStairwellLight_C::Audio' has a wrong offset!");
static_assert(offsetof(ABP_LaboratoryStairwellLight_C, PointLight) == 0x0002B8, "Member 'ABP_LaboratoryStairwellLight_C::PointLight' has a wrong offset!");

}

