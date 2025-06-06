﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JigContextMenuCanvas

#include "Basic.hpp"


namespace SDK::Params
{

// Function JigContextMenuCanvas.JigContextMenuCanvas_C.ExecuteUbergraph_JigContextMenuCanvas
// 0x0030 (0x0030 - 0x0000)
struct JigContextMenuCanvas_C_ExecuteUbergraph_JigContextMenuCanvas final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UJigContextMenuComp_C*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UJigContextMenuComp_C*                  CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(JigContextMenuCanvas_C_ExecuteUbergraph_JigContextMenuCanvas) == 0x000008, "Wrong alignment on JigContextMenuCanvas_C_ExecuteUbergraph_JigContextMenuCanvas");
static_assert(sizeof(JigContextMenuCanvas_C_ExecuteUbergraph_JigContextMenuCanvas) == 0x000030, "Wrong size on JigContextMenuCanvas_C_ExecuteUbergraph_JigContextMenuCanvas");
static_assert(offsetof(JigContextMenuCanvas_C_ExecuteUbergraph_JigContextMenuCanvas, EntryPoint) == 0x000000, "Member 'JigContextMenuCanvas_C_ExecuteUbergraph_JigContextMenuCanvas::EntryPoint' has a wrong offset!");
static_assert(offsetof(JigContextMenuCanvas_C_ExecuteUbergraph_JigContextMenuCanvas, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'JigContextMenuCanvas_C_ExecuteUbergraph_JigContextMenuCanvas::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(JigContextMenuCanvas_C_ExecuteUbergraph_JigContextMenuCanvas, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'JigContextMenuCanvas_C_ExecuteUbergraph_JigContextMenuCanvas::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(JigContextMenuCanvas_C_ExecuteUbergraph_JigContextMenuCanvas, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'JigContextMenuCanvas_C_ExecuteUbergraph_JigContextMenuCanvas::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(JigContextMenuCanvas_C_ExecuteUbergraph_JigContextMenuCanvas, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'JigContextMenuCanvas_C_ExecuteUbergraph_JigContextMenuCanvas::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(JigContextMenuCanvas_C_ExecuteUbergraph_JigContextMenuCanvas, Temp_bool_IsClosed_Variable) == 0x000018, "Member 'JigContextMenuCanvas_C_ExecuteUbergraph_JigContextMenuCanvas::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(JigContextMenuCanvas_C_ExecuteUbergraph_JigContextMenuCanvas, CallFunc_GetPlayerPawn_ReturnValue) == 0x000020, "Member 'JigContextMenuCanvas_C_ExecuteUbergraph_JigContextMenuCanvas::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(JigContextMenuCanvas_C_ExecuteUbergraph_JigContextMenuCanvas, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000028, "Member 'JigContextMenuCanvas_C_ExecuteUbergraph_JigContextMenuCanvas::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");

}

