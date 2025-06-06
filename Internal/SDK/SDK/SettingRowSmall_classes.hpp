﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingRowSmall

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SettingRowSmall.SettingRowSmall_C
// 0x0050 (0x0310 - 0x02C0)
class USettingRowSmall_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                AlternatingRowBorder;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ContentSize;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelText;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             SettingContent;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Label;                                             // 0x02E8(0x0018)(Edit, BlueprintVisible)
	double                                        MinDesiredWidth;                                   // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SettingRowSmall(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SettingRowSmall_C">();
	}
	static class USettingRowSmall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USettingRowSmall_C>();
	}
};
static_assert(alignof(USettingRowSmall_C) == 0x000008, "Wrong alignment on USettingRowSmall_C");
static_assert(sizeof(USettingRowSmall_C) == 0x000310, "Wrong size on USettingRowSmall_C");
static_assert(offsetof(USettingRowSmall_C, UberGraphFrame) == 0x0002C0, "Member 'USettingRowSmall_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USettingRowSmall_C, AlternatingRowBorder) == 0x0002C8, "Member 'USettingRowSmall_C::AlternatingRowBorder' has a wrong offset!");
static_assert(offsetof(USettingRowSmall_C, ContentSize) == 0x0002D0, "Member 'USettingRowSmall_C::ContentSize' has a wrong offset!");
static_assert(offsetof(USettingRowSmall_C, LabelText) == 0x0002D8, "Member 'USettingRowSmall_C::LabelText' has a wrong offset!");
static_assert(offsetof(USettingRowSmall_C, SettingContent) == 0x0002E0, "Member 'USettingRowSmall_C::SettingContent' has a wrong offset!");
static_assert(offsetof(USettingRowSmall_C, Label) == 0x0002E8, "Member 'USettingRowSmall_C::Label' has a wrong offset!");
static_assert(offsetof(USettingRowSmall_C, MinDesiredWidth) == 0x000300, "Member 'USettingRowSmall_C::MinDesiredWidth' has a wrong offset!");
static_assert(offsetof(USettingRowSmall_C, Index_0) == 0x000308, "Member 'USettingRowSmall_C::Index_0' has a wrong offset!");

}

