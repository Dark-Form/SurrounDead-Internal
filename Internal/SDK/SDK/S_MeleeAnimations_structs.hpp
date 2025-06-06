﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_MeleeAnimations

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_MeleeAnimations.S_MeleeAnimations
// 0x0058 (0x0058 - 0x0000)
struct FS_MeleeAnimations final
{
public:
	class UAnimMontage*                           Montage_2_6204BE474CA7CBC82E6ED5A51EC549A7;        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSet<class FName>                             EnabledMeleeDetection_8_A37624FB43FDE70FBC42C4AAF4D6445D; // 0x0008(0x0050)(Edit, BlueprintVisible)
};
static_assert(alignof(FS_MeleeAnimations) == 0x000008, "Wrong alignment on FS_MeleeAnimations");
static_assert(sizeof(FS_MeleeAnimations) == 0x000058, "Wrong size on FS_MeleeAnimations");
static_assert(offsetof(FS_MeleeAnimations, Montage_2_6204BE474CA7CBC82E6ED5A51EC549A7) == 0x000000, "Member 'FS_MeleeAnimations::Montage_2_6204BE474CA7CBC82E6ED5A51EC549A7' has a wrong offset!");
static_assert(offsetof(FS_MeleeAnimations, EnabledMeleeDetection_8_A37624FB43FDE70FBC42C4AAF4D6445D) == 0x000008, "Member 'FS_MeleeAnimations::EnabledMeleeDetection_8_A37624FB43FDE70FBC42C4AAF4D6445D' has a wrong offset!");

}

