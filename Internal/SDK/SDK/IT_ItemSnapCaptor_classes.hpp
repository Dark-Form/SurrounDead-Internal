﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IT_ItemSnapCaptor

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass IT_ItemSnapCaptor.IT_ItemSnapCaptor_C
// 0x0000 (0x0000 - 0x0000)
class IIT_ItemSnapCaptor_C final
{
public:
	void AddItemToQueue(class UJSI_Slot_C* Item, bool* Result);
	void GetLocalAttachmentByID(class UJigsawItem_DataAsset_C* ItemId, bool* Found, class FName* Socket, struct FGameplayTag* Type, class UClass** Class_0);
	void GetSnap(class UJSI_Slot_C* ItemRef, class UTextureRenderTarget2D** Texture);
	void InspectorGetPrimitiveComponent(class AActor* Actor, class UPrimitiveComponent** Comp);
	void SpawnSnapshotCaptor(class UJSI_Slot_C* ItemRef, class ABP_ItemInspector_C** InspectorRef);
	void UpdateAttachments(class UJSI_Slot_C* ItemRef, class UTextureRenderTarget2D* RenderT, TArray<class FName>& Attachments, class UTextureRenderTarget** RenderTarget);
	void UpdateSnap(class UJSI_Slot_C* ItemRef, class UTextureRenderTarget2D* RenderT, class UTextureRenderTarget** RenderTarget);
	void UpdateSnapCustom(const struct FTransform& Transform, double FOV, class UJSI_Slot_C* JigItem, bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IT_ItemSnapCaptor_C">();
	}
	static class IIT_ItemSnapCaptor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IIT_ItemSnapCaptor_C>();
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
static_assert(alignof(IIT_ItemSnapCaptor_C) == 0x000001, "Wrong alignment on IIT_ItemSnapCaptor_C");
static_assert(sizeof(IIT_ItemSnapCaptor_C) == 0x000001, "Wrong size on IIT_ItemSnapCaptor_C");

}

