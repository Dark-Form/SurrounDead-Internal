﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Difficulty_AI

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Difficulty_AI.Difficulty_AI_C
// 0x00B0 (0x0370 - 0x02C0)
class UDifficulty_AI_C final : public UUserWidget
{
public:
	class USettingRow_C*                          SettingRow;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_1;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_2;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_3;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_4;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_5;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_6;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_7;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_8;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_9;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_10;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_11;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_12;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_13;                                     // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_14;                                     // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_15;                                     // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_23;                                     // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_26;                                     // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_28;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                            HoveredTextColor;                                  // 0x0358(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Difficulty_AI_C">();
	}
	static class UDifficulty_AI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDifficulty_AI_C>();
	}
};
static_assert(alignof(UDifficulty_AI_C) == 0x000008, "Wrong alignment on UDifficulty_AI_C");
static_assert(sizeof(UDifficulty_AI_C) == 0x000370, "Wrong size on UDifficulty_AI_C");
static_assert(offsetof(UDifficulty_AI_C, SettingRow) == 0x0002C0, "Member 'UDifficulty_AI_C::SettingRow' has a wrong offset!");
static_assert(offsetof(UDifficulty_AI_C, SettingRow_1) == 0x0002C8, "Member 'UDifficulty_AI_C::SettingRow_1' has a wrong offset!");
static_assert(offsetof(UDifficulty_AI_C, SettingRow_2) == 0x0002D0, "Member 'UDifficulty_AI_C::SettingRow_2' has a wrong offset!");
static_assert(offsetof(UDifficulty_AI_C, SettingRow_3) == 0x0002D8, "Member 'UDifficulty_AI_C::SettingRow_3' has a wrong offset!");
static_assert(offsetof(UDifficulty_AI_C, SettingRow_4) == 0x0002E0, "Member 'UDifficulty_AI_C::SettingRow_4' has a wrong offset!");
static_assert(offsetof(UDifficulty_AI_C, SettingRow_5) == 0x0002E8, "Member 'UDifficulty_AI_C::SettingRow_5' has a wrong offset!");
static_assert(offsetof(UDifficulty_AI_C, SettingRow_6) == 0x0002F0, "Member 'UDifficulty_AI_C::SettingRow_6' has a wrong offset!");
static_assert(offsetof(UDifficulty_AI_C, SettingRow_7) == 0x0002F8, "Member 'UDifficulty_AI_C::SettingRow_7' has a wrong offset!");
static_assert(offsetof(UDifficulty_AI_C, SettingRow_8) == 0x000300, "Member 'UDifficulty_AI_C::SettingRow_8' has a wrong offset!");
static_assert(offsetof(UDifficulty_AI_C, SettingRow_9) == 0x000308, "Member 'UDifficulty_AI_C::SettingRow_9' has a wrong offset!");
static_assert(offsetof(UDifficulty_AI_C, SettingRow_10) == 0x000310, "Member 'UDifficulty_AI_C::SettingRow_10' has a wrong offset!");
static_assert(offsetof(UDifficulty_AI_C, SettingRow_11) == 0x000318, "Member 'UDifficulty_AI_C::SettingRow_11' has a wrong offset!");
static_assert(offsetof(UDifficulty_AI_C, SettingRow_12) == 0x000320, "Member 'UDifficulty_AI_C::SettingRow_12' has a wrong offset!");
static_assert(offsetof(UDifficulty_AI_C, SettingRow_13) == 0x000328, "Member 'UDifficulty_AI_C::SettingRow_13' has a wrong offset!");
static_assert(offsetof(UDifficulty_AI_C, SettingRow_14) == 0x000330, "Member 'UDifficulty_AI_C::SettingRow_14' has a wrong offset!");
static_assert(offsetof(UDifficulty_AI_C, SettingRow_15) == 0x000338, "Member 'UDifficulty_AI_C::SettingRow_15' has a wrong offset!");
static_assert(offsetof(UDifficulty_AI_C, SettingRow_23) == 0x000340, "Member 'UDifficulty_AI_C::SettingRow_23' has a wrong offset!");
static_assert(offsetof(UDifficulty_AI_C, SettingRow_26) == 0x000348, "Member 'UDifficulty_AI_C::SettingRow_26' has a wrong offset!");
static_assert(offsetof(UDifficulty_AI_C, SettingRow_28) == 0x000350, "Member 'UDifficulty_AI_C::SettingRow_28' has a wrong offset!");
static_assert(offsetof(UDifficulty_AI_C, HoveredTextColor) == 0x000358, "Member 'UDifficulty_AI_C::HoveredTextColor' has a wrong offset!");

}

