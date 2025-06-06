﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_HarvestableObject

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_HarvestableObject.BPI_HarvestableObject_C
// 0x0000 (0x0000 - 0x0000)
class IBPI_HarvestableObject_C final
{
public:
	void HitHarvestableObject(const struct FVector& HitLocation, int32 Hits);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_HarvestableObject_C">();
	}
	static class IBPI_HarvestableObject_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_HarvestableObject_C>();
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
static_assert(alignof(IBPI_HarvestableObject_C) == 0x000001, "Wrong alignment on IBPI_HarvestableObject_C");
static_assert(sizeof(IBPI_HarvestableObject_C) == 0x000001, "Wrong size on IBPI_HarvestableObject_C");

}

