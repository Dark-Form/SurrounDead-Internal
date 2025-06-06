﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DragWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DragWidget.DragWidget_C
// 0x00B8 (0x0378 - 0x02C0)
class UDragWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 FrameImg;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                SBorder;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SImage;                                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              JigItemSize;                                       // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UTexture*                               Image;                                             // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UJSI_Slot_C*                            ParentSlot;                                        // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UJSIContainer_C*>                ContainersDragOver;                                // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FKey                                   RotateKey;                                         // 0x0310(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          isKeyDown;                                         // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RotationChanged_;                                  // 0x0329(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32A[0x6];                                      // 0x032A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UJSI_Slot_C*                            OnSlot;                                            // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UDragDropOperation*                     Operation;                                         // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSlotRotated_;                                    // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_341[0x7];                                      // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        InitImageRot;                                      // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          AdjustLocToMouse;                                  // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          isSplit_;                                          // 0x0351(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_352[0x6];                                      // 0x0352(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UJSIContainer_C*>                HighlightedEContainers;                            // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UJSI_Slot_C*>                    HighlightedItems;                                  // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void AddContainer(const class UJSIContainer_C*& NewContainer);
	void ClearVisualHighlight();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_DragWidget(int32 EntryPoint);
	void HandleRotation();
	void HighlightAllValidContainers();
	void HighlightItemOverItemValidContainers();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void ResetOpacity();
	void RotateKeyDown();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DragWidget_C">();
	}
	static class UDragWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDragWidget_C>();
	}
};
static_assert(alignof(UDragWidget_C) == 0x000008, "Wrong alignment on UDragWidget_C");
static_assert(sizeof(UDragWidget_C) == 0x000378, "Wrong size on UDragWidget_C");
static_assert(offsetof(UDragWidget_C, UberGraphFrame) == 0x0002C0, "Member 'UDragWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDragWidget_C, FrameImg) == 0x0002C8, "Member 'UDragWidget_C::FrameImg' has a wrong offset!");
static_assert(offsetof(UDragWidget_C, SBorder) == 0x0002D0, "Member 'UDragWidget_C::SBorder' has a wrong offset!");
static_assert(offsetof(UDragWidget_C, SImage) == 0x0002D8, "Member 'UDragWidget_C::SImage' has a wrong offset!");
static_assert(offsetof(UDragWidget_C, JigItemSize) == 0x0002E0, "Member 'UDragWidget_C::JigItemSize' has a wrong offset!");
static_assert(offsetof(UDragWidget_C, Image) == 0x0002F0, "Member 'UDragWidget_C::Image' has a wrong offset!");
static_assert(offsetof(UDragWidget_C, ParentSlot) == 0x0002F8, "Member 'UDragWidget_C::ParentSlot' has a wrong offset!");
static_assert(offsetof(UDragWidget_C, ContainersDragOver) == 0x000300, "Member 'UDragWidget_C::ContainersDragOver' has a wrong offset!");
static_assert(offsetof(UDragWidget_C, RotateKey) == 0x000310, "Member 'UDragWidget_C::RotateKey' has a wrong offset!");
static_assert(offsetof(UDragWidget_C, isKeyDown) == 0x000328, "Member 'UDragWidget_C::isKeyDown' has a wrong offset!");
static_assert(offsetof(UDragWidget_C, RotationChanged_) == 0x000329, "Member 'UDragWidget_C::RotationChanged_' has a wrong offset!");
static_assert(offsetof(UDragWidget_C, OnSlot) == 0x000330, "Member 'UDragWidget_C::OnSlot' has a wrong offset!");
static_assert(offsetof(UDragWidget_C, Operation) == 0x000338, "Member 'UDragWidget_C::Operation' has a wrong offset!");
static_assert(offsetof(UDragWidget_C, IsSlotRotated_) == 0x000340, "Member 'UDragWidget_C::IsSlotRotated_' has a wrong offset!");
static_assert(offsetof(UDragWidget_C, InitImageRot) == 0x000348, "Member 'UDragWidget_C::InitImageRot' has a wrong offset!");
static_assert(offsetof(UDragWidget_C, AdjustLocToMouse) == 0x000350, "Member 'UDragWidget_C::AdjustLocToMouse' has a wrong offset!");
static_assert(offsetof(UDragWidget_C, isSplit_) == 0x000351, "Member 'UDragWidget_C::isSplit_' has a wrong offset!");
static_assert(offsetof(UDragWidget_C, HighlightedEContainers) == 0x000358, "Member 'UDragWidget_C::HighlightedEContainers' has a wrong offset!");
static_assert(offsetof(UDragWidget_C, HighlightedItems) == 0x000368, "Member 'UDragWidget_C::HighlightedItems' has a wrong offset!");

}

