﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ResortLight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MasterLight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ResortLight.BP_ResortLight_C
// 0x0040 (0x02E0 - 0x02A0)
class ABP_ResortLight_C final : public ABP_MasterLight_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIOSubjectComponent*                   AIOSubject;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Light;                                             // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_TurnOff_Intensity_55494F92401FAB9CA11D539A62884D93; // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_TurnOff__Direction_55494F92401FAB9CA11D539A62884D93; // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C5[0x3];                                      // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_TurnOff;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_TurnOn_Intensity_AC8A7F314EE014C9CF5B23B01E7564D6; // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_TurnOn__Direction_AC8A7F314EE014C9CF5B23B01E7564D6; // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D5[0x3];                                      // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_TurnOn;                                   // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void Event_TurnOff();
	void Event_TurnOn();
	void ExecuteUbergraph_BP_ResortLight(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Timeline_TurnOff__FinishedFunc();
	void Timeline_TurnOff__UpdateFunc();
	void Timeline_TurnOn__FinishedFunc();
	void Timeline_TurnOn__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ResortLight_C">();
	}
	static class ABP_ResortLight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ResortLight_C>();
	}
};
static_assert(alignof(ABP_ResortLight_C) == 0x000008, "Wrong alignment on ABP_ResortLight_C");
static_assert(sizeof(ABP_ResortLight_C) == 0x0002E0, "Wrong size on ABP_ResortLight_C");
static_assert(offsetof(ABP_ResortLight_C, UberGraphFrame) == 0x0002A0, "Member 'ABP_ResortLight_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ResortLight_C, PointLight) == 0x0002A8, "Member 'ABP_ResortLight_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_ResortLight_C, AIOSubject) == 0x0002B0, "Member 'ABP_ResortLight_C::AIOSubject' has a wrong offset!");
static_assert(offsetof(ABP_ResortLight_C, Light) == 0x0002B8, "Member 'ABP_ResortLight_C::Light' has a wrong offset!");
static_assert(offsetof(ABP_ResortLight_C, Timeline_TurnOff_Intensity_55494F92401FAB9CA11D539A62884D93) == 0x0002C0, "Member 'ABP_ResortLight_C::Timeline_TurnOff_Intensity_55494F92401FAB9CA11D539A62884D93' has a wrong offset!");
static_assert(offsetof(ABP_ResortLight_C, Timeline_TurnOff__Direction_55494F92401FAB9CA11D539A62884D93) == 0x0002C4, "Member 'ABP_ResortLight_C::Timeline_TurnOff__Direction_55494F92401FAB9CA11D539A62884D93' has a wrong offset!");
static_assert(offsetof(ABP_ResortLight_C, Timeline_TurnOff) == 0x0002C8, "Member 'ABP_ResortLight_C::Timeline_TurnOff' has a wrong offset!");
static_assert(offsetof(ABP_ResortLight_C, Timeline_TurnOn_Intensity_AC8A7F314EE014C9CF5B23B01E7564D6) == 0x0002D0, "Member 'ABP_ResortLight_C::Timeline_TurnOn_Intensity_AC8A7F314EE014C9CF5B23B01E7564D6' has a wrong offset!");
static_assert(offsetof(ABP_ResortLight_C, Timeline_TurnOn__Direction_AC8A7F314EE014C9CF5B23B01E7564D6) == 0x0002D4, "Member 'ABP_ResortLight_C::Timeline_TurnOn__Direction_AC8A7F314EE014C9CF5B23B01E7564D6' has a wrong offset!");
static_assert(offsetof(ABP_ResortLight_C, Timeline_TurnOn) == 0x0002D8, "Member 'ABP_ResortLight_C::Timeline_TurnOn' has a wrong offset!");

}

