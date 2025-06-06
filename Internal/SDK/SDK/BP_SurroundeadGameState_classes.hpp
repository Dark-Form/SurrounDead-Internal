﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SurroundeadGameState

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SurroundeadGameState.BP_SurroundeadGameState_C
// 0x0058 (0x0348 - 0x02F0)
class ABP_SurroundeadGameState_C final : public AGameStateBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_ItemSnapCaptor_C*                   SnapActorRef;                                      // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          FirstCaptureDone;                                  // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_309[0x7];                                      // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UJSI_Slot_C*>                    ItemsQueue;                                        // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                        SnapDelay;                                         // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           AllInspectedIDs;                                   // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 AllUIDs;                                           // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AddItemToQueue(class UJSI_Slot_C* Item, bool* Result);
	bool CanItemBeCaptured(class UJSI_Slot_C* ItemRef, bool* Shared);
	void ExecuteUbergraph_BP_SurroundeadGameState(int32 EntryPoint);
	void GetLocalAttachmentByID(class UJigsawItem_DataAsset_C* ItemId, bool* Found, class FName* Socket, struct FGameplayTag* Type, class UClass** Class_0);
	void GetSnap(class UJSI_Slot_C* ItemRef, class UTextureRenderTarget2D** Texture);
	void HandleNext();
	void HandleQueue();
	void HandleSnapTaken();
	void InspectorGetPrimitiveComponent(class AActor* Actor, class UPrimitiveComponent** Comp);
	void OnSnapTaken();
	void SpawnSnapshotCaptor(class UJSI_Slot_C* ItemRef, class ABP_ItemInspector_C** InspectorRef);
	void UpdateAttachments(class UJSI_Slot_C* ItemRef, class UTextureRenderTarget2D* RenderT, TArray<class FName>& Attachments, class UTextureRenderTarget** RenderTarget);
	void UpdateSnap(class UJSI_Slot_C* ItemRef, class UTextureRenderTarget2D* RenderT, class UTextureRenderTarget** RenderTarget);
	void UpdateSnapCustom(const struct FTransform& Transform, double FOV, class UJSI_Slot_C* JigItem, bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SurroundeadGameState_C">();
	}
	static class ABP_SurroundeadGameState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SurroundeadGameState_C>();
	}
};
static_assert(alignof(ABP_SurroundeadGameState_C) == 0x000008, "Wrong alignment on ABP_SurroundeadGameState_C");
static_assert(sizeof(ABP_SurroundeadGameState_C) == 0x000348, "Wrong size on ABP_SurroundeadGameState_C");
static_assert(offsetof(ABP_SurroundeadGameState_C, UberGraphFrame) == 0x0002F0, "Member 'ABP_SurroundeadGameState_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SurroundeadGameState_C, DefaultSceneRoot) == 0x0002F8, "Member 'ABP_SurroundeadGameState_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SurroundeadGameState_C, SnapActorRef) == 0x000300, "Member 'ABP_SurroundeadGameState_C::SnapActorRef' has a wrong offset!");
static_assert(offsetof(ABP_SurroundeadGameState_C, FirstCaptureDone) == 0x000308, "Member 'ABP_SurroundeadGameState_C::FirstCaptureDone' has a wrong offset!");
static_assert(offsetof(ABP_SurroundeadGameState_C, ItemsQueue) == 0x000310, "Member 'ABP_SurroundeadGameState_C::ItemsQueue' has a wrong offset!");
static_assert(offsetof(ABP_SurroundeadGameState_C, SnapDelay) == 0x000320, "Member 'ABP_SurroundeadGameState_C::SnapDelay' has a wrong offset!");
static_assert(offsetof(ABP_SurroundeadGameState_C, AllInspectedIDs) == 0x000328, "Member 'ABP_SurroundeadGameState_C::AllInspectedIDs' has a wrong offset!");
static_assert(offsetof(ABP_SurroundeadGameState_C, AllUIDs) == 0x000338, "Member 'ABP_SurroundeadGameState_C::AllUIDs' has a wrong offset!");

}

