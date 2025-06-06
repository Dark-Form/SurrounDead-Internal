﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buildable_MASTER

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Enum_BuildingSnapTypes_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Buildable_MASTER.Buildable_MASTER_C
// 0x0190 (0x0428 - 0x0298)
class ABuildable_MASTER_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   DummySnapTester;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   SnapPoints;                                        // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIOSubjectComponent*                   AIOSubject;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_JigMultiplayer_C*                   BP_JigMultiplayer;                                 // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UJigsawItem_DataAsset_C*                PickupDataAsset;                                   // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGameplayTag, class FText>        InteractOptions;                                   // 0x02D8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, class FText>                StatOptions;                                       // 0x0328(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        Health;                                            // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RequiresPower_;                                    // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381[0x7];                                      // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CurrentActor;                                      // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InteractingActorLoc;                               // 0x0390(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHeld;                                            // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A9[0x7];                                      // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        OffSetDespawn;                                     // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                         CraftingMaterials;                                 // 0x03B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          PoweredOn_;                                        // 0x03C8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C9[0x7];                                      // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              PoweredOn;                                         // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              PoweredOff;                                        // 0x03E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          ShowGenerator;                                     // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F1[0x7];                                      // 0x03F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(class AActor* NewParam)> InteractWithObject;                       // 0x03F8(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          SpecialDestroy_;                                   // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_409[0x7];                                      // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              BeginInteract;                                     // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        PickupTimer;                                       // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActorLoaded();
	void ActorPreLoad();
	void ActorPreSave();
	void ActorSaved();
	void CheckDistanceFromActor();
	void ComponentsToSave(TArray<class UActorComponent*>* Components);
	void Event_HoldTimer();
	void Event_StopTimer();
	void Event_UpdateTimer();
	void ExecuteUbergraph_Buildable_MASTER(int32 EntryPoint);
	bool GetAllItemsInContainer();
	void GetBuildType(Enum_BuildingSnapTypes* Type);
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
	void JigMP_OnMainContainerItemRemoved(const struct FGuid& FromContainerUID, const struct FGuid& ItemUID, class FName ContainerName, const struct FRepItemInfo& ItemRemovedInfo, bool* Result);
	void JigMP_OnPickupAdded(const struct FRepItemInfo& Info, const struct FGuid& ItemUID, const struct FGuid& TocontainerUID, class FName ToContainer, bool* Result);
	void JigMP_OnPickupEquipped(class AActor* ActorRef, class FName ToContainerName, const struct FGuid& UID, const struct FGuid& TocontainerUID, const struct FRepItemInfo& Info, bool* Result, class AActor** OverrideActor);
	void JigMP_OnRequestDropItem(const struct FRepItemInfo& ItemInfo, class FName ContainerName, class AActor** ActorRef);
	void JigMP_OnTwoContainersSwap(class FName FromContainer, class FName ToContainer, bool* Result);
	void JigMP_OnUpdateChamberUID(const struct FGuid& NewUID, bool* Result);
	void JigSetCanInteract(bool CanInteract, bool EnablePhysics, bool* Result);
	void MC_Destroy(class AActor* Actor);
	void MC_OnInteractBuildable(class AActor* Actor);
	void OnBeginInteract(class AActor* InteractingActor, const TMap<struct FGameplayTag, class FText>& Options);
	void OnDestroy(class AActor* Actor);
	void OnEndInteract();
	void OnExecuteInteract(class AActor* InteractingActor, const struct FGameplayTag& Option);
	void OnExecuteInteractDialogue(class AActor* InteractingActor);
	void OnExecuteInteractEnded();
	void OnInteractBuildable(class AActor* Actor);
	void OnRep_PoweredOn_();
	void OnRequestServerInteract(class AActor* Actor, const struct FGameplayTag& Option, const struct FS_JigPayload& Payload, bool* Result);
	void OnServerExecuteInteract(const struct FGameplayTag& Option, class AActor* ByActor, const struct FS_JigPayload& Payload);
	void OnStopExecuteInteract(class AActor* InteractingActor);
	void OverrideBuildName(const class FText& Name_0);
	void Pickup(bool Quick_);
	void PickupBuildFromGround();
	void Power_Off(class AActor* Actor);
	void Power_On(class AActor* Actor);
	void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void RemoveFoliageComp(float Radius);
	void RemoveModularBuilds();
	void ReplacingObject();
	void Requires_Power_(bool* Required_);
	void SetInteractDistance(class AActor* Target);
	void SetInteractOption(const struct FGameplayTag& Option);
	void SetPickupCount(int32 NewCount, bool* Result);
	void SpawnCraftingMaterials();
	void SpawnItemOnDestroy(class UClass* Class_0);
	void Svr_Spawn();
	void UpdateUIHealth(double Health_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Buildable_MASTER_C">();
	}
	static class ABuildable_MASTER_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABuildable_MASTER_C>();
	}
};
static_assert(alignof(ABuildable_MASTER_C) == 0x000008, "Wrong alignment on ABuildable_MASTER_C");
static_assert(sizeof(ABuildable_MASTER_C) == 0x000428, "Wrong size on ABuildable_MASTER_C");
static_assert(offsetof(ABuildable_MASTER_C, UberGraphFrame) == 0x000298, "Member 'ABuildable_MASTER_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, DummySnapTester) == 0x0002A0, "Member 'ABuildable_MASTER_C::DummySnapTester' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, SnapPoints) == 0x0002A8, "Member 'ABuildable_MASTER_C::SnapPoints' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, AIOSubject) == 0x0002B0, "Member 'ABuildable_MASTER_C::AIOSubject' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, StaticMesh) == 0x0002B8, "Member 'ABuildable_MASTER_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, Scene) == 0x0002C0, "Member 'ABuildable_MASTER_C::Scene' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, BP_JigMultiplayer) == 0x0002C8, "Member 'ABuildable_MASTER_C::BP_JigMultiplayer' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, PickupDataAsset) == 0x0002D0, "Member 'ABuildable_MASTER_C::PickupDataAsset' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, InteractOptions) == 0x0002D8, "Member 'ABuildable_MASTER_C::InteractOptions' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, StatOptions) == 0x000328, "Member 'ABuildable_MASTER_C::StatOptions' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, Health) == 0x000378, "Member 'ABuildable_MASTER_C::Health' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, RequiresPower_) == 0x000380, "Member 'ABuildable_MASTER_C::RequiresPower_' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, CurrentActor) == 0x000388, "Member 'ABuildable_MASTER_C::CurrentActor' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, InteractingActorLoc) == 0x000390, "Member 'ABuildable_MASTER_C::InteractingActorLoc' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, IsHeld) == 0x0003A8, "Member 'ABuildable_MASTER_C::IsHeld' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, OffSetDespawn) == 0x0003B0, "Member 'ABuildable_MASTER_C::OffSetDespawn' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, CraftingMaterials) == 0x0003B8, "Member 'ABuildable_MASTER_C::CraftingMaterials' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, PoweredOn_) == 0x0003C8, "Member 'ABuildable_MASTER_C::PoweredOn_' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, PoweredOn) == 0x0003D0, "Member 'ABuildable_MASTER_C::PoweredOn' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, PoweredOff) == 0x0003E0, "Member 'ABuildable_MASTER_C::PoweredOff' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, ShowGenerator) == 0x0003F0, "Member 'ABuildable_MASTER_C::ShowGenerator' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, InteractWithObject) == 0x0003F8, "Member 'ABuildable_MASTER_C::InteractWithObject' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, SpecialDestroy_) == 0x000408, "Member 'ABuildable_MASTER_C::SpecialDestroy_' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, BeginInteract) == 0x000410, "Member 'ABuildable_MASTER_C::BeginInteract' has a wrong offset!");
static_assert(offsetof(ABuildable_MASTER_C, PickupTimer) == 0x000420, "Member 'ABuildable_MASTER_C::PickupTimer' has a wrong offset!");

}

