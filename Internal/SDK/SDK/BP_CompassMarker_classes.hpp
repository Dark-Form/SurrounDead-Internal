﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CompassMarker

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CompassMarker.BP_CompassMarker_C
// 0x0030 (0x02C8 - 0x0298)
class ABP_CompassMarker_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Icon;                                              // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           IconColor;                                         // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UCompassMarkerUI_C*                     WidgetRef;                                         // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CompassMarker(int32 EntryPoint);
	void ReceiveDestroyed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CompassMarker_C">();
	}
	static class ABP_CompassMarker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CompassMarker_C>();
	}
};
static_assert(alignof(ABP_CompassMarker_C) == 0x000008, "Wrong alignment on ABP_CompassMarker_C");
static_assert(sizeof(ABP_CompassMarker_C) == 0x0002C8, "Wrong size on ABP_CompassMarker_C");
static_assert(offsetof(ABP_CompassMarker_C, UberGraphFrame) == 0x000298, "Member 'ABP_CompassMarker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CompassMarker_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_CompassMarker_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CompassMarker_C, Icon) == 0x0002A8, "Member 'ABP_CompassMarker_C::Icon' has a wrong offset!");
static_assert(offsetof(ABP_CompassMarker_C, IconColor) == 0x0002B0, "Member 'ABP_CompassMarker_C::IconColor' has a wrong offset!");
static_assert(offsetof(ABP_CompassMarker_C, WidgetRef) == 0x0002C0, "Member 'ABP_CompassMarker_C::WidgetRef' has a wrong offset!");

}

