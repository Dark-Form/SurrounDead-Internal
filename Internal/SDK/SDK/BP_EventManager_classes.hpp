﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventManager

#include "Basic.hpp"

#include "BP_EventMaster_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EventManager.BP_EventManager_C
// 0x0090 (0x0330 - 0x02A0)
class ABP_EventManager_C final : public ABP_EventMaster_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         MaxNumberOfJetsToSpawn;                            // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AC[0x4];                                      // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        JetTimeToSpawn;                                    // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DistanceToSpawnAirdrop;                            // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AirdropTimeToSpawn;                                // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           AirdropTimer;                                      // 0x02C8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        ExplosionDelay;                                    // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           ExplosionTimer;                                    // 0x02D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           RandomEventTimer;                                  // 0x02E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         RandomEventSpawnRetries;                           // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EC[0x4];                                      // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        BloodMoonChance;                                   // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BloodMoonStarted;                                  // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F9[0x7];                                      // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(bool Start_)>   BloodMoon;                                         // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class ABP_PrefabSpawner_Dynamic_C*>    DynamicEvents;                                     // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         CurrentEventSpawned;                               // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ClampEventSpawnTries;                              // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TimeUntilDynamicEvent;                             // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AirdropSpawn();
	void BloodMoonEvent();
	void DynamicRandomEventSpawn();
	void Event_StartBloodMoon();
	void Event_StopBloodMoonSunrise();
	void ExecuteUbergraph_BP_EventManager(int32 EntryPoint);
	void Explosion_Spawn();
	void Jet_Spawn();
	void ReceiveBeginPlay();
	void SetBloodMoon(bool BloodMoon_);
	void SpawnAirdrop();
	void SpawnExplosion();
	void SpawnJet();
	void SpawnRandomEvent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EventManager_C">();
	}
	static class ABP_EventManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EventManager_C>();
	}
};
static_assert(alignof(ABP_EventManager_C) == 0x000008, "Wrong alignment on ABP_EventManager_C");
static_assert(sizeof(ABP_EventManager_C) == 0x000330, "Wrong size on ABP_EventManager_C");
static_assert(offsetof(ABP_EventManager_C, UberGraphFrame) == 0x0002A0, "Member 'ABP_EventManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_EventManager_C, MaxNumberOfJetsToSpawn) == 0x0002A8, "Member 'ABP_EventManager_C::MaxNumberOfJetsToSpawn' has a wrong offset!");
static_assert(offsetof(ABP_EventManager_C, JetTimeToSpawn) == 0x0002B0, "Member 'ABP_EventManager_C::JetTimeToSpawn' has a wrong offset!");
static_assert(offsetof(ABP_EventManager_C, DistanceToSpawnAirdrop) == 0x0002B8, "Member 'ABP_EventManager_C::DistanceToSpawnAirdrop' has a wrong offset!");
static_assert(offsetof(ABP_EventManager_C, AirdropTimeToSpawn) == 0x0002C0, "Member 'ABP_EventManager_C::AirdropTimeToSpawn' has a wrong offset!");
static_assert(offsetof(ABP_EventManager_C, AirdropTimer) == 0x0002C8, "Member 'ABP_EventManager_C::AirdropTimer' has a wrong offset!");
static_assert(offsetof(ABP_EventManager_C, ExplosionDelay) == 0x0002D0, "Member 'ABP_EventManager_C::ExplosionDelay' has a wrong offset!");
static_assert(offsetof(ABP_EventManager_C, ExplosionTimer) == 0x0002D8, "Member 'ABP_EventManager_C::ExplosionTimer' has a wrong offset!");
static_assert(offsetof(ABP_EventManager_C, RandomEventTimer) == 0x0002E0, "Member 'ABP_EventManager_C::RandomEventTimer' has a wrong offset!");
static_assert(offsetof(ABP_EventManager_C, RandomEventSpawnRetries) == 0x0002E8, "Member 'ABP_EventManager_C::RandomEventSpawnRetries' has a wrong offset!");
static_assert(offsetof(ABP_EventManager_C, BloodMoonChance) == 0x0002F0, "Member 'ABP_EventManager_C::BloodMoonChance' has a wrong offset!");
static_assert(offsetof(ABP_EventManager_C, BloodMoonStarted) == 0x0002F8, "Member 'ABP_EventManager_C::BloodMoonStarted' has a wrong offset!");
static_assert(offsetof(ABP_EventManager_C, BloodMoon) == 0x000300, "Member 'ABP_EventManager_C::BloodMoon' has a wrong offset!");
static_assert(offsetof(ABP_EventManager_C, DynamicEvents) == 0x000310, "Member 'ABP_EventManager_C::DynamicEvents' has a wrong offset!");
static_assert(offsetof(ABP_EventManager_C, CurrentEventSpawned) == 0x000320, "Member 'ABP_EventManager_C::CurrentEventSpawned' has a wrong offset!");
static_assert(offsetof(ABP_EventManager_C, ClampEventSpawnTries) == 0x000324, "Member 'ABP_EventManager_C::ClampEventSpawnTries' has a wrong offset!");
static_assert(offsetof(ABP_EventManager_C, TimeUntilDynamicEvent) == 0x000328, "Member 'ABP_EventManager_C::TimeUntilDynamicEvent' has a wrong offset!");

}

