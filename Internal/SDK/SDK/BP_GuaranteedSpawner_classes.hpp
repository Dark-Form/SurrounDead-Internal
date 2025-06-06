﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GuaranteedSpawner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_LaptopEventMaster_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GuaranteedSpawner.BP_GuaranteedSpawner_C
// 0x00C8 (0x0398 - 0x02D0)
class ABP_GuaranteedSpawner_C : public ABP_LaptopEventMaster_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_GuaranteedSpawner_C;             // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                       magnifier;                                         // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Lid;                                            // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_Rot_029EDFD8418A46832A52B8B6B3D0ECE8;     // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_029EDFD8418A46832A52B8B6B3D0ECE8; // 0x0304(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_305[0x3];                                      // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                         Items;                                             // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ContainerName;                                     // 0x0320(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	TMulticastInlineDelegate<void()>              SetCustomDepth_True;                               // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              SetCustomDepth_False;                              // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           OutlineTimer;                                      // 0x0358(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayerClose_;                                      // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Opened;                                            // 0x0361(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHeld;                                            // 0x0362(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_363[0x5];                                      // 0x0363(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ChanceToProduceNoise;                              // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DefaultChanceToProduceNoise;                       // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DurationToHold;                                    // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           HoldToInteractTimer;                               // 0x0380(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        SearchSoundComp;                                   // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CurrentActor;                                      // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Timeline__UpdateFunc();
	void Timeline__FinishedFunc();
	void Svr_CrateOpen();
	void SetPickupCount(int32 NewCount, bool* Result);
	void SetInteractOption(const struct FGameplayTag& Option);
	void SearchSound(bool Spawn_);
	void ReceiveBeginPlay();
	void PickupBuildFromGround();
	void PauseInteract();
	void OpenContainer();
	void OnStopExecuteInteract(class AActor* InteractingActor);
	void OnServerExecuteInteract(const struct FGameplayTag& Option, class AActor* ByActor, const struct FS_JigPayload& Payload);
	void OnRequestServerInteract(class AActor* Actor, const struct FGameplayTag& Option, const struct FS_JigPayload& Payload, bool* Result);
	void OnExecuteInteractEnded();
	void OnExecuteInteractDialogue(class AActor* InteractingActor);
	void OnExecuteInteract(class AActor* InteractingActor, const struct FGameplayTag& Option);
	void OnEndInteract();
	void OnBeginInteract(class AActor* InteractingActor, const TMap<struct FGameplayTag, class FText>& Options);
	void NoiseEvent();
	void MC_CrateOpen();
	void JigSetCanInteract(bool CanInteract, bool EnablePhysics, bool* Result);
	void JigCanInteract(bool* Result);
	void IsHeld_(bool* Held_);
	void HoldToInteract();
	void GetSettings(double* ChanceToProduceNoise_0, double* Default_ChanceToProduceNoise, double* DurationToHold_0);
	void GetQuestArgument(const class FString& Argument);
	void GetMainSceneComp(class USceneComponent** Comp);
	void GetJigMultiplayerComponent(class UActorComponent** JigComp);
	void GetItemInfo(class UJigsawItem_DataAsset_C** Info, int32* Count, struct FS_RandomStatsConfig* RandomStatsConfig, TMap<class FString, class FString>* CustomData);
	void GetInteractOptions(TMap<struct FGameplayTag, class FText>* Options);
	void ExecuteUbergraph_BP_GuaranteedSpawner(int32 EntryPoint);
	void Event_Outline();
	void Event_HoldToInteract();
	void DistanceOutline();
	void BndEvt__BP_GuaranteedSpawner_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GuaranteedSpawner_C">();
	}
	static class ABP_GuaranteedSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GuaranteedSpawner_C>();
	}
};
static_assert(alignof(ABP_GuaranteedSpawner_C) == 0x000008, "Wrong alignment on ABP_GuaranteedSpawner_C");
static_assert(sizeof(ABP_GuaranteedSpawner_C) == 0x000398, "Wrong size on ABP_GuaranteedSpawner_C");
static_assert(offsetof(ABP_GuaranteedSpawner_C, UberGraphFrame_BP_GuaranteedSpawner_C) == 0x0002D0, "Member 'ABP_GuaranteedSpawner_C::UberGraphFrame_BP_GuaranteedSpawner_C' has a wrong offset!");
static_assert(offsetof(ABP_GuaranteedSpawner_C, magnifier) == 0x0002D8, "Member 'ABP_GuaranteedSpawner_C::magnifier' has a wrong offset!");
static_assert(offsetof(ABP_GuaranteedSpawner_C, Scene) == 0x0002E0, "Member 'ABP_GuaranteedSpawner_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_GuaranteedSpawner_C, Arrow) == 0x0002E8, "Member 'ABP_GuaranteedSpawner_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_GuaranteedSpawner_C, SM_Lid) == 0x0002F0, "Member 'ABP_GuaranteedSpawner_C::SM_Lid' has a wrong offset!");
static_assert(offsetof(ABP_GuaranteedSpawner_C, StaticMesh) == 0x0002F8, "Member 'ABP_GuaranteedSpawner_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_GuaranteedSpawner_C, Timeline_Rot_029EDFD8418A46832A52B8B6B3D0ECE8) == 0x000300, "Member 'ABP_GuaranteedSpawner_C::Timeline_Rot_029EDFD8418A46832A52B8B6B3D0ECE8' has a wrong offset!");
static_assert(offsetof(ABP_GuaranteedSpawner_C, Timeline__Direction_029EDFD8418A46832A52B8B6B3D0ECE8) == 0x000304, "Member 'ABP_GuaranteedSpawner_C::Timeline__Direction_029EDFD8418A46832A52B8B6B3D0ECE8' has a wrong offset!");
static_assert(offsetof(ABP_GuaranteedSpawner_C, Timeline) == 0x000308, "Member 'ABP_GuaranteedSpawner_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_GuaranteedSpawner_C, Items) == 0x000310, "Member 'ABP_GuaranteedSpawner_C::Items' has a wrong offset!");
static_assert(offsetof(ABP_GuaranteedSpawner_C, ContainerName) == 0x000320, "Member 'ABP_GuaranteedSpawner_C::ContainerName' has a wrong offset!");
static_assert(offsetof(ABP_GuaranteedSpawner_C, SetCustomDepth_True) == 0x000338, "Member 'ABP_GuaranteedSpawner_C::SetCustomDepth_True' has a wrong offset!");
static_assert(offsetof(ABP_GuaranteedSpawner_C, SetCustomDepth_False) == 0x000348, "Member 'ABP_GuaranteedSpawner_C::SetCustomDepth_False' has a wrong offset!");
static_assert(offsetof(ABP_GuaranteedSpawner_C, OutlineTimer) == 0x000358, "Member 'ABP_GuaranteedSpawner_C::OutlineTimer' has a wrong offset!");
static_assert(offsetof(ABP_GuaranteedSpawner_C, PlayerClose_) == 0x000360, "Member 'ABP_GuaranteedSpawner_C::PlayerClose_' has a wrong offset!");
static_assert(offsetof(ABP_GuaranteedSpawner_C, Opened) == 0x000361, "Member 'ABP_GuaranteedSpawner_C::Opened' has a wrong offset!");
static_assert(offsetof(ABP_GuaranteedSpawner_C, IsHeld) == 0x000362, "Member 'ABP_GuaranteedSpawner_C::IsHeld' has a wrong offset!");
static_assert(offsetof(ABP_GuaranteedSpawner_C, ChanceToProduceNoise) == 0x000368, "Member 'ABP_GuaranteedSpawner_C::ChanceToProduceNoise' has a wrong offset!");
static_assert(offsetof(ABP_GuaranteedSpawner_C, DefaultChanceToProduceNoise) == 0x000370, "Member 'ABP_GuaranteedSpawner_C::DefaultChanceToProduceNoise' has a wrong offset!");
static_assert(offsetof(ABP_GuaranteedSpawner_C, DurationToHold) == 0x000378, "Member 'ABP_GuaranteedSpawner_C::DurationToHold' has a wrong offset!");
static_assert(offsetof(ABP_GuaranteedSpawner_C, HoldToInteractTimer) == 0x000380, "Member 'ABP_GuaranteedSpawner_C::HoldToInteractTimer' has a wrong offset!");
static_assert(offsetof(ABP_GuaranteedSpawner_C, SearchSoundComp) == 0x000388, "Member 'ABP_GuaranteedSpawner_C::SearchSoundComp' has a wrong offset!");
static_assert(offsetof(ABP_GuaranteedSpawner_C, CurrentActor) == 0x000390, "Member 'ABP_GuaranteedSpawner_C::CurrentActor' has a wrong offset!");

}

