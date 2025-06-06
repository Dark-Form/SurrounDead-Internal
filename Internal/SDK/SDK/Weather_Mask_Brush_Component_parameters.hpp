﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Weather_Mask_Brush_Component

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UDS_Weather_Mask_Brush_structs.hpp"


namespace SDK::Params
{

// Function Weather_Mask_Brush_Component.Weather_Mask_Brush_Component_C.Calculate Masking At Location
// 0x01B0 (0x01B0 - 0x0000)
struct Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Mask;                                              // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Cancel_All_Masks;                                  // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Mask_Value;                                        // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Centered_UV;                                       // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetRotated2D_ReturnValue;                 // 0x00A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DVector2D_ReturnValue;      // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Abs_ReturnValue;                          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue_1;            // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize2D_ReturnValue;                      // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue_2;            // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetAbsMax2D_ReturnValue;                  // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue_3;            // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetAbsMax2D_ReturnValue_1;                // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize2D_ReturnValue_1;                    // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_4;      // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetAbsMax2D_ReturnValue_2;                // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_5;      // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0198(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRotated2D_AngleDeg_ImplicitCast;       // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location) == 0x000008, "Wrong alignment on Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location");
static_assert(sizeof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location) == 0x0001B0, "Wrong size on Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, Location) == 0x000000, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::Location' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, Mask) == 0x000018, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::Mask' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, Cancel_All_Masks) == 0x000028, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::Cancel_All_Masks' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, Mask_Value) == 0x000030, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::Mask_Value' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, Centered_UV) == 0x000038, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::Centered_UV' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x000048, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, K2Node_SwitchEnum_CmpSuccess) == 0x000058, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000060, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_BreakVector_X) == 0x000078, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_BreakVector_Y) == 0x000080, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_BreakVector_Z) == 0x000088, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000090, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000098, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_GetRotated2D_ReturnValue) == 0x0000A8, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_GetRotated2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_Divide_Vector2DVector2D_ReturnValue) == 0x0000B8, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_Divide_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_BreakVector2D_X) == 0x0000C8, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_BreakVector2D_Y) == 0x0000D0, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_MapRangeClamped_ReturnValue) == 0x0000D8, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0000E0, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_Abs_ReturnValue) == 0x0000E8, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_MapRangeClamped_ReturnValue_1) == 0x0000F0, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_MapRangeClamped_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_VSize2D_ReturnValue) == 0x0000F8, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_VSize2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000100, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_MapRangeClamped_ReturnValue_2) == 0x000108, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_MapRangeClamped_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_GetAbsMax2D_ReturnValue) == 0x000110, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_GetAbsMax2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_BreakVector_X_1) == 0x000118, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_BreakVector_Y_1) == 0x000120, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_BreakVector_Z_1) == 0x000128, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_MapRangeClamped_ReturnValue_3) == 0x000130, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_MapRangeClamped_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000138, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_GetAbsMax2D_ReturnValue_1) == 0x000140, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_GetAbsMax2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_VSize2D_ReturnValue_1) == 0x000148, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_VSize2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x000150, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_Multiply_DoubleDouble_ReturnValue_4) == 0x000158, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_Multiply_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000160, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000168, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_FClamp_ReturnValue) == 0x000170, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_FClamp_ReturnValue_1) == 0x000178, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_GetAbsMax2D_ReturnValue_2) == 0x000180, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_GetAbsMax2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_Multiply_DoubleDouble_ReturnValue_5) == 0x000188, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_Multiply_DoubleDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000190, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_MakeVector2D_ReturnValue) == 0x000198, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location, CallFunc_GetRotated2D_AngleDeg_ImplicitCast) == 0x0001A8, "Member 'Weather_Mask_Brush_Component_C_Calculate_Masking_At_Location::CallFunc_GetRotated2D_AngleDeg_ImplicitCast' has a wrong offset!");

// Function Weather_Mask_Brush_Component.Weather_Mask_Brush_Component_C.Prepare for Drawing
// 0x0070 (0x0070 - 0x0000)
struct Weather_Mask_Brush_Component_C_Prepare_for_Drawing final
{
public:
	bool                                          Runtime;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AUltra_Dynamic_Weather_C*               UDW_0;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EUDS_Weather_Mask_Brush                       Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_2;                            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_3;                            // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_4;                            // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_5;                            // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_G_ImplicitCast;                  // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_R_ImplicitCast;                  // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Weather_Mask_Brush_Component_C_Prepare_for_Drawing) == 0x000008, "Wrong alignment on Weather_Mask_Brush_Component_C_Prepare_for_Drawing");
static_assert(sizeof(Weather_Mask_Brush_Component_C_Prepare_for_Drawing) == 0x000070, "Wrong size on Weather_Mask_Brush_Component_C_Prepare_for_Drawing");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Prepare_for_Drawing, Runtime) == 0x000000, "Member 'Weather_Mask_Brush_Component_C_Prepare_for_Drawing::Runtime' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Prepare_for_Drawing, UDW_0) == 0x000008, "Member 'Weather_Mask_Brush_Component_C_Prepare_for_Drawing::UDW_0' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Prepare_for_Drawing, Temp_byte_Variable) == 0x000010, "Member 'Weather_Mask_Brush_Component_C_Prepare_for_Drawing::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Prepare_for_Drawing, Temp_object_Variable) == 0x000018, "Member 'Weather_Mask_Brush_Component_C_Prepare_for_Drawing::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Prepare_for_Drawing, Temp_object_Variable_1) == 0x000020, "Member 'Weather_Mask_Brush_Component_C_Prepare_for_Drawing::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Prepare_for_Drawing, Temp_object_Variable_2) == 0x000028, "Member 'Weather_Mask_Brush_Component_C_Prepare_for_Drawing::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Prepare_for_Drawing, Temp_object_Variable_3) == 0x000030, "Member 'Weather_Mask_Brush_Component_C_Prepare_for_Drawing::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Prepare_for_Drawing, Temp_object_Variable_4) == 0x000038, "Member 'Weather_Mask_Brush_Component_C_Prepare_for_Drawing::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Prepare_for_Drawing, Temp_object_Variable_5) == 0x000040, "Member 'Weather_Mask_Brush_Component_C_Prepare_for_Drawing::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Prepare_for_Drawing, CallFunc_Not_PreBool_ReturnValue) == 0x000048, "Member 'Weather_Mask_Brush_Component_C_Prepare_for_Drawing::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Prepare_for_Drawing, K2Node_MakeStruct_LinearColor) == 0x00004C, "Member 'Weather_Mask_Brush_Component_C_Prepare_for_Drawing::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Prepare_for_Drawing, K2Node_Select_Default) == 0x000060, "Member 'Weather_Mask_Brush_Component_C_Prepare_for_Drawing::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Prepare_for_Drawing, K2Node_MakeStruct_G_ImplicitCast) == 0x000068, "Member 'Weather_Mask_Brush_Component_C_Prepare_for_Drawing::K2Node_MakeStruct_G_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Weather_Mask_Brush_Component_C_Prepare_for_Drawing, K2Node_MakeStruct_R_ImplicitCast) == 0x00006C, "Member 'Weather_Mask_Brush_Component_C_Prepare_for_Drawing::K2Node_MakeStruct_R_ImplicitCast' has a wrong offset!");

}

