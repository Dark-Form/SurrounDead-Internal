﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TimeUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TimeUI.TimeUI_C
// 0x0060 (0x0320 - 0x02C0)
class UTimeUI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Reverse;                                      // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim;                                              // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             DateSlashText;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DayText;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_174;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MonthText;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SeasonText;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TimeText;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             YearText;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Zoom;                                              // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_314[0x4];                                      // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AUltra_Dynamic_Sky_C*                   UDS;                                               // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void CustomEvent();
	void Event_Clock();
	void Event_Destruct();
	void ExecuteUbergraph_TimeUI(int32 EntryPoint);
	class FText Get_ZoomText_Text_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TimeUI_C">();
	}
	static class UTimeUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTimeUI_C>();
	}
};
static_assert(alignof(UTimeUI_C) == 0x000008, "Wrong alignment on UTimeUI_C");
static_assert(sizeof(UTimeUI_C) == 0x000320, "Wrong size on UTimeUI_C");
static_assert(offsetof(UTimeUI_C, UberGraphFrame) == 0x0002C0, "Member 'UTimeUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTimeUI_C, Anim_Reverse) == 0x0002C8, "Member 'UTimeUI_C::Anim_Reverse' has a wrong offset!");
static_assert(offsetof(UTimeUI_C, Anim) == 0x0002D0, "Member 'UTimeUI_C::Anim' has a wrong offset!");
static_assert(offsetof(UTimeUI_C, DateSlashText) == 0x0002D8, "Member 'UTimeUI_C::DateSlashText' has a wrong offset!");
static_assert(offsetof(UTimeUI_C, DayText) == 0x0002E0, "Member 'UTimeUI_C::DayText' has a wrong offset!");
static_assert(offsetof(UTimeUI_C, Image_174) == 0x0002E8, "Member 'UTimeUI_C::Image_174' has a wrong offset!");
static_assert(offsetof(UTimeUI_C, MonthText) == 0x0002F0, "Member 'UTimeUI_C::MonthText' has a wrong offset!");
static_assert(offsetof(UTimeUI_C, SeasonText) == 0x0002F8, "Member 'UTimeUI_C::SeasonText' has a wrong offset!");
static_assert(offsetof(UTimeUI_C, TimeText) == 0x000300, "Member 'UTimeUI_C::TimeText' has a wrong offset!");
static_assert(offsetof(UTimeUI_C, YearText) == 0x000308, "Member 'UTimeUI_C::YearText' has a wrong offset!");
static_assert(offsetof(UTimeUI_C, Zoom) == 0x000310, "Member 'UTimeUI_C::Zoom' has a wrong offset!");
static_assert(offsetof(UTimeUI_C, UDS) == 0x000318, "Member 'UTimeUI_C::UDS' has a wrong offset!");

}

