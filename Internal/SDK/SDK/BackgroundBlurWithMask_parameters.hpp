﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BackgroundBlurWithMask

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "BackgroundBlurWithMask_structs.hpp"


namespace SDK::Params
{

// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetApplyAlphaToBlur
// 0x0001 (0x0001 - 0x0000)
struct BackgroundBlurWithMask_SetApplyAlphaToBlur final
{
public:
	bool                                          bInApplyAlphaToBlur;                               // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BackgroundBlurWithMask_SetApplyAlphaToBlur) == 0x000001, "Wrong alignment on BackgroundBlurWithMask_SetApplyAlphaToBlur");
static_assert(sizeof(BackgroundBlurWithMask_SetApplyAlphaToBlur) == 0x000001, "Wrong size on BackgroundBlurWithMask_SetApplyAlphaToBlur");
static_assert(offsetof(BackgroundBlurWithMask_SetApplyAlphaToBlur, bInApplyAlphaToBlur) == 0x000000, "Member 'BackgroundBlurWithMask_SetApplyAlphaToBlur::bInApplyAlphaToBlur' has a wrong offset!");

// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetBlurRadius
// 0x0004 (0x0004 - 0x0000)
struct BackgroundBlurWithMask_SetBlurRadius final
{
public:
	int32                                         InBlurRadius;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BackgroundBlurWithMask_SetBlurRadius) == 0x000004, "Wrong alignment on BackgroundBlurWithMask_SetBlurRadius");
static_assert(sizeof(BackgroundBlurWithMask_SetBlurRadius) == 0x000004, "Wrong size on BackgroundBlurWithMask_SetBlurRadius");
static_assert(offsetof(BackgroundBlurWithMask_SetBlurRadius, InBlurRadius) == 0x000000, "Member 'BackgroundBlurWithMask_SetBlurRadius::InBlurRadius' has a wrong offset!");

// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetBlurStrength
// 0x0004 (0x0004 - 0x0000)
struct BackgroundBlurWithMask_SetBlurStrength final
{
public:
	float                                         InStrength;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BackgroundBlurWithMask_SetBlurStrength) == 0x000004, "Wrong alignment on BackgroundBlurWithMask_SetBlurStrength");
static_assert(sizeof(BackgroundBlurWithMask_SetBlurStrength) == 0x000004, "Wrong size on BackgroundBlurWithMask_SetBlurStrength");
static_assert(offsetof(BackgroundBlurWithMask_SetBlurStrength, InStrength) == 0x000000, "Member 'BackgroundBlurWithMask_SetBlurStrength::InStrength' has a wrong offset!");

// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetHorizontalAlignment
// 0x0001 (0x0001 - 0x0000)
struct BackgroundBlurWithMask_SetHorizontalAlignment final
{
public:
	EHorizontalAlignment                          InHorizontalAlignment;                             // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BackgroundBlurWithMask_SetHorizontalAlignment) == 0x000001, "Wrong alignment on BackgroundBlurWithMask_SetHorizontalAlignment");
static_assert(sizeof(BackgroundBlurWithMask_SetHorizontalAlignment) == 0x000001, "Wrong size on BackgroundBlurWithMask_SetHorizontalAlignment");
static_assert(offsetof(BackgroundBlurWithMask_SetHorizontalAlignment, InHorizontalAlignment) == 0x000000, "Member 'BackgroundBlurWithMask_SetHorizontalAlignment::InHorizontalAlignment' has a wrong offset!");

// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetLowQualityFallbackBrush
// 0x00D0 (0x00D0 - 0x0000)
struct BackgroundBlurWithMask_SetLowQualityFallbackBrush final
{
public:
	struct FSlateBrush                            InBrush;                                           // 0x0000(0x00D0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(BackgroundBlurWithMask_SetLowQualityFallbackBrush) == 0x000010, "Wrong alignment on BackgroundBlurWithMask_SetLowQualityFallbackBrush");
static_assert(sizeof(BackgroundBlurWithMask_SetLowQualityFallbackBrush) == 0x0000D0, "Wrong size on BackgroundBlurWithMask_SetLowQualityFallbackBrush");
static_assert(offsetof(BackgroundBlurWithMask_SetLowQualityFallbackBrush, InBrush) == 0x000000, "Member 'BackgroundBlurWithMask_SetLowQualityFallbackBrush::InBrush' has a wrong offset!");

// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetMaskMaterialSetting
// 0x0018 (0x0018 - 0x0000)
struct BackgroundBlurWithMask_SetMaskMaterialSetting final
{
public:
	struct FMaskMaterialSetting                   InMaskMaterialSetting;                             // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(BackgroundBlurWithMask_SetMaskMaterialSetting) == 0x000008, "Wrong alignment on BackgroundBlurWithMask_SetMaskMaterialSetting");
static_assert(sizeof(BackgroundBlurWithMask_SetMaskMaterialSetting) == 0x000018, "Wrong size on BackgroundBlurWithMask_SetMaskMaterialSetting");
static_assert(offsetof(BackgroundBlurWithMask_SetMaskMaterialSetting, InMaskMaterialSetting) == 0x000000, "Member 'BackgroundBlurWithMask_SetMaskMaterialSetting::InMaskMaterialSetting' has a wrong offset!");

// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetMaskTexture
// 0x0008 (0x0008 - 0x0000)
struct BackgroundBlurWithMask_SetMaskTexture final
{
public:
	class UTexture2D*                             InMaskTexture;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BackgroundBlurWithMask_SetMaskTexture) == 0x000008, "Wrong alignment on BackgroundBlurWithMask_SetMaskTexture");
static_assert(sizeof(BackgroundBlurWithMask_SetMaskTexture) == 0x000008, "Wrong size on BackgroundBlurWithMask_SetMaskTexture");
static_assert(offsetof(BackgroundBlurWithMask_SetMaskTexture, InMaskTexture) == 0x000000, "Member 'BackgroundBlurWithMask_SetMaskTexture::InMaskTexture' has a wrong offset!");

// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetMaskTextureChannel
// 0x0001 (0x0001 - 0x0000)
struct BackgroundBlurWithMask_SetMaskTextureChannel final
{
public:
	EMaskTextureChannel                           InMaskTextureChannel;                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BackgroundBlurWithMask_SetMaskTextureChannel) == 0x000001, "Wrong alignment on BackgroundBlurWithMask_SetMaskTextureChannel");
static_assert(sizeof(BackgroundBlurWithMask_SetMaskTextureChannel) == 0x000001, "Wrong size on BackgroundBlurWithMask_SetMaskTextureChannel");
static_assert(offsetof(BackgroundBlurWithMask_SetMaskTextureChannel, InMaskTextureChannel) == 0x000000, "Member 'BackgroundBlurWithMask_SetMaskTextureChannel::InMaskTextureChannel' has a wrong offset!");

// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetPadding
// 0x0010 (0x0010 - 0x0000)
struct BackgroundBlurWithMask_SetPadding final
{
public:
	struct FMargin                                InPadding;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(BackgroundBlurWithMask_SetPadding) == 0x000004, "Wrong alignment on BackgroundBlurWithMask_SetPadding");
static_assert(sizeof(BackgroundBlurWithMask_SetPadding) == 0x000010, "Wrong size on BackgroundBlurWithMask_SetPadding");
static_assert(offsetof(BackgroundBlurWithMask_SetPadding, InPadding) == 0x000000, "Member 'BackgroundBlurWithMask_SetPadding::InPadding' has a wrong offset!");

// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetUseMaskMaterial
// 0x0001 (0x0001 - 0x0000)
struct BackgroundBlurWithMask_SetUseMaskMaterial final
{
public:
	bool                                          bInUseMaskMaterial;                                // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BackgroundBlurWithMask_SetUseMaskMaterial) == 0x000001, "Wrong alignment on BackgroundBlurWithMask_SetUseMaskMaterial");
static_assert(sizeof(BackgroundBlurWithMask_SetUseMaskMaterial) == 0x000001, "Wrong size on BackgroundBlurWithMask_SetUseMaskMaterial");
static_assert(offsetof(BackgroundBlurWithMask_SetUseMaskMaterial, bInUseMaskMaterial) == 0x000000, "Member 'BackgroundBlurWithMask_SetUseMaskMaterial::bInUseMaskMaterial' has a wrong offset!");

// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetVerticalAlignment
// 0x0001 (0x0001 - 0x0000)
struct BackgroundBlurWithMask_SetVerticalAlignment final
{
public:
	EVerticalAlignment                            InVerticalAlignment;                               // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BackgroundBlurWithMask_SetVerticalAlignment) == 0x000001, "Wrong alignment on BackgroundBlurWithMask_SetVerticalAlignment");
static_assert(sizeof(BackgroundBlurWithMask_SetVerticalAlignment) == 0x000001, "Wrong size on BackgroundBlurWithMask_SetVerticalAlignment");
static_assert(offsetof(BackgroundBlurWithMask_SetVerticalAlignment, InVerticalAlignment) == 0x000000, "Member 'BackgroundBlurWithMask_SetVerticalAlignment::InVerticalAlignment' has a wrong offset!");

// Function BackgroundBlurWithMask.BackgroundBlurWithMask.GetMaskTextureInUse
// 0x0008 (0x0008 - 0x0000)
struct BackgroundBlurWithMask_GetMaskTextureInUse final
{
public:
	class UTexture*                               ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BackgroundBlurWithMask_GetMaskTextureInUse) == 0x000008, "Wrong alignment on BackgroundBlurWithMask_GetMaskTextureInUse");
static_assert(sizeof(BackgroundBlurWithMask_GetMaskTextureInUse) == 0x000008, "Wrong size on BackgroundBlurWithMask_GetMaskTextureInUse");
static_assert(offsetof(BackgroundBlurWithMask_GetMaskTextureInUse, ReturnValue) == 0x000000, "Member 'BackgroundBlurWithMask_GetMaskTextureInUse::ReturnValue' has a wrong offset!");

// Function BackgroundBlurWithMask.BackgroundBlurWithMaskSlot.SetHorizontalAlignment
// 0x0001 (0x0001 - 0x0000)
struct BackgroundBlurWithMaskSlot_SetHorizontalAlignment final
{
public:
	EHorizontalAlignment                          InHorizontalAlignment;                             // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BackgroundBlurWithMaskSlot_SetHorizontalAlignment) == 0x000001, "Wrong alignment on BackgroundBlurWithMaskSlot_SetHorizontalAlignment");
static_assert(sizeof(BackgroundBlurWithMaskSlot_SetHorizontalAlignment) == 0x000001, "Wrong size on BackgroundBlurWithMaskSlot_SetHorizontalAlignment");
static_assert(offsetof(BackgroundBlurWithMaskSlot_SetHorizontalAlignment, InHorizontalAlignment) == 0x000000, "Member 'BackgroundBlurWithMaskSlot_SetHorizontalAlignment::InHorizontalAlignment' has a wrong offset!");

// Function BackgroundBlurWithMask.BackgroundBlurWithMaskSlot.SetPadding
// 0x0010 (0x0010 - 0x0000)
struct BackgroundBlurWithMaskSlot_SetPadding final
{
public:
	struct FMargin                                InPadding;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(BackgroundBlurWithMaskSlot_SetPadding) == 0x000004, "Wrong alignment on BackgroundBlurWithMaskSlot_SetPadding");
static_assert(sizeof(BackgroundBlurWithMaskSlot_SetPadding) == 0x000010, "Wrong size on BackgroundBlurWithMaskSlot_SetPadding");
static_assert(offsetof(BackgroundBlurWithMaskSlot_SetPadding, InPadding) == 0x000000, "Member 'BackgroundBlurWithMaskSlot_SetPadding::InPadding' has a wrong offset!");

// Function BackgroundBlurWithMask.BackgroundBlurWithMaskSlot.SetVerticalAlignment
// 0x0001 (0x0001 - 0x0000)
struct BackgroundBlurWithMaskSlot_SetVerticalAlignment final
{
public:
	EVerticalAlignment                            InVerticalAlignment;                               // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BackgroundBlurWithMaskSlot_SetVerticalAlignment) == 0x000001, "Wrong alignment on BackgroundBlurWithMaskSlot_SetVerticalAlignment");
static_assert(sizeof(BackgroundBlurWithMaskSlot_SetVerticalAlignment) == 0x000001, "Wrong size on BackgroundBlurWithMaskSlot_SetVerticalAlignment");
static_assert(offsetof(BackgroundBlurWithMaskSlot_SetVerticalAlignment, InVerticalAlignment) == 0x000000, "Member 'BackgroundBlurWithMaskSlot_SetVerticalAlignment::InVerticalAlignment' has a wrong offset!");

}

