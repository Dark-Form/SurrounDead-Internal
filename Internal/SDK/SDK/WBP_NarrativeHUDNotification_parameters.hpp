﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NarrativeHUDNotification

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_NarrativeHUDNotification.WBP_NarrativeHUDNotification_C.ExecuteUbergraph_WBP_NarrativeHUDNotification
// 0x0050 (0x0050 - 0x0000)
struct WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;  // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification) == 0x000008, "Wrong alignment on WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification");
static_assert(sizeof(WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification) == 0x000050, "Wrong size on WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification");
static_assert(offsetof(WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification, EntryPoint) == 0x000000, "Member 'WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification, CallFunc_PlayAnimationForward_ReturnValue) == 0x000030, "Member 'WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000038, "Member 'WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000040, "Member 'WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000048, "Member 'WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1) == 0x00004C, "Member 'WBP_NarrativeHUDNotification_C_ExecuteUbergraph_WBP_NarrativeHUDNotification::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1' has a wrong offset!");

}

