﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BuildableMaster_Container

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Buildable_MASTER_classes.hpp"
#include "S_InvWeight_structs.hpp"
#include "S_ReplicatedContainerInfo_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BuildableMaster_Container.BuildableMaster_Container_C
// 0x0058 (0x0480 - 0x0428)
class ABuildableMaster_Container_C : public ABuildable_MASTER_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BuildableMaster_Container_C;        // 0x0428(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DropItemLocation;                                  // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_ReplicatedContainerInfo>     MainJigContainers;                                 // 0x0438(0x0010)(Edit, BlueprintVisible, SaveGame, ContainsInstancedReference)
	TArray<struct FGuid>                          MainUIDs;                                          // 0x0448(0x0010)(Edit, BlueprintVisible, SaveGame)
	TArray<struct FS_InvWeight>                   Weights;                                           // 0x0458(0x0010)(Edit, BlueprintVisible, SaveGame)
	class FText                                   ContainerName;                                     // 0x0468(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)

public:
	void ActorLoaded();
	void BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void DropAll();
	void Event_BeginInteract();
	void ExecuteUbergraph_BuildableMaster_Container(int32 EntryPoint);
	void GetName(class FText* Name_0);
	void PickupContainer();
	void ReceiveBeginPlay();
	void UpdateStorageStat();
	void ActorPreSave();
	void JigMP_OnMainContainerItemAdded(const struct FGuid& TocontainerUID, const struct FGuid& ItemUID, class FName ToContainerName, const struct FRepItemInfo& ItemInfo, class FName FromMain, bool* Result, class AActor** ActorRef);
	void JigMP_OnMainContainerItemRemoved(const struct FGuid& FromContainerUID, const struct FGuid& ItemUID, class FName ContainerName_0, const struct FRepItemInfo& ItemRemovedInfo, bool* Result);
	void OnBeginInteract(class AActor* InteractingActor, const TMap<struct FGameplayTag, class FText>& Options);
	void OnInteractBuildable(class AActor* Actor);
	void OnServerExecuteInteract(const struct FGameplayTag& Option, class AActor* ByActor, const struct FS_JigPayload& Payload);
	void OverrideBuildName(const class FText& Name_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BuildableMaster_Container_C">();
	}
	static class ABuildableMaster_Container_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABuildableMaster_Container_C>();
	}
};
static_assert(alignof(ABuildableMaster_Container_C) == 0x000008, "Wrong alignment on ABuildableMaster_Container_C");
static_assert(sizeof(ABuildableMaster_Container_C) == 0x000480, "Wrong size on ABuildableMaster_Container_C");
static_assert(offsetof(ABuildableMaster_Container_C, UberGraphFrame_BuildableMaster_Container_C) == 0x000428, "Member 'ABuildableMaster_Container_C::UberGraphFrame_BuildableMaster_Container_C' has a wrong offset!");
static_assert(offsetof(ABuildableMaster_Container_C, DropItemLocation) == 0x000430, "Member 'ABuildableMaster_Container_C::DropItemLocation' has a wrong offset!");
static_assert(offsetof(ABuildableMaster_Container_C, MainJigContainers) == 0x000438, "Member 'ABuildableMaster_Container_C::MainJigContainers' has a wrong offset!");
static_assert(offsetof(ABuildableMaster_Container_C, MainUIDs) == 0x000448, "Member 'ABuildableMaster_Container_C::MainUIDs' has a wrong offset!");
static_assert(offsetof(ABuildableMaster_Container_C, Weights) == 0x000458, "Member 'ABuildableMaster_Container_C::Weights' has a wrong offset!");
static_assert(offsetof(ABuildableMaster_Container_C, ContainerName) == 0x000468, "Member 'ABuildableMaster_Container_C::ContainerName' has a wrong offset!");

}

