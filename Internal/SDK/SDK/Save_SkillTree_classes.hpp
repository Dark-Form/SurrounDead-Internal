﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Save_SkillTree

#include "Basic.hpp"

#include "TechTree_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Save_SkillTree.Save_SkillTree_C
// 0x0000 (0x0088 - 0x0088)
class USave_SkillTree_C final : public UTechnologySaveGame
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Save_SkillTree_C">();
	}
	static class USave_SkillTree_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USave_SkillTree_C>();
	}
};
static_assert(alignof(USave_SkillTree_C) == 0x000008, "Wrong alignment on USave_SkillTree_C");
static_assert(sizeof(USave_SkillTree_C) == 0x000088, "Wrong size on USave_SkillTree_C");

}

