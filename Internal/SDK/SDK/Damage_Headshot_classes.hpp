﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Damage_Headshot

#include "Basic.hpp"

#include "SD_DamageType_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Damage_Headshot.Damage_Headshot_C
// 0x0000 (0x0040 - 0x0040)
class UDamage_Headshot_C final : public USD_DamageType_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Damage_Headshot_C">();
	}
	static class UDamage_Headshot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDamage_Headshot_C>();
	}
};
static_assert(alignof(UDamage_Headshot_C) == 0x000008, "Wrong alignment on UDamage_Headshot_C");
static_assert(sizeof(UDamage_Headshot_C) == 0x000040, "Wrong size on UDamage_Headshot_C");

}

