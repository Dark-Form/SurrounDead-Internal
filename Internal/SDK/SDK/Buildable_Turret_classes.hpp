﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buildable_Turret

#include "Basic.hpp"

#include "Buildable_TurretMASTER_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Buildable_Turret.Buildable_Turret_C
// 0x0020 (0x0498 - 0x0478)
class ABuildable_Turret_C final : public ABuildable_TurretMASTER_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Buildable_Turret_C;                 // 0x0478(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x0480(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_Rotate_Alpha_AFE5B1D24D7F05708878F0A1F04778DD; // 0x0488(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_AFE5B1D24D7F05708878F0A1F04778DD; // 0x048C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48D[0x3];                                      // 0x048D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x0490(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void BndEvt__Buildable_Turret_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Buildable_Turret_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_Buildable_Turret(int32 EntryPoint);
	void Multicast_Spawn_Emitter();
	void Multicast_Turret_Idle_Start();
	void Multicast_Turret_Idle_Stop();
	void Off();
	void On();
	void ReceiveBeginPlay();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void Turret_Destroyed_Effect();
	void Turret_Idle_Start();
	void Turret_Idle_Stop();
	void OnInteractBuildable(class AActor* Actor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Buildable_Turret_C">();
	}
	static class ABuildable_Turret_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABuildable_Turret_C>();
	}
};
static_assert(alignof(ABuildable_Turret_C) == 0x000008, "Wrong alignment on ABuildable_Turret_C");
static_assert(sizeof(ABuildable_Turret_C) == 0x000498, "Wrong size on ABuildable_Turret_C");
static_assert(offsetof(ABuildable_Turret_C, UberGraphFrame_Buildable_Turret_C) == 0x000478, "Member 'ABuildable_Turret_C::UberGraphFrame_Buildable_Turret_C' has a wrong offset!");
static_assert(offsetof(ABuildable_Turret_C, Sphere) == 0x000480, "Member 'ABuildable_Turret_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABuildable_Turret_C, Timeline_Rotate_Alpha_AFE5B1D24D7F05708878F0A1F04778DD) == 0x000488, "Member 'ABuildable_Turret_C::Timeline_Rotate_Alpha_AFE5B1D24D7F05708878F0A1F04778DD' has a wrong offset!");
static_assert(offsetof(ABuildable_Turret_C, Timeline__Direction_AFE5B1D24D7F05708878F0A1F04778DD) == 0x00048C, "Member 'ABuildable_Turret_C::Timeline__Direction_AFE5B1D24D7F05708878F0A1F04778DD' has a wrong offset!");
static_assert(offsetof(ABuildable_Turret_C, Timeline) == 0x000490, "Member 'ABuildable_Turret_C::Timeline' has a wrong offset!");

}

