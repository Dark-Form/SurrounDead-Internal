﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AmbientSoundController

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_AmbientSoundController.BP_AmbientSoundController_C.Bind to Dispatchers
// 0x00B8 (0x00B8 - 0x0000)
struct BP_AmbientSoundController_C_Bind_to_Dispatchers final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Actor, EEndPlayReason EndPlayReason)> K2Node_CreateDelegate_OutputDelegate_1; // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Actor, EEndPlayReason EndPlayReason)> K2Node_CreateDelegate_OutputDelegate_2; // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;           // 0x00A4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AmbientSoundController_C_Bind_to_Dispatchers) == 0x000004, "Wrong alignment on BP_AmbientSoundController_C_Bind_to_Dispatchers");
static_assert(sizeof(BP_AmbientSoundController_C_Bind_to_Dispatchers) == 0x0000B8, "Wrong size on BP_AmbientSoundController_C_Bind_to_Dispatchers");
static_assert(offsetof(BP_AmbientSoundController_C_Bind_to_Dispatchers, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_AmbientSoundController_C_Bind_to_Dispatchers::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Bind_to_Dispatchers, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'BP_AmbientSoundController_C_Bind_to_Dispatchers::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Bind_to_Dispatchers, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'BP_AmbientSoundController_C_Bind_to_Dispatchers::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Bind_to_Dispatchers, K2Node_CreateDelegate_OutputDelegate_3) == 0x000030, "Member 'BP_AmbientSoundController_C_Bind_to_Dispatchers::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Bind_to_Dispatchers, K2Node_CreateDelegate_OutputDelegate_4) == 0x000040, "Member 'BP_AmbientSoundController_C_Bind_to_Dispatchers::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Bind_to_Dispatchers, K2Node_CreateDelegate_OutputDelegate_5) == 0x000050, "Member 'BP_AmbientSoundController_C_Bind_to_Dispatchers::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Bind_to_Dispatchers, K2Node_CreateDelegate_OutputDelegate_6) == 0x000060, "Member 'BP_AmbientSoundController_C_Bind_to_Dispatchers::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Bind_to_Dispatchers, K2Node_CreateDelegate_OutputDelegate_7) == 0x000070, "Member 'BP_AmbientSoundController_C_Bind_to_Dispatchers::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Bind_to_Dispatchers, K2Node_CreateDelegate_OutputDelegate_8) == 0x000080, "Member 'BP_AmbientSoundController_C_Bind_to_Dispatchers::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Bind_to_Dispatchers, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'BP_AmbientSoundController_C_Bind_to_Dispatchers::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Bind_to_Dispatchers, K2Node_CreateDelegate_OutputDelegate_9) == 0x000094, "Member 'BP_AmbientSoundController_C_Bind_to_Dispatchers::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Bind_to_Dispatchers, K2Node_CreateDelegate_OutputDelegate_10) == 0x0000A4, "Member 'BP_AmbientSoundController_C_Bind_to_Dispatchers::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Bind_to_Dispatchers, CallFunc_IsValid_ReturnValue_1) == 0x0000B4, "Member 'BP_AmbientSoundController_C_Bind_to_Dispatchers::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_AmbientSoundController.BP_AmbientSoundController_C.Check if UDS and UDW Are Both Gone
// 0x0005 (0x0005 - 0x0000)
struct BP_AmbientSoundController_C_Check_if_UDS_and_UDW_Are_Both_Gone final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AmbientSoundController_C_Check_if_UDS_and_UDW_Are_Both_Gone) == 0x000001, "Wrong alignment on BP_AmbientSoundController_C_Check_if_UDS_and_UDW_Are_Both_Gone");
static_assert(sizeof(BP_AmbientSoundController_C_Check_if_UDS_and_UDW_Are_Both_Gone) == 0x000005, "Wrong size on BP_AmbientSoundController_C_Check_if_UDS_and_UDW_Are_Both_Gone");
static_assert(offsetof(BP_AmbientSoundController_C_Check_if_UDS_and_UDW_Are_Both_Gone, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_AmbientSoundController_C_Check_if_UDS_and_UDW_Are_Both_Gone::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Check_if_UDS_and_UDW_Are_Both_Gone, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'BP_AmbientSoundController_C_Check_if_UDS_and_UDW_Are_Both_Gone::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Check_if_UDS_and_UDW_Are_Both_Gone, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'BP_AmbientSoundController_C_Check_if_UDS_and_UDW_Are_Both_Gone::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Check_if_UDS_and_UDW_Are_Both_Gone, CallFunc_Not_PreBool_ReturnValue_1) == 0x000003, "Member 'BP_AmbientSoundController_C_Check_if_UDS_and_UDW_Are_Both_Gone::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Check_if_UDS_and_UDW_Are_Both_Gone, CallFunc_BooleanAND_ReturnValue) == 0x000004, "Member 'BP_AmbientSoundController_C_Check_if_UDS_and_UDW_Are_Both_Gone::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_AmbientSoundController.BP_AmbientSoundController_C.ExecuteUbergraph_BP_AmbientSoundController
// 0x0030 (0x0030 - 0x0000)
struct BP_AmbientSoundController_C_ExecuteUbergraph_BP_AmbientSoundController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerForNextTick_ReturnValue;       // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Is_it_Daytime__Yes;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AUltra_Dynamic_Sky_C*                   K2Node_Event_UDS;                                  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AUltra_Dynamic_Weather_C*               K2Node_Event_UDW;                                  // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AmbientSoundController_C_ExecuteUbergraph_BP_AmbientSoundController) == 0x000008, "Wrong alignment on BP_AmbientSoundController_C_ExecuteUbergraph_BP_AmbientSoundController");
static_assert(sizeof(BP_AmbientSoundController_C_ExecuteUbergraph_BP_AmbientSoundController) == 0x000030, "Wrong size on BP_AmbientSoundController_C_ExecuteUbergraph_BP_AmbientSoundController");
static_assert(offsetof(BP_AmbientSoundController_C_ExecuteUbergraph_BP_AmbientSoundController, EntryPoint) == 0x000000, "Member 'BP_AmbientSoundController_C_ExecuteUbergraph_BP_AmbientSoundController::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_ExecuteUbergraph_BP_AmbientSoundController, CallFunc_K2_SetTimer_ReturnValue) == 0x000008, "Member 'BP_AmbientSoundController_C_ExecuteUbergraph_BP_AmbientSoundController::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_ExecuteUbergraph_BP_AmbientSoundController, CallFunc_K2_SetTimerForNextTick_ReturnValue) == 0x000010, "Member 'BP_AmbientSoundController_C_ExecuteUbergraph_BP_AmbientSoundController::CallFunc_K2_SetTimerForNextTick_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_ExecuteUbergraph_BP_AmbientSoundController, CallFunc_Is_it_Daytime__Yes) == 0x000018, "Member 'BP_AmbientSoundController_C_ExecuteUbergraph_BP_AmbientSoundController::CallFunc_Is_it_Daytime__Yes' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_ExecuteUbergraph_BP_AmbientSoundController, K2Node_Event_UDS) == 0x000020, "Member 'BP_AmbientSoundController_C_ExecuteUbergraph_BP_AmbientSoundController::K2Node_Event_UDS' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_ExecuteUbergraph_BP_AmbientSoundController, K2Node_Event_UDW) == 0x000028, "Member 'BP_AmbientSoundController_C_ExecuteUbergraph_BP_AmbientSoundController::K2Node_Event_UDW' has a wrong offset!");

