﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LaboratoryEntranceDoors

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_LaboratoryMaster_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LaboratoryEntranceDoors.BP_LaboratoryEntranceDoors_C
// 0x0030 (0x02D8 - 0x02A8)
class ABP_LaboratoryEntranceDoors_C final : public ABP_LaboratoryMaster_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   DoorR;                                             // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DoorL;                                             // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_Alpha_A1EC8B354F84ABC22BA054BB4D120F76;   // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_A1EC8B354F84ABC22BA054BB4D120F76; // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C5[0x3];                                      // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          IsClosed;                                          // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void Event_Door();
	void ExecuteUbergraph_BP_LaboratoryEntranceDoors(int32 EntryPoint);
	void GetInteractOptions(TMap<struct FGameplayTag, class FText>* Options);
	void GetItemInfo(class UJigsawItem_DataAsset_C** Info, int32* Count, struct FS_RandomStatsConfig* RandomStatsConfig, TMap<class FString, class FString>* CustomData);
	void GetJigMultiplayerComponent(class UActorComponent** JigComp);
	void GetMainSceneComp(class USceneComponent** Comp);
	void JigCanInteract(bool* Result);
	void JigSetCanInteract(bool CanInteract, bool EnablePhysics, bool* Result);
	void OnBeginInteract(class AActor* InteractingActor, const TMap<struct FGameplayTag, class FText>& Options);
	void OnEndInteract();
	void OnExecuteInteract(class AActor* InteractingActor, const struct FGameplayTag& Option);
	void OnExecuteInteractDialogue(class AActor* InteractingActor);
	void OnExecuteInteractEnded();
	void OnRequestServerInteract(class AActor* Actor, const struct FGameplayTag& Option, const struct FS_JigPayload& Payload, bool* Result);
	void OnServerExecuteInteract(const struct FGameplayTag& Option, class AActor* ByActor, const struct FS_JigPayload& Payload);
	void OnStopExecuteInteract(class AActor* InteractingActor);
	void PickupBuildFromGround();
	void SetInteractOption(const struct FGameplayTag& Option);
	void SetPickupCount(int32 NewCount, bool* Result);
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LaboratoryEntranceDoors_C">();
	}
	static class ABP_LaboratoryEntranceDoors_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LaboratoryEntranceDoors_C>();
	}
};
static_assert(alignof(ABP_LaboratoryEntranceDoors_C) == 0x000008, "Wrong alignment on ABP_LaboratoryEntranceDoors_C");
static_assert(sizeof(ABP_LaboratoryEntranceDoors_C) == 0x0002D8, "Wrong size on ABP_LaboratoryEntranceDoors_C");
static_assert(offsetof(ABP_LaboratoryEntranceDoors_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_LaboratoryEntranceDoors_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_LaboratoryEntranceDoors_C, DoorR) == 0x0002B0, "Member 'ABP_LaboratoryEntranceDoors_C::DoorR' has a wrong offset!");
static_assert(offsetof(ABP_LaboratoryEntranceDoors_C, DoorL) == 0x0002B8, "Member 'ABP_LaboratoryEntranceDoors_C::DoorL' has a wrong offset!");
static_assert(offsetof(ABP_LaboratoryEntranceDoors_C, Timeline_Alpha_A1EC8B354F84ABC22BA054BB4D120F76) == 0x0002C0, "Member 'ABP_LaboratoryEntranceDoors_C::Timeline_Alpha_A1EC8B354F84ABC22BA054BB4D120F76' has a wrong offset!");
static_assert(offsetof(ABP_LaboratoryEntranceDoors_C, Timeline__Direction_A1EC8B354F84ABC22BA054BB4D120F76) == 0x0002C4, "Member 'ABP_LaboratoryEntranceDoors_C::Timeline__Direction_A1EC8B354F84ABC22BA054BB4D120F76' has a wrong offset!");
static_assert(offsetof(ABP_LaboratoryEntranceDoors_C, Timeline) == 0x0002C8, "Member 'ABP_LaboratoryEntranceDoors_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_LaboratoryEntranceDoors_C, IsClosed) == 0x0002D0, "Member 'ABP_LaboratoryEntranceDoors_C::IsClosed' has a wrong offset!");

}

