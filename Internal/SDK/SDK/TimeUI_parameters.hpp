﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TimeUI

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function TimeUI.TimeUI_C.ExecuteUbergraph_TimeUI
// 0x01C8 (0x01C8 - 0x0000)
struct TimeUI_C_ExecuteUbergraph_TimeUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable;                                // 0x0018(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0030(0x0018)()
	class FText                                   Temp_text_Variable_2;                              // 0x0048(0x0018)()
	class FText                                   Temp_text_Variable_3;                              // 0x0060(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0088(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AUltra_Dynamic_Sky_C*                   CallFunc_GetUDS_UDS;                               // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_Get_DateTime_Current_Date_and_Time;       // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00A0(0x0018)()
	struct FDateTime                              CallFunc_GetDate_ReturnValue;                      // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMinute_ReturnValue;                    // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetYear_ReturnValue;                      // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00C8(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0100(0x0018)()
	int32                                         CallFunc_GetDay_ReturnValue;                       // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetHour_ReturnValue;                      // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0120(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0138(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBoolCVar_ReturnValue;                  // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_189[0x7];                                      // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AUltra_Dynamic_Weather_C*               CallFunc_GetUDW_UDW;                               // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHUD_Game_C*                            CallFunc_GetHUD_HUD;                               // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x01B0(0x0018)()
};
static_assert(alignof(TimeUI_C_ExecuteUbergraph_TimeUI) == 0x000008, "Wrong alignment on TimeUI_C_ExecuteUbergraph_TimeUI");
static_assert(sizeof(TimeUI_C_ExecuteUbergraph_TimeUI) == 0x0001C8, "Wrong size on TimeUI_C_ExecuteUbergraph_TimeUI");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, EntryPoint) == 0x000000, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, Temp_int_Variable) == 0x000004, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, Temp_text_Variable) == 0x000018, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, Temp_text_Variable_1) == 0x000030, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, Temp_text_Variable_2) == 0x000048, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, Temp_text_Variable_3) == 0x000060, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, K2Node_CreateDelegate_OutputDelegate_1) == 0x000078, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000088, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_GetUDS_UDS) == 0x000090, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_GetUDS_UDS' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_Get_DateTime_Current_Date_and_Time) == 0x000098, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_Get_DateTime_Current_Date_and_Time' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_Conv_IntToText_ReturnValue) == 0x0000A0, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_GetDate_ReturnValue) == 0x0000B8, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_GetDate_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_GetMinute_ReturnValue) == 0x0000C0, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_GetMinute_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_GetYear_ReturnValue) == 0x0000C4, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_GetYear_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000C8, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_Conv_IntToString_ReturnValue) == 0x0000E0, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_Conv_TextToString_ReturnValue) == 0x0000F0, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_Conv_StringToText_ReturnValue) == 0x000100, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_GetDay_ReturnValue) == 0x000118, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_GetDay_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_GetHour_ReturnValue) == 0x00011C, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_GetHour_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000120, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000138, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000150, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_PlayAnimation_ReturnValue) == 0x000160, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_Concat_StrStr_ReturnValue) == 0x000168, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000178, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_GetBoolCVar_ReturnValue) == 0x000188, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_GetBoolCVar_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_PlayAnimationForward_ReturnValue) == 0x000190, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_GetUDW_UDW) == 0x000198, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_GetUDW_UDW' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_GetHUD_HUD) == 0x0001A0, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_GetHUD_HUD' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, CallFunc_FTrunc_ReturnValue) == 0x0001A8, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeUI_C_ExecuteUbergraph_TimeUI, K2Node_Select_Default) == 0x0001B0, "Member 'TimeUI_C_ExecuteUbergraph_TimeUI::K2Node_Select_Default' has a wrong offset!");

// Function TimeUI.TimeUI_C.Get_ZoomText_Text_0
// 0x0098 (0x0098 - 0x0000)
struct TimeUI_C_Get_ZoomText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0020(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0080(0x0018)()
};
static_assert(alignof(TimeUI_C_Get_ZoomText_Text_0) == 0x000008, "Wrong alignment on TimeUI_C_Get_ZoomText_Text_0");
static_assert(sizeof(TimeUI_C_Get_ZoomText_Text_0) == 0x000098, "Wrong size on TimeUI_C_Get_ZoomText_Text_0");
static_assert(offsetof(TimeUI_C_Get_ZoomText_Text_0, ReturnValue) == 0x000000, "Member 'TimeUI_C_Get_ZoomText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeUI_C_Get_ZoomText_Text_0, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000018, "Member 'TimeUI_C_Get_ZoomText_Text_0::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeUI_C_Get_ZoomText_Text_0, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'TimeUI_C_Get_ZoomText_Text_0::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(TimeUI_C_Get_ZoomText_Text_0, K2Node_MakeArray_Array) == 0x000070, "Member 'TimeUI_C_Get_ZoomText_Text_0::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(TimeUI_C_Get_ZoomText_Text_0, CallFunc_Format_ReturnValue) == 0x000080, "Member 'TimeUI_C_Get_ZoomText_Text_0::CallFunc_Format_ReturnValue' has a wrong offset!");

}

