﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIHealthBarUI

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AIHealthBarUI.AIHealthBarUI_C.ExecuteUbergraph_AIHealthBarUI
// 0x0140 (0x0140 - 0x0000)
struct AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CustomEvent_Health;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_MaxHealth;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0018(0x0018)()
	TScriptInterface<class IBPi_ProgressBars_C>   CallFunc_GetProgressBarManager_Manager;            // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0050)(HasGetValueTypeHash)
	class UWB_Base_C*                             K2Node_DynamicCast_AsWB_Base;                      // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue_1;          // 0x00B0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00C8(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0118(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0128(0x0018)()
};
static_assert(alignof(AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI) == 0x000008, "Wrong alignment on AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI");
static_assert(sizeof(AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI) == 0x000140, "Wrong size on AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI");
static_assert(offsetof(AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI, EntryPoint) == 0x000000, "Member 'AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI, K2Node_CustomEvent_Health) == 0x000008, "Member 'AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI::K2Node_CustomEvent_Health' has a wrong offset!");
static_assert(offsetof(AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI, K2Node_CustomEvent_MaxHealth) == 0x000010, "Member 'AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI::K2Node_CustomEvent_MaxHealth' has a wrong offset!");
static_assert(offsetof(AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000018, "Member 'AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI, CallFunc_GetProgressBarManager_Manager) == 0x000030, "Member 'AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI::CallFunc_GetProgressBarManager_Manager' has a wrong offset!");
static_assert(offsetof(AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI, K2Node_DynamicCast_AsWB_Base) == 0x000090, "Member 'AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI::K2Node_DynamicCast_AsWB_Base' has a wrong offset!");
static_assert(offsetof(AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI, CallFunc_FClamp_ReturnValue) == 0x0000A0, "Member 'AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI, CallFunc_Conv_DoubleToText_ReturnValue_1) == 0x0000B0, "Member 'AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI::CallFunc_Conv_DoubleToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000C8, "Member 'AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI, K2Node_MakeArray_Array) == 0x000118, "Member 'AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI, CallFunc_Format_ReturnValue) == 0x000128, "Member 'AIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function AIHealthBarUI.AIHealthBarUI_C.UpdateHealth
// 0x0010 (0x0010 - 0x0000)
struct AIHealthBarUI_C_UpdateHealth final
{
public:
	double                                        Health;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxHealth;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIHealthBarUI_C_UpdateHealth) == 0x000008, "Wrong alignment on AIHealthBarUI_C_UpdateHealth");
static_assert(sizeof(AIHealthBarUI_C_UpdateHealth) == 0x000010, "Wrong size on AIHealthBarUI_C_UpdateHealth");
static_assert(offsetof(AIHealthBarUI_C_UpdateHealth, Health) == 0x000000, "Member 'AIHealthBarUI_C_UpdateHealth::Health' has a wrong offset!");
static_assert(offsetof(AIHealthBarUI_C_UpdateHealth, MaxHealth) == 0x000008, "Member 'AIHealthBarUI_C_UpdateHealth::MaxHealth' has a wrong offset!");

}

