﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EnhancedMappingOption

#include "Basic.hpp"

#include "EnhancedInput_structs.hpp"
#include "InputCore_structs.hpp"
#include "Slate_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function EnhancedMappingOption.EnhancedMappingOption_C.BndEvt__EnhancedMappingOption_InputKeySelector_220_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct EnhancedMappingOption_C_BndEvt__EnhancedMappingOption_InputKeySelector_220_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature final
{
public:
	struct FInputChord                            SelectedKey;                                       // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(EnhancedMappingOption_C_BndEvt__EnhancedMappingOption_InputKeySelector_220_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature) == 0x000008, "Wrong alignment on EnhancedMappingOption_C_BndEvt__EnhancedMappingOption_InputKeySelector_220_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature");
static_assert(sizeof(EnhancedMappingOption_C_BndEvt__EnhancedMappingOption_InputKeySelector_220_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature) == 0x000020, "Wrong size on EnhancedMappingOption_C_BndEvt__EnhancedMappingOption_InputKeySelector_220_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature");
static_assert(offsetof(EnhancedMappingOption_C_BndEvt__EnhancedMappingOption_InputKeySelector_220_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature, SelectedKey) == 0x000000, "Member 'EnhancedMappingOption_C_BndEvt__EnhancedMappingOption_InputKeySelector_220_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature::SelectedKey' has a wrong offset!");

// Function EnhancedMappingOption.EnhancedMappingOption_C.ExecuteUbergraph_EnhancedMappingOption
// 0x01A0 (0x01A0 - 0x0000)
struct EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEnhancedInputLocalPlayerSubsystem*     CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                            K2Node_ComponentBoundEvent_SelectedKey;            // 0x0010(0x0020)(HasGetValueTypeHash)
	TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_GetUserSettings_self_CastInput; // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnhancedInputUserSettings*             CallFunc_GetUserSettings_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEnhancedInputLocalPlayerSubsystem*     CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;    // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_GetUserSettings_self_CastInput_1; // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnhancedInputUserSettings*             CallFunc_GetUserSettings_ReturnValue_1;            // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEnhancedPlayerMappableKeyProfile*      CallFunc_GetCurrentKeyProfile_ReturnValue;         // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FMapPlayerKeyArgs                      K2Node_MakeStruct_MapPlayerKeyArgs;                // 0x0070(0x0040)()
	struct FGameplayTagContainer                  CallFunc_MapPlayerKey_FailureReason;               // 0x00B0(0x0020)()
	struct FMapPlayerKeyArgs                      K2Node_MakeStruct_MapPlayerKeyArgs_1;              // 0x00D0(0x0040)()
	struct FPlayerKeyMapping                      CallFunc_K2_FindKeyMapping_OutKeyMapping;          // 0x0110(0x0090)(HasGetValueTypeHash)
};
static_assert(alignof(EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption) == 0x000008, "Wrong alignment on EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption");
static_assert(sizeof(EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption) == 0x0001A0, "Wrong size on EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption");
static_assert(offsetof(EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption, EntryPoint) == 0x000000, "Member 'EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption::EntryPoint' has a wrong offset!");
static_assert(offsetof(EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption, K2Node_ComponentBoundEvent_SelectedKey) == 0x000010, "Member 'EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption::K2Node_ComponentBoundEvent_SelectedKey' has a wrong offset!");
static_assert(offsetof(EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption, CallFunc_GetUserSettings_self_CastInput) == 0x000030, "Member 'EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption::CallFunc_GetUserSettings_self_CastInput' has a wrong offset!");
static_assert(offsetof(EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption, CallFunc_GetUserSettings_ReturnValue) == 0x000040, "Member 'EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption::CallFunc_GetUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x000048, "Member 'EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption, CallFunc_GetUserSettings_self_CastInput_1) == 0x000050, "Member 'EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption::CallFunc_GetUserSettings_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption, CallFunc_GetUserSettings_ReturnValue_1) == 0x000060, "Member 'EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption::CallFunc_GetUserSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption, CallFunc_GetCurrentKeyProfile_ReturnValue) == 0x000068, "Member 'EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption::CallFunc_GetCurrentKeyProfile_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption, K2Node_MakeStruct_MapPlayerKeyArgs) == 0x000070, "Member 'EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption::K2Node_MakeStruct_MapPlayerKeyArgs' has a wrong offset!");
static_assert(offsetof(EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption, CallFunc_MapPlayerKey_FailureReason) == 0x0000B0, "Member 'EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption::CallFunc_MapPlayerKey_FailureReason' has a wrong offset!");
static_assert(offsetof(EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption, K2Node_MakeStruct_MapPlayerKeyArgs_1) == 0x0000D0, "Member 'EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption::K2Node_MakeStruct_MapPlayerKeyArgs_1' has a wrong offset!");
static_assert(offsetof(EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption, CallFunc_K2_FindKeyMapping_OutKeyMapping) == 0x000110, "Member 'EnhancedMappingOption_C_ExecuteUbergraph_EnhancedMappingOption::CallFunc_K2_FindKeyMapping_OutKeyMapping' has a wrong offset!");

// Function EnhancedMappingOption.EnhancedMappingOption_C.Update
// 0x0038 (0x0038 - 0x0000)
struct EnhancedMappingOption_C_Update final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FInputChord                            K2Node_MakeStruct_InputChord;                      // 0x0018(0x0020)(HasGetValueTypeHash)
};
static_assert(alignof(EnhancedMappingOption_C_Update) == 0x000008, "Wrong alignment on EnhancedMappingOption_C_Update");
static_assert(sizeof(EnhancedMappingOption_C_Update) == 0x000038, "Wrong size on EnhancedMappingOption_C_Update");
static_assert(offsetof(EnhancedMappingOption_C_Update, Key) == 0x000000, "Member 'EnhancedMappingOption_C_Update::Key' has a wrong offset!");
static_assert(offsetof(EnhancedMappingOption_C_Update, K2Node_MakeStruct_InputChord) == 0x000018, "Member 'EnhancedMappingOption_C_Update::K2Node_MakeStruct_InputChord' has a wrong offset!");

}

