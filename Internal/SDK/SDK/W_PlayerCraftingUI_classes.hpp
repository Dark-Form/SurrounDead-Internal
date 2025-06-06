﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PlayerCraftingUI

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PlayerCraftingUI.W_PlayerCraftingUI_C
// 0x00D0 (0x0390 - 0x02C0)
class UW_PlayerCraftingUI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_81;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Decrease;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Increase;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEquipmentSlotTitle_C*                  EquipmentSlotTitle;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEquipmentSlotTitle_C*                  EquipmentSlotTitle_1;                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJSIContainer_C*                        JSIContainer;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJSIContainer_C*                        JSIContainer_1;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                LoadingT;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_75;                                      // 0x0308(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                              Throbber_567;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class UJSI_Slot_C*, int32>               AddedItems;                                        // 0x0318(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UJSI_Slot_C*                            CurrentFaded;                                      // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_JigMultiplayer_C*                   MPComponent;                                       // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FGuid>                          RequestConsume;                                    // 0x0378(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         CraftIndex;                                        // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CountIndex;                                        // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddRequiredItems();
	void BindEvents();
	void BndEvt__BP_CraftingWidget_Button_Decrease_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BP_CraftingWidget_Button_Increase_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_81_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void CheckIngredientsAvailability(bool* Proceed);
	void Construct();
	void EventOnMouseButtonDown(class UJSIContainer_C* Container, class UJSI_Slot_C* SlotRef, const struct FKey& Button);
	void ExecuteUbergraph_W_PlayerCraftingUI(int32 EntryPoint);
	class FText GetText();
	void InitializeInventory();
	void SetCraftableItems();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PlayerCraftingUI_C">();
	}
	static class UW_PlayerCraftingUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PlayerCraftingUI_C>();
	}
};
static_assert(alignof(UW_PlayerCraftingUI_C) == 0x000008, "Wrong alignment on UW_PlayerCraftingUI_C");
static_assert(sizeof(UW_PlayerCraftingUI_C) == 0x000390, "Wrong size on UW_PlayerCraftingUI_C");
static_assert(offsetof(UW_PlayerCraftingUI_C, UberGraphFrame) == 0x0002C0, "Member 'UW_PlayerCraftingUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_PlayerCraftingUI_C, Button_81) == 0x0002C8, "Member 'UW_PlayerCraftingUI_C::Button_81' has a wrong offset!");
static_assert(offsetof(UW_PlayerCraftingUI_C, Button_Decrease) == 0x0002D0, "Member 'UW_PlayerCraftingUI_C::Button_Decrease' has a wrong offset!");
static_assert(offsetof(UW_PlayerCraftingUI_C, Button_Increase) == 0x0002D8, "Member 'UW_PlayerCraftingUI_C::Button_Increase' has a wrong offset!");
static_assert(offsetof(UW_PlayerCraftingUI_C, EquipmentSlotTitle) == 0x0002E0, "Member 'UW_PlayerCraftingUI_C::EquipmentSlotTitle' has a wrong offset!");
static_assert(offsetof(UW_PlayerCraftingUI_C, EquipmentSlotTitle_1) == 0x0002E8, "Member 'UW_PlayerCraftingUI_C::EquipmentSlotTitle_1' has a wrong offset!");
static_assert(offsetof(UW_PlayerCraftingUI_C, JSIContainer) == 0x0002F0, "Member 'UW_PlayerCraftingUI_C::JSIContainer' has a wrong offset!");
static_assert(offsetof(UW_PlayerCraftingUI_C, JSIContainer_1) == 0x0002F8, "Member 'UW_PlayerCraftingUI_C::JSIContainer_1' has a wrong offset!");
static_assert(offsetof(UW_PlayerCraftingUI_C, LoadingT) == 0x000300, "Member 'UW_PlayerCraftingUI_C::LoadingT' has a wrong offset!");
static_assert(offsetof(UW_PlayerCraftingUI_C, TextBlock_75) == 0x000308, "Member 'UW_PlayerCraftingUI_C::TextBlock_75' has a wrong offset!");
static_assert(offsetof(UW_PlayerCraftingUI_C, Throbber_567) == 0x000310, "Member 'UW_PlayerCraftingUI_C::Throbber_567' has a wrong offset!");
static_assert(offsetof(UW_PlayerCraftingUI_C, AddedItems) == 0x000318, "Member 'UW_PlayerCraftingUI_C::AddedItems' has a wrong offset!");
static_assert(offsetof(UW_PlayerCraftingUI_C, CurrentFaded) == 0x000368, "Member 'UW_PlayerCraftingUI_C::CurrentFaded' has a wrong offset!");
static_assert(offsetof(UW_PlayerCraftingUI_C, MPComponent) == 0x000370, "Member 'UW_PlayerCraftingUI_C::MPComponent' has a wrong offset!");
static_assert(offsetof(UW_PlayerCraftingUI_C, RequestConsume) == 0x000378, "Member 'UW_PlayerCraftingUI_C::RequestConsume' has a wrong offset!");
static_assert(offsetof(UW_PlayerCraftingUI_C, CraftIndex) == 0x000388, "Member 'UW_PlayerCraftingUI_C::CraftIndex' has a wrong offset!");
static_assert(offsetof(UW_PlayerCraftingUI_C, CountIndex) == 0x00038C, "Member 'UW_PlayerCraftingUI_C::CountIndex' has a wrong offset!");

}

