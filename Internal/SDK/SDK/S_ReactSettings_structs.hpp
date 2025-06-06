﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_ReactSettings

#include "Basic.hpp"

#include "E_StimuliReaction_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_ReactSettings.S_ReactSettings
// 0x0048 (0x0048 - 0x0000)
struct FS_ReactSettings final
{
public:
	TArray<class FName>                           ReactTags_3_0B1EB31340205B1B774807A2583CC984;      // 0x0000(0x0010)(Edit, BlueprintVisible)
	E_StimuliReaction                             BehaviourResponse_7_39DE9D5C4EE333FAEDB4D88DEF230D9D; // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsResponseTemporary_15_F309DD014070D1A5AF5EB0829E0C66C8; // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TemporaryTime_13_36D1E215449F5B7C7273F08E43A1C251; // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CancelOverrideBehaviour_17_29C1086A470F9A4B442B5D83A0727F04; // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAnimMontage*>                   Animations_21_084E2E78404169BBDDC195966E7815D4;    // 0x0020(0x0010)(Edit, BlueprintVisible)
	TArray<class USoundCue*>                      Audio_24_146DA9FE474D0ECA6B72F4B597EFBCA7;         // 0x0030(0x0010)(Edit, BlueprintVisible)
	bool                                          IgnoreReactCooldown_28_C412BA8447018B48C8623F9EFD398DFF; // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_ReactSettings) == 0x000008, "Wrong alignment on FS_ReactSettings");
static_assert(sizeof(FS_ReactSettings) == 0x000048, "Wrong size on FS_ReactSettings");
static_assert(offsetof(FS_ReactSettings, ReactTags_3_0B1EB31340205B1B774807A2583CC984) == 0x000000, "Member 'FS_ReactSettings::ReactTags_3_0B1EB31340205B1B774807A2583CC984' has a wrong offset!");
static_assert(offsetof(FS_ReactSettings, BehaviourResponse_7_39DE9D5C4EE333FAEDB4D88DEF230D9D) == 0x000010, "Member 'FS_ReactSettings::BehaviourResponse_7_39DE9D5C4EE333FAEDB4D88DEF230D9D' has a wrong offset!");
static_assert(offsetof(FS_ReactSettings, IsResponseTemporary_15_F309DD014070D1A5AF5EB0829E0C66C8) == 0x000011, "Member 'FS_ReactSettings::IsResponseTemporary_15_F309DD014070D1A5AF5EB0829E0C66C8' has a wrong offset!");
static_assert(offsetof(FS_ReactSettings, TemporaryTime_13_36D1E215449F5B7C7273F08E43A1C251) == 0x000014, "Member 'FS_ReactSettings::TemporaryTime_13_36D1E215449F5B7C7273F08E43A1C251' has a wrong offset!");
static_assert(offsetof(FS_ReactSettings, CancelOverrideBehaviour_17_29C1086A470F9A4B442B5D83A0727F04) == 0x000018, "Member 'FS_ReactSettings::CancelOverrideBehaviour_17_29C1086A470F9A4B442B5D83A0727F04' has a wrong offset!");
static_assert(offsetof(FS_ReactSettings, Animations_21_084E2E78404169BBDDC195966E7815D4) == 0x000020, "Member 'FS_ReactSettings::Animations_21_084E2E78404169BBDDC195966E7815D4' has a wrong offset!");
static_assert(offsetof(FS_ReactSettings, Audio_24_146DA9FE474D0ECA6B72F4B597EFBCA7) == 0x000030, "Member 'FS_ReactSettings::Audio_24_146DA9FE474D0ECA6B72F4B597EFBCA7' has a wrong offset!");
static_assert(offsetof(FS_ReactSettings, IgnoreReactCooldown_28_C412BA8447018B48C8623F9EFD398DFF) == 0x000040, "Member 'FS_ReactSettings::IgnoreReactCooldown_28_C412BA8447018B48C8623F9EFD398DFF' has a wrong offset!");

}

