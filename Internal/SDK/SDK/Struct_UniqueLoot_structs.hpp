﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_UniqueLoot

#include "Basic.hpp"

#include "RandomContainerItem_structs.hpp"


namespace SDK
{

// UserDefinedStruct Struct_UniqueLoot.Struct_UniqueLoot
// 0x0010 (0x0010 - 0x0000)
struct FStruct_UniqueLoot final
{
public:
	TArray<struct FRandomContainerItem>           ItemSet_3_91D536D54EAD312D3DDDCF89E9B26072;        // 0x0000(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FStruct_UniqueLoot) == 0x000008, "Wrong alignment on FStruct_UniqueLoot");
static_assert(sizeof(FStruct_UniqueLoot) == 0x000010, "Wrong size on FStruct_UniqueLoot");
static_assert(offsetof(FStruct_UniqueLoot, ItemSet_3_91D536D54EAD312D3DDDCF89E9B26072) == 0x000000, "Member 'FStruct_UniqueLoot::ItemSet_3_91D536D54EAD312D3DDDCF89E9B26072' has a wrong offset!");

}

