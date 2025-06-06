﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VideoSettingsPage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass VideoSettingsPage.VideoSettingsPage_C
// 0x0148 (0x0408 - 0x02C0)
class UVideoSettingsPage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                ApplyButton;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                              AutoApplyCheckbox;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                AutoDetectButton;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                              AutoSaveCheckbox;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                CancelButton;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                SaveButton;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_1;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_2;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_3;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_4;                                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_5;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_6;                                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_7;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_8;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_9;                                      // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_10;                                     // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_11;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_12;                                     // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_13;                                     // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_14;                                     // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_17;                                     // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_18;                                     // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_88;                                     // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_149;                                    // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_194;                                    // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_234;                                    // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_302;                                    // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_366;                                    // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_489;                                    // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_715;                                    // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_791;                                    // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_880;                                    // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_1080;                                   // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_1137;                                   // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_1197;                                   // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_AMDFG;                                  // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_ResolutionScale;                        // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow_UpscalingQuality;                       // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Autosave;                                          // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AutoApply;                                         // 0x0401(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__AutoApplyCheckbox_K2Node_ComponentBoundEvent_336_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__AutoDetectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__AutoSaveCheckbox_K2Node_ComponentBoundEvent_40_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SaveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void CallbackUpscalingMethod(int32 NewValue);
	void Construct();
	void ExecuteUbergraph_VideoSettingsPage(int32 EntryPoint);
	bool Get_ApplyButton_bIsEnabled_0();
	bool Get_AutoApplyCheckbox_bIsEnabled_0();
	bool Get_SaveButton_bIsEnabled_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VideoSettingsPage_C">();
	}
	static class UVideoSettingsPage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVideoSettingsPage_C>();
	}
};
static_assert(alignof(UVideoSettingsPage_C) == 0x000008, "Wrong alignment on UVideoSettingsPage_C");
static_assert(sizeof(UVideoSettingsPage_C) == 0x000408, "Wrong size on UVideoSettingsPage_C");
static_assert(offsetof(UVideoSettingsPage_C, UberGraphFrame) == 0x0002C0, "Member 'UVideoSettingsPage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, ApplyButton) == 0x0002C8, "Member 'UVideoSettingsPage_C::ApplyButton' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, AutoApplyCheckbox) == 0x0002D0, "Member 'UVideoSettingsPage_C::AutoApplyCheckbox' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, AutoDetectButton) == 0x0002D8, "Member 'UVideoSettingsPage_C::AutoDetectButton' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, AutoSaveCheckbox) == 0x0002E0, "Member 'UVideoSettingsPage_C::AutoSaveCheckbox' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, CancelButton) == 0x0002E8, "Member 'UVideoSettingsPage_C::CancelButton' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SaveButton) == 0x0002F0, "Member 'UVideoSettingsPage_C::SaveButton' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow) == 0x0002F8, "Member 'UVideoSettingsPage_C::SettingRow' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_1) == 0x000300, "Member 'UVideoSettingsPage_C::SettingRow_1' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_2) == 0x000308, "Member 'UVideoSettingsPage_C::SettingRow_2' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_3) == 0x000310, "Member 'UVideoSettingsPage_C::SettingRow_3' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_4) == 0x000318, "Member 'UVideoSettingsPage_C::SettingRow_4' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_5) == 0x000320, "Member 'UVideoSettingsPage_C::SettingRow_5' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_6) == 0x000328, "Member 'UVideoSettingsPage_C::SettingRow_6' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_7) == 0x000330, "Member 'UVideoSettingsPage_C::SettingRow_7' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_8) == 0x000338, "Member 'UVideoSettingsPage_C::SettingRow_8' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_9) == 0x000340, "Member 'UVideoSettingsPage_C::SettingRow_9' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_10) == 0x000348, "Member 'UVideoSettingsPage_C::SettingRow_10' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_11) == 0x000350, "Member 'UVideoSettingsPage_C::SettingRow_11' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_12) == 0x000358, "Member 'UVideoSettingsPage_C::SettingRow_12' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_13) == 0x000360, "Member 'UVideoSettingsPage_C::SettingRow_13' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_14) == 0x000368, "Member 'UVideoSettingsPage_C::SettingRow_14' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_17) == 0x000370, "Member 'UVideoSettingsPage_C::SettingRow_17' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_18) == 0x000378, "Member 'UVideoSettingsPage_C::SettingRow_18' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_88) == 0x000380, "Member 'UVideoSettingsPage_C::SettingRow_88' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_149) == 0x000388, "Member 'UVideoSettingsPage_C::SettingRow_149' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_194) == 0x000390, "Member 'UVideoSettingsPage_C::SettingRow_194' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_234) == 0x000398, "Member 'UVideoSettingsPage_C::SettingRow_234' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_302) == 0x0003A0, "Member 'UVideoSettingsPage_C::SettingRow_302' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_366) == 0x0003A8, "Member 'UVideoSettingsPage_C::SettingRow_366' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_489) == 0x0003B0, "Member 'UVideoSettingsPage_C::SettingRow_489' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_715) == 0x0003B8, "Member 'UVideoSettingsPage_C::SettingRow_715' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_791) == 0x0003C0, "Member 'UVideoSettingsPage_C::SettingRow_791' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_880) == 0x0003C8, "Member 'UVideoSettingsPage_C::SettingRow_880' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_1080) == 0x0003D0, "Member 'UVideoSettingsPage_C::SettingRow_1080' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_1137) == 0x0003D8, "Member 'UVideoSettingsPage_C::SettingRow_1137' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_1197) == 0x0003E0, "Member 'UVideoSettingsPage_C::SettingRow_1197' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_AMDFG) == 0x0003E8, "Member 'UVideoSettingsPage_C::SettingRow_AMDFG' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_ResolutionScale) == 0x0003F0, "Member 'UVideoSettingsPage_C::SettingRow_ResolutionScale' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SettingRow_UpscalingQuality) == 0x0003F8, "Member 'UVideoSettingsPage_C::SettingRow_UpscalingQuality' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, Autosave) == 0x000400, "Member 'UVideoSettingsPage_C::Autosave' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, AutoApply) == 0x000401, "Member 'UVideoSettingsPage_C::AutoApply' has a wrong offset!");

}

