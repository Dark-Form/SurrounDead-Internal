﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DifficultySettingsPage

#include "Basic.hpp"


namespace SDK::Params
{

// Function DifficultySettingsPage.DifficultySettingsPage_C.CategoryChanged
// 0x0010 (0x0010 - 0x0000)
struct DifficultySettingsPage_C_CategoryChanged final
{
public:
	class FString                                 Value;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(DifficultySettingsPage_C_CategoryChanged) == 0x000008, "Wrong alignment on DifficultySettingsPage_C_CategoryChanged");
static_assert(sizeof(DifficultySettingsPage_C_CategoryChanged) == 0x000010, "Wrong size on DifficultySettingsPage_C_CategoryChanged");
static_assert(offsetof(DifficultySettingsPage_C_CategoryChanged, Value) == 0x000000, "Member 'DifficultySettingsPage_C_CategoryChanged::Value' has a wrong offset!");

// Function DifficultySettingsPage.DifficultySettingsPage_C.ExecuteUbergraph_DifficultySettingsPage
// 0x0030 (0x0030 - 0x0000)
struct DifficultySettingsPage_C_ExecuteUbergraph_DifficultySettingsPage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& Value)>   K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Value;                          // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DifficultySettingsPage_C_ExecuteUbergraph_DifficultySettingsPage) == 0x000008, "Wrong alignment on DifficultySettingsPage_C_ExecuteUbergraph_DifficultySettingsPage");
static_assert(sizeof(DifficultySettingsPage_C_ExecuteUbergraph_DifficultySettingsPage) == 0x000030, "Wrong size on DifficultySettingsPage_C_ExecuteUbergraph_DifficultySettingsPage");
static_assert(offsetof(DifficultySettingsPage_C_ExecuteUbergraph_DifficultySettingsPage, EntryPoint) == 0x000000, "Member 'DifficultySettingsPage_C_ExecuteUbergraph_DifficultySettingsPage::EntryPoint' has a wrong offset!");
static_assert(offsetof(DifficultySettingsPage_C_ExecuteUbergraph_DifficultySettingsPage, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'DifficultySettingsPage_C_ExecuteUbergraph_DifficultySettingsPage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DifficultySettingsPage_C_ExecuteUbergraph_DifficultySettingsPage, K2Node_CustomEvent_Value) == 0x000018, "Member 'DifficultySettingsPage_C_ExecuteUbergraph_DifficultySettingsPage::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(DifficultySettingsPage_C_ExecuteUbergraph_DifficultySettingsPage, CallFunc_Conv_StringToInt_ReturnValue) == 0x000028, "Member 'DifficultySettingsPage_C_ExecuteUbergraph_DifficultySettingsPage::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");

}

