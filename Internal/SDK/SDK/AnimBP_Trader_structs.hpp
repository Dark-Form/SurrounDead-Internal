﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_Trader

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct AnimBP_Trader.AnimBP_Trader_C.AnimBlueprintGeneratedConstantData
// 0x0107 (0x0108 - 0x0001)
struct AnimBP_Trader::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_16;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_17;                                 // 0x000C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_18;                                // 0x0010(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_19;                               // 0x0014(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_20;                                // 0x0040(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_21;                                 // 0x0044(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_22;                                 // 0x0045(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_23;                                 // 0x0046(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47[0x1];                                       // 0x0047(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_24;                                 // 0x0048(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_25;                               // 0x0050(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0070(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00F0(0x0018)()
};
static_assert(alignof(AnimBP_Trader::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on AnimBP_Trader::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(AnimBP_Trader::FAnimBlueprintGeneratedConstantData) == 0x000108, "Wrong size on AnimBP_Trader::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(AnimBP_Trader::FAnimBlueprintGeneratedConstantData, __NameProperty_16) == 0x000004, "Member 'AnimBP_Trader::FAnimBlueprintGeneratedConstantData::__NameProperty_16' has a wrong offset!");
static_assert(offsetof(AnimBP_Trader::FAnimBlueprintGeneratedConstantData, __BoolProperty_17) == 0x00000C, "Member 'AnimBP_Trader::FAnimBlueprintGeneratedConstantData::__BoolProperty_17' has a wrong offset!");
static_assert(offsetof(AnimBP_Trader::FAnimBlueprintGeneratedConstantData, __FloatProperty_18) == 0x000010, "Member 'AnimBP_Trader::FAnimBlueprintGeneratedConstantData::__FloatProperty_18' has a wrong offset!");
static_assert(offsetof(AnimBP_Trader::FAnimBlueprintGeneratedConstantData, __StructProperty_19) == 0x000014, "Member 'AnimBP_Trader::FAnimBlueprintGeneratedConstantData::__StructProperty_19' has a wrong offset!");
static_assert(offsetof(AnimBP_Trader::FAnimBlueprintGeneratedConstantData, __FloatProperty_20) == 0x000040, "Member 'AnimBP_Trader::FAnimBlueprintGeneratedConstantData::__FloatProperty_20' has a wrong offset!");
static_assert(offsetof(AnimBP_Trader::FAnimBlueprintGeneratedConstantData, __BoolProperty_21) == 0x000044, "Member 'AnimBP_Trader::FAnimBlueprintGeneratedConstantData::__BoolProperty_21' has a wrong offset!");
static_assert(offsetof(AnimBP_Trader::FAnimBlueprintGeneratedConstantData, __EnumProperty_22) == 0x000045, "Member 'AnimBP_Trader::FAnimBlueprintGeneratedConstantData::__EnumProperty_22' has a wrong offset!");
static_assert(offsetof(AnimBP_Trader::FAnimBlueprintGeneratedConstantData, __ByteProperty_23) == 0x000046, "Member 'AnimBP_Trader::FAnimBlueprintGeneratedConstantData::__ByteProperty_23' has a wrong offset!");
static_assert(offsetof(AnimBP_Trader::FAnimBlueprintGeneratedConstantData, __NameProperty_24) == 0x000048, "Member 'AnimBP_Trader::FAnimBlueprintGeneratedConstantData::__NameProperty_24' has a wrong offset!");
static_assert(offsetof(AnimBP_Trader::FAnimBlueprintGeneratedConstantData, __StructProperty_25) == 0x000050, "Member 'AnimBP_Trader::FAnimBlueprintGeneratedConstantData::__StructProperty_25' has a wrong offset!");
static_assert(offsetof(AnimBP_Trader::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000070, "Member 'AnimBP_Trader::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(AnimBP_Trader::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000F0, "Member 'AnimBP_Trader::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}

