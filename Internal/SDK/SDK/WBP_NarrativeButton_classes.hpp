﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NarrativeButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_NarrativeButton.WBP_NarrativeButton_C
// 0x0040 (0x15C0 - 0x1580)
#pragma pack(push, 0x1)
class alignas(0x10) UWBP_NarrativeButton_C : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1580(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Clicked;                                           // 0x1588(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_ButtonText;                        // 0x1590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x1598(0x0018)(Edit, BlueprintVisible)
	EHorizontalAlignment                          TextAlignment;                                     // 0x15B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnClicked();
	void ExecuteUbergraph_WBP_NarrativeButton(int32 EntryPoint);
	void OnCurrentTextStyleChanged();
	void PreConstruct(bool IsDesignTime);
	void Set_Button_Text(const class FText& Text_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_NarrativeButton_C">();
	}
	static class UWBP_NarrativeButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_NarrativeButton_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(UWBP_NarrativeButton_C) == 0x000010, "Wrong alignment on UWBP_NarrativeButton_C");
static_assert(sizeof(UWBP_NarrativeButton_C) == 0x0015C0, "Wrong size on UWBP_NarrativeButton_C");
static_assert(offsetof(UWBP_NarrativeButton_C, UberGraphFrame) == 0x001580, "Member 'UWBP_NarrativeButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_NarrativeButton_C, Clicked) == 0x001588, "Member 'UWBP_NarrativeButton_C::Clicked' has a wrong offset!");
static_assert(offsetof(UWBP_NarrativeButton_C, CommonTextBlock_ButtonText) == 0x001590, "Member 'UWBP_NarrativeButton_C::CommonTextBlock_ButtonText' has a wrong offset!");
static_assert(offsetof(UWBP_NarrativeButton_C, Text) == 0x001598, "Member 'UWBP_NarrativeButton_C::Text' has a wrong offset!");
static_assert(offsetof(UWBP_NarrativeButton_C, TextAlignment) == 0x0015B0, "Member 'UWBP_NarrativeButton_C::TextAlignment' has a wrong offset!");

}

