﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MASTER_PicklockContainer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Enum_ContainerLootTables_structs.hpp"
#include "BP_LockPickObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MASTER_PicklockContainer.BP_MASTER_PicklockContainer_C
// 0x0110 (0x03D0 - 0x02C0)
class ABP_MASTER_PicklockContainer_C : public ABP_LockPickObject_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_MASTER_PicklockContainer_C;      // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAIOSubjectComponent*                   AIOSubject;                                        // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_JigMultiplayer_C*                   BP_JigMultiplayer;                                 // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InteractingActorLoc;                               // 0x02E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CurrentActor;                                      // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	Enum_ContainerLootTables                      LootTable;                                         // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_301[0x7];                                      // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ContainerName;                                     // 0x0308(0x0018)(Edit, BlueprintVisible)
	TMulticastInlineDelegate<void()>              OpenedObject;                                      // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           OutlineTimer;                                      // 0x0330(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayerClose_;                                      // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ContainerLooted;                                   // 0x0339(0x0001)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33A[0x6];                                      // 0x033A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DurationToHold;                                    // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ChanceToBreakPicklock;                             // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DefaultChanceToBreakPicklock;                      // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RefillTimer;                                       // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       W_MagnifierUI;                                     // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_368[0x8];                                      // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             MagnifierTransform;                                // 0x0370(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActorLoaded();
	void ActorPreLoad();
	void ActorPreSave();
	void ActorSaved();
	void AdvancedLockCheck(bool* Check);
	void Bind_Refill();
	void BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void CheckDistanceFromActor();
	void ComponentsToSave(TArray<class UActorComponent*>* Components);
	void DistanceOutline();
	void Event_MagnifierUI(bool Spawn);
	void Event_Outline();
	void ExecuteUbergraph_BP_MASTER_PicklockContainer(int32 EntryPoint);
	void GetInteractOptions(TMap<struct FGameplayTag, class FText>* Options);
	void GetItemInfo(class UJigsawItem_DataAsset_C** Info, int32* Count, struct FS_RandomStatsConfig* RandomStatsConfig, TMap<class FString, class FString>* CustomData);
	void GetJigMultiplayerComponent(class UActorComponent** JigComp);
	void GetMainSceneComp(class USceneComponent** Comp);
	void JigCanInteract(bool* Result);
	void JigMP_GetLootWidget(class UWidget** Result, bool* Valid_);
	void JigMP_OnContainersSwap(class UJSIContainer_C* Container1, class UJSIContainer_C* Container2, bool* Result);
	void JigMP_OnItemAdded(const struct FGuid& ItemUID, const struct FGuid& FromContainerUID, const struct FGuid& TocontainerUID, class UActorComponent* FromComponent, bool* Result);
	void JigMP_OnItemConsumed(const struct FRepItemInfo& ConsumedItem, int32 Amount, int32 Remaining, const struct FRepItemInfo& InsideOf, class FName FromContainer, const class FString& CustomData, bool CallbackToPlayer_, bool* Result);
	void JigMP_OnItemDropped(const struct FGuid& ItemUID, const struct FGuid& FromContainerUID, class AActor* ActorRef, bool* Result);
	void JigMP_OnItemMoved(const struct FGuid& ItemUID, const struct FGuid& FromContainerUID, const struct FGuid& TocontainerUID, bool* Result);
	void JigMP_OnItemRemoved(const struct FGuid& ItemUID, const struct FGuid& FromContainerUID, const struct FGuid& TocontainerUID, class UActorComponent* ToComponent, bool* Result);
	void JigMP_OnMainContainerItemAdded(const struct FGuid& TocontainerUID, const struct FGuid& ItemUID, class FName ToContainerName, const struct FRepItemInfo& ItemInfo, class FName FromMain, bool* Result, class AActor** ActorRef);
	void JigMP_OnMainContainerItemRemoved(const struct FGuid& FromContainerUID, const struct FGuid& ItemUID, class FName ContainerName_0, const struct FRepItemInfo& ItemRemovedInfo, bool* Result);
	void JigMP_OnPickupAdded(const struct FRepItemInfo& Info, const struct FGuid& ItemUID, const struct FGuid& TocontainerUID, class FName ToContainer, bool* Result);
	void JigMP_OnPickupEquipped(class AActor* ActorRef, class FName ToContainerName, const struct FGuid& UID, const struct FGuid& TocontainerUID, const struct FRepItemInfo& Info, bool* Result, class AActor** OverrideActor);
	void JigMP_OnRequestDropItem(const struct FRepItemInfo& ItemInfo, class FName ContainerName_0, class AActor** ActorRef);
	void JigMP_OnTwoContainersSwap(class FName FromContainer, class FName ToContainer, bool* Result);
	void JigMP_OnUpdateChamberUID(const struct FGuid& NewUID, bool* Result);
	void JigSetCanInteract(bool CanInteract, bool EnablePhysics, bool* Result);
	void LockpickSuccessful();
	void OnBeginInteract(class AActor* InteractingActor, const TMap<struct FGameplayTag, class FText>& Options);
	void OnEndInteract();
	void OnExecuteInteract(class AActor* InteractingActor, const struct FGameplayTag& Option);
	void OnExecuteInteractDialogue(class AActor* InteractingActor);
	void OnExecuteInteractEnded();
	void OnRequestServerInteract(class AActor* Actor, const struct FGameplayTag& Option, const struct FS_JigPayload& Payload, bool* Result);
	void OnServerExecuteInteract(const struct FGameplayTag& Option, class AActor* ByActor, const struct FS_JigPayload& Payload);
	void OnStopExecuteInteract(class AActor* InteractingActor);
	void OpenContainer();
	void PickupBuildFromGround();
	void ReceiveBeginPlay();
	void SetInspected(bool Inspected_);
	void SetInteractDistance(class AActor* Target);
	void SetInteractOption(const struct FGameplayTag& Option);
	void SetPickupCount(int32 NewCount, bool* Result);
	void TraceForActor(bool* Ouput);
	void TraceToPlayer(bool* HitObject_);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MASTER_PicklockContainer_C">();
	}
	static class ABP_MASTER_PicklockContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MASTER_PicklockContainer_C>();
	}
};
static_assert(alignof(ABP_MASTER_PicklockContainer_C) == 0x000010, "Wrong alignment on ABP_MASTER_PicklockContainer_C");
static_assert(sizeof(ABP_MASTER_PicklockContainer_C) == 0x0003D0, "Wrong size on ABP_MASTER_PicklockContainer_C");
static_assert(offsetof(ABP_MASTER_PicklockContainer_C, UberGraphFrame_BP_MASTER_PicklockContainer_C) == 0x0002C0, "Member 'ABP_MASTER_PicklockContainer_C::UberGraphFrame_BP_MASTER_PicklockContainer_C' has a wrong offset!");
static_assert(offsetof(ABP_MASTER_PicklockContainer_C, AIOSubject) == 0x0002C8, "Member 'ABP_MASTER_PicklockContainer_C::AIOSubject' has a wrong offset!");
static_assert(offsetof(ABP_MASTER_PicklockContainer_C, BP_JigMultiplayer) == 0x0002D0, "Member 'ABP_MASTER_PicklockContainer_C::BP_JigMultiplayer' has a wrong offset!");
static_assert(offsetof(ABP_MASTER_PicklockContainer_C, StaticMesh) == 0x0002D8, "Member 'ABP_MASTER_PicklockContainer_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_MASTER_PicklockContainer_C, InteractingActorLoc) == 0x0002E0, "Member 'ABP_MASTER_PicklockContainer_C::InteractingActorLoc' has a wrong offset!");
static_assert(offsetof(ABP_MASTER_PicklockContainer_C, CurrentActor) == 0x0002F8, "Member 'ABP_MASTER_PicklockContainer_C::CurrentActor' has a wrong offset!");
static_assert(offsetof(ABP_MASTER_PicklockContainer_C, LootTable) == 0x000300, "Member 'ABP_MASTER_PicklockContainer_C::LootTable' has a wrong offset!");
static_assert(offsetof(ABP_MASTER_PicklockContainer_C, ContainerName) == 0x000308, "Member 'ABP_MASTER_PicklockContainer_C::ContainerName' has a wrong offset!");
static_assert(offsetof(ABP_MASTER_PicklockContainer_C, OpenedObject) == 0x000320, "Member 'ABP_MASTER_PicklockContainer_C::OpenedObject' has a wrong offset!");
static_assert(offsetof(ABP_MASTER_PicklockContainer_C, OutlineTimer) == 0x000330, "Member 'ABP_MASTER_PicklockContainer_C::OutlineTimer' has a wrong offset!");
static_assert(offsetof(ABP_MASTER_PicklockContainer_C, PlayerClose_) == 0x000338, "Member 'ABP_MASTER_PicklockContainer_C::PlayerClose_' has a wrong offset!");
static_assert(offsetof(ABP_MASTER_PicklockContainer_C, ContainerLooted) == 0x000339, "Member 'ABP_MASTER_PicklockContainer_C::ContainerLooted' has a wrong offset!");
static_assert(offsetof(ABP_MASTER_PicklockContainer_C, DurationToHold) == 0x000340, "Member 'ABP_MASTER_PicklockContainer_C::DurationToHold' has a wrong offset!");
static_assert(offsetof(ABP_MASTER_PicklockContainer_C, ChanceToBreakPicklock) == 0x000348, "Member 'ABP_MASTER_PicklockContainer_C::ChanceToBreakPicklock' has a wrong offset!");
static_assert(offsetof(ABP_MASTER_PicklockContainer_C, DefaultChanceToBreakPicklock) == 0x000350, "Member 'ABP_MASTER_PicklockContainer_C::DefaultChanceToBreakPicklock' has a wrong offset!");
static_assert(offsetof(ABP_MASTER_PicklockContainer_C, RefillTimer) == 0x000358, "Member 'ABP_MASTER_PicklockContainer_C::RefillTimer' has a wrong offset!");
static_assert(offsetof(ABP_MASTER_PicklockContainer_C, W_MagnifierUI) == 0x000360, "Member 'ABP_MASTER_PicklockContainer_C::W_MagnifierUI' has a wrong offset!");
static_assert(offsetof(ABP_MASTER_PicklockContainer_C, MagnifierTransform) == 0x000370, "Member 'ABP_MASTER_PicklockContainer_C::MagnifierTransform' has a wrong offset!");

}

