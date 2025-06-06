﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Event_SpawnActor

#include "Basic.hpp"


namespace SDK::Params
{

// Function Event_SpawnActor.Event_SpawnActor_C.ExecuteEvent
// 0x0048 (0x0048 - 0x0000)
struct Event_SpawnActor_C_ExecuteEvent final
{
public:
	class APawn*                                  Pawn;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      Controller;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNarrativeComponent*                    NarrativeComponent;                                // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_Quests_C>         K2Node_DynamicCast_AsBPI_Quests;                   // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Event_SpawnActor_C_ExecuteEvent) == 0x000008, "Wrong alignment on Event_SpawnActor_C_ExecuteEvent");
static_assert(sizeof(Event_SpawnActor_C_ExecuteEvent) == 0x000048, "Wrong size on Event_SpawnActor_C_ExecuteEvent");
static_assert(offsetof(Event_SpawnActor_C_ExecuteEvent, Pawn) == 0x000000, "Member 'Event_SpawnActor_C_ExecuteEvent::Pawn' has a wrong offset!");
static_assert(offsetof(Event_SpawnActor_C_ExecuteEvent, Controller) == 0x000008, "Member 'Event_SpawnActor_C_ExecuteEvent::Controller' has a wrong offset!");
static_assert(offsetof(Event_SpawnActor_C_ExecuteEvent, NarrativeComponent) == 0x000010, "Member 'Event_SpawnActor_C_ExecuteEvent::NarrativeComponent' has a wrong offset!");
static_assert(offsetof(Event_SpawnActor_C_ExecuteEvent, CallFunc_IsEmpty_ReturnValue) == 0x000018, "Member 'Event_SpawnActor_C_ExecuteEvent::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_SpawnActor_C_ExecuteEvent, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'Event_SpawnActor_C_ExecuteEvent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_SpawnActor_C_ExecuteEvent, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000020, "Member 'Event_SpawnActor_C_ExecuteEvent::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_SpawnActor_C_ExecuteEvent, CallFunc_FinishSpawningActor_ReturnValue) == 0x000028, "Member 'Event_SpawnActor_C_ExecuteEvent::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_SpawnActor_C_ExecuteEvent, K2Node_DynamicCast_AsBPI_Quests) == 0x000030, "Member 'Event_SpawnActor_C_ExecuteEvent::K2Node_DynamicCast_AsBPI_Quests' has a wrong offset!");
static_assert(offsetof(Event_SpawnActor_C_ExecuteEvent, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'Event_SpawnActor_C_ExecuteEvent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Event_SpawnActor_C_ExecuteEvent, CallFunc_Array_AddUnique_ReturnValue) == 0x000044, "Member 'Event_SpawnActor_C_ExecuteEvent::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

}

