﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CustomDialogueOption

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BP_CustomDialogueOption.BP_CustomDialogueOption_C.ExecuteUbergraph_BP_CustomDialogueOption
// 0x0030 (0x0030 - 0x0000)
struct BP_CustomDialogueOption_C_ExecuteUbergraph_BP_CustomDialogueOption final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetOptionText_ReturnValue;                // 0x0018(0x0018)()
};
static_assert(alignof(BP_CustomDialogueOption_C_ExecuteUbergraph_BP_CustomDialogueOption) == 0x000008, "Wrong alignment on BP_CustomDialogueOption_C_ExecuteUbergraph_BP_CustomDialogueOption");
static_assert(sizeof(BP_CustomDialogueOption_C_ExecuteUbergraph_BP_CustomDialogueOption) == 0x000030, "Wrong size on BP_CustomDialogueOption_C_ExecuteUbergraph_BP_CustomDialogueOption");
static_assert(offsetof(BP_CustomDialogueOption_C_ExecuteUbergraph_BP_CustomDialogueOption, EntryPoint) == 0x000000, "Member 'BP_CustomDialogueOption_C_ExecuteUbergraph_BP_CustomDialogueOption::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CustomDialogueOption_C_ExecuteUbergraph_BP_CustomDialogueOption, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'BP_CustomDialogueOption_C_ExecuteUbergraph_BP_CustomDialogueOption::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CustomDialogueOption_C_ExecuteUbergraph_BP_CustomDialogueOption, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_CustomDialogueOption_C_ExecuteUbergraph_BP_CustomDialogueOption::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CustomDialogueOption_C_ExecuteUbergraph_BP_CustomDialogueOption, CallFunc_GetOptionText_ReturnValue) == 0x000018, "Member 'BP_CustomDialogueOption_C_ExecuteUbergraph_BP_CustomDialogueOption::CallFunc_GetOptionText_ReturnValue' has a wrong offset!");

// Function BP_CustomDialogueOption.BP_CustomDialogueOption_C.SetSelection
// 0x002C (0x002C - 0x0000)
struct BP_CustomDialogueOption_C_SetSelection final
{
public:
	bool                                          Selected;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0004(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0018(0x0014)()
};
static_assert(alignof(BP_CustomDialogueOption_C_SetSelection) == 0x000004, "Wrong alignment on BP_CustomDialogueOption_C_SetSelection");
static_assert(sizeof(BP_CustomDialogueOption_C_SetSelection) == 0x00002C, "Wrong size on BP_CustomDialogueOption_C_SetSelection");
static_assert(offsetof(BP_CustomDialogueOption_C_SetSelection, Selected) == 0x000000, "Member 'BP_CustomDialogueOption_C_SetSelection::Selected' has a wrong offset!");
static_assert(offsetof(BP_CustomDialogueOption_C_SetSelection, K2Node_MakeStruct_SlateColor) == 0x000004, "Member 'BP_CustomDialogueOption_C_SetSelection::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BP_CustomDialogueOption_C_SetSelection, K2Node_MakeStruct_SlateColor_1) == 0x000018, "Member 'BP_CustomDialogueOption_C_SetSelection::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

}

