﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SafeZoneUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SafeZoneUI.SafeZoneUI_C
// 0x0028 (0x02E8 - 0x02C0)
class USafeZoneUI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim;                                              // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_58;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Zoom;                                              // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DC[0x4];                                      // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AUltra_Dynamic_Sky_C*                   UDS;                                               // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void Destroy();
	void ExecuteUbergraph_SafeZoneUI(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SafeZoneUI_C">();
	}
	static class USafeZoneUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USafeZoneUI_C>();
	}
};
static_assert(alignof(USafeZoneUI_C) == 0x000008, "Wrong alignment on USafeZoneUI_C");
static_assert(sizeof(USafeZoneUI_C) == 0x0002E8, "Wrong size on USafeZoneUI_C");
static_assert(offsetof(USafeZoneUI_C, UberGraphFrame) == 0x0002C0, "Member 'USafeZoneUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USafeZoneUI_C, Anim) == 0x0002C8, "Member 'USafeZoneUI_C::Anim' has a wrong offset!");
static_assert(offsetof(USafeZoneUI_C, Image_58) == 0x0002D0, "Member 'USafeZoneUI_C::Image_58' has a wrong offset!");
static_assert(offsetof(USafeZoneUI_C, Zoom) == 0x0002D8, "Member 'USafeZoneUI_C::Zoom' has a wrong offset!");
static_assert(offsetof(USafeZoneUI_C, UDS) == 0x0002E0, "Member 'USafeZoneUI_C::UDS' has a wrong offset!");

}

