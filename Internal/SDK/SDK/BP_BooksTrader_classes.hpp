﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BooksTrader

#include "Basic.hpp"

#include "BP_TraderMaster_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BooksTrader.BP_BooksTrader_C
// 0x0018 (0x0350 - 0x0338)
class ABP_BooksTrader_C final : public ABP_TraderMaster_C
{
public:
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh2;                                       // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh3;                                       // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BooksTrader_C">();
	}
	static class ABP_BooksTrader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BooksTrader_C>();
	}
};
static_assert(alignof(ABP_BooksTrader_C) == 0x000008, "Wrong alignment on ABP_BooksTrader_C");
static_assert(sizeof(ABP_BooksTrader_C) == 0x000350, "Wrong size on ABP_BooksTrader_C");
static_assert(offsetof(ABP_BooksTrader_C, StaticMesh1) == 0x000338, "Member 'ABP_BooksTrader_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(ABP_BooksTrader_C, StaticMesh2) == 0x000340, "Member 'ABP_BooksTrader_C::StaticMesh2' has a wrong offset!");
static_assert(offsetof(ABP_BooksTrader_C, StaticMesh3) == 0x000348, "Member 'ABP_BooksTrader_C::StaticMesh3' has a wrong offset!");

}

