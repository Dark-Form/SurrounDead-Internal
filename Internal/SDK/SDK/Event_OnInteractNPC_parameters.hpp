﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Event_OnInteractNPC

#include "Basic.hpp"


namespace SDK::Params
{

// Function Event_OnInteractNPC.Event_OnInteractNPC_C.ExecuteEvent
// 0x0040 (0x0040 - 0x0000)
struct Event_OnInteractNPC_C_ExecuteEvent final
{
public:
	class APawn*                                  Pawn;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      Controller;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNarrativeComponent*                    NarrativeComponent;                                // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_JigHelperComp_C*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_MpInteractInterface_C> K2Node_DynamicCast_AsBP_Mp_Interact_Interface; // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Event_OnInteractNPC_C_ExecuteEvent) == 0x000008, "Wrong alignment on Event_OnInteractNPC_C_ExecuteEvent");
static_assert(sizeof(Event_OnInteractNPC_C_ExecuteEvent) == 0x000040, "Wrong size on Event_OnInteractNPC_C_ExecuteEvent");
static_assert(offsetof(Event_OnInteractNPC_C_ExecuteEvent, Pawn) == 0x000000, "Member 'Event_OnInteractNPC_C_ExecuteEvent::Pawn' has a wrong offset!");
static_assert(offsetof(Event_OnInteractNPC_C_ExecuteEvent, Controller) == 0x000008, "Member 'Event_OnInteractNPC_C_ExecuteEvent::Controller' has a wrong offset!");
static_assert(offsetof(Event_OnInteractNPC_C_ExecuteEvent, NarrativeComponent) == 0x000010, "Member 'Event_OnInteractNPC_C_ExecuteEvent::NarrativeComponent' has a wrong offset!");
static_assert(offsetof(Event_OnInteractNPC_C_ExecuteEvent, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'Event_OnInteractNPC_C_ExecuteEvent::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_OnInteractNPC_C_ExecuteEvent, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'Event_OnInteractNPC_C_ExecuteEvent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_OnInteractNPC_C_ExecuteEvent, K2Node_DynamicCast_AsBP_Mp_Interact_Interface) == 0x000028, "Member 'Event_OnInteractNPC_C_ExecuteEvent::K2Node_DynamicCast_AsBP_Mp_Interact_Interface' has a wrong offset!");
static_assert(offsetof(Event_OnInteractNPC_C_ExecuteEvent, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'Event_OnInteractNPC_C_ExecuteEvent::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

