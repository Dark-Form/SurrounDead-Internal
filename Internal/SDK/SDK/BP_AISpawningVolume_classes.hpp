﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AISpawningVolume

#include "Basic.hpp"

#include "S_TriggerResponse_structs.hpp"
#include "S_AISpawner_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_StartingAIBehaviours_structs.hpp"
#include "S_AIRespawn_structs.hpp"
#include "E_AIBehaviour_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AISpawningVolume.BP_AISpawningVolume_C
// 0x0148 (0x03E0 - 0x0298)
class ABP_AISpawningVolume_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Proximity_Deactivation_Sphere;                     // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Proximity_Activation_Sphere;                       // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          AI_Spawn_Volume;                                   // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FS_AISpawner                           AI_Spawn_Element;                                  // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Enable_Spawn_AI;                                   // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D9[0x7];                                      // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS_AISpawner>                   Spawning_AI;                                       // 0x02E0(0x0010)(Edit, BlueprintVisible)
	double                                        Spawn_Time;                                        // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Spawn_Time_Deviation;                              // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Overlap_Size_Check;                                // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Random_Rotations;                                  // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_309[0x7];                                      // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Floors;                                            // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                         Spawn_Retries;                                     // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_324[0x4];                                      // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Spawned_AI;                                        // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          Respawn_AI;                                        // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_339[0x7];                                      // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Respawn_Time;                                      // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Respawn_Time_Variation;                            // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_AIRespawn>                   AI_Respawning_Timers;                              // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Use_Player_Proximity_Activation;                   // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_361[0x7];                                      // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Player_Activation_Range;                           // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Show_Deactivation_Proximity;                       // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Show_Activation_Proximity;                         // 0x0371(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Player_In_Area;                                    // 0x0372(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_373[0x1];                                      // 0x0373(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AI_Total;                                          // 0x0374(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_AISpawner>                   Remaining_Spawning_AI;                             // 0x0378(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Spawn_Index;                                       // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_Player_Proximity_Deactivation;                 // 0x038C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38D[0x3];                                      // 0x038D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Player_Deactivation_Range;                         // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Override_Starting_Behaviour;                       // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_StartingAIBehaviours                        Override_Behaviour;                                // 0x0399(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39A[0x6];                                      // 0x039A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_MasterWayPoint_C*>           Way_Points;                                        // 0x03A0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<struct FS_TriggerResponse>             Trigger_Activated_Responses;                       // 0x03B0(0x0010)(Edit, BlueprintVisible)
	TArray<struct FS_TriggerResponse>             Trigger_Deactivated_Responses;                     // 0x03C0(0x0010)(Edit, BlueprintVisible)
	class FName                                   StreamLevelPackageName;                            // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 AIBase;                                            // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)

