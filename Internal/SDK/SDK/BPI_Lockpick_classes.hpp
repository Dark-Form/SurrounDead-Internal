﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Lockpick

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_Lockpick.BPI_Lockpick_C
// 0x0000 (0x0000 - 0x0000)
class IBPI_Lockpick_C final
{
public:
	void LockpickSuccessful();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_Lockpick_C">();
	}
	static class IBPI_Lockpick_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_Lockpick_C>();
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
static_assert(alignof(IBPI_Lockpick_C) == 0x000001, "Wrong alignment on IBPI_Lockpick_C");
static_assert(sizeof(IBPI_Lockpick_C) == 0x000001, "Wrong size on IBPI_Lockpick_C");

}

