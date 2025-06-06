﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonButtonTab

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonButtonTab.CommonButtonTab_C
// 0x0070 (0x0330 - 0x02C0)
class UCommonButtonTab_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         TabToOpen;                                         // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D4[0x4];                                      // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhotoModeWidget_C*                     PhotoModeWidgetRef;                                // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                                TabIcon;                                           // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ButtonSize;                                        // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ButtonSizeWhenSelected;                            // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            SelectedTabColor;                                  // 0x0308(0x0014)(Edit, BlueprintVisible)
	struct FSlateColor                            UnselectedTabColor;                                // 0x031C(0x0014)(Edit, BlueprintVisible)

public:
	void BndEvt__Button_99_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_CommonButtonTab(int32 EntryPoint);
	void Initialize(class UPhotoModeWidget_C* PhotoModeWidgetRef_0);
	void PreConstruct(bool IsDesignTime);
	void SetSelectedTabStyle();
	void SetUnselectedTabStyle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonButtonTab_C">();
	}
	static class UCommonButtonTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonButtonTab_C>();
	}
};
static_assert(alignof(UCommonButtonTab_C) == 0x000008, "Wrong alignment on UCommonButtonTab_C");
static_assert(sizeof(UCommonButtonTab_C) == 0x000330, "Wrong size on UCommonButtonTab_C");
static_assert(offsetof(UCommonButtonTab_C, UberGraphFrame) == 0x0002C0, "Member 'UCommonButtonTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonButtonTab_C, Button) == 0x0002C8, "Member 'UCommonButtonTab_C::Button' has a wrong offset!");
static_assert(offsetof(UCommonButtonTab_C, TabToOpen) == 0x0002D0, "Member 'UCommonButtonTab_C::TabToOpen' has a wrong offset!");
static_assert(offsetof(UCommonButtonTab_C, PhotoModeWidgetRef) == 0x0002D8, "Member 'UCommonButtonTab_C::PhotoModeWidgetRef' has a wrong offset!");
static_assert(offsetof(UCommonButtonTab_C, TabIcon) == 0x0002E0, "Member 'UCommonButtonTab_C::TabIcon' has a wrong offset!");
static_assert(offsetof(UCommonButtonTab_C, ButtonSize) == 0x0002E8, "Member 'UCommonButtonTab_C::ButtonSize' has a wrong offset!");
static_assert(offsetof(UCommonButtonTab_C, ButtonSizeWhenSelected) == 0x0002F8, "Member 'UCommonButtonTab_C::ButtonSizeWhenSelected' has a wrong offset!");
static_assert(offsetof(UCommonButtonTab_C, SelectedTabColor) == 0x000308, "Member 'UCommonButtonTab_C::SelectedTabColor' has a wrong offset!");
static_assert(offsetof(UCommonButtonTab_C, UnselectedTabColor) == 0x00031C, "Member 'UCommonButtonTab_C::UnselectedTabColor' has a wrong offset!");

}

