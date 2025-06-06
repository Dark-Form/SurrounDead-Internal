﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LetterUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LetterUI.LetterUI_C
// 0x0030 (0x02F0 - 0x02C0)
class ULetterUI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Fade;                                              // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Description;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ExitButton;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ExitText;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_38;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetText(const class FText& Description_0);
	void Exit();
	void ExecuteUbergraph_LetterUI(int32 EntryPoint);
	void Construct();
	void BndEvt__LetterUI_ExitButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LetterUI_ExitButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__LetterUI_Button_191_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LetterUI_C">();
	}
	static class ULetterUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULetterUI_C>();
	}
};
static_assert(alignof(ULetterUI_C) == 0x000008, "Wrong alignment on ULetterUI_C");
static_assert(sizeof(ULetterUI_C) == 0x0002F0, "Wrong size on ULetterUI_C");
static_assert(offsetof(ULetterUI_C, UberGraphFrame) == 0x0002C0, "Member 'ULetterUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULetterUI_C, Fade) == 0x0002C8, "Member 'ULetterUI_C::Fade' has a wrong offset!");
static_assert(offsetof(ULetterUI_C, Description) == 0x0002D0, "Member 'ULetterUI_C::Description' has a wrong offset!");
static_assert(offsetof(ULetterUI_C, ExitButton) == 0x0002D8, "Member 'ULetterUI_C::ExitButton' has a wrong offset!");
static_assert(offsetof(ULetterUI_C, ExitText) == 0x0002E0, "Member 'ULetterUI_C::ExitText' has a wrong offset!");
static_assert(offsetof(ULetterUI_C, Image_38) == 0x0002E8, "Member 'ULetterUI_C::Image_38' has a wrong offset!");

}