// Function BP_AmbientSoundController.BP_AmbientSoundController_C.Get Starting Dispatchers State
// 0x0003 (0x0003 - 0x0000)
struct BP_AmbientSoundController_C_Get_Starting_Dispatchers_State final
{
public:
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AmbientSoundController_C_Get_Starting_Dispatchers_State) == 0x000001, "Wrong alignment on BP_AmbientSoundController_C_Get_Starting_Dispatchers_State");
static_assert(sizeof(BP_AmbientSoundController_C_Get_Starting_Dispatchers_State) == 0x000003, "Wrong size on BP_AmbientSoundController_C_Get_Starting_Dispatchers_State");
static_assert(offsetof(BP_AmbientSoundController_C_Get_Starting_Dispatchers_State, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000000, "Member 'BP_AmbientSoundController_C_Get_Starting_Dispatchers_State::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Get_Starting_Dispatchers_State, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_AmbientSoundController_C_Get_Starting_Dispatchers_State::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Get_Starting_Dispatchers_State, CallFunc_IsValid_ReturnValue_1) == 0x000002, "Member 'BP_AmbientSoundController_C_Get_Starting_Dispatchers_State::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_AmbientSoundController.BP_AmbientSoundController_C.Get UDS and UDW Reference
// 0x0018 (0x0018 - 0x0000)
struct BP_AmbientSoundController_C_Get_UDS_and_UDW_Reference final
{
public:
	class AUltra_Dynamic_Weather_C*               CallFunc_GetActorOfClass_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AUltra_Dynamic_Sky_C*                   CallFunc_GetActorOfClass_ReturnValue_1;            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AmbientSoundController_C_Get_UDS_and_UDW_Reference) == 0x000008, "Wrong alignment on BP_AmbientSoundController_C_Get_UDS_and_UDW_Reference");
static_assert(sizeof(BP_AmbientSoundController_C_Get_UDS_and_UDW_Reference) == 0x000018, "Wrong size on BP_AmbientSoundController_C_Get_UDS_and_UDW_Reference");
static_assert(offsetof(BP_AmbientSoundController_C_Get_UDS_and_UDW_Reference, CallFunc_GetActorOfClass_ReturnValue) == 0x000000, "Member 'BP_AmbientSoundController_C_Get_UDS_and_UDW_Reference::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Get_UDS_and_UDW_Reference, CallFunc_GetActorOfClass_ReturnValue_1) == 0x000008, "Member 'BP_AmbientSoundController_C_Get_UDS_and_UDW_Reference::CallFunc_GetActorOfClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Get_UDS_and_UDW_Reference, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_AmbientSoundController_C_Get_UDS_and_UDW_Reference::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Get_UDS_and_UDW_Reference, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'BP_AmbientSoundController_C_Get_UDS_and_UDW_Reference::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_AmbientSoundController.BP_AmbientSoundController_C.State Change Fog
// 0x0058 (0x0058 - 0x0000)
struct BP_AmbientSoundController_C_State_Change_Fog final
{
public:
	TScriptInterface<class IUltra_Dynamic_Weather_Interface_C> K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface; // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Get_Local_Weather_State_Values_Cloud_Coverage; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Get_Local_Weather_State_Values_Wind_Intensity; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Get_Local_Weather_State_Values_Rain;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Get_Local_Weather_State_Values_Snow;      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Get_Local_Weather_State_Values_Dust;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Get_Local_Weather_State_Values_Fog;       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Get_Local_Weather_State_Values_Thunder_Lightning; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AmbientSoundController_C_State_Change_Fog) == 0x000008, "Wrong alignment on BP_AmbientSoundController_C_State_Change_Fog");
static_assert(sizeof(BP_AmbientSoundController_C_State_Change_Fog) == 0x000058, "Wrong size on BP_AmbientSoundController_C_State_Change_Fog");
static_assert(offsetof(BP_AmbientSoundController_C_State_Change_Fog, K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface) == 0x000000, "Member 'BP_AmbientSoundController_C_State_Change_Fog::K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_State_Change_Fog, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_AmbientSoundController_C_State_Change_Fog::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_State_Change_Fog, CallFunc_Get_Local_Weather_State_Values_Cloud_Coverage) == 0x000018, "Member 'BP_AmbientSoundController_C_State_Change_Fog::CallFunc_Get_Local_Weather_State_Values_Cloud_Coverage' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_State_Change_Fog, CallFunc_Get_Local_Weather_State_Values_Wind_Intensity) == 0x000020, "Member 'BP_AmbientSoundController_C_State_Change_Fog::CallFunc_Get_Local_Weather_State_Values_Wind_Intensity' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_State_Change_Fog, CallFunc_Get_Local_Weather_State_Values_Rain) == 0x000028, "Member 'BP_AmbientSoundController_C_State_Change_Fog::CallFunc_Get_Local_Weather_State_Values_Rain' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_State_Change_Fog, CallFunc_Get_Local_Weather_State_Values_Snow) == 0x000030, "Member 'BP_AmbientSoundController_C_State_Change_Fog::CallFunc_Get_Local_Weather_State_Values_Snow' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_State_Change_Fog, CallFunc_Get_Local_Weather_State_Values_Dust) == 0x000038, "Member 'BP_AmbientSoundController_C_State_Change_Fog::CallFunc_Get_Local_Weather_State_Values_Dust' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_State_Change_Fog, CallFunc_Get_Local_Weather_State_Values_Fog) == 0x000040, "Member 'BP_AmbientSoundController_C_State_Change_Fog::CallFunc_Get_Local_Weather_State_Values_Fog' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_State_Change_Fog, CallFunc_Get_Local_Weather_State_Values_Thunder_Lightning) == 0x000048, "Member 'BP_AmbientSoundController_C_State_Change_Fog::CallFunc_Get_Local_Weather_State_Values_Thunder_Lightning' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_State_Change_Fog, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000050, "Member 'BP_AmbientSoundController_C_State_Change_Fog::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");

