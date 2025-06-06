﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EnterArea

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_MasterObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EnterArea.BP_EnterArea_C
// 0x0068 (0x0308 - 0x02A0)
class ABP_EnterArea_C final : public ABP_MasterObject_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                   Name_0;                                            // 0x02B0(0x0018)(Edit, BlueprintVisible)
	struct FTimerHandle                           OverlapTimer;                                      // 0x02C8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          AdditionalNotification_;                           // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D1[0x7];                                      // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Notification_Details_Message;                      // 0x02D8(0x0018)(Edit, BlueprintVisible)
	class UTexture2D*                             Notification_Details_Icon;                         // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Notification_Details_Icon_Colour;                  // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_RadiationArea_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_RadiationArea_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void Event_EnteredArea(class ABP_PlayerCharacter_C* Actor);
	void Event_ExitedArea(class ABP_PlayerCharacter_C* Actor);
	void Event_Overlap();
	void Event_Respawn();
	void ExecuteUbergraph_BP_EnterArea(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EnterArea_C">();
	}
	static class ABP_EnterArea_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EnterArea_C>();
	}
};
static_assert(alignof(ABP_EnterArea_C) == 0x000008, "Wrong alignment on ABP_EnterArea_C");
static_assert(sizeof(ABP_EnterArea_C) == 0x000308, "Wrong size on ABP_EnterArea_C");
static_assert(offsetof(ABP_EnterArea_C, UberGraphFrame) == 0x0002A0, "Member 'ABP_EnterArea_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_EnterArea_C, Sphere) == 0x0002A8, "Member 'ABP_EnterArea_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_EnterArea_C, Name_0) == 0x0002B0, "Member 'ABP_EnterArea_C::Name_0' has a wrong offset!");
static_assert(offsetof(ABP_EnterArea_C, OverlapTimer) == 0x0002C8, "Member 'ABP_EnterArea_C::OverlapTimer' has a wrong offset!");
static_assert(offsetof(ABP_EnterArea_C, AdditionalNotification_) == 0x0002D0, "Member 'ABP_EnterArea_C::AdditionalNotification_' has a wrong offset!");
static_assert(offsetof(ABP_EnterArea_C, Notification_Details_Message) == 0x0002D8, "Member 'ABP_EnterArea_C::Notification_Details_Message' has a wrong offset!");
static_assert(offsetof(ABP_EnterArea_C, Notification_Details_Icon) == 0x0002F0, "Member 'ABP_EnterArea_C::Notification_Details_Icon' has a wrong offset!");
static_assert(offsetof(ABP_EnterArea_C, Notification_Details_Icon_Colour) == 0x0002F8, "Member 'ABP_EnterArea_C::Notification_Details_Icon_Colour' has a wrong offset!");

}

