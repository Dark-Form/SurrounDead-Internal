﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ZoneAreaWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ZoneAreaWidget.ZoneAreaWidget_C.ExecuteUbergraph_ZoneAreaWidget
// 0x00D0 (0x00D0 - 0x0000)
struct ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD_Game_C*                            CallFunc_GetHUD_HUD;                               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable;                                // 0x0010(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0028(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_Name;                           // 0x0050(0x0018)()
	class UTexture*                               K2Node_CustomEvent_Texture;                        // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_CustomEvent_Color;                          // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Entering_;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_83[0x5];                                       // 0x0083(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0088(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00B8(0x0018)()
};
static_assert(alignof(ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget) == 0x000008, "Wrong alignment on ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget");
static_assert(sizeof(ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget) == 0x0000D0, "Wrong size on ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget");
static_assert(offsetof(ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget, EntryPoint) == 0x000000, "Member 'ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget, CallFunc_GetHUD_HUD) == 0x000008, "Member 'ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget::CallFunc_GetHUD_HUD' has a wrong offset!");
static_assert(offsetof(ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget, Temp_text_Variable) == 0x000010, "Member 'ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget, Temp_text_Variable_1) == 0x000028, "Member 'ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget, K2Node_CustomEvent_Name) == 0x000050, "Member 'ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget::K2Node_CustomEvent_Name' has a wrong offset!");
static_assert(offsetof(ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget, K2Node_CustomEvent_Texture) == 0x000068, "Member 'ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget::K2Node_CustomEvent_Texture' has a wrong offset!");
static_assert(offsetof(ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget, K2Node_CustomEvent_Color) == 0x000070, "Member 'ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget::K2Node_CustomEvent_Color' has a wrong offset!");
static_assert(offsetof(ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget, K2Node_CustomEvent_Entering_) == 0x000080, "Member 'ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget::K2Node_CustomEvent_Entering_' has a wrong offset!");
static_assert(offsetof(ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget, CallFunc_IsValid_ReturnValue) == 0x000081, "Member 'ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget, Temp_bool_Variable) == 0x000082, "Member 'ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget, K2Node_Select_Default) == 0x000088, "Member 'ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget, CallFunc_PlayAnimation_ReturnValue) == 0x0000A0, "Member 'ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget, K2Node_MakeArray_Array) == 0x0000A8, "Member 'ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget, CallFunc_Format_ReturnValue) == 0x0000B8, "Member 'ZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function ZoneAreaWidget.ZoneAreaWidget_C.SetName
// 0x0038 (0x0038 - 0x0000)
struct ZoneAreaWidget_C_SetName final
{
public:
	class FText                                   Name_0;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture*                               Texture;                                           // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Entering_;                                         // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ZoneAreaWidget_C_SetName) == 0x000008, "Wrong alignment on ZoneAreaWidget_C_SetName");
static_assert(sizeof(ZoneAreaWidget_C_SetName) == 0x000038, "Wrong size on ZoneAreaWidget_C_SetName");
static_assert(offsetof(ZoneAreaWidget_C_SetName, Name_0) == 0x000000, "Member 'ZoneAreaWidget_C_SetName::Name_0' has a wrong offset!");
static_assert(offsetof(ZoneAreaWidget_C_SetName, Texture) == 0x000018, "Member 'ZoneAreaWidget_C_SetName::Texture' has a wrong offset!");
static_assert(offsetof(ZoneAreaWidget_C_SetName, Color) == 0x000020, "Member 'ZoneAreaWidget_C_SetName::Color' has a wrong offset!");
static_assert(offsetof(ZoneAreaWidget_C_SetName, Entering_) == 0x000030, "Member 'ZoneAreaWidget_C_SetName::Entering_' has a wrong offset!");

}

