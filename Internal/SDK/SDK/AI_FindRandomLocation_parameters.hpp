﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AI_FindRandomLocation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AI_FindRandomLocation.AI_FindRandomLocation_C.ExecuteUbergraph_AI_FindRandomLocation
// 0x0050 (0x0050 - 0x0000)
struct AI_FindRandomLocation_C_ExecuteUbergraph_AI_FindRandomLocation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation; // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue; // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AI_FindRandomLocation_C_ExecuteUbergraph_AI_FindRandomLocation) == 0x000008, "Wrong alignment on AI_FindRandomLocation_C_ExecuteUbergraph_AI_FindRandomLocation");
static_assert(sizeof(AI_FindRandomLocation_C_ExecuteUbergraph_AI_FindRandomLocation) == 0x000050, "Wrong size on AI_FindRandomLocation_C_ExecuteUbergraph_AI_FindRandomLocation");
static_assert(offsetof(AI_FindRandomLocation_C_ExecuteUbergraph_AI_FindRandomLocation, EntryPoint) == 0x000000, "Member 'AI_FindRandomLocation_C_ExecuteUbergraph_AI_FindRandomLocation::EntryPoint' has a wrong offset!");
static_assert(offsetof(AI_FindRandomLocation_C_ExecuteUbergraph_AI_FindRandomLocation, K2Node_Event_OwnerController) == 0x000008, "Member 'AI_FindRandomLocation_C_ExecuteUbergraph_AI_FindRandomLocation::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(AI_FindRandomLocation_C_ExecuteUbergraph_AI_FindRandomLocation, K2Node_Event_ControlledPawn) == 0x000010, "Member 'AI_FindRandomLocation_C_ExecuteUbergraph_AI_FindRandomLocation::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(AI_FindRandomLocation_C_ExecuteUbergraph_AI_FindRandomLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'AI_FindRandomLocation_C_ExecuteUbergraph_AI_FindRandomLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AI_FindRandomLocation_C_ExecuteUbergraph_AI_FindRandomLocation, CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation) == 0x000030, "Member 'AI_FindRandomLocation_C_ExecuteUbergraph_AI_FindRandomLocation::CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation' has a wrong offset!");
static_assert(offsetof(AI_FindRandomLocation_C_ExecuteUbergraph_AI_FindRandomLocation, CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue) == 0x000048, "Member 'AI_FindRandomLocation_C_ExecuteUbergraph_AI_FindRandomLocation::CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue' has a wrong offset!");

// Function AI_FindRandomLocation.AI_FindRandomLocation_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct AI_FindRandomLocation_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AI_FindRandomLocation_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on AI_FindRandomLocation_C_ReceiveExecuteAI");
static_assert(sizeof(AI_FindRandomLocation_C_ReceiveExecuteAI) == 0x000010, "Wrong size on AI_FindRandomLocation_C_ReceiveExecuteAI");
static_assert(offsetof(AI_FindRandomLocation_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'AI_FindRandomLocation_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(AI_FindRandomLocation_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'AI_FindRandomLocation_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}

