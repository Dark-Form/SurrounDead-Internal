﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_GlobalActorInfo

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_GlobalActorInfo.BPI_GlobalActorInfo_C
// 0x0000 (0x0000 - 0x0000)
class IBPI_GlobalActorInfo_C final
{
public:
	void ActorDead_(bool* Dead_);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_GlobalActorInfo_C">();
	}
	static class IBPI_GlobalActorInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_GlobalActorInfo_C>();
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
static_assert(alignof(IBPI_GlobalActorInfo_C) == 0x000001, "Wrong alignment on IBPI_GlobalActorInfo_C");
static_assert(sizeof(IBPI_GlobalActorInfo_C) == 0x000001, "Wrong size on IBPI_GlobalActorInfo_C");

}