public:
	void Add_AI_Respawn_Timer(class ACharacter* AI_Character);
	void AI_Respawn_Timer_Finished(class ACharacter* AI_Character);
	void BndEvt__Proximity_Activation_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Proximity_Deactivation_Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_BP_AISpawningVolume(int32 EntryPoint);
	bool Find_Spawn_Location(struct FHitResult* Hit_Result);
	void PlayerInAreaCheck();
	void ReceiveBeginPlay();
	void Reset_AI(const struct FHitResult& Hit_Result, class ACharacter* AI_Character);
	void Reset_Find_Respawn();
	void Reset_Proximity_Activation();
	void Reset_Proximity_Deactivation();
	void Respawn_Timer();
	void RespawnAI(class APawn* Pawn);
	void Restart_Spawning();
	void Spawn_Location_Trace(int32 Index_0);
	void Stop_Spawning();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AISpawningVolume_C">();
	}
	static class ABP_AISpawningVolume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AISpawningVolume_C>();
	}
};
static_assert(alignof(ABP_AISpawningVolume_C) == 0x000008, "Wrong alignment on ABP_AISpawningVolume_C");
static_assert(sizeof(ABP_AISpawningVolume_C) == 0x0003E0, "Wrong size on ABP_AISpawningVolume_C");
static_assert(offsetof(ABP_AISpawningVolume_C, UberGraphFrame) == 0x000298, "Member 'ABP_AISpawningVolume_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Proximity_Deactivation_Sphere) == 0x0002A0, "Member 'ABP_AISpawningVolume_C::Proximity_Deactivation_Sphere' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Proximity_Activation_Sphere) == 0x0002A8, "Member 'ABP_AISpawningVolume_C::Proximity_Activation_Sphere' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Scene) == 0x0002B0, "Member 'ABP_AISpawningVolume_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Billboard) == 0x0002B8, "Member 'ABP_AISpawningVolume_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, AI_Spawn_Volume) == 0x0002C0, "Member 'ABP_AISpawningVolume_C::AI_Spawn_Volume' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, AI_Spawn_Element) == 0x0002C8, "Member 'ABP_AISpawningVolume_C::AI_Spawn_Element' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Enable_Spawn_AI) == 0x0002D8, "Member 'ABP_AISpawningVolume_C::Enable_Spawn_AI' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Spawning_AI) == 0x0002E0, "Member 'ABP_AISpawningVolume_C::Spawning_AI' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Spawn_Time) == 0x0002F0, "Member 'ABP_AISpawningVolume_C::Spawn_Time' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Spawn_Time_Deviation) == 0x0002F8, "Member 'ABP_AISpawningVolume_C::Spawn_Time_Deviation' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Overlap_Size_Check) == 0x000300, "Member 'ABP_AISpawningVolume_C::Overlap_Size_Check' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Random_Rotations) == 0x000308, "Member 'ABP_AISpawningVolume_C::Random_Rotations' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Floors) == 0x000310, "Member 'ABP_AISpawningVolume_C::Floors' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Spawn_Retries) == 0x000320, "Member 'ABP_AISpawningVolume_C::Spawn_Retries' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Spawned_AI) == 0x000328, "Member 'ABP_AISpawningVolume_C::Spawned_AI' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Respawn_AI) == 0x000338, "Member 'ABP_AISpawningVolume_C::Respawn_AI' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Respawn_Time) == 0x000340, "Member 'ABP_AISpawningVolume_C::Respawn_Time' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Respawn_Time_Variation) == 0x000348, "Member 'ABP_AISpawningVolume_C::Respawn_Time_Variation' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, AI_Respawning_Timers) == 0x000350, "Member 'ABP_AISpawningVolume_C::AI_Respawning_Timers' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Use_Player_Proximity_Activation) == 0x000360, "Member 'ABP_AISpawningVolume_C::Use_Player_Proximity_Activation' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Player_Activation_Range) == 0x000368, "Member 'ABP_AISpawningVolume_C::Player_Activation_Range' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Show_Deactivation_Proximity) == 0x000370, "Member 'ABP_AISpawningVolume_C::Show_Deactivation_Proximity' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Show_Activation_Proximity) == 0x000371, "Member 'ABP_AISpawningVolume_C::Show_Activation_Proximity' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Player_In_Area) == 0x000372, "Member 'ABP_AISpawningVolume_C::Player_In_Area' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, AI_Total) == 0x000374, "Member 'ABP_AISpawningVolume_C::AI_Total' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Remaining_Spawning_AI) == 0x000378, "Member 'ABP_AISpawningVolume_C::Remaining_Spawning_AI' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Spawn_Index) == 0x000388, "Member 'ABP_AISpawningVolume_C::Spawn_Index' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Use_Player_Proximity_Deactivation) == 0x00038C, "Member 'ABP_AISpawningVolume_C::Use_Player_Proximity_Deactivation' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Player_Deactivation_Range) == 0x000390, "Member 'ABP_AISpawningVolume_C::Player_Deactivation_Range' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Override_Starting_Behaviour) == 0x000398, "Member 'ABP_AISpawningVolume_C::Override_Starting_Behaviour' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Override_Behaviour) == 0x000399, "Member 'ABP_AISpawningVolume_C::Override_Behaviour' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Way_Points) == 0x0003A0, "Member 'ABP_AISpawningVolume_C::Way_Points' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Trigger_Activated_Responses) == 0x0003B0, "Member 'ABP_AISpawningVolume_C::Trigger_Activated_Responses' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, Trigger_Deactivated_Responses) == 0x0003C0, "Member 'ABP_AISpawningVolume_C::Trigger_Deactivated_Responses' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, StreamLevelPackageName) == 0x0003D0, "Member 'ABP_AISpawningVolume_C::StreamLevelPackageName' has a wrong offset!");
static_assert(offsetof(ABP_AISpawningVolume_C, AIBase) == 0x0003D8, "Member 'ABP_AISpawningVolume_C::AIBase' has a wrong offset!");

}

