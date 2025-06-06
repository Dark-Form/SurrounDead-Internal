﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prefab_Quest_BanditCamp2

#include "Basic.hpp"

#include "PrefabMaster_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Prefab_Quest_BanditCamp2.Prefab_Quest_BanditCamp2_C
// 0x0028 (0x02F8 - 0x02D0)
class APrefab_Quest_BanditCamp2_C final : public APrefabMaster_C
{
public:
	class UChildActorComponent*                   ChildActor2;                                       // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor1;                                       // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor;                                        // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Prefab_Quest_BanditCamp2_C">();
	}
	static class APrefab_Quest_BanditCamp2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APrefab_Quest_BanditCamp2_C>();
	}
};
static_assert(alignof(APrefab_Quest_BanditCamp2_C) == 0x000008, "Wrong alignment on APrefab_Quest_BanditCamp2_C");
static_assert(sizeof(APrefab_Quest_BanditCamp2_C) == 0x0002F8, "Wrong size on APrefab_Quest_BanditCamp2_C");
static_assert(offsetof(APrefab_Quest_BanditCamp2_C, ChildActor2) == 0x0002D0, "Member 'APrefab_Quest_BanditCamp2_C::ChildActor2' has a wrong offset!");
static_assert(offsetof(APrefab_Quest_BanditCamp2_C, StaticMesh1) == 0x0002D8, "Member 'APrefab_Quest_BanditCamp2_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(APrefab_Quest_BanditCamp2_C, ChildActor1) == 0x0002E0, "Member 'APrefab_Quest_BanditCamp2_C::ChildActor1' has a wrong offset!");
static_assert(offsetof(APrefab_Quest_BanditCamp2_C, ChildActor) == 0x0002E8, "Member 'APrefab_Quest_BanditCamp2_C::ChildActor' has a wrong offset!");
static_assert(offsetof(APrefab_Quest_BanditCamp2_C, StaticMesh) == 0x0002F0, "Member 'APrefab_Quest_BanditCamp2_C::StaticMesh' has a wrong offset!");

}

