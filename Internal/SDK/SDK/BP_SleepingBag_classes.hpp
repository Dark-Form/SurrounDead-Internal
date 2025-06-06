﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SleepingBag

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MasterObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SleepingBag.BP_SleepingBag_C
// 0x0028 (0x02C8 - 0x02A0)
class ABP_SleepingBag_C final : public ABP_MasterObject_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAIOSubjectComponent*                   AIOSubject;                                        // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USleepingUI_C*                          SleepUI;                                           // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Outline_;                                          // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SpawnPointSet;                                     // 0x02C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_MPLootContainer_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void ExecuteUbergraph_BP_SleepingBag(int32 EntryPoint);
	void GetInteractOptions(TMap<struct FGameplayTag, class FText>* Options);
	void GetItemInfo(class UJigsawItem_DataAsset_C** Info, int32* Count, struct FS_RandomStatsConfig* RandomStatsConfig, TMap<class FString, class FString>* CustomData);
	void GetJigMultiplayerComponent(class UActorComponent** JigComp);
	void GetMainSceneComp(class USceneComponent** Comp);
	void GetPickupName(class FText* Result);
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
	void Outline(bool NewValue);
	void PickupBuildFromGround();
	void ReceiveBeginPlay();
	void SetInteractOption(const struct FGameplayTag& Option);
	void SetPickupCount(int32 NewCount, bool* Result);
	void SetSpawnPoint();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SleepingBag_C">();
	}
	static class ABP_SleepingBag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SleepingBag_C>();
	}
};
static_assert(alignof(ABP_SleepingBag_C) == 0x000008, "Wrong alignment on ABP_SleepingBag_C");
static_assert(sizeof(ABP_SleepingBag_C) == 0x0002C8, "Wrong size on ABP_SleepingBag_C");
static_assert(offsetof(ABP_SleepingBag_C, UberGraphFrame) == 0x0002A0, "Member 'ABP_SleepingBag_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SleepingBag_C, AIOSubject) == 0x0002A8, "Member 'ABP_SleepingBag_C::AIOSubject' has a wrong offset!");
static_assert(offsetof(ABP_SleepingBag_C, StaticMesh) == 0x0002B0, "Member 'ABP_SleepingBag_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_SleepingBag_C, SleepUI) == 0x0002B8, "Member 'ABP_SleepingBag_C::SleepUI' has a wrong offset!");
static_assert(offsetof(ABP_SleepingBag_C, Outline_) == 0x0002C0, "Member 'ABP_SleepingBag_C::Outline_' has a wrong offset!");
static_assert(offsetof(ABP_SleepingBag_C, SpawnPointSet) == 0x0002C1, "Member 'ABP_SleepingBag_C::SpawnPointSet' has a wrong offset!");

}