// Function BP_AmbientSoundController.BP_AmbientSoundController_C.UDS End Play
// 0x0010 (0x0010 - 0x0000)
struct BP_AmbientSoundController_C_UDS_End_Play final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                EndPlayReason;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AmbientSoundController_C_UDS_End_Play) == 0x000008, "Wrong alignment on BP_AmbientSoundController_C_UDS_End_Play");
static_assert(sizeof(BP_AmbientSoundController_C_UDS_End_Play) == 0x000010, "Wrong size on BP_AmbientSoundController_C_UDS_End_Play");
static_assert(offsetof(BP_AmbientSoundController_C_UDS_End_Play, Actor) == 0x000000, "Member 'BP_AmbientSoundController_C_UDS_End_Play::Actor' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_UDS_End_Play, EndPlayReason) == 0x000008, "Member 'BP_AmbientSoundController_C_UDS_End_Play::EndPlayReason' has a wrong offset!");

// Function BP_AmbientSoundController.BP_AmbientSoundController_C.UDS Starting Up
// 0x0008 (0x0008 - 0x0000)
struct BP_AmbientSoundController_C_UDS_Starting_Up final
{
public:
	class AUltra_Dynamic_Sky_C*                   UDS_0;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AmbientSoundController_C_UDS_Starting_Up) == 0x000008, "Wrong alignment on BP_AmbientSoundController_C_UDS_Starting_Up");
