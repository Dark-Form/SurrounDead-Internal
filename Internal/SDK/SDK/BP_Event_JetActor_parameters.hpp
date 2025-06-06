﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Event_JetActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Event_JetActor.BP_Event_JetActor_C.ExecuteUbergraph_BP_Event_JetActor
// 0x01C8 (0x01C8 - 0x0000)
struct BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VInterpTo_Constant_ReturnValue;           // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x00D0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B9[0x3];                                      // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast; // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VInterpTo_Constant_DeltaTime_ImplicitCast; // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor) == 0x000008, "Wrong alignment on BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor");
static_assert(sizeof(BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor) == 0x0001C8, "Wrong size on BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor");
static_assert(offsetof(BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor, EntryPoint) == 0x000000, "Member 'BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor, CallFunc_GetForwardVector_ReturnValue) == 0x000020, "Member 'BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000038, "Member 'BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000040, "Member 'BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000058, "Member 'BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor, CallFunc_VInterpTo_Constant_ReturnValue) == 0x000070, "Member 'BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor::CallFunc_VInterpTo_Constant_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor, CallFunc_BreakVector_X) == 0x000088, "Member 'BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor, CallFunc_BreakVector_Y) == 0x000090, "Member 'BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor, CallFunc_BreakVector_Z) == 0x000098, "Member 'BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor, CallFunc_BreakVector_X_1) == 0x0000A0, "Member 'BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor, CallFunc_BreakVector_Y_1) == 0x0000A8, "Member 'BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor, CallFunc_BreakVector_Z_1) == 0x0000B0, "Member 'BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor, CallFunc_MakeVector_ReturnValue) == 0x0000B8, "Member 'BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0000D0, "Member 'BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0001B8, "Member 'BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor, CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast) == 0x0001BC, "Member 'BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor::CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor, CallFunc_VInterpTo_Constant_DeltaTime_ImplicitCast) == 0x0001C0, "Member 'BP_Event_JetActor_C_ExecuteUbergraph_BP_Event_JetActor::CallFunc_VInterpTo_Constant_DeltaTime_ImplicitCast' has a wrong offset!");

// Function BP_Event_JetActor.BP_Event_JetActor_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Event_JetActor_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Event_JetActor_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_Event_JetActor_C_ReceiveTick");
static_assert(sizeof(BP_Event_JetActor_C_ReceiveTick) == 0x000004, "Wrong size on BP_Event_JetActor_C_ReceiveTick");
static_assert(offsetof(BP_Event_JetActor_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_Event_JetActor_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

