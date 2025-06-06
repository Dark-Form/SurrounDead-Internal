﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RandomCivilian

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_MainFriendly_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RandomCivilian.BP_RandomCivilian_C
// 0x00D0 (0x0760 - 0x0690)
class ABP_RandomCivilian_C : public ABP_MainFriendly_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_RandomCivilian_C;                // 0x0690(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                       NameWidget;                                        // 0x0698(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BackpackMesh;                                      // 0x06A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BeardMesh;                                         // 0x06A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   HairMesh;                                          // 0x06B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIOSubjectComponent*                   AIOSubject;                                        // 0x06B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNavigationInvokerComponent*            NavigationInvoker;                                 // 0x06C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMale_;                                           // 0x06C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C9[0x7];                                      // 0x06C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USkeletalMesh*>                  Meshes;                                            // 0x06D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UStaticMesh*>                    HairMeshes;                                        // 0x06E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UStaticMesh*>                    BeardMeshes;                                       // 0x06F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UStaticMesh*, struct FTransform>   BackpackMeshes;                                    // 0x0700(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        Health;                                            // 0x0750(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetPickupCount(int32 NewCount, bool* Result);
	void SetName();
	void SetMeshAndMaterial();
	void SetInteractOption(const struct FGameplayTag& Option);
	void ReceiveBeginPlay();
	void PickupBuildFromGround();
	void OnStopExecuteInteract(class AActor* InteractingActor);
	void OnServerExecuteInteract(const struct FGameplayTag& Option, class AActor* ByActor, const struct FS_JigPayload& Payload);
	void OnRequestServerInteract(class AActor* Actor, const struct FGameplayTag& Option, const struct FS_JigPayload& Payload, bool* Result);
	void OnExecuteInteractEnded();
	void OnExecuteInteractDialogue(class AActor* InteractingActor);
	void OnExecuteInteract(class AActor* InteractingActor, const struct FGameplayTag& Option);
	void OnEndInteract();
	void OnBeginInteract(class AActor* InteractingActor, const TMap<struct FGameplayTag, class FText>& Options);
	void JigSetCanInteract(bool CanInteract, bool EnablePhysics, bool* Result);
	void JigCanInteract(bool* Result);
	void GetMainSceneComp(class USceneComponent** Comp);
	void GetJigMultiplayerComponent(class UActorComponent** JigComp);
	void GetItemInfo(class UJigsawItem_DataAsset_C** Info, int32* Count, struct FS_RandomStatsConfig* RandomStatsConfig, TMap<class FString, class FString>* CustomData);
	void GetInteractOptions(TMap<struct FGameplayTag, class FText>* Options);
	void ExecuteUbergraph_BP_RandomCivilian(int32 EntryPoint);
	void BndEvt__BP_Zombie_Master_AIOSubject_K2Node_ComponentBoundEvent_2_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RandomCivilian_C">();
	}
	static class ABP_RandomCivilian_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RandomCivilian_C>();
	}
};
static_assert(alignof(ABP_RandomCivilian_C) == 0x000010, "Wrong alignment on ABP_RandomCivilian_C");
static_assert(sizeof(ABP_RandomCivilian_C) == 0x000760, "Wrong size on ABP_RandomCivilian_C");
static_assert(offsetof(ABP_RandomCivilian_C, UberGraphFrame_BP_RandomCivilian_C) == 0x000690, "Member 'ABP_RandomCivilian_C::UberGraphFrame_BP_RandomCivilian_C' has a wrong offset!");
static_assert(offsetof(ABP_RandomCivilian_C, NameWidget) == 0x000698, "Member 'ABP_RandomCivilian_C::NameWidget' has a wrong offset!");
static_assert(offsetof(ABP_RandomCivilian_C, BackpackMesh) == 0x0006A0, "Member 'ABP_RandomCivilian_C::BackpackMesh' has a wrong offset!");
static_assert(offsetof(ABP_RandomCivilian_C, BeardMesh) == 0x0006A8, "Member 'ABP_RandomCivilian_C::BeardMesh' has a wrong offset!");
static_assert(offsetof(ABP_RandomCivilian_C, HairMesh) == 0x0006B0, "Member 'ABP_RandomCivilian_C::HairMesh' has a wrong offset!");
static_assert(offsetof(ABP_RandomCivilian_C, AIOSubject) == 0x0006B8, "Member 'ABP_RandomCivilian_C::AIOSubject' has a wrong offset!");
static_assert(offsetof(ABP_RandomCivilian_C, NavigationInvoker) == 0x0006C0, "Member 'ABP_RandomCivilian_C::NavigationInvoker' has a wrong offset!");
static_assert(offsetof(ABP_RandomCivilian_C, IsMale_) == 0x0006C8, "Member 'ABP_RandomCivilian_C::IsMale_' has a wrong offset!");
static_assert(offsetof(ABP_RandomCivilian_C, Meshes) == 0x0006D0, "Member 'ABP_RandomCivilian_C::Meshes' has a wrong offset!");
static_assert(offsetof(ABP_RandomCivilian_C, HairMeshes) == 0x0006E0, "Member 'ABP_RandomCivilian_C::HairMeshes' has a wrong offset!");
static_assert(offsetof(ABP_RandomCivilian_C, BeardMeshes) == 0x0006F0, "Member 'ABP_RandomCivilian_C::BeardMeshes' has a wrong offset!");
static_assert(offsetof(ABP_RandomCivilian_C, BackpackMeshes) == 0x000700, "Member 'ABP_RandomCivilian_C::BackpackMeshes' has a wrong offset!");
static_assert(offsetof(ABP_RandomCivilian_C, Health) == 0x000750, "Member 'ABP_RandomCivilian_C::Health' has a wrong offset!");

}

