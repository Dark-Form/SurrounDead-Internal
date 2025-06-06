﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_ClimbPath

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BTT_ClimbPath.BTT_ClimbPath_C.ExecuteUbergraph_BTT_ClimbPath
// 0x0120 (0x0120 - 0x0000)
struct BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEnvQueryInstanceBlueprintWrapper*      K2Node_CustomEvent_QueryInstance;                  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EEnvQueryStatus                               K2Node_CustomEvent_QueryStatus;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        CallFunc_GetQueryResultsAsLocations_ResultLocations; // 0x0018(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetQueryResultsAsLocations_ReturnValue;   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEnvQueryInstanceBlueprintWrapper*      CallFunc_RunEQSQuery_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item;                           // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNavigationPath*                        CallFunc_FindPathToLocationSynchronously_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPartial_ReturnValue;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNavigationPath*                        CallFunc_FindPathToLocationSynchronously_ReturnValue_1; // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item_1;                         // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)> K2Node_CreateDelegate_OutputDelegate; // 0x00B8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_ProjectPointToNavigation_ProjectedLocation; // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_ProjectPointToNavigation_ReturnValue;  // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OwnerActor;                           // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_DynamicCast_AsAIController;                 // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_SmartAIComponent_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath) == 0x000008, "Wrong alignment on BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath");
static_assert(sizeof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath) == 0x000120, "Wrong size on BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, EntryPoint) == 0x000000, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, K2Node_CustomEvent_QueryInstance) == 0x000008, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::K2Node_CustomEvent_QueryInstance' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, K2Node_CustomEvent_QueryStatus) == 0x000010, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::K2Node_CustomEvent_QueryStatus' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, CallFunc_GetQueryResultsAsLocations_ResultLocations) == 0x000018, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::CallFunc_GetQueryResultsAsLocations_ResultLocations' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, CallFunc_GetQueryResultsAsLocations_ReturnValue) == 0x000028, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::CallFunc_GetQueryResultsAsLocations_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, CallFunc_RunEQSQuery_ReturnValue) == 0x000030, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::CallFunc_RunEQSQuery_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, CallFunc_Array_Get_Item) == 0x000038, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000050, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000068, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, CallFunc_FindPathToLocationSynchronously_ReturnValue) == 0x000080, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::CallFunc_FindPathToLocationSynchronously_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, CallFunc_IsPartial_ReturnValue) == 0x000088, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::CallFunc_IsPartial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, CallFunc_FindPathToLocationSynchronously_ReturnValue_1) == 0x000090, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::CallFunc_FindPathToLocationSynchronously_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, CallFunc_Subtract_IntInt_ReturnValue) == 0x00009C, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, CallFunc_Array_Get_Item_1) == 0x0000A0, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, K2Node_CreateDelegate_OutputDelegate) == 0x0000B8, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, CallFunc_K2_ProjectPointToNavigation_ProjectedLocation) == 0x0000C8, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::CallFunc_K2_ProjectPointToNavigation_ProjectedLocation' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, CallFunc_K2_ProjectPointToNavigation_ReturnValue) == 0x0000E0, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::CallFunc_K2_ProjectPointToNavigation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, K2Node_Event_OwnerActor) == 0x0000E8, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::K2Node_Event_OwnerActor' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, CallFunc_IsValid_ReturnValue) == 0x0000F0, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, K2Node_DynamicCast_AsAIController) == 0x0000F8, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::K2Node_DynamicCast_AsAIController' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, CallFunc_K2_GetPawn_ReturnValue) == 0x000108, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, CallFunc_GetComponentByClass_ReturnValue) == 0x000110, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath, CallFunc_IsValid_ReturnValue_1) == 0x000118, "Member 'BTT_ClimbPath_C_ExecuteUbergraph_BTT_ClimbPath::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BTT_ClimbPath.BTT_ClimbPath_C.Location
// 0x0010 (0x0010 - 0x0000)
struct BTT_ClimbPath_C_Location final
{
public:
	class UEnvQueryInstanceBlueprintWrapper*      QueryInstance;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EEnvQueryStatus                               QueryStatus;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_ClimbPath_C_Location) == 0x000008, "Wrong alignment on BTT_ClimbPath_C_Location");
static_assert(sizeof(BTT_ClimbPath_C_Location) == 0x000010, "Wrong size on BTT_ClimbPath_C_Location");
static_assert(offsetof(BTT_ClimbPath_C_Location, QueryInstance) == 0x000000, "Member 'BTT_ClimbPath_C_Location::QueryInstance' has a wrong offset!");
static_assert(offsetof(BTT_ClimbPath_C_Location, QueryStatus) == 0x000008, "Member 'BTT_ClimbPath_C_Location::QueryStatus' has a wrong offset!");

// Function BTT_ClimbPath.BTT_ClimbPath_C.ReceiveExecute
// 0x0008 (0x0008 - 0x0000)
struct BTT_ClimbPath_C_ReceiveExecute final
{
public:
	class AActor*                                 OwnerActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_ClimbPath_C_ReceiveExecute) == 0x000008, "Wrong alignment on BTT_ClimbPath_C_ReceiveExecute");
static_assert(sizeof(BTT_ClimbPath_C_ReceiveExecute) == 0x000008, "Wrong size on BTT_ClimbPath_C_ReceiveExecute");
static_assert(offsetof(BTT_ClimbPath_C_ReceiveExecute, OwnerActor) == 0x000000, "Member 'BTT_ClimbPath_C_ReceiveExecute::OwnerActor' has a wrong offset!");

}

