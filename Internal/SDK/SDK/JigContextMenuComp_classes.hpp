﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JigContextMenuComp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "InputCore_structs.hpp"
#include "Enum_LootRarity_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass JigContextMenuComp.JigContextMenuComp_C
// 0x0058 (0x00F8 - 0x00A0)
class UJigContextMenuComp_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJigContextMenuCanvas_C*                ContextMRef;                                       // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(const struct FGameplayTag& Option, class UJSI_Slot_C* ItemRef, class UJSIContainer_C* ContainerMother)> OnOptionSelected; // 0x00B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UJSI_Slot_C*                            CurrentItemRef;                                    // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                        LocalComp;                                         // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UJSIContainer_C*                        RootContainer;                                     // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_InspectorCanvas_C*                  InspectCanavs;                                     // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                           KeysToListenTo;                                    // 0x00E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UJSI_Slot_C*                            ItemKeyListener;                                   // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ContextConsumeCanned();
	void ContextConsumeDrink();
	void ContextConsumeNormal();
	void ContextFillBottle();
	void ContextOpenLootBox();
	void ContextPlaceItem(class UJSI_Slot_C* ItemRef, const struct FGuid& Guid);
	void ContextPlayMusic();
	void ContextReadBook();
	void ContextRepairArmor();
	void ContextRepairWeapon();
	void ContextRipClothing();
	void ContextScanLaptop();
	void ContextShowAttachments();
	void ContextSmoke();
	void ContextUseItem();
	void CreateInspectCanvas(class UBP_InspectorCanvas_C** Output_Get);
	void ExecuteUbergraph_JigContextMenuComp(int32 EntryPoint);
	void GetCanvas(class UBP_InspectorCanvas_C** Output_Get);
	void HandleConsumeCapacityContainer(class UJSI_Slot_C* ItemRef);
	void HandleMenuLocation(const struct FPointerEvent& Input, class UJSI_Slot_C* JigRef);
	void InvalidateListenDesctructEvent();
	void ListenForDestructEvent(class UJSI_Slot_C* ItemRef);
	void On_Menu_Option_Selected(const struct FGameplayTag& Option);
	void OnConsumeConfirm_Event_0(class UJSI_Slot_C* ItemRef, class UJSI_Slot_C* ItemToConsume, class UJSIContainer_C* Rootcon, int32 Amount);
	void OnDoubleClickInspect(class UJSI_Slot_C* ItemRef);
	void OneFrameProcess(const struct FPointerEvent& Input, class UJSI_Slot_C* JigRef);
	void OnItemDestructEvent_Event_0();
	void OnJigItemMouseEnterLeave(class UJSI_Slot_C* ItemRef, bool Enter_);
	void OnJigItemRightClick(class UJSI_Slot_C* ItemRef, const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent);
	void ProcessMenuOptions(class UJSI_Slot_C* JigRef, bool* CanAdd_);
	void ReceiveTick(float DeltaSeconds);
	void SetComp();
	void SetItemRef(class UJSI_Slot_C* CurrentItemRef_0);
	void SetupConsumeRequest(class UJSI_Slot_C* ItemRef, class UJSIContainer_C* RootContainer_0, class UJSI_Slot_C* ItemToConsume);
	class ABP_ItemInspector_C* SpawnItemInspector(class UJSI_Slot_C* ItemRef);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"JigContextMenuComp_C">();
	}
	static class UJigContextMenuComp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJigContextMenuComp_C>();
	}
};
static_assert(alignof(UJigContextMenuComp_C) == 0x000008, "Wrong alignment on UJigContextMenuComp_C");
static_assert(sizeof(UJigContextMenuComp_C) == 0x0000F8, "Wrong size on UJigContextMenuComp_C");
static_assert(offsetof(UJigContextMenuComp_C, UberGraphFrame) == 0x0000A0, "Member 'UJigContextMenuComp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UJigContextMenuComp_C, ContextMRef) == 0x0000A8, "Member 'UJigContextMenuComp_C::ContextMRef' has a wrong offset!");
static_assert(offsetof(UJigContextMenuComp_C, OnOptionSelected) == 0x0000B0, "Member 'UJigContextMenuComp_C::OnOptionSelected' has a wrong offset!");
static_assert(offsetof(UJigContextMenuComp_C, CurrentItemRef) == 0x0000C0, "Member 'UJigContextMenuComp_C::CurrentItemRef' has a wrong offset!");
static_assert(offsetof(UJigContextMenuComp_C, LocalComp) == 0x0000C8, "Member 'UJigContextMenuComp_C::LocalComp' has a wrong offset!");
static_assert(offsetof(UJigContextMenuComp_C, RootContainer) == 0x0000D0, "Member 'UJigContextMenuComp_C::RootContainer' has a wrong offset!");
static_assert(offsetof(UJigContextMenuComp_C, InspectCanavs) == 0x0000D8, "Member 'UJigContextMenuComp_C::InspectCanavs' has a wrong offset!");
static_assert(offsetof(UJigContextMenuComp_C, KeysToListenTo) == 0x0000E0, "Member 'UJigContextMenuComp_C::KeysToListenTo' has a wrong offset!");
static_assert(offsetof(UJigContextMenuComp_C, ItemKeyListener) == 0x0000F0, "Member 'UJigContextMenuComp_C::ItemKeyListener' has a wrong offset!");

}

