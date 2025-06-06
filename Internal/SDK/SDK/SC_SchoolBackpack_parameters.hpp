﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SC_SchoolBackpack

#include "Basic.hpp"


namespace SDK::Params
{

// Function SC_SchoolBackpack.SC_SchoolBackpack_C.Event_Callback
// 0x0001 (0x0001 - 0x0000)
struct SC_SchoolBackpack_C_Event_Callback final
{
public:
	bool                                          NewValue;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SC_SchoolBackpack_C_Event_Callback) == 0x000001, "Wrong alignment on SC_SchoolBackpack_C_Event_Callback");
static_assert(sizeof(SC_SchoolBackpack_C_Event_Callback) == 0x000001, "Wrong size on SC_SchoolBackpack_C_Event_Callback");
static_assert(offsetof(SC_SchoolBackpack_C_Event_Callback, NewValue) == 0x000000, "Member 'SC_SchoolBackpack_C_Event_Callback::NewValue' has a wrong offset!");

// Function SC_SchoolBackpack.SC_SchoolBackpack_C.ExecuteUbergraph_SC_SchoolBackpack
// 0x0030 (0x0030 - 0x0000)
struct SC_SchoolBackpack_C_ExecuteUbergraph_SC_SchoolBackpack final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UJSIContainer_C*>                K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	TDelegate<void(bool NewValue)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_NewValue;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SC_SchoolBackpack_C_ExecuteUbergraph_SC_SchoolBackpack) == 0x000008, "Wrong alignment on SC_SchoolBackpack_C_ExecuteUbergraph_SC_SchoolBackpack");
static_assert(sizeof(SC_SchoolBackpack_C_ExecuteUbergraph_SC_SchoolBackpack) == 0x000030, "Wrong size on SC_SchoolBackpack_C_ExecuteUbergraph_SC_SchoolBackpack");
static_assert(offsetof(SC_SchoolBackpack_C_ExecuteUbergraph_SC_SchoolBackpack, EntryPoint) == 0x000000, "Member 'SC_SchoolBackpack_C_ExecuteUbergraph_SC_SchoolBackpack::EntryPoint' has a wrong offset!");
static_assert(offsetof(SC_SchoolBackpack_C_ExecuteUbergraph_SC_SchoolBackpack, K2Node_MakeArray_Array) == 0x000008, "Member 'SC_SchoolBackpack_C_ExecuteUbergraph_SC_SchoolBackpack::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SC_SchoolBackpack_C_ExecuteUbergraph_SC_SchoolBackpack, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'SC_SchoolBackpack_C_ExecuteUbergraph_SC_SchoolBackpack::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SC_SchoolBackpack_C_ExecuteUbergraph_SC_SchoolBackpack, K2Node_CustomEvent_NewValue) == 0x000028, "Member 'SC_SchoolBackpack_C_ExecuteUbergraph_SC_SchoolBackpack::K2Node_CustomEvent_NewValue' has a wrong offset!");

}

