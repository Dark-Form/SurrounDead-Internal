﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Journal_SkillTreeTooltip

#include "Basic.hpp"


namespace SDK::Params
{

// Function Journal_SkillTreeTooltip.Journal_SkillTreeTooltip_C.ExecuteUbergraph_Journal_SkillTreeTooltip
// 0x0038 (0x0038 - 0x0000)
struct Journal_SkillTreeTooltip_C_ExecuteUbergraph_Journal_SkillTreeTooltip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0008(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue_1;                // 0x0020(0x0018)()
};
static_assert(alignof(Journal_SkillTreeTooltip_C_ExecuteUbergraph_Journal_SkillTreeTooltip) == 0x000008, "Wrong alignment on Journal_SkillTreeTooltip_C_ExecuteUbergraph_Journal_SkillTreeTooltip");
static_assert(sizeof(Journal_SkillTreeTooltip_C_ExecuteUbergraph_Journal_SkillTreeTooltip) == 0x000038, "Wrong size on Journal_SkillTreeTooltip_C_ExecuteUbergraph_Journal_SkillTreeTooltip");
static_assert(offsetof(Journal_SkillTreeTooltip_C_ExecuteUbergraph_Journal_SkillTreeTooltip, EntryPoint) == 0x000000, "Member 'Journal_SkillTreeTooltip_C_ExecuteUbergraph_Journal_SkillTreeTooltip::EntryPoint' has a wrong offset!");
static_assert(offsetof(Journal_SkillTreeTooltip_C_ExecuteUbergraph_Journal_SkillTreeTooltip, K2Node_Event_IsDesignTime) == 0x000004, "Member 'Journal_SkillTreeTooltip_C_ExecuteUbergraph_Journal_SkillTreeTooltip::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Journal_SkillTreeTooltip_C_ExecuteUbergraph_Journal_SkillTreeTooltip, CallFunc_TextToUpper_ReturnValue) == 0x000008, "Member 'Journal_SkillTreeTooltip_C_ExecuteUbergraph_Journal_SkillTreeTooltip::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(Journal_SkillTreeTooltip_C_ExecuteUbergraph_Journal_SkillTreeTooltip, CallFunc_TextToUpper_ReturnValue_1) == 0x000020, "Member 'Journal_SkillTreeTooltip_C_ExecuteUbergraph_Journal_SkillTreeTooltip::CallFunc_TextToUpper_ReturnValue_1' has a wrong offset!");

// Function Journal_SkillTreeTooltip.Journal_SkillTreeTooltip_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Journal_SkillTreeTooltip_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Journal_SkillTreeTooltip_C_PreConstruct) == 0x000001, "Wrong alignment on Journal_SkillTreeTooltip_C_PreConstruct");
static_assert(sizeof(Journal_SkillTreeTooltip_C_PreConstruct) == 0x000001, "Wrong size on Journal_SkillTreeTooltip_C_PreConstruct");
static_assert(offsetof(Journal_SkillTreeTooltip_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Journal_SkillTreeTooltip_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

