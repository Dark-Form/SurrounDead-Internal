﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PhotoModeIsOnConfis

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// UserDefinedStruct PhotoModeIsOnConfis.PhotoModeIsOnConfis
// 0x0068 (0x0068 - 0x0000)
struct FPhotoModeIsOnConfis final
{
public:
	bool                                          ShowwarningwhentheHUDishidden__19_B5804F54419A6DAEFC0A5B9EC784A345; // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   WarningText_23_B00D0C014907509EE32E7D8AA6C2CED6;   // 0x0008(0x0018)(Edit, BlueprintVisible)
	int32                                         TextSize_5_6EFA746B43641E2BC49678BE15533B7A;       // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            TextColorandOpacity_24_B25E83BD4ECD36693CD0C78FD4A51815; // 0x0024(0x0014)(Edit, BlueprintVisible)
	class UTexture2D*                             Image_25_AD16A238453EA2F40937E08DAACC8F51;         // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ImageSize_15_8E07E4E14821422EC49BF3B1F30F7913;     // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            ImageTint_13_3F3D0A0F4ADE39A55DB656BC5930B61A;     // 0x0050(0x0014)(Edit, BlueprintVisible)
};
static_assert(alignof(FPhotoModeIsOnConfis) == 0x000008, "Wrong alignment on FPhotoModeIsOnConfis");
static_assert(sizeof(FPhotoModeIsOnConfis) == 0x000068, "Wrong size on FPhotoModeIsOnConfis");
static_assert(offsetof(FPhotoModeIsOnConfis, ShowwarningwhentheHUDishidden__19_B5804F54419A6DAEFC0A5B9EC784A345) == 0x000000, "Member 'FPhotoModeIsOnConfis::ShowwarningwhentheHUDishidden__19_B5804F54419A6DAEFC0A5B9EC784A345' has a wrong offset!");
static_assert(offsetof(FPhotoModeIsOnConfis, WarningText_23_B00D0C014907509EE32E7D8AA6C2CED6) == 0x000008, "Member 'FPhotoModeIsOnConfis::WarningText_23_B00D0C014907509EE32E7D8AA6C2CED6' has a wrong offset!");
static_assert(offsetof(FPhotoModeIsOnConfis, TextSize_5_6EFA746B43641E2BC49678BE15533B7A) == 0x000020, "Member 'FPhotoModeIsOnConfis::TextSize_5_6EFA746B43641E2BC49678BE15533B7A' has a wrong offset!");
static_assert(offsetof(FPhotoModeIsOnConfis, TextColorandOpacity_24_B25E83BD4ECD36693CD0C78FD4A51815) == 0x000024, "Member 'FPhotoModeIsOnConfis::TextColorandOpacity_24_B25E83BD4ECD36693CD0C78FD4A51815' has a wrong offset!");
static_assert(offsetof(FPhotoModeIsOnConfis, Image_25_AD16A238453EA2F40937E08DAACC8F51) == 0x000038, "Member 'FPhotoModeIsOnConfis::Image_25_AD16A238453EA2F40937E08DAACC8F51' has a wrong offset!");
static_assert(offsetof(FPhotoModeIsOnConfis, ImageSize_15_8E07E4E14821422EC49BF3B1F30F7913) == 0x000040, "Member 'FPhotoModeIsOnConfis::ImageSize_15_8E07E4E14821422EC49BF3B1F30F7913' has a wrong offset!");
static_assert(offsetof(FPhotoModeIsOnConfis, ImageTint_13_3F3D0A0F4ADE39A55DB656BC5930B61A) == 0x000050, "Member 'FPhotoModeIsOnConfis::ImageTint_13_3F3D0A0F4ADE39A55DB656BC5930B61A' has a wrong offset!");

}

