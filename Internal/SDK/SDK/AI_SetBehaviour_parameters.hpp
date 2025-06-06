﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AI_SetBehaviour

#include "Basic.hpp"


namespace SDK::Params
{

// Function AI_SetBehaviour.AI_SetBehaviour_C.ExecuteUbergraph_AI_SetBehaviour
// 0x0020 (0x0020 - 0x0000)
struct AI_SetBehaviour_C_ExecuteUbergraph_AI_SetBehaviour final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USD_AIComponent_C*                      CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AI_SetBehaviour_C_ExecuteUbergraph_AI_SetBehaviour) == 0x000008, "Wrong alignment on AI_SetBehaviour_C_ExecuteUbergraph_AI_SetBehaviour");
static_assert(sizeof(AI_SetBehaviour_C_ExecuteUbergraph_AI_SetBehaviour) == 0x000020, "Wrong size on AI_SetBehaviour_C_ExecuteUbergraph_AI_SetBehaviour");
static_assert(offsetof(AI_SetBehaviour_C_ExecuteUbergraph_AI_SetBehaviour, EntryPoint) == 0x000000, "Member 'AI_SetBehaviour_C_ExecuteUbergraph_AI_SetBehaviour::EntryPoint' has a wrong offset!");
static_assert(offsetof(AI_SetBehaviour_C_ExecuteUbergraph_AI_SetBehaviour, K2Node_Event_OwnerController) == 0x000008, "Member 'AI_SetBehaviour_C_ExecuteUbergraph_AI_SetBehaviour::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(AI_SetBehaviour_C_ExecuteUbergraph_AI_SetBehaviour, K2Node_Event_ControlledPawn) == 0x000010, "Member 'AI_SetBehaviour_C_ExecuteUbergraph_AI_SetBehaviour::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(AI_SetBehaviour_C_ExecuteUbergraph_AI_SetBehaviour, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'AI_SetBehaviour_C_ExecuteUbergraph_AI_SetBehaviour::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function AI_SetBehaviour.AI_SetBehaviour_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct AI_SetBehaviour_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AI_SetBehaviour_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on AI_SetBehaviour_C_ReceiveExecuteAI");
static_assert(sizeof(AI_SetBehaviour_C_ReceiveExecuteAI) == 0x000010, "Wrong size on AI_SetBehaviour_C_ReceiveExecuteAI");
static_assert(offsetof(AI_SetBehaviour_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'AI_SetBehaviour_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(AI_SetBehaviour_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'AI_SetBehaviour_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}

