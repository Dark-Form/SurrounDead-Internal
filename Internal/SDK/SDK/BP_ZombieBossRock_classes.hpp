﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ZombieBossRock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ZombieBossRock.BP_ZombieBossRock_C
// 0x0020 (0x02B8 - 0x0298)
class ABP_ZombieBossRock_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ZombieBossRock(int32 EntryPoint);
	void Launch(const struct FVector& Origin, const struct FVector& Target);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ZombieBossRock_C">();
	}
	static class ABP_ZombieBossRock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ZombieBossRock_C>();
	}
};
static_assert(alignof(ABP_ZombieBossRock_C) == 0x000008, "Wrong alignment on ABP_ZombieBossRock_C");
static_assert(sizeof(ABP_ZombieBossRock_C) == 0x0002B8, "Wrong size on ABP_ZombieBossRock_C");
static_assert(offsetof(ABP_ZombieBossRock_C, UberGraphFrame) == 0x000298, "Member 'ABP_ZombieBossRock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ZombieBossRock_C, ProjectileMovement) == 0x0002A0, "Member 'ABP_ZombieBossRock_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_ZombieBossRock_C, StaticMesh) == 0x0002A8, "Member 'ABP_ZombieBossRock_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_ZombieBossRock_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_ZombieBossRock_C::DefaultSceneRoot' has a wrong offset!");

}

