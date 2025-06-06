﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SleepingUI

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function SleepingUI.SleepingUI_C.ClearUI
// 0x0018 (0x0018 - 0x0000)
struct SleepingUI_C_ClearUI final
{
public:
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerCharacter_C*                  K2Node_DynamicCast_AsBP_Player_Character;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SleepingUI_C_ClearUI) == 0x000008, "Wrong alignment on SleepingUI_C_ClearUI");
static_assert(sizeof(SleepingUI_C_ClearUI) == 0x000018, "Wrong size on SleepingUI_C_ClearUI");
static_assert(offsetof(SleepingUI_C_ClearUI, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000000, "Member 'SleepingUI_C_ClearUI::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(SleepingUI_C_ClearUI, K2Node_DynamicCast_AsBP_Player_Character) == 0x000008, "Member 'SleepingUI_C_ClearUI::K2Node_DynamicCast_AsBP_Player_Character' has a wrong offset!");
static_assert(offsetof(SleepingUI_C_ClearUI, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'SleepingUI_C_ClearUI::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function SleepingUI.SleepingUI_C.ExecuteUbergraph_SleepingUI
// 0x0078 (0x0078 - 0x0000)
struct SleepingUI_C_ExecuteUbergraph_SleepingUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AUltra_Dynamic_Sky_C*                   CallFunc_GetUDS_UDS;                               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0038(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsKeyDown_Down;                           // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SleepingUI_C_ExecuteUbergraph_SleepingUI) == 0x000008, "Wrong alignment on SleepingUI_C_ExecuteUbergraph_SleepingUI");
static_assert(sizeof(SleepingUI_C_ExecuteUbergraph_SleepingUI) == 0x000078, "Wrong size on SleepingUI_C_ExecuteUbergraph_SleepingUI");
static_assert(offsetof(SleepingUI_C_ExecuteUbergraph_SleepingUI, EntryPoint) == 0x000000, "Member 'SleepingUI_C_ExecuteUbergraph_SleepingUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(SleepingUI_C_ExecuteUbergraph_SleepingUI, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SleepingUI_C_ExecuteUbergraph_SleepingUI::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SleepingUI_C_ExecuteUbergraph_SleepingUI, CallFunc_GetUDS_UDS) == 0x000010, "Member 'SleepingUI_C_ExecuteUbergraph_SleepingUI::CallFunc_GetUDS_UDS' has a wrong offset!");
static_assert(offsetof(SleepingUI_C_ExecuteUbergraph_SleepingUI, CallFunc_GetPlayerPawn_ReturnValue) == 0x000018, "Member 'SleepingUI_C_ExecuteUbergraph_SleepingUI::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(SleepingUI_C_ExecuteUbergraph_SleepingUI, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'SleepingUI_C_ExecuteUbergraph_SleepingUI::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SleepingUI_C_ExecuteUbergraph_SleepingUI, CallFunc_GetPlayerController_ReturnValue_1) == 0x000028, "Member 'SleepingUI_C_ExecuteUbergraph_SleepingUI::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SleepingUI_C_ExecuteUbergraph_SleepingUI, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000030, "Member 'SleepingUI_C_ExecuteUbergraph_SleepingUI::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(SleepingUI_C_ExecuteUbergraph_SleepingUI, K2Node_Event_MyGeometry) == 0x000038, "Member 'SleepingUI_C_ExecuteUbergraph_SleepingUI::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(SleepingUI_C_ExecuteUbergraph_SleepingUI, K2Node_Event_InDeltaTime) == 0x000070, "Member 'SleepingUI_C_ExecuteUbergraph_SleepingUI::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(SleepingUI_C_ExecuteUbergraph_SleepingUI, CallFunc_IsKeyDown_Down) == 0x000074, "Member 'SleepingUI_C_ExecuteUbergraph_SleepingUI::CallFunc_IsKeyDown_Down' has a wrong offset!");

// Function SleepingUI.SleepingUI_C.Tick
// 0x003C (0x003C - 0x0000)
struct SleepingUI_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SleepingUI_C_Tick) == 0x000004, "Wrong alignment on SleepingUI_C_Tick");
static_assert(sizeof(SleepingUI_C_Tick) == 0x00003C, "Wrong size on SleepingUI_C_Tick");
static_assert(offsetof(SleepingUI_C_Tick, MyGeometry) == 0x000000, "Member 'SleepingUI_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(SleepingUI_C_Tick, InDeltaTime) == 0x000038, "Member 'SleepingUI_C_Tick::InDeltaTime' has a wrong offset!");

}

