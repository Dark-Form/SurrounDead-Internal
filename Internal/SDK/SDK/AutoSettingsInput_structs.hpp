﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AutoSettingsInput

#include "Basic.hpp"

#include "Slate_structs.hpp"
#include "InputCore_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum AutoSettingsInput.EBindingCaptureMode
// NumValues: 0x0003
enum class EBindingCaptureMode : uint8
{
	OnReleased                               = 0,
	OnPressed                                = 1,
	EBindingCaptureMode_MAX                  = 2,
};

// ScriptStruct AutoSettingsInput.KeyGroup
// 0x0020 (0x0020 - 0x0000)
struct FKeyGroup final
{
public:
	struct FGameplayTag                           KeyGroupTag;                                       // 0x0000(0x0008)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseGamepadKeys;                                   // 0x0008(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseNonGamepadKeys;                                // 0x0009(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FKey>                           Keys;                                              // 0x0010(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKeyGroup) == 0x000008, "Wrong alignment on FKeyGroup");
static_assert(sizeof(FKeyGroup) == 0x000020, "Wrong size on FKeyGroup");
static_assert(offsetof(FKeyGroup, KeyGroupTag) == 0x000000, "Member 'FKeyGroup::KeyGroupTag' has a wrong offset!");
static_assert(offsetof(FKeyGroup, bUseGamepadKeys) == 0x000008, "Member 'FKeyGroup::bUseGamepadKeys' has a wrong offset!");
static_assert(offsetof(FKeyGroup, bUseNonGamepadKeys) == 0x000009, "Member 'FKeyGroup::bUseNonGamepadKeys' has a wrong offset!");
static_assert(offsetof(FKeyGroup, Keys) == 0x000010, "Member 'FKeyGroup::Keys' has a wrong offset!");

// ScriptStruct AutoSettingsInput.CapturedInput
// 0x0028 (0x0028 - 0x0000)
struct FCapturedInput final
{
public:
	struct FInputChord                            Chord;                                             // 0x0000(0x0020)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AxisScale;                                         // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCapturedInput) == 0x000008, "Wrong alignment on FCapturedInput");
static_assert(sizeof(FCapturedInput) == 0x000028, "Wrong size on FCapturedInput");
static_assert(offsetof(FCapturedInput, Chord) == 0x000000, "Member 'FCapturedInput::Chord' has a wrong offset!");
static_assert(offsetof(FCapturedInput, AxisScale) == 0x000020, "Member 'FCapturedInput::AxisScale' has a wrong offset!");

// ScriptStruct AutoSettingsInput.KeyIconPair
// 0x0020 (0x0020 - 0x0000)
struct FKeyIconPair final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                               Icon;                                              // 0x0018(0x0008)(ZeroConstructor, Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKeyIconPair) == 0x000008, "Wrong alignment on FKeyIconPair");
static_assert(sizeof(FKeyIconPair) == 0x000020, "Wrong size on FKeyIconPair");
static_assert(offsetof(FKeyIconPair, Key) == 0x000000, "Member 'FKeyIconPair::Key' has a wrong offset!");
static_assert(offsetof(FKeyIconPair, Icon) == 0x000018, "Member 'FKeyIconPair::Icon' has a wrong offset!");

// ScriptStruct AutoSettingsInput.KeyIconSet
// 0x0080 (0x0080 - 0x0000)
struct FKeyIconSet final
{
public:
	struct FGameplayTagContainer                  Tags;                                              // 0x0000(0x0020)(Edit, Config, NativeAccessSpecifierPublic)
	TMap<struct FKey, TSoftObjectPtr<class UTexture>> IconMap;                                       // 0x0020(0x0050)(Edit, Config, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FKeyIconPair>                   Icons;                                             // 0x0070(0x0010)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKeyIconSet) == 0x000008, "Wrong alignment on FKeyIconSet");
static_assert(sizeof(FKeyIconSet) == 0x000080, "Wrong size on FKeyIconSet");
static_assert(offsetof(FKeyIconSet, Tags) == 0x000000, "Member 'FKeyIconSet::Tags' has a wrong offset!");
static_assert(offsetof(FKeyIconSet, IconMap) == 0x000020, "Member 'FKeyIconSet::IconMap' has a wrong offset!");
static_assert(offsetof(FKeyIconSet, Icons) == 0x000070, "Member 'FKeyIconSet::Icons' has a wrong offset!");

// ScriptStruct AutoSettingsInput.KeyScale
// 0x0020 (0x0020 - 0x0000)
struct FKeyScale final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Scale;                                             // 0x0018(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FKeyScale) == 0x000008, "Wrong alignment on FKeyScale");
static_assert(sizeof(FKeyScale) == 0x000020, "Wrong size on FKeyScale");
static_assert(offsetof(FKeyScale, Key) == 0x000000, "Member 'FKeyScale::Key' has a wrong offset!");
static_assert(offsetof(FKeyScale, Scale) == 0x000018, "Member 'FKeyScale::Scale' has a wrong offset!");

// ScriptStruct AutoSettingsInput.MappingGroupLink
// 0x0010 (0x0010 - 0x0000)
struct FMappingGroupLink final
{
public:
	TArray<int32>                                 MappingGroups;                                     // 0x0000(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMappingGroupLink) == 0x000008, "Wrong alignment on FMappingGroupLink");
static_assert(sizeof(FMappingGroupLink) == 0x000010, "Wrong size on FMappingGroupLink");
static_assert(offsetof(FMappingGroupLink, MappingGroups) == 0x000000, "Member 'FMappingGroupLink::MappingGroups' has a wrong offset!");

// ScriptStruct AutoSettingsInput.AxisAssociation
// 0x0050 (0x0050 - 0x0000)
struct FAxisAssociation final
{
public:
	struct FKey                                   AxisKey;                                           // 0x0000(0x0018)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                   AnalogKey;                                         // 0x0018(0x0018)(Config, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKeyScale>                      ButtonKeys;                                        // 0x0030(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FKeyScale>                      BooleanKeys;                                       // 0x0040(0x0010)(ZeroConstructor, Config, Deprecated, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAxisAssociation) == 0x000008, "Wrong alignment on FAxisAssociation");
static_assert(sizeof(FAxisAssociation) == 0x000050, "Wrong size on FAxisAssociation");
static_assert(offsetof(FAxisAssociation, AxisKey) == 0x000000, "Member 'FAxisAssociation::AxisKey' has a wrong offset!");
static_assert(offsetof(FAxisAssociation, AnalogKey) == 0x000018, "Member 'FAxisAssociation::AnalogKey' has a wrong offset!");
static_assert(offsetof(FAxisAssociation, ButtonKeys) == 0x000030, "Member 'FAxisAssociation::ButtonKeys' has a wrong offset!");
static_assert(offsetof(FAxisAssociation, BooleanKeys) == 0x000040, "Member 'FAxisAssociation::BooleanKeys' has a wrong offset!");

// ScriptStruct AutoSettingsInput.KeyFriendlyName
// 0x0030 (0x0030 - 0x0000)
struct FKeyFriendlyName final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   FriendlyName;                                      // 0x0018(0x0018)(Edit, Config, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKeyFriendlyName) == 0x000008, "Wrong alignment on FKeyFriendlyName");
static_assert(sizeof(FKeyFriendlyName) == 0x000030, "Wrong size on FKeyFriendlyName");
static_assert(offsetof(FKeyFriendlyName, Key) == 0x000000, "Member 'FKeyFriendlyName::Key' has a wrong offset!");
static_assert(offsetof(FKeyFriendlyName, FriendlyName) == 0x000018, "Member 'FKeyFriendlyName::FriendlyName' has a wrong offset!");

// ScriptStruct AutoSettingsInput.ConfigActionKeyMapping
// 0x0008 (0x0030 - 0x0028)
struct FConfigActionKeyMapping final : public FInputActionKeyMapping
{
public:
	bool                                          bIsDefault;                                        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FConfigActionKeyMapping) == 0x000008, "Wrong alignment on FConfigActionKeyMapping");
static_assert(sizeof(FConfigActionKeyMapping) == 0x000030, "Wrong size on FConfigActionKeyMapping");
static_assert(offsetof(FConfigActionKeyMapping, bIsDefault) == 0x000028, "Member 'FConfigActionKeyMapping::bIsDefault' has a wrong offset!");

// ScriptStruct AutoSettingsInput.ConfigAxisKeyMapping
// 0x0008 (0x0030 - 0x0028)
struct FConfigAxisKeyMapping final : public FInputAxisKeyMapping
{
public:
	bool                                          bIsDefault;                                        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FConfigAxisKeyMapping) == 0x000008, "Wrong alignment on FConfigAxisKeyMapping");
static_assert(sizeof(FConfigAxisKeyMapping) == 0x000030, "Wrong size on FConfigAxisKeyMapping");
static_assert(offsetof(FConfigAxisKeyMapping, bIsDefault) == 0x000028, "Member 'FConfigAxisKeyMapping::bIsDefault' has a wrong offset!");

// ScriptStruct AutoSettingsInput.InputMappingGroup
// 0x0050 (0x0050 - 0x0000)
struct FInputMappingGroup final
{
public:
	TArray<struct FConfigActionKeyMapping>        ActionMappings;                                    // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FConfigAxisKeyMapping>          AxisMappings;                                      // 0x0010(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FConfigActionKeyMapping>        UnboundActionMappings;                             // 0x0020(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FConfigAxisKeyMapping>          UnboundAxisMappings;                               // 0x0030(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPublic)
	uint8                                         Pad_40[0x10];                                      // 0x0040(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FInputMappingGroup) == 0x000008, "Wrong alignment on FInputMappingGroup");
static_assert(sizeof(FInputMappingGroup) == 0x000050, "Wrong size on FInputMappingGroup");
static_assert(offsetof(FInputMappingGroup, ActionMappings) == 0x000000, "Member 'FInputMappingGroup::ActionMappings' has a wrong offset!");
static_assert(offsetof(FInputMappingGroup, AxisMappings) == 0x000010, "Member 'FInputMappingGroup::AxisMappings' has a wrong offset!");
static_assert(offsetof(FInputMappingGroup, UnboundActionMappings) == 0x000020, "Member 'FInputMappingGroup::UnboundActionMappings' has a wrong offset!");
static_assert(offsetof(FInputMappingGroup, UnboundAxisMappings) == 0x000030, "Member 'FInputMappingGroup::UnboundAxisMappings' has a wrong offset!");

// ScriptStruct AutoSettingsInput.InputMappingLayout
// 0x0020 (0x0020 - 0x0000)
struct FInputMappingLayout final
{
public:
	TArray<struct FInputMappingGroup>             MappingGroups;                                     // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	uint8                                         Pad_10[0x10];                                      // 0x0010(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FInputMappingLayout) == 0x000008, "Wrong alignment on FInputMappingLayout");
static_assert(sizeof(FInputMappingLayout) == 0x000020, "Wrong size on FInputMappingLayout");
static_assert(offsetof(FInputMappingLayout, MappingGroups) == 0x000000, "Member 'FInputMappingLayout::MappingGroups' has a wrong offset!");

// ScriptStruct AutoSettingsInput.InputMappingPreset
// 0x0040 (0x0040 - 0x0000)
struct FInputMappingPreset final
{
public:
	struct FGameplayTag                           PresetTag;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseDefaultMappings;                               // 0x0008(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputMappingLayout                    InputLayout;                                       // 0x0010(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, Config, NativeAccessSpecifierPublic)
	TArray<struct FInputMappingGroup>             MappingGroups;                                     // 0x0030(0x0010)(ZeroConstructor, Config, Deprecated, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInputMappingPreset) == 0x000008, "Wrong alignment on FInputMappingPreset");
static_assert(sizeof(FInputMappingPreset) == 0x000040, "Wrong size on FInputMappingPreset");
static_assert(offsetof(FInputMappingPreset, PresetTag) == 0x000000, "Member 'FInputMappingPreset::PresetTag' has a wrong offset!");
static_assert(offsetof(FInputMappingPreset, bUseDefaultMappings) == 0x000008, "Member 'FInputMappingPreset::bUseDefaultMappings' has a wrong offset!");
static_assert(offsetof(FInputMappingPreset, InputLayout) == 0x000010, "Member 'FInputMappingPreset::InputLayout' has a wrong offset!");
static_assert(offsetof(FInputMappingPreset, MappingGroups) == 0x000030, "Member 'FInputMappingPreset::MappingGroups' has a wrong offset!");

// ScriptStruct AutoSettingsInput.PlayerInputMappings
// 0x00A0 (0x00A0 - 0x0000)
struct FPlayerInputMappings final
{
public:
	class FString                                 PlayerId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PlayerIndex;                                       // 0x0010(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           BasePresetTag;                                     // 0x0014(0x0008)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bNullBasePreset;                                   // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputMappingLayout                    MappingOverrides;                                  // 0x0020(0x0020)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                          Custom;                                            // 0x0040(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputMappingPreset                    Preset;                                            // 0x0048(0x0040)(Deprecated, NativeAccessSpecifierPublic)
	struct FGameplayTag                           PlayerKeyGroup;                                    // 0x0088(0x0008)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_90[0x10];                                      // 0x0090(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPlayerInputMappings) == 0x000008, "Wrong alignment on FPlayerInputMappings");
static_assert(sizeof(FPlayerInputMappings) == 0x0000A0, "Wrong size on FPlayerInputMappings");
static_assert(offsetof(FPlayerInputMappings, PlayerId) == 0x000000, "Member 'FPlayerInputMappings::PlayerId' has a wrong offset!");
static_assert(offsetof(FPlayerInputMappings, PlayerIndex) == 0x000010, "Member 'FPlayerInputMappings::PlayerIndex' has a wrong offset!");
static_assert(offsetof(FPlayerInputMappings, BasePresetTag) == 0x000014, "Member 'FPlayerInputMappings::BasePresetTag' has a wrong offset!");
static_assert(offsetof(FPlayerInputMappings, bNullBasePreset) == 0x00001C, "Member 'FPlayerInputMappings::bNullBasePreset' has a wrong offset!");
static_assert(offsetof(FPlayerInputMappings, MappingOverrides) == 0x000020, "Member 'FPlayerInputMappings::MappingOverrides' has a wrong offset!");
static_assert(offsetof(FPlayerInputMappings, Custom) == 0x000040, "Member 'FPlayerInputMappings::Custom' has a wrong offset!");
static_assert(offsetof(FPlayerInputMappings, Preset) == 0x000048, "Member 'FPlayerInputMappings::Preset' has a wrong offset!");
static_assert(offsetof(FPlayerInputMappings, PlayerKeyGroup) == 0x000088, "Member 'FPlayerInputMappings::PlayerKeyGroup' has a wrong offset!");

}

