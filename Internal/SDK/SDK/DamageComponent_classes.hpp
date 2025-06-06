﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DamageComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DamageComponent.DamageComponent_C
// 0x00C0 (0x0160 - 0x00A0)
class UDamageComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          CanDamage_;                                        // 0x00A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        StandardHealthValue;                               // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentHealth;                                     // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxHealth;                                         // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(double Dmg, class AActor* DmgCauser)> StandardDamage;              // 0x00C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class AActor* DmgCauser)> Death;                                   // 0x00D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          SaveValues_;                                       // 0x00E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(bool Burning_)> SetBurning;                                        // 0x00F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UParticleSystemComponent*               FireFX;                                            // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              TimeOfBurning;                                     // 0x0108(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TakingDamageTimer;                                 // 0x0118(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimeBurningTimer;                                  // 0x0120(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(double CurrentHealth, double MaxHealth)> SetCurrent_MaxHealth;     // 0x0128(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        HealthRandomDeviation;                             // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             DamageSound;                                       // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             DeathSound;                                        // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CanScaleHealth_;                                   // 0x0150(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_151[0x7];                                      // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CurrentFireDamageGiver;                            // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BurningFinished(bool Death_);
	void ComponentLoaded();
	void ComponentPreSave();
	void DamageTaken(double DmgAmount, class AActor* DmgCauser);
	void Event_BloodSplatterFX();
	void ExecuteUbergraph_DamageComponent(int32 EntryPoint);
	void FireDamageTaken(double DmgAmount, class AActor* DmgCauser);
	void GetValues(double* StandardHealth, double* CurrentHealth_0, double* MaxHealth_0);
	void IsAlive_(bool* Alive_);
	void OnBloodSplatterFX(class FName EventName, float EmitterTime, int32 ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, class FName BoneName, class UPhysicalMaterial* PhysMat);
	void ReceiveBeginPlay();
	void SetCurrent_MaxHealth_Event(double CurrentHealth_0, double MaxHealth_0);
	void SetHealth(double Health, bool ScaleHealth_);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DamageComponent_C">();
	}
	static class UDamageComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDamageComponent_C>();
	}
};
static_assert(alignof(UDamageComponent_C) == 0x000008, "Wrong alignment on UDamageComponent_C");
static_assert(sizeof(UDamageComponent_C) == 0x000160, "Wrong size on UDamageComponent_C");
static_assert(offsetof(UDamageComponent_C, UberGraphFrame) == 0x0000A0, "Member 'UDamageComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDamageComponent_C, CanDamage_) == 0x0000A8, "Member 'UDamageComponent_C::CanDamage_' has a wrong offset!");
static_assert(offsetof(UDamageComponent_C, StandardHealthValue) == 0x0000B0, "Member 'UDamageComponent_C::StandardHealthValue' has a wrong offset!");
static_assert(offsetof(UDamageComponent_C, CurrentHealth) == 0x0000B8, "Member 'UDamageComponent_C::CurrentHealth' has a wrong offset!");
static_assert(offsetof(UDamageComponent_C, MaxHealth) == 0x0000C0, "Member 'UDamageComponent_C::MaxHealth' has a wrong offset!");
static_assert(offsetof(UDamageComponent_C, StandardDamage) == 0x0000C8, "Member 'UDamageComponent_C::StandardDamage' has a wrong offset!");
static_assert(offsetof(UDamageComponent_C, Death) == 0x0000D8, "Member 'UDamageComponent_C::Death' has a wrong offset!");
static_assert(offsetof(UDamageComponent_C, SaveValues_) == 0x0000E8, "Member 'UDamageComponent_C::SaveValues_' has a wrong offset!");
static_assert(offsetof(UDamageComponent_C, SetBurning) == 0x0000F0, "Member 'UDamageComponent_C::SetBurning' has a wrong offset!");
static_assert(offsetof(UDamageComponent_C, FireFX) == 0x000100, "Member 'UDamageComponent_C::FireFX' has a wrong offset!");
static_assert(offsetof(UDamageComponent_C, TimeOfBurning) == 0x000108, "Member 'UDamageComponent_C::TimeOfBurning' has a wrong offset!");
static_assert(offsetof(UDamageComponent_C, TakingDamageTimer) == 0x000118, "Member 'UDamageComponent_C::TakingDamageTimer' has a wrong offset!");
static_assert(offsetof(UDamageComponent_C, TimeBurningTimer) == 0x000120, "Member 'UDamageComponent_C::TimeBurningTimer' has a wrong offset!");
static_assert(offsetof(UDamageComponent_C, SetCurrent_MaxHealth) == 0x000128, "Member 'UDamageComponent_C::SetCurrent_MaxHealth' has a wrong offset!");
static_assert(offsetof(UDamageComponent_C, HealthRandomDeviation) == 0x000138, "Member 'UDamageComponent_C::HealthRandomDeviation' has a wrong offset!");
static_assert(offsetof(UDamageComponent_C, DamageSound) == 0x000140, "Member 'UDamageComponent_C::DamageSound' has a wrong offset!");
static_assert(offsetof(UDamageComponent_C, DeathSound) == 0x000148, "Member 'UDamageComponent_C::DeathSound' has a wrong offset!");
static_assert(offsetof(UDamageComponent_C, CanScaleHealth_) == 0x000150, "Member 'UDamageComponent_C::CanScaleHealth_' has a wrong offset!");
static_assert(offsetof(UDamageComponent_C, CurrentFireDamageGiver) == 0x000158, "Member 'UDamageComponent_C::CurrentFireDamageGiver' has a wrong offset!");

}

