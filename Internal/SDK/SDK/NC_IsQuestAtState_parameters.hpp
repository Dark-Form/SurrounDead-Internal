﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NC_IsQuestAtState

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function NC_IsQuestAtState.NC_IsQuestAtState_C.GetGraphDisplayText
// 0x01E0 (0x01E0 - 0x0000)
struct NC_IsQuestAtState_C_GetGraphDisplayText final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 QuestName;                                         // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0028(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0040(0x0018)()
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0078(0x0050)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetClassDisplayName_ReturnValue;          // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x00D8(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x00F0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0108(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0158(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01A8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01B8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(NC_IsQuestAtState_C_GetGraphDisplayText) == 0x000008, "Wrong alignment on NC_IsQuestAtState_C_GetGraphDisplayText");
static_assert(sizeof(NC_IsQuestAtState_C_GetGraphDisplayText) == 0x0001E0, "Wrong size on NC_IsQuestAtState_C_GetGraphDisplayText");
static_assert(offsetof(NC_IsQuestAtState_C_GetGraphDisplayText, ReturnValue) == 0x000000, "Member 'NC_IsQuestAtState_C_GetGraphDisplayText::ReturnValue' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_GetGraphDisplayText, QuestName) == 0x000010, "Member 'NC_IsQuestAtState_C_GetGraphDisplayText::QuestName' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_GetGraphDisplayText, Temp_bool_Variable) == 0x000020, "Member 'NC_IsQuestAtState_C_GetGraphDisplayText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_GetGraphDisplayText, Temp_text_Variable) == 0x000028, "Member 'NC_IsQuestAtState_C_GetGraphDisplayText::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_GetGraphDisplayText, Temp_text_Variable_1) == 0x000040, "Member 'NC_IsQuestAtState_C_GetGraphDisplayText::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_GetGraphDisplayText, CallFunc_IsValidClass_ReturnValue) == 0x000058, "Member 'NC_IsQuestAtState_C_GetGraphDisplayText::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_GetGraphDisplayText, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'NC_IsQuestAtState_C_GetGraphDisplayText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_GetGraphDisplayText, K2Node_MakeStruct_FormatArgumentData) == 0x000078, "Member 'NC_IsQuestAtState_C_GetGraphDisplayText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_GetGraphDisplayText, CallFunc_GetClassDisplayName_ReturnValue) == 0x0000C8, "Member 'NC_IsQuestAtState_C_GetGraphDisplayText::CallFunc_GetClassDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_GetGraphDisplayText, CallFunc_Conv_NameToText_ReturnValue) == 0x0000D8, "Member 'NC_IsQuestAtState_C_GetGraphDisplayText::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_GetGraphDisplayText, K2Node_Select_Default) == 0x0000F0, "Member 'NC_IsQuestAtState_C_GetGraphDisplayText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_GetGraphDisplayText, K2Node_MakeStruct_FormatArgumentData_1) == 0x000108, "Member 'NC_IsQuestAtState_C_GetGraphDisplayText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_GetGraphDisplayText, K2Node_MakeStruct_FormatArgumentData_2) == 0x000158, "Member 'NC_IsQuestAtState_C_GetGraphDisplayText::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_GetGraphDisplayText, K2Node_MakeArray_Array) == 0x0001A8, "Member 'NC_IsQuestAtState_C_GetGraphDisplayText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_GetGraphDisplayText, CallFunc_Format_ReturnValue) == 0x0001B8, "Member 'NC_IsQuestAtState_C_GetGraphDisplayText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_GetGraphDisplayText, CallFunc_Conv_TextToString_ReturnValue) == 0x0001D0, "Member 'NC_IsQuestAtState_C_GetGraphDisplayText::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function NC_IsQuestAtState.NC_IsQuestAtState_C.CheckCondition
// 0x0030 (0x0030 - 0x0000)
struct NC_IsQuestAtState_C_CheckCondition final
{
public:
	class APawn*                                  Pawn;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      Controller;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNarrativeComponent*                    NarrativeComponent;                                // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuest*                                 CallFunc_GetQuestInstance_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NC_IsQuestAtState_C_CheckCondition) == 0x000008, "Wrong alignment on NC_IsQuestAtState_C_CheckCondition");
static_assert(sizeof(NC_IsQuestAtState_C_CheckCondition) == 0x000030, "Wrong size on NC_IsQuestAtState_C_CheckCondition");
static_assert(offsetof(NC_IsQuestAtState_C_CheckCondition, Pawn) == 0x000000, "Member 'NC_IsQuestAtState_C_CheckCondition::Pawn' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_CheckCondition, Controller) == 0x000008, "Member 'NC_IsQuestAtState_C_CheckCondition::Controller' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_CheckCondition, NarrativeComponent) == 0x000010, "Member 'NC_IsQuestAtState_C_CheckCondition::NarrativeComponent' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_CheckCondition, ReturnValue) == 0x000018, "Member 'NC_IsQuestAtState_C_CheckCondition::ReturnValue' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_CheckCondition, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'NC_IsQuestAtState_C_CheckCondition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_CheckCondition, CallFunc_GetQuestInstance_ReturnValue) == 0x000020, "Member 'NC_IsQuestAtState_C_CheckCondition::CallFunc_GetQuestInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_CheckCondition, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'NC_IsQuestAtState_C_CheckCondition::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_CheckCondition, CallFunc_IsValid_ReturnValue_2) == 0x000029, "Member 'NC_IsQuestAtState_C_CheckCondition::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NC_IsQuestAtState_C_CheckCondition, CallFunc_EqualEqual_NameName_ReturnValue) == 0x00002A, "Member 'NC_IsQuestAtState_C_CheckCondition::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

}

