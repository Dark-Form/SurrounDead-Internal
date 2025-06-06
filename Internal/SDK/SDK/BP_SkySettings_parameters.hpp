﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SkySettings

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_SkySettings.BP_SkySettings_C.DayLength
// 0x0004 (0x0004 - 0x0000)
struct BP_SkySettings_C_DayLength final
{
public:
	float                                         NewValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkySettings_C_DayLength) == 0x000004, "Wrong alignment on BP_SkySettings_C_DayLength");
static_assert(sizeof(BP_SkySettings_C_DayLength) == 0x000004, "Wrong size on BP_SkySettings_C_DayLength");
static_assert(offsetof(BP_SkySettings_C_DayLength, NewValue) == 0x000000, "Member 'BP_SkySettings_C_DayLength::NewValue' has a wrong offset!");

// Function BP_SkySettings.BP_SkySettings_C.ExecuteUbergraph_BP_SkySettings
// 0x00A0 (0x00A0 - 0x0000)
struct BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float NewValue)>               K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float NewValue)>               K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float NewValue)>               K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float NewValue)>               K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AUltra_Dynamic_Sky_C*                   CallFunc_GetUDS_UDS;                               // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_NewValue_3;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AUltra_Dynamic_Sky_C*                   CallFunc_GetUDS_UDS_1;                             // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AUltra_Dynamic_Sky_C*                   CallFunc_GetUDS_UDS_2;                             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_NewValue_2;                     // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AUltra_Dynamic_Sky_C*                   CallFunc_GetUDS_UDS_3;                             // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_NewValue_1;                     // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_NewValue;                       // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_Saturation_ImplicitCast;        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_Night_Brightness_ImplicitCast;  // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_Night_Length_ImplicitCast;      // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_Day_Length_ImplicitCast;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings) == 0x000008, "Wrong alignment on BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings");
static_assert(sizeof(BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings) == 0x0000A0, "Wrong size on BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings");
static_assert(offsetof(BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings, EntryPoint) == 0x000000, "Member 'BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings, CallFunc_GetUDS_UDS) == 0x000048, "Member 'BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings::CallFunc_GetUDS_UDS' has a wrong offset!");
static_assert(offsetof(BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings, K2Node_CustomEvent_NewValue_3) == 0x000050, "Member 'BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings::K2Node_CustomEvent_NewValue_3' has a wrong offset!");
static_assert(offsetof(BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings, CallFunc_GetUDS_UDS_1) == 0x000058, "Member 'BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings::CallFunc_GetUDS_UDS_1' has a wrong offset!");
static_assert(offsetof(BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings, CallFunc_GetUDS_UDS_2) == 0x000060, "Member 'BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings::CallFunc_GetUDS_UDS_2' has a wrong offset!");
static_assert(offsetof(BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings, K2Node_CustomEvent_NewValue_2) == 0x000068, "Member 'BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings::K2Node_CustomEvent_NewValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings, CallFunc_GetUDS_UDS_3) == 0x000070, "Member 'BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings::CallFunc_GetUDS_UDS_3' has a wrong offset!");
static_assert(offsetof(BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings, K2Node_CustomEvent_NewValue_1) == 0x000078, "Member 'BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings::K2Node_CustomEvent_NewValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings, K2Node_CustomEvent_NewValue) == 0x00007C, "Member 'BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings::K2Node_CustomEvent_NewValue' has a wrong offset!");
static_assert(offsetof(BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings, K2Node_VariableSet_Saturation_ImplicitCast) == 0x000080, "Member 'BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings::K2Node_VariableSet_Saturation_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings, K2Node_VariableSet_Night_Brightness_ImplicitCast) == 0x000088, "Member 'BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings::K2Node_VariableSet_Night_Brightness_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings, K2Node_VariableSet_Night_Length_ImplicitCast) == 0x000090, "Member 'BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings::K2Node_VariableSet_Night_Length_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings, K2Node_VariableSet_Day_Length_ImplicitCast) == 0x000098, "Member 'BP_SkySettings_C_ExecuteUbergraph_BP_SkySettings::K2Node_VariableSet_Day_Length_ImplicitCast' has a wrong offset!");

// Function BP_SkySettings.BP_SkySettings_C.NightBright
// 0x0004 (0x0004 - 0x0000)
struct BP_SkySettings_C_NightBright final
{
public:
	float                                         NewValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkySettings_C_NightBright) == 0x000004, "Wrong alignment on BP_SkySettings_C_NightBright");
static_assert(sizeof(BP_SkySettings_C_NightBright) == 0x000004, "Wrong size on BP_SkySettings_C_NightBright");
static_assert(offsetof(BP_SkySettings_C_NightBright, NewValue) == 0x000000, "Member 'BP_SkySettings_C_NightBright::NewValue' has a wrong offset!");

// Function BP_SkySettings.BP_SkySettings_C.NightLength
// 0x0004 (0x0004 - 0x0000)
struct BP_SkySettings_C_NightLength final
{
public:
	float                                         NewValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkySettings_C_NightLength) == 0x000004, "Wrong alignment on BP_SkySettings_C_NightLength");
static_assert(sizeof(BP_SkySettings_C_NightLength) == 0x000004, "Wrong size on BP_SkySettings_C_NightLength");
static_assert(offsetof(BP_SkySettings_C_NightLength, NewValue) == 0x000000, "Member 'BP_SkySettings_C_NightLength::NewValue' has a wrong offset!");

// Function BP_SkySettings.BP_SkySettings_C.Saturation
// 0x0004 (0x0004 - 0x0000)
struct BP_SkySettings_C_Saturation final
{
public:
	float                                         NewValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkySettings_C_Saturation) == 0x000004, "Wrong alignment on BP_SkySettings_C_Saturation");
static_assert(sizeof(BP_SkySettings_C_Saturation) == 0x000004, "Wrong size on BP_SkySettings_C_Saturation");
static_assert(offsetof(BP_SkySettings_C_Saturation, NewValue) == 0x000000, "Member 'BP_SkySettings_C_Saturation::NewValue' has a wrong offset!");

}

