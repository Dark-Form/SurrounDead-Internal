﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractWidgetCivilian

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_InteractWidgetCivilian.BP_InteractWidgetCivilian_C.SetName
// 0x0030 (0x0030 - 0x0000)
struct BP_InteractWidgetCivilian_C_SetName final
{
public:
	class FText                                   ActionName;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   ItemName;                                          // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_InteractWidgetCivilian_C_SetName) == 0x000008, "Wrong alignment on BP_InteractWidgetCivilian_C_SetName");
static_assert(sizeof(BP_InteractWidgetCivilian_C_SetName) == 0x000030, "Wrong size on BP_InteractWidgetCivilian_C_SetName");
static_assert(offsetof(BP_InteractWidgetCivilian_C_SetName, ActionName) == 0x000000, "Member 'BP_InteractWidgetCivilian_C_SetName::ActionName' has a wrong offset!");
static_assert(offsetof(BP_InteractWidgetCivilian_C_SetName, ItemName) == 0x000018, "Member 'BP_InteractWidgetCivilian_C_SetName::ItemName' has a wrong offset!");

// Function BP_InteractWidgetCivilian.BP_InteractWidgetCivilian_C.ExecuteUbergraph_BP_InteractWidgetCivilian
// 0x0100 (0x0100 - 0x0000)
struct BP_InteractWidgetCivilian_C_ExecuteUbergraph_BP_InteractWidgetCivilian final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_ActionName;                     // 0x0008(0x0018)()
	class FText                                   K2Node_CustomEvent_ItemName;                       // 0x0020(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0088(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00D8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E8(0x0018)()
};
static_assert(alignof(BP_InteractWidgetCivilian_C_ExecuteUbergraph_BP_InteractWidgetCivilian) == 0x000008, "Wrong alignment on BP_InteractWidgetCivilian_C_ExecuteUbergraph_BP_InteractWidgetCivilian");
static_assert(sizeof(BP_InteractWidgetCivilian_C_ExecuteUbergraph_BP_InteractWidgetCivilian) == 0x000100, "Wrong size on BP_InteractWidgetCivilian_C_ExecuteUbergraph_BP_InteractWidgetCivilian");
static_assert(offsetof(BP_InteractWidgetCivilian_C_ExecuteUbergraph_BP_InteractWidgetCivilian, EntryPoint) == 0x000000, "Member 'BP_InteractWidgetCivilian_C_ExecuteUbergraph_BP_InteractWidgetCivilian::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_InteractWidgetCivilian_C_ExecuteUbergraph_BP_InteractWidgetCivilian, K2Node_CustomEvent_ActionName) == 0x000008, "Member 'BP_InteractWidgetCivilian_C_ExecuteUbergraph_BP_InteractWidgetCivilian::K2Node_CustomEvent_ActionName' has a wrong offset!");
static_assert(offsetof(BP_InteractWidgetCivilian_C_ExecuteUbergraph_BP_InteractWidgetCivilian, K2Node_CustomEvent_ItemName) == 0x000020, "Member 'BP_InteractWidgetCivilian_C_ExecuteUbergraph_BP_InteractWidgetCivilian::K2Node_CustomEvent_ItemName' has a wrong offset!");
static_assert(offsetof(BP_InteractWidgetCivilian_C_ExecuteUbergraph_BP_InteractWidgetCivilian, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'BP_InteractWidgetCivilian_C_ExecuteUbergraph_BP_InteractWidgetCivilian::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_InteractWidgetCivilian_C_ExecuteUbergraph_BP_InteractWidgetCivilian, K2Node_MakeStruct_FormatArgumentData_1) == 0x000088, "Member 'BP_InteractWidgetCivilian_C_ExecuteUbergraph_BP_InteractWidgetCivilian::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_InteractWidgetCivilian_C_ExecuteUbergraph_BP_InteractWidgetCivilian, K2Node_MakeArray_Array) == 0x0000D8, "Member 'BP_InteractWidgetCivilian_C_ExecuteUbergraph_BP_InteractWidgetCivilian::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_InteractWidgetCivilian_C_ExecuteUbergraph_BP_InteractWidgetCivilian, CallFunc_Format_ReturnValue) == 0x0000E8, "Member 'BP_InteractWidgetCivilian_C_ExecuteUbergraph_BP_InteractWidgetCivilian::CallFunc_Format_ReturnValue' has a wrong offset!");

}

