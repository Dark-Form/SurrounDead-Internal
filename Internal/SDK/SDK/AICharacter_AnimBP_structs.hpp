﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AICharacter_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct AICharacter_AnimBP.AICharacter_AnimBP_C.AnimBlueprintGeneratedConstantData
// 0x0197 (0x0198 - 0x0001)
struct AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_866;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_867;                                // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_868;                                 // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_869;                                // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_870;                                 // 0x0020(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_871;                                // 0x0024(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_872;                                 // 0x002C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_873;                                // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_874;                                 // 0x0038(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_875;                                // 0x003C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_876;                                 // 0x0044(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_877;                              // 0x0048(0x002C)(BlueprintVisible, NoDestructor)
	class FName                                   __NameProperty_878;                                // 0x0074(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_879;                                 // 0x007C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                 __ArrayProperty_880;                               // 0x0080(0x0010)(BlueprintVisible, EditFixedSize)
	class FName                                   __NameProperty_881;                                // 0x0090(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_882;                                 // 0x0098(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_883;                                // 0x009C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D[0x3];                                       // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_884;                               // 0x00A0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_885;                               // 0x00A4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_886;                                // 0x00A8(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_887;                                // 0x00A9(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AA[0x2];                                       // 0x00AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_888;                                // 0x00AC(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          __BlendProfile_889;                                // 0x00B8(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_890;                                  // 0x00C0(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_891;                                // 0x00C8(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_892;                                // 0x00C9(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_893;                                // 0x00CA(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CB[0x5];                                       // 0x00CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_894;                               // 0x00D0(0x0010)(BlueprintVisible, EditFixedSize)
	struct FAnimNodeFunctionRef                   __StructProperty_895;                              // 0x00E0(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0100(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0180(0x0018)()
};
static_assert(alignof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000198, "Wrong size on AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_866) == 0x000004, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_866' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_867) == 0x00000C, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_867' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_868) == 0x000014, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_868' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_869) == 0x000018, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_869' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_870) == 0x000020, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_870' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_871) == 0x000024, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_871' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_872) == 0x00002C, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_872' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_873) == 0x000030, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_873' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_874) == 0x000038, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_874' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_875) == 0x00003C, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_875' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_876) == 0x000044, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_876' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_877) == 0x000048, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_877' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_878) == 0x000074, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_878' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_879) == 0x00007C, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_879' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_880) == 0x000080, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_880' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_881) == 0x000090, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_881' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_882) == 0x000098, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_882' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_883) == 0x00009C, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_883' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_884) == 0x0000A0, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_884' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_885) == 0x0000A4, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_885' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_886) == 0x0000A8, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_886' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_887) == 0x0000A9, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_887' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_888) == 0x0000AC, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_888' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __BlendProfile_889) == 0x0000B8, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__BlendProfile_889' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __CurveFloat_890) == 0x0000C0, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__CurveFloat_890' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_891) == 0x0000C8, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_891' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_892) == 0x0000C9, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_892' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_893) == 0x0000CA, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_893' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_894) == 0x0000D0, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_894' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_895) == 0x0000E0, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_895' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000100, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000180, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct AICharacter_AnimBP.AICharacter_AnimBP_C.AnimBlueprintGeneratedMutableData
// 0x008F (0x0090 - 0x0001)
struct AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_0;                                  // 0x0002(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_1;                                  // 0x0003(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_2;                                  // 0x0004(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_3;                                  // 0x0005(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_4;                                  // 0x0006(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_5;                                  // 0x0007(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_6;                                  // 0x0008(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_7;                                 // 0x000C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_8;                                 // 0x0010(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_9;                                  // 0x0014(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_10;                                // 0x0018(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_11;                                // 0x001C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_12;                                 // 0x0020(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_13;                                // 0x0024(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_14;                                // 0x0028(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_15;                                 // 0x002C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_16;                                // 0x0030(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_17;                                // 0x0034(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_18;                                // 0x0038(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_19;                                // 0x003C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_20;                                 // 0x0040(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_21;                                 // 0x0041(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_22;                                 // 0x0042(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_23;                                 // 0x0043(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_24;                                 // 0x0044(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_25;                                 // 0x0045(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_26;                                 // 0x0046(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_27;                                 // 0x0047(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_28;                                 // 0x0048(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_29;                                 // 0x0049(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_30;                                 // 0x004A(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_31;                                 // 0x004B(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_32;                                 // 0x004C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_33;                                // 0x0050(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_34;                                // 0x0054(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_35;                                 // 0x0058(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_36;                                // 0x005C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_37;                                // 0x0060(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_38;                                 // 0x0064(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_39;                                // 0x0068(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_40;                                // 0x006C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_41;                                 // 0x0070(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_42;                                // 0x0074(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_43;                                // 0x0078(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_44;                                // 0x007C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_45;                                // 0x0080(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_46;                                 // 0x0084(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_47;                                // 0x0088(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_48;                                 // 0x008C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000090, "Wrong size on AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_0) == 0x000002, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_0' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_1) == 0x000003, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_1' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_2) == 0x000004, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_2' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_3) == 0x000005, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_3' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_4) == 0x000006, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_4' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_5) == 0x000007, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_5' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_6) == 0x000008, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_6' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_7) == 0x00000C, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_7' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_8) == 0x000010, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_8' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_9) == 0x000014, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_9' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_10) == 0x000018, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_10' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_11) == 0x00001C, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_11' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_12) == 0x000020, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_12' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_13) == 0x000024, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_13' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_14) == 0x000028, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_14' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_15) == 0x00002C, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_15' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_16) == 0x000030, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_16' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_17) == 0x000034, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_17' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_18) == 0x000038, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_18' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_19) == 0x00003C, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_19' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_20) == 0x000040, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_20' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_21) == 0x000041, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_21' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_22) == 0x000042, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_22' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_23) == 0x000043, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_23' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_24) == 0x000044, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_24' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_25) == 0x000045, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_25' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_26) == 0x000046, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_26' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_27) == 0x000047, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_27' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_28) == 0x000048, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_28' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_29) == 0x000049, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_29' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_30) == 0x00004A, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_30' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_31) == 0x00004B, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_31' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_32) == 0x00004C, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_32' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_33) == 0x000050, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_33' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_34) == 0x000054, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_34' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_35) == 0x000058, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_35' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_36) == 0x00005C, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_36' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_37) == 0x000060, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_37' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_38) == 0x000064, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_38' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_39) == 0x000068, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_39' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_40) == 0x00006C, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_40' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_41) == 0x000070, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_41' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_42) == 0x000074, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_42' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_43) == 0x000078, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_43' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_44) == 0x00007C, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_44' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_45) == 0x000080, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_45' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_46) == 0x000084, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_46' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_47) == 0x000088, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_47' has a wrong offset!");
static_assert(offsetof(AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_48) == 0x00008C, "Member 'AICharacter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_48' has a wrong offset!");

}

