﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_POI

#include "Basic.hpp"

#include "RandomContainerItem_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct Struct_POI.Struct_POI
// 0x0070 (0x0070 - 0x0000)
struct FStruct_POI final
{
public:
	bool                                          IsAMajorPOI__11_A87DDB26439CC030B3170C9A49D4FDEB;  // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Name_2_5D639B8747C652C2C1E4E2A0F1D71410;           // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Description_4_3F2251FE44FE0E96F2B4A69E5DFE074C;    // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         ContaminationLevel_35_CC8B8826490E5D703FB398B2BA0588C2; // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRandomContainerItem>           ItemsToSpawn_13_3D0E9296494719799691DA960524296E;  // 0x0030(0x0010)(Edit, BlueprintVisible)
	class FString                                 ItemsToSpawnDescription_26_A8822EE742C4F5B6785B8388EC878B6E; // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UTexture2D*                             MarkerImage_24_1FA3233641EF2AE38BCE6F8B3382A03C;   // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MarkerColour_23_F4B0472F460D4AC7319A7B963C0F9284;  // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForceLargeIcon_31_61D6CE59432B0ECEB011B6ABD456E711; // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FStruct_POI) == 0x000008, "Wrong alignment on FStruct_POI");
static_assert(sizeof(FStruct_POI) == 0x000070, "Wrong size on FStruct_POI");
static_assert(offsetof(FStruct_POI, IsAMajorPOI__11_A87DDB26439CC030B3170C9A49D4FDEB) == 0x000000, "Member 'FStruct_POI::IsAMajorPOI__11_A87DDB26439CC030B3170C9A49D4FDEB' has a wrong offset!");
static_assert(offsetof(FStruct_POI, Name_2_5D639B8747C652C2C1E4E2A0F1D71410) == 0x000008, "Member 'FStruct_POI::Name_2_5D639B8747C652C2C1E4E2A0F1D71410' has a wrong offset!");
static_assert(offsetof(FStruct_POI, Description_4_3F2251FE44FE0E96F2B4A69E5DFE074C) == 0x000018, "Member 'FStruct_POI::Description_4_3F2251FE44FE0E96F2B4A69E5DFE074C' has a wrong offset!");
static_assert(offsetof(FStruct_POI, ContaminationLevel_35_CC8B8826490E5D703FB398B2BA0588C2) == 0x000028, "Member 'FStruct_POI::ContaminationLevel_35_CC8B8826490E5D703FB398B2BA0588C2' has a wrong offset!");
static_assert(offsetof(FStruct_POI, ItemsToSpawn_13_3D0E9296494719799691DA960524296E) == 0x000030, "Member 'FStruct_POI::ItemsToSpawn_13_3D0E9296494719799691DA960524296E' has a wrong offset!");
static_assert(offsetof(FStruct_POI, ItemsToSpawnDescription_26_A8822EE742C4F5B6785B8388EC878B6E) == 0x000040, "Member 'FStruct_POI::ItemsToSpawnDescription_26_A8822EE742C4F5B6785B8388EC878B6E' has a wrong offset!");
static_assert(offsetof(FStruct_POI, MarkerImage_24_1FA3233641EF2AE38BCE6F8B3382A03C) == 0x000050, "Member 'FStruct_POI::MarkerImage_24_1FA3233641EF2AE38BCE6F8B3382A03C' has a wrong offset!");
static_assert(offsetof(FStruct_POI, MarkerColour_23_F4B0472F460D4AC7319A7B963C0F9284) == 0x000058, "Member 'FStruct_POI::MarkerColour_23_F4B0472F460D4AC7319A7B963C0F9284' has a wrong offset!");
static_assert(offsetof(FStruct_POI, ForceLargeIcon_31_61D6CE59432B0ECEB011B6ABD456E711) == 0x000068, "Member 'FStruct_POI::ForceLargeIcon_31_61D6CE59432B0ECEB011B6ABD456E711' has a wrong offset!");

}

