﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PB_Linear_Target

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Slate_structs.hpp"


namespace SDK::Params
{

// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.ExecuteUbergraph_WB_PB_Linear_Target
// 0x0020 (0x0020 - 0x0000)
struct WB_PB_Linear_Target_C_ExecuteUbergraph_WB_PB_Linear_Target final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_CustomEvent_InColor;                        // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProgressBarFillType                          K2Node_CustomEvent_BarFillType;                    // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bUseShader;                     // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CustomEvent_InPercent;                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PB_Linear_Target_C_ExecuteUbergraph_WB_PB_Linear_Target) == 0x000008, "Wrong alignment on WB_PB_Linear_Target_C_ExecuteUbergraph_WB_PB_Linear_Target");
static_assert(sizeof(WB_PB_Linear_Target_C_ExecuteUbergraph_WB_PB_Linear_Target) == 0x000020, "Wrong size on WB_PB_Linear_Target_C_ExecuteUbergraph_WB_PB_Linear_Target");
static_assert(offsetof(WB_PB_Linear_Target_C_ExecuteUbergraph_WB_PB_Linear_Target, EntryPoint) == 0x000000, "Member 'WB_PB_Linear_Target_C_ExecuteUbergraph_WB_PB_Linear_Target::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_PB_Linear_Target_C_ExecuteUbergraph_WB_PB_Linear_Target, K2Node_CustomEvent_InColor) == 0x000004, "Member 'WB_PB_Linear_Target_C_ExecuteUbergraph_WB_PB_Linear_Target::K2Node_CustomEvent_InColor' has a wrong offset!");
static_assert(offsetof(WB_PB_Linear_Target_C_ExecuteUbergraph_WB_PB_Linear_Target, K2Node_CustomEvent_BarFillType) == 0x000014, "Member 'WB_PB_Linear_Target_C_ExecuteUbergraph_WB_PB_Linear_Target::K2Node_CustomEvent_BarFillType' has a wrong offset!");
static_assert(offsetof(WB_PB_Linear_Target_C_ExecuteUbergraph_WB_PB_Linear_Target, K2Node_CustomEvent_bUseShader) == 0x000015, "Member 'WB_PB_Linear_Target_C_ExecuteUbergraph_WB_PB_Linear_Target::K2Node_CustomEvent_bUseShader' has a wrong offset!");
static_assert(offsetof(WB_PB_Linear_Target_C_ExecuteUbergraph_WB_PB_Linear_Target, K2Node_CustomEvent_InPercent) == 0x000018, "Member 'WB_PB_Linear_Target_C_ExecuteUbergraph_WB_PB_Linear_Target::K2Node_CustomEvent_InPercent' has a wrong offset!");

// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.GetPercent
// 0x0010 (0x0010 - 0x0000)
struct WB_PB_Linear_Target_C_GetPercent final
{
public:
	double                                        Percent;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_FunctionResult_Percent_ImplicitCast;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PB_Linear_Target_C_GetPercent) == 0x000008, "Wrong alignment on WB_PB_Linear_Target_C_GetPercent");
static_assert(sizeof(WB_PB_Linear_Target_C_GetPercent) == 0x000010, "Wrong size on WB_PB_Linear_Target_C_GetPercent");
static_assert(offsetof(WB_PB_Linear_Target_C_GetPercent, Percent) == 0x000000, "Member 'WB_PB_Linear_Target_C_GetPercent::Percent' has a wrong offset!");
static_assert(offsetof(WB_PB_Linear_Target_C_GetPercent, K2Node_FunctionResult_Percent_ImplicitCast) == 0x000008, "Member 'WB_PB_Linear_Target_C_GetPercent::K2Node_FunctionResult_Percent_ImplicitCast' has a wrong offset!");

// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.SetBarFillType
// 0x0002 (0x0002 - 0x0000)
struct WB_PB_Linear_Target_C_SetBarFillType final
{
public:
	EProgressBarFillType                          BarFillType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseShader;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PB_Linear_Target_C_SetBarFillType) == 0x000001, "Wrong alignment on WB_PB_Linear_Target_C_SetBarFillType");
static_assert(sizeof(WB_PB_Linear_Target_C_SetBarFillType) == 0x000002, "Wrong size on WB_PB_Linear_Target_C_SetBarFillType");
static_assert(offsetof(WB_PB_Linear_Target_C_SetBarFillType, BarFillType) == 0x000000, "Member 'WB_PB_Linear_Target_C_SetBarFillType::BarFillType' has a wrong offset!");
static_assert(offsetof(WB_PB_Linear_Target_C_SetBarFillType, bUseShader) == 0x000001, "Member 'WB_PB_Linear_Target_C_SetBarFillType::bUseShader' has a wrong offset!");

// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.SetFillColor
// 0x0010 (0x0010 - 0x0000)
struct WB_PB_Linear_Target_C_SetFillColor final
{
public:
	struct FLinearColor                           InColor;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PB_Linear_Target_C_SetFillColor) == 0x000004, "Wrong alignment on WB_PB_Linear_Target_C_SetFillColor");
static_assert(sizeof(WB_PB_Linear_Target_C_SetFillColor) == 0x000010, "Wrong size on WB_PB_Linear_Target_C_SetFillColor");
static_assert(offsetof(WB_PB_Linear_Target_C_SetFillColor, InColor) == 0x000000, "Member 'WB_PB_Linear_Target_C_SetFillColor::InColor' has a wrong offset!");

// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.SetPercent
// 0x0008 (0x0008 - 0x0000)
struct WB_PB_Linear_Target_C_SetPercent final
{
public:
	double                                        InPercent;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PB_Linear_Target_C_SetPercent) == 0x000008, "Wrong alignment on WB_PB_Linear_Target_C_SetPercent");
static_assert(sizeof(WB_PB_Linear_Target_C_SetPercent) == 0x000008, "Wrong size on WB_PB_Linear_Target_C_SetPercent");
static_assert(offsetof(WB_PB_Linear_Target_C_SetPercent, InPercent) == 0x000000, "Member 'WB_PB_Linear_Target_C_SetPercent::InPercent' has a wrong offset!");

}

