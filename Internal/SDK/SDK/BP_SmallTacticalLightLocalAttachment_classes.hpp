﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SmallTacticalLightLocalAttachment

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AMainLocalAttachment_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SmallTacticalLightLocalAttachment.BP_SmallTacticalLightLocalAttachment_C
// 0x0020 (0x02F0 - 0x02D0)
class ABP_SmallTacticalLightLocalAttachment_C final : public ABP_AMainLocalAttachment_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SmallTacticalLightLocalAttachment_C; // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBatteryComponent_C*                    BatteryComponent;                                  // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight;                                         // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           BatteryTimer;                                      // 0x02E8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Battery_Flashlight();
	void Event_Battery(bool TurnOn);
	void ExecuteUbergraph_BP_SmallTacticalLightLocalAttachment(int32 EntryPoint);
	void Jig_SetAttachmentActiveState(const struct FGameplayTag& Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SmallTacticalLightLocalAttachment_C">();
	}
	static class ABP_SmallTacticalLightLocalAttachment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SmallTacticalLightLocalAttachment_C>();
	}
};
static_assert(alignof(ABP_SmallTacticalLightLocalAttachment_C) == 0x000008, "Wrong alignment on ABP_SmallTacticalLightLocalAttachment_C");
static_assert(sizeof(ABP_SmallTacticalLightLocalAttachment_C) == 0x0002F0, "Wrong size on ABP_SmallTacticalLightLocalAttachment_C");
static_assert(offsetof(ABP_SmallTacticalLightLocalAttachment_C, UberGraphFrame_BP_SmallTacticalLightLocalAttachment_C) == 0x0002D0, "Member 'ABP_SmallTacticalLightLocalAttachment_C::UberGraphFrame_BP_SmallTacticalLightLocalAttachment_C' has a wrong offset!");
static_assert(offsetof(ABP_SmallTacticalLightLocalAttachment_C, BatteryComponent) == 0x0002D8, "Member 'ABP_SmallTacticalLightLocalAttachment_C::BatteryComponent' has a wrong offset!");
static_assert(offsetof(ABP_SmallTacticalLightLocalAttachment_C, SpotLight) == 0x0002E0, "Member 'ABP_SmallTacticalLightLocalAttachment_C::SpotLight' has a wrong offset!");
static_assert(offsetof(ABP_SmallTacticalLightLocalAttachment_C, BatteryTimer) == 0x0002E8, "Member 'ABP_SmallTacticalLightLocalAttachment_C::BatteryTimer' has a wrong offset!");

}

