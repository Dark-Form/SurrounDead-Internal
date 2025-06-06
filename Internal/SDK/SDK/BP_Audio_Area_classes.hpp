﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Audio_Area

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ST_Audio_structs.hpp"
#include "E_Switch_Method_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Audio_Area.BP_Audio_Area_C
// 0x00E0 (0x0378 - 0x0298)
class ABP_Audio_Area_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_VisualizeArea;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   T_Priority;                                        // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    AudioBillboard;                                    // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Trigger_Collision;                                 // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          GameStarted;                                       // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Audio_Manager_C*                    AudioReference;                                    // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   AreaName;                                          // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Priority;                                          // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DC[0x4];                                      // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FST_Audio>                      Ambient_Sounds;                                    // 0x02E0(0x0010)(Edit, BlueprintVisible)
	TArray<struct FST_Audio>                      ExplorationMusic;                                  // 0x02F0(0x0010)(Edit, BlueprintVisible)
	TArray<struct FST_Audio>                      CombatMusic;                                       // 0x0300(0x0010)(Edit, BlueprintVisible)
	TArray<struct FST_Audio>                      RandomAmbientSoundCue;                             // 0x0310(0x0010)(Edit, BlueprintVisible)
	double                                        RandomAmbientSoundMinDelay;                        // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RandomAmbientSoundMaxDelay;                        // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Switch_Method                               E_AudioSwitchMethod;                               // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_331[0x7];                                      // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundCue*                              Switch_Stinger_Combat;                             // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Switch_Stinger_Combat_Delay;                       // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Switch_Stinger_Exploration;                        // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Switch_Stinger_Exploration_Delay;                  // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Delete_SM_VisualizeArea;                           // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOverwriteVisualizationSettings;                   // 0x0359(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bVisualizeArea;                                    // 0x035A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DelayBeforeStart;                                  // 0x035B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseDelayedMusic;                                   // 0x035C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35D[0x3];                                      // 0x035D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DelayedFadeDuration;                               // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DelayBetweenMusicMin;                              // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DelayBetweenMusicMax;                              // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_BP_Audio_Area(int32 EntryPoint);
	void NewAudioManager(class ABP_Audio_Manager_C* AudioReference_0);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void VisualizeArea(bool bNewVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Audio_Area_C">();
	}
	static class ABP_Audio_Area_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Audio_Area_C>();
	}
};
static_assert(alignof(ABP_Audio_Area_C) == 0x000008, "Wrong alignment on ABP_Audio_Area_C");
static_assert(sizeof(ABP_Audio_Area_C) == 0x000378, "Wrong size on ABP_Audio_Area_C");
static_assert(offsetof(ABP_Audio_Area_C, UberGraphFrame) == 0x000298, "Member 'ABP_Audio_Area_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, SM_VisualizeArea) == 0x0002A0, "Member 'ABP_Audio_Area_C::SM_VisualizeArea' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, T_Priority) == 0x0002A8, "Member 'ABP_Audio_Area_C::T_Priority' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, AudioBillboard) == 0x0002B0, "Member 'ABP_Audio_Area_C::AudioBillboard' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, Trigger_Collision) == 0x0002B8, "Member 'ABP_Audio_Area_C::Trigger_Collision' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, GameStarted) == 0x0002C0, "Member 'ABP_Audio_Area_C::GameStarted' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, AudioReference) == 0x0002C8, "Member 'ABP_Audio_Area_C::AudioReference' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, AreaName) == 0x0002D0, "Member 'ABP_Audio_Area_C::AreaName' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, Priority) == 0x0002D8, "Member 'ABP_Audio_Area_C::Priority' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, Ambient_Sounds) == 0x0002E0, "Member 'ABP_Audio_Area_C::Ambient_Sounds' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, ExplorationMusic) == 0x0002F0, "Member 'ABP_Audio_Area_C::ExplorationMusic' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, CombatMusic) == 0x000300, "Member 'ABP_Audio_Area_C::CombatMusic' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, RandomAmbientSoundCue) == 0x000310, "Member 'ABP_Audio_Area_C::RandomAmbientSoundCue' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, RandomAmbientSoundMinDelay) == 0x000320, "Member 'ABP_Audio_Area_C::RandomAmbientSoundMinDelay' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, RandomAmbientSoundMaxDelay) == 0x000328, "Member 'ABP_Audio_Area_C::RandomAmbientSoundMaxDelay' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, E_AudioSwitchMethod) == 0x000330, "Member 'ABP_Audio_Area_C::E_AudioSwitchMethod' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, Switch_Stinger_Combat) == 0x000338, "Member 'ABP_Audio_Area_C::Switch_Stinger_Combat' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, Switch_Stinger_Combat_Delay) == 0x000340, "Member 'ABP_Audio_Area_C::Switch_Stinger_Combat_Delay' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, Switch_Stinger_Exploration) == 0x000348, "Member 'ABP_Audio_Area_C::Switch_Stinger_Exploration' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, Switch_Stinger_Exploration_Delay) == 0x000350, "Member 'ABP_Audio_Area_C::Switch_Stinger_Exploration_Delay' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, Delete_SM_VisualizeArea) == 0x000358, "Member 'ABP_Audio_Area_C::Delete_SM_VisualizeArea' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, bOverwriteVisualizationSettings) == 0x000359, "Member 'ABP_Audio_Area_C::bOverwriteVisualizationSettings' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, bVisualizeArea) == 0x00035A, "Member 'ABP_Audio_Area_C::bVisualizeArea' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, DelayBeforeStart) == 0x00035B, "Member 'ABP_Audio_Area_C::DelayBeforeStart' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, UseDelayedMusic) == 0x00035C, "Member 'ABP_Audio_Area_C::UseDelayedMusic' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, DelayedFadeDuration) == 0x000360, "Member 'ABP_Audio_Area_C::DelayedFadeDuration' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, DelayBetweenMusicMin) == 0x000368, "Member 'ABP_Audio_Area_C::DelayBetweenMusicMin' has a wrong offset!");
static_assert(offsetof(ABP_Audio_Area_C, DelayBetweenMusicMax) == 0x000370, "Member 'ABP_Audio_Area_C::DelayBetweenMusicMax' has a wrong offset!");

}

