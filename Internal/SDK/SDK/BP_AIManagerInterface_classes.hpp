﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIManagerInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIManagerInterface.BP_AIManagerInterface_C
// 0x0000 (0x0000 - 0x0000)
class IBP_AIManagerInterface_C final
{
public:
	void Return_AI_Manager(class ABP_AIManager_C** AI_Manager);
	void Return_AI_Manager_Settings(struct FS_AIOptimization* AI_Settings);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIManagerInterface_C">();
	}
	static class IBP_AIManagerInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBP_AIManagerInterface_C>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
static_assert(alignof(IBP_AIManagerInterface_C) == 0x000001, "Wrong alignment on IBP_AIManagerInterface_C");
static_assert(sizeof(IBP_AIManagerInterface_C) == 0x000001, "Wrong size on IBP_AIManagerInterface_C");

}

