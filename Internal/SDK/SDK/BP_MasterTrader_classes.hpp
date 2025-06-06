﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MasterTrader

#include "Basic.hpp"

#include "BP_MasterAICharacter_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "E_AIBehaviour_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MasterTrader.BP_MasterTrader_C
// 0x0160 (0x09D0 - 0x0870)
class ABP_MasterTrader_C final : public ABP_MasterAICharacter_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_MasterTrader_C;                  // 0x0870(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_JigMultiplayer_C*                   BP_JigMultiplayer;                                 // 0x0878(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIOSubjectComponent*                   AIOSubject;                                        // 0x0880(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BackpackMesh;                                      // 0x0888(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   HairMesh;                                          // 0x0890(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BeardMesh;                                         // 0x0898(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UDialogue>                  Dialogue;                                          // 0x08A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	ETextGender                                   Gender_;                                           // 0x08A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A9[0x7];                                      // 0x08A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         RangedWeapon;                                      // 0x08B0(0x0010)(Edit, BlueprintVisible)
	TArray<class UClass*>                         MeleeWeapon;                                       // 0x08C0(0x0010)(Edit, BlueprintVisible)
	bool                                          StartWithRangeWeaponEquipped_;                     // 0x08D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D1[0x7];                                      // 0x08D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USkeletalMesh*>                  Meshes;                                            // 0x08D8(0x0010)(Edit, BlueprintVisible)
	TArray<class UStaticMesh*>                    HairMeshes;                                        // 0x08E8(0x0010)(Edit, BlueprintVisible)
	TArray<class UStaticMesh*>                    BeardMeshes;                                       // 0x08F8(0x0010)(Edit, BlueprintVisible)
	TMap<class UStaticMesh*, struct FTransform>   BackpackMeshes;                                    // 0x0908(0x0050)(Edit, BlueprintVisible)
	class AActor*                                 CurrentActor;                                      // 0x0958(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InteractingActorLoc;                               // 0x0960(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Action_Name;                                       // 0x0978(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWidgetComponent*                       Marker;                                            // 0x0990(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CanAddMarker_;                                     // 0x0998(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_999[0x7];                                      // 0x0999(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           MarkerTimer;                                       // 0x09A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Burning_;                                       // 0x09A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A9[0x7];                                      // 0x09A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               BurningEffect;                                     // 0x09B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           BurningTimer;                                      // 0x09B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Looted;                                            // 0x09C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddMarker(class UWidgetComponent* Marker_0);
	void AI_Health();
	void AIHealthBarInfo(bool* Visible_, class FString* Name_0, bool* Boss_);
	void BndEvt__BP_Zombie_Master_AIOSubject_K2Node_ComponentBoundEvent_2_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void CanAddMarkerToAI_(bool* CanAdd_);
	void CanStompAI_(bool* Stomp_);
	void CheckDistanceFromActor();
	void Death(class AActor* Player);
	void Event_Fire();
	void Event_Marker();
	void ExecuteUbergraph_BP_MasterTrader(int32 EntryPoint);
	void GetInteractOptions(TMap<struct FGameplayTag, class FText>* Options);
	void GetItemInfo(class UJigsawItem_DataAsset_C** Info, int32* Count, struct FS_RandomStatsConfig* RandomStatsConfig, TMap<class FString, class FString>* CustomData);
	void GetJigMultiplayerComponent(class UActorComponent** JigComp);
	void GetMainSceneComp(class USceneComponent** Comp);
	void GetMarker(class UTexture2D** Texture, struct FLinearColor* Color, double* MarkerOffset);
	void GetMesh(class USkeletalMeshComponent** Mesh_0);
	void GetMovementSpeeds(double* RoamingSpeed, double* AlertSpeed, double* AttackSpeed);
	void HealthMultiplier(float NewValue);
	void HitByVehicle(double Speed, const struct FVector& Direction);
	void IsAIBurning_(bool* IsBurning_);
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
	void OnBeginInteract(class AActor* InteractingActor, const TMap<struct FGameplayTag, class FText>& Options);
	void OnEndInteract();
	void OnExecuteInteract(class AActor* InteractingActor, const struct FGameplayTag& Option);
	void OnExecuteInteractDialogue(class AActor* InteractingActor);
	void OnExecuteInteractEnded();
	void OnRequestServerInteract(class AActor* Actor, const struct FGameplayTag& Option, const struct FS_JigPayload& Payload, bool* Result);
	void OnServerExecuteInteract(const struct FGameplayTag& Option, class AActor* ByActor, const struct FS_JigPayload& Payload);
	void OnStopExecuteInteract(class AActor* InteractingActor);
	void OverrideName(const class FString& Name_0);
	void PickupBuildFromGround();
	void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveBeginPlay();
	void SetBurning(bool Burning_, double Dmg, class AActor* Actor);
	void SetInteractDistance(class AActor* Target);
	void SetInteractOption(const struct FGameplayTag& Option);
	void SetMeshAndMaterial();
	void SetPickupCount(int32 NewCount, bool* Result);
	void SetWeapons();
	void StopBurning();

	void AI_Is_Dead_(bool* Dead) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MasterTrader_C">();
	}
	static class ABP_MasterTrader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MasterTrader_C>();
	}
};
static_assert(alignof(ABP_MasterTrader_C) == 0x000010, "Wrong alignment on ABP_MasterTrader_C");
static_assert(sizeof(ABP_MasterTrader_C) == 0x0009D0, "Wrong size on ABP_MasterTrader_C");
static_assert(offsetof(ABP_MasterTrader_C, UberGraphFrame_BP_MasterTrader_C) == 0x000870, "Member 'ABP_MasterTrader_C::UberGraphFrame_BP_MasterTrader_C' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, BP_JigMultiplayer) == 0x000878, "Member 'ABP_MasterTrader_C::BP_JigMultiplayer' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, AIOSubject) == 0x000880, "Member 'ABP_MasterTrader_C::AIOSubject' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, BackpackMesh) == 0x000888, "Member 'ABP_MasterTrader_C::BackpackMesh' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, HairMesh) == 0x000890, "Member 'ABP_MasterTrader_C::HairMesh' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, BeardMesh) == 0x000898, "Member 'ABP_MasterTrader_C::BeardMesh' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, Dialogue) == 0x0008A0, "Member 'ABP_MasterTrader_C::Dialogue' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, Gender_) == 0x0008A8, "Member 'ABP_MasterTrader_C::Gender_' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, RangedWeapon) == 0x0008B0, "Member 'ABP_MasterTrader_C::RangedWeapon' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, MeleeWeapon) == 0x0008C0, "Member 'ABP_MasterTrader_C::MeleeWeapon' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, StartWithRangeWeaponEquipped_) == 0x0008D0, "Member 'ABP_MasterTrader_C::StartWithRangeWeaponEquipped_' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, Meshes) == 0x0008D8, "Member 'ABP_MasterTrader_C::Meshes' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, HairMeshes) == 0x0008E8, "Member 'ABP_MasterTrader_C::HairMeshes' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, BeardMeshes) == 0x0008F8, "Member 'ABP_MasterTrader_C::BeardMeshes' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, BackpackMeshes) == 0x000908, "Member 'ABP_MasterTrader_C::BackpackMeshes' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, CurrentActor) == 0x000958, "Member 'ABP_MasterTrader_C::CurrentActor' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, InteractingActorLoc) == 0x000960, "Member 'ABP_MasterTrader_C::InteractingActorLoc' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, Action_Name) == 0x000978, "Member 'ABP_MasterTrader_C::Action_Name' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, Marker) == 0x000990, "Member 'ABP_MasterTrader_C::Marker' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, CanAddMarker_) == 0x000998, "Member 'ABP_MasterTrader_C::CanAddMarker_' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, MarkerTimer) == 0x0009A0, "Member 'ABP_MasterTrader_C::MarkerTimer' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, Is_Burning_) == 0x0009A8, "Member 'ABP_MasterTrader_C::Is_Burning_' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, BurningEffect) == 0x0009B0, "Member 'ABP_MasterTrader_C::BurningEffect' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, BurningTimer) == 0x0009B8, "Member 'ABP_MasterTrader_C::BurningTimer' has a wrong offset!");
static_assert(offsetof(ABP_MasterTrader_C, Looted) == 0x0009C0, "Member 'ABP_MasterTrader_C::Looted' has a wrong offset!");

}