static_assert(sizeof(BP_AmbientSoundController_C_UDS_Starting_Up) == 0x000008, "Wrong size on BP_AmbientSoundController_C_UDS_Starting_Up");
static_assert(offsetof(BP_AmbientSoundController_C_UDS_Starting_Up, UDS_0) == 0x000000, "Member 'BP_AmbientSoundController_C_UDS_Starting_Up::UDS_0' has a wrong offset!");

// Function BP_AmbientSoundController.BP_AmbientSoundController_C.UDW End Play
// 0x0010 (0x0010 - 0x0000)
struct BP_AmbientSoundController_C_UDW_End_Play final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                EndPlayReason;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AmbientSoundController_C_UDW_End_Play) == 0x000008, "Wrong alignment on BP_AmbientSoundController_C_UDW_End_Play");
static_assert(sizeof(BP_AmbientSoundController_C_UDW_End_Play) == 0x000010, "Wrong size on BP_AmbientSoundController_C_UDW_End_Play");
static_assert(offsetof(BP_AmbientSoundController_C_UDW_End_Play, Actor) == 0x000000, "Member 'BP_AmbientSoundController_C_UDW_End_Play::Actor' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_UDW_End_Play, EndPlayReason) == 0x000008, "Member 'BP_AmbientSoundController_C_UDW_End_Play::EndPlayReason' has a wrong offset!");

// Function BP_AmbientSoundController.BP_AmbientSoundController_C.UDW Starting Up
// 0x0008 (0x0008 - 0x0000)
struct BP_AmbientSoundController_C_UDW_Starting_Up final
{
public:
	class AUltra_Dynamic_Weather_C*               UDW_0;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AmbientSoundController_C_UDW_Starting_Up) == 0x000008, "Wrong alignment on BP_AmbientSoundController_C_UDW_Starting_Up");
