﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ExampleProjectile

#include "Basic.hpp"

#include "BP_MasterProjectile_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ExampleProjectile.BP_ExampleProjectile_C
// 0x0008 (0x0490 - 0x0488)
class ABP_ExampleProjectile_C final : public ABP_MasterProjectile_C
{
public:
	class UStaticMeshComponent*                   Sphere;                                            // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ExampleProjectile_C">();
	}
	static class ABP_ExampleProjectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ExampleProjectile_C>();
	}
};
static_assert(alignof(ABP_ExampleProjectile_C) == 0x000008, "Wrong alignment on ABP_ExampleProjectile_C");
static_assert(sizeof(ABP_ExampleProjectile_C) == 0x000490, "Wrong size on ABP_ExampleProjectile_C");
static_assert(offsetof(ABP_ExampleProjectile_C, Sphere) == 0x000488, "Member 'ABP_ExampleProjectile_C::Sphere' has a wrong offset!");

}

