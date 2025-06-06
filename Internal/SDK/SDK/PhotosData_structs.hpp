﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PhotosData

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct PhotosData.PhotosData
// 0x0030 (0x0030 - 0x0000)
struct FPhotosData final
{
public:
	class FString                                 Title_2_2D8B969A4B9F4838432A0CA7236BC274;          // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 PhotoFullPath_4_77D77A244A7F8CA3B0922AA74BC2C698;  // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ThumbnailFullPath_6_C9990D23483EE3E87BC72CBB65536E09; // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FPhotosData) == 0x000008, "Wrong alignment on FPhotosData");
static_assert(sizeof(FPhotosData) == 0x000030, "Wrong size on FPhotosData");
static_assert(offsetof(FPhotosData, Title_2_2D8B969A4B9F4838432A0CA7236BC274) == 0x000000, "Member 'FPhotosData::Title_2_2D8B969A4B9F4838432A0CA7236BC274' has a wrong offset!");
static_assert(offsetof(FPhotosData, PhotoFullPath_4_77D77A244A7F8CA3B0922AA74BC2C698) == 0x000010, "Member 'FPhotosData::PhotoFullPath_4_77D77A244A7F8CA3B0922AA74BC2C698' has a wrong offset!");
static_assert(offsetof(FPhotosData, ThumbnailFullPath_6_C9990D23483EE3E87BC72CBB65536E09) == 0x000020, "Member 'FPhotosData::ThumbnailFullPath_6_C9990D23483EE3E87BC72CBB65536E09' has a wrong offset!");

}

