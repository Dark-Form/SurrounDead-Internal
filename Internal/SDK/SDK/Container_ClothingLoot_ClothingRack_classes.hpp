﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Container_ClothingLoot_ClothingRack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Container_ClothingLoot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Container_ClothingLoot_ClothingRack.Container_ClothingLoot_ClothingRack_C
// 0x0010 (0x0450 - 0x0440)
class AContainer_ClothingLoot_ClothingRack_C final : public AContainer_ClothingLoot_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Container_ClothingLoot_ClothingRack_C; // 0x0440(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void Event1();
	void Event2();
	void ExecuteUbergraph_Container_ClothingLoot_ClothingRack(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Container_ClothingLoot_ClothingRack_C">();
	}
	static class AContainer_ClothingLoot_ClothingRack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AContainer_ClothingLoot_ClothingRack_C>();
	}
};
static_assert(alignof(AContainer_ClothingLoot_ClothingRack_C) == 0x000010, "Wrong alignment on AContainer_ClothingLoot_ClothingRack_C");
static_assert(sizeof(AContainer_ClothingLoot_ClothingRack_C) == 0x000450, "Wrong size on AContainer_ClothingLoot_ClothingRack_C");
static_assert(offsetof(AContainer_ClothingLoot_ClothingRack_C, UberGraphFrame_Container_ClothingLoot_ClothingRack_C) == 0x000440, "Member 'AContainer_ClothingLoot_ClothingRack_C::UberGraphFrame_Container_ClothingLoot_ClothingRack_C' has a wrong offset!");

}