static_assert(sizeof(BP_AmbientSoundController_C_UDW_Starting_Up) == 0x000008, "Wrong size on BP_AmbientSoundController_C_UDW_Starting_Up");
static_assert(offsetof(BP_AmbientSoundController_C_UDW_Starting_Up, UDW_0) == 0x000000, "Member 'BP_AmbientSoundController_C_UDW_Starting_Up::UDW_0' has a wrong offset!");

// Function BP_AmbientSoundController.BP_AmbientSoundController_C.Update Volume Multiplier
// 0x0060 (0x0060 - 0x0000)
struct BP_AmbientSoundController_C_Update_Volume_Multiplier final
{
public:
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue;          // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_2;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_3;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_4;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_5;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast; // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AmbientSoundController_C_Update_Volume_Multiplier) == 0x000008, "Wrong alignment on BP_AmbientSoundController_C_Update_Volume_Multiplier");
static_assert(sizeof(BP_AmbientSoundController_C_Update_Volume_Multiplier) == 0x000060, "Wrong size on BP_AmbientSoundController_C_Update_Volume_Multiplier");
static_assert(offsetof(BP_AmbientSoundController_C_Update_Volume_Multiplier, CallFunc_Conv_DoubleToString_ReturnValue) == 0x000000, "Member 'BP_AmbientSoundController_C_Update_Volume_Multiplier::CallFunc_Conv_DoubleToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Update_Volume_Multiplier, CallFunc_SelectFloat_ReturnValue) == 0x000010, "Member 'BP_AmbientSoundController_C_Update_Volume_Multiplier::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Update_Volume_Multiplier, CallFunc_SelectFloat_ReturnValue_1) == 0x000018, "Member 'BP_AmbientSoundController_C_Update_Volume_Multiplier::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Update_Volume_Multiplier, CallFunc_Lerp_ReturnValue) == 0x000020, "Member 'BP_AmbientSoundController_C_Update_Volume_Multiplier::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Update_Volume_Multiplier, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000028, "Member 'BP_AmbientSoundController_C_Update_Volume_Multiplier::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Update_Volume_Multiplier, CallFunc_SelectFloat_ReturnValue_2) == 0x000030, "Member 'BP_AmbientSoundController_C_Update_Volume_Multiplier::CallFunc_SelectFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Update_Volume_Multiplier, CallFunc_SelectFloat_ReturnValue_3) == 0x000038, "Member 'BP_AmbientSoundController_C_Update_Volume_Multiplier::CallFunc_SelectFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Update_Volume_Multiplier, CallFunc_SelectFloat_ReturnValue_4) == 0x000040, "Member 'BP_AmbientSoundController_C_Update_Volume_Multiplier::CallFunc_SelectFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Update_Volume_Multiplier, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000048, "Member 'BP_AmbientSoundController_C_Update_Volume_Multiplier::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Update_Volume_Multiplier, CallFunc_SelectFloat_ReturnValue_5) == 0x000050, "Member 'BP_AmbientSoundController_C_Update_Volume_Multiplier::CallFunc_SelectFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_AmbientSoundController_C_Update_Volume_Multiplier, CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast) == 0x000058, "Member 'BP_AmbientSoundController_C_Update_Volume_Multiplier::CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast' has a wrong offset!");

}

