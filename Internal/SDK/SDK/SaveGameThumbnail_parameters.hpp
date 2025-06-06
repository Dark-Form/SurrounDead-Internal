﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SaveGameThumbnail

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function SaveGameThumbnail.SaveGameThumbnail_C.ExecuteUbergraph_SaveGameThumbnail
// 0x0210 (0x0210 - 0x0000)
struct SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0004(0x0014)()
	uint8                                         Pad_18[0x8];                                       // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0020(0x00D0)()
	class UTexture2D*                             K2Node_CustomEvent_Texture;                        // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x3];                                       // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Blueprint_GetSizeY_ReturnValue;           // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Blueprint_GetSizeX_ReturnValue;           // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0118(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_128[0x8];                                      // 0x0128(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x0130(0x00D0)()
	struct FDeprecateSlateVector2D                K2Node_MakeStruct_ImageSize_ImplicitCast;          // 0x0200(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail) == 0x000010, "Wrong alignment on SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail");
static_assert(sizeof(SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail) == 0x000210, "Wrong size on SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail");
static_assert(offsetof(SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail, EntryPoint) == 0x000000, "Member 'SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail::EntryPoint' has a wrong offset!");
static_assert(offsetof(SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail, K2Node_MakeStruct_SlateColor) == 0x000004, "Member 'SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail, K2Node_MakeStruct_SlateBrush) == 0x000020, "Member 'SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail, K2Node_CustomEvent_Texture) == 0x0000F0, "Member 'SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail::K2Node_CustomEvent_Texture' has a wrong offset!");
static_assert(offsetof(SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail, CallFunc_IsValid_ReturnValue) == 0x0000F8, "Member 'SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail, CallFunc_Blueprint_GetSizeY_ReturnValue) == 0x0000FC, "Member 'SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail::CallFunc_Blueprint_GetSizeY_ReturnValue' has a wrong offset!");
static_assert(offsetof(SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000100, "Member 'SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail, CallFunc_Blueprint_GetSizeX_ReturnValue) == 0x000108, "Member 'SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail::CallFunc_Blueprint_GetSizeX_ReturnValue' has a wrong offset!");
static_assert(offsetof(SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000110, "Member 'SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail, CallFunc_MakeVector2D_ReturnValue) == 0x000118, "Member 'SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail, K2Node_MakeStruct_SlateBrush_1) == 0x000130, "Member 'SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail, K2Node_MakeStruct_ImageSize_ImplicitCast) == 0x000200, "Member 'SaveGameThumbnail_C_ExecuteUbergraph_SaveGameThumbnail::K2Node_MakeStruct_ImageSize_ImplicitCast' has a wrong offset!");

// Function SaveGameThumbnail.SaveGameThumbnail_C.SetThumbnail
// 0x0008 (0x0008 - 0x0000)
struct SaveGameThumbnail_C_SetThumbnail final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SaveGameThumbnail_C_SetThumbnail) == 0x000008, "Wrong alignment on SaveGameThumbnail_C_SetThumbnail");
static_assert(sizeof(SaveGameThumbnail_C_SetThumbnail) == 0x000008, "Wrong size on SaveGameThumbnail_C_SetThumbnail");
static_assert(offsetof(SaveGameThumbnail_C_SetThumbnail, Texture) == 0x000000, "Member 'SaveGameThumbnail_C_SetThumbnail::Texture' has a wrong offset!");

}

