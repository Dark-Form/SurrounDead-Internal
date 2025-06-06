﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScreenPermadeath

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ScreenPermadeath.ScreenPermadeath_C
// 0x0058 (0x0318 - 0x02C0)
class UScreenPermadeath_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Fade;                                              // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             DaysSurvived;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DistanceTravelled;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HumansKilled;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                QuitButton;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                QuitToMainMenuButton;                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_2;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ZombiesKilled;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          DeleteSave_;                                       // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__BP_RespawnScreen_QuitButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BP_RespawnScreen_QuitToMainMenuButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__RespawnScreen_QuitButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__RespawnScreen_QuitToMainMenuButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void ClearUI();
	void Construct();
	void ExecuteUbergraph_ScreenPermadeath(int32 EntryPoint);
	class FText Get_DaysSurvived();
	class FText Get_DistanceTravelled();
	class FText Get_HumansKilled();
	class FText Get_ZombiesKilled();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ScreenPermadeath_C">();
	}
	static class UScreenPermadeath_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScreenPermadeath_C>();
	}
};
static_assert(alignof(UScreenPermadeath_C) == 0x000008, "Wrong alignment on UScreenPermadeath_C");
static_assert(sizeof(UScreenPermadeath_C) == 0x000318, "Wrong size on UScreenPermadeath_C");
static_assert(offsetof(UScreenPermadeath_C, UberGraphFrame) == 0x0002C0, "Member 'UScreenPermadeath_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UScreenPermadeath_C, Fade) == 0x0002C8, "Member 'UScreenPermadeath_C::Fade' has a wrong offset!");
static_assert(offsetof(UScreenPermadeath_C, DaysSurvived) == 0x0002D0, "Member 'UScreenPermadeath_C::DaysSurvived' has a wrong offset!");
static_assert(offsetof(UScreenPermadeath_C, DistanceTravelled) == 0x0002D8, "Member 'UScreenPermadeath_C::DistanceTravelled' has a wrong offset!");
static_assert(offsetof(UScreenPermadeath_C, HumansKilled) == 0x0002E0, "Member 'UScreenPermadeath_C::HumansKilled' has a wrong offset!");
static_assert(offsetof(UScreenPermadeath_C, QuitButton) == 0x0002E8, "Member 'UScreenPermadeath_C::QuitButton' has a wrong offset!");
static_assert(offsetof(UScreenPermadeath_C, QuitToMainMenuButton) == 0x0002F0, "Member 'UScreenPermadeath_C::QuitToMainMenuButton' has a wrong offset!");
static_assert(offsetof(UScreenPermadeath_C, TextBlock_1) == 0x0002F8, "Member 'UScreenPermadeath_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UScreenPermadeath_C, TextBlock_2) == 0x000300, "Member 'UScreenPermadeath_C::TextBlock_2' has a wrong offset!");
static_assert(offsetof(UScreenPermadeath_C, ZombiesKilled) == 0x000308, "Member 'UScreenPermadeath_C::ZombiesKilled' has a wrong offset!");
static_assert(offsetof(UScreenPermadeath_C, DeleteSave_) == 0x000310, "Member 'UScreenPermadeath_C::DeleteSave_' has a wrong offset!");

}

