﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RespawnHUD

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_RespawnHUD.BP_RespawnHUD_C.ExecuteUbergraph_BP_RespawnHUD
// 0x0050 (0x0050 - 0x0000)
struct BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD) == 0x000008, "Wrong alignment on BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD");
static_assert(sizeof(BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD) == 0x000050, "Wrong size on BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD");
static_assert(offsetof(BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD, EntryPoint) == 0x000000, "Member 'BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD, CallFunc_GetViewportSize_ReturnValue) == 0x000008, "Member 'BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD, CallFunc_BreakVector2D_X) == 0x000018, "Member 'BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD, CallFunc_BreakVector2D_Y) == 0x000020, "Member 'BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000028, "Member 'BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000030, "Member 'BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD, CallFunc_FTrunc_ReturnValue) == 0x000038, "Member 'BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD, CallFunc_FTrunc_ReturnValue_1) == 0x00003C, "Member 'BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD, CallFunc_GetPlayerController_ReturnValue) == 0x000048, "Member 'BP_RespawnHUD_C_ExecuteUbergraph_BP_RespawnHUD::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");

}

