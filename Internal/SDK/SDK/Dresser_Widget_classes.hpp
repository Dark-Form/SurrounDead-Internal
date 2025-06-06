﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dresser_Widget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Dresser_Widget.Dresser_Widget_C
// 0x0010 (0x02D0 - 0x02C0)
class UDresser_Widget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJSIContainer_C*                        MainContainer;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Dresser_Widget(int32 EntryPoint);
	void ForceInitSpecialcontainer();
	void GetAllAttachments(TArray<class FName>* Attachments);
	void GetContainerByAttachmentType(const struct FGameplayTag& Type, class UJSIContainer_C** JigContainer, int32* ContainerIndex);
	void GetDropWidget(class UDropItemBackGwidget_C** DropWRef);
	void GetJSIContainerByPlayerSlots(const struct FGameplayTag& Slot_0, class UJSIContainer_C** Container, class UJSI_Slot_C** EquippedItem, bool* IsPending_);
	void GetListOfNonAddContainers(TArray<class UJSIContainer_C*>* Containers);
	void GetLootContent(class UUserWidget** Widget);
	void GetValidReloadContainers(TArray<class UJSIContainer_C*>* Containers);
	void JigSetLootContent(class UUserWidget* Widget, const class FText& Name_0);
	void JSICheckStatus();
	void JSIOnWeightUpdated(double NewWeight);
	void OnCreatedFromUtility();
	void SetActionbarFollower(class UJSI_Slot_C* JigRef, bool* Return);
	void SetActorOwner(class AActor* ActorRef);
	void SetInspectorRef(class UBP_InspectorWindowWidget_C* Inspector);
	void SetItemReference(class UJSI_Slot_C* ItemRef);

	void GetListOfContainers(TArray<class UJSIContainer_C*>* Containers) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Dresser_Widget_C">();
	}
	static class UDresser_Widget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDresser_Widget_C>();
	}
};
static_assert(alignof(UDresser_Widget_C) == 0x000008, "Wrong alignment on UDresser_Widget_C");
static_assert(sizeof(UDresser_Widget_C) == 0x0002D0, "Wrong size on UDresser_Widget_C");
static_assert(offsetof(UDresser_Widget_C, UberGraphFrame) == 0x0002C0, "Member 'UDresser_Widget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDresser_Widget_C, MainContainer) == 0x0002C8, "Member 'UDresser_Widget_C::MainContainer' has a wrong offset!");

}

