﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_PreviewChar

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_PreviewChar.BPI_PreviewChar_C
// 0x0000 (0x0000 - 0x0000)
class IBPI_PreviewChar_C final
{
public:
	void Preview_Set_Equipped_Primitive_By_Slot(const struct FGameplayTag& Tag, class UObject* Item, class FName Socket, bool ProcessAttachments_);
	void PreviewAttachmentUpdated(const struct FGameplayTag& Tag, class UJSI_Slot_C* Item);
	void PreviewOnWeaponEquipped(const struct FGameplayTag& Tag, class UJSI_Slot_C* Item);
	void SetCaptureActivate(bool Value);
	void SetPreviewMeshRotation(const struct FVector2D& Rot);
	void SetPreviewPawnOwner(class AActor* Owner);
	void SetPreviewRenderTarget(class UTextureRenderTarget2D* RT);
	void SetPreviewZoomInOut(bool Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_PreviewChar_C">();
	}
	static class IBPI_PreviewChar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_PreviewChar_C>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
static_assert(alignof(IBPI_PreviewChar_C) == 0x000001, "Wrong alignment on IBPI_PreviewChar_C");
static_assert(sizeof(IBPI_PreviewChar_C) == 0x000001, "Wrong size on IBPI_PreviewChar_C");

}

