﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UDS_Volume_Actor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UDS_Volume_Actor.UDS_Volume_Actor_C.ExecuteUbergraph_UDS_Volume_Actor
// 0x0004 (0x0004 - 0x0000)
struct UDS_Volume_Actor_C_ExecuteUbergraph_UDS_Volume_Actor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UDS_Volume_Actor_C_ExecuteUbergraph_UDS_Volume_Actor) == 0x000004, "Wrong alignment on UDS_Volume_Actor_C_ExecuteUbergraph_UDS_Volume_Actor");
static_assert(sizeof(UDS_Volume_Actor_C_ExecuteUbergraph_UDS_Volume_Actor) == 0x000004, "Wrong size on UDS_Volume_Actor_C_ExecuteUbergraph_UDS_Volume_Actor");
static_assert(offsetof(UDS_Volume_Actor_C_ExecuteUbergraph_UDS_Volume_Actor, EntryPoint) == 0x000000, "Member 'UDS_Volume_Actor_C_ExecuteUbergraph_UDS_Volume_Actor::EntryPoint' has a wrong offset!");

// Function UDS_Volume_Actor.UDS_Volume_Actor_C.Query Blend Radius
// 0x01A0 (0x01A0 - 0x0000)
struct UDS_Volume_Actor_C_Query_Blend_Radius final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Multiplier;                                        // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Local_Location;                                    // 0x0020(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0040(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_InverseTransformLocation_ReturnValue;     // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue;                         // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_GetAbs_ReturnValue;                // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetMinElement_ReturnValue;                // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_2;                     // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_179[0x7];                                      // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_3;                     // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_A_ImplicitCast;                      // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UDS_Volume_Actor_C_Query_Blend_Radius) == 0x000010, "Wrong alignment on UDS_Volume_Actor_C_Query_Blend_Radius");
static_assert(sizeof(UDS_Volume_Actor_C_Query_Blend_Radius) == 0x0001A0, "Wrong size on UDS_Volume_Actor_C_Query_Blend_Radius");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, Location) == 0x000000, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::Location' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, Multiplier) == 0x000018, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::Multiplier' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, Local_Location) == 0x000020, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::Local_Location' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000038, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000040, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_InverseTransformLocation_ReturnValue) == 0x0000A0, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_InverseTransformLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_FMax_ReturnValue) == 0x0000B8, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_BreakVector_X) == 0x0000C0, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_BreakVector_Y) == 0x0000C8, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_BreakVector_Z) == 0x0000D0, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000D8, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000E0, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_FClamp_ReturnValue) == 0x0000E8, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_MakeVector_ReturnValue) == 0x0000F0, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_Vector_GetAbs_ReturnValue) == 0x000108, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_Vector_GetAbs_ReturnValue' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_Vector_Distance_ReturnValue) == 0x000120, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000128, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000140, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_GetMinElement_ReturnValue) == 0x000148, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_GetMinElement_ReturnValue' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000150, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000158, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_FClamp_ReturnValue_1) == 0x000160, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_FClamp_ReturnValue_2) == 0x000168, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_FClamp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_VSize_ReturnValue) == 0x000170, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, K2Node_SwitchEnum_CmpSuccess) == 0x000178, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x000180, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x000188, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_FClamp_ReturnValue_3) == 0x000190, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_FClamp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_Query_Blend_Radius, CallFunc_FMax_A_ImplicitCast) == 0x000198, "Member 'UDS_Volume_Actor_C_Query_Blend_Radius::CallFunc_FMax_A_ImplicitCast' has a wrong offset!");

// Function UDS_Volume_Actor.UDS_Volume_Actor_C.UserConstructionScript
// 0x0150 (0x0150 - 0x0000)
struct UDS_Volume_Actor_C_UserConstructionScript final
{
public:
	struct FTransform                             Temp_struct_Variable;                              // 0x0000(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Temp_struct_Variable_1;                            // 0x0060(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CallFunc_AddComponent_ReturnValue;                 // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       CallFunc_AddComponent_ReturnValue_1;               // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Temp_struct_Variable_2;                            // 0x00D0(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      CallFunc_AddComponent_ReturnValue_2;               // 0x0130(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x3];                                      // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetCapsuleRadius_Radius_ImplicitCast;     // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast; // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UDS_Volume_Actor_C_UserConstructionScript) == 0x000010, "Wrong alignment on UDS_Volume_Actor_C_UserConstructionScript");
static_assert(sizeof(UDS_Volume_Actor_C_UserConstructionScript) == 0x000150, "Wrong size on UDS_Volume_Actor_C_UserConstructionScript");
static_assert(offsetof(UDS_Volume_Actor_C_UserConstructionScript, Temp_struct_Variable) == 0x000000, "Member 'UDS_Volume_Actor_C_UserConstructionScript::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_UserConstructionScript, Temp_struct_Variable_1) == 0x000060, "Member 'UDS_Volume_Actor_C_UserConstructionScript::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x0000C0, "Member 'UDS_Volume_Actor_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue_1) == 0x0000C8, "Member 'UDS_Volume_Actor_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_UserConstructionScript, Temp_struct_Variable_2) == 0x0000D0, "Member 'UDS_Volume_Actor_C_UserConstructionScript::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue_2) == 0x000130, "Member 'UDS_Volume_Actor_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_UserConstructionScript, K2Node_SwitchEnum_CmpSuccess) == 0x000138, "Member 'UDS_Volume_Actor_C_UserConstructionScript::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_UserConstructionScript, CallFunc_SetCapsuleRadius_Radius_ImplicitCast) == 0x00013C, "Member 'UDS_Volume_Actor_C_UserConstructionScript::CallFunc_SetCapsuleRadius_Radius_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UDS_Volume_Actor_C_UserConstructionScript, CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast) == 0x000140, "Member 'UDS_Volume_Actor_C_UserConstructionScript::CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast' has a wrong offset!");

}

