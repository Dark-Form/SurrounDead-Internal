﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Marker

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Marker.BP_Marker_C
// 0x0098 (0x0330 - 0x0298)
class ABP_Marker_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             MarkerTexture;                                     // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   MarkerTitle;                                       // 0x02B0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   MarkerDescription;                                 // 0x02C8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FVector2D                              Texture_Size;                                      // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UW_StandardMarker_C*>            Markers;                                           // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          AddMarkerToCompass_;                               // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_311[0x3];                                      // 0x0311(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           TooltipBorderColor;                                // 0x0314(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_324[0x4];                                      // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_WorldMarker_C*                       Marker;                                            // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void AddMarker();
	void ExecuteUbergraph_BP_Marker(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Marker_C">();
	}
	static class ABP_Marker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Marker_C>();
	}
};
static_assert(alignof(ABP_Marker_C) == 0x000008, "Wrong alignment on ABP_Marker_C");
static_assert(sizeof(ABP_Marker_C) == 0x000330, "Wrong size on ABP_Marker_C");
static_assert(offsetof(ABP_Marker_C, UberGraphFrame) == 0x000298, "Member 'ABP_Marker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Marker_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_Marker_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Marker_C, MarkerTexture) == 0x0002A8, "Member 'ABP_Marker_C::MarkerTexture' has a wrong offset!");
static_assert(offsetof(ABP_Marker_C, MarkerTitle) == 0x0002B0, "Member 'ABP_Marker_C::MarkerTitle' has a wrong offset!");
static_assert(offsetof(ABP_Marker_C, MarkerDescription) == 0x0002C8, "Member 'ABP_Marker_C::MarkerDescription' has a wrong offset!");
static_assert(offsetof(ABP_Marker_C, Texture_Size) == 0x0002E0, "Member 'ABP_Marker_C::Texture_Size' has a wrong offset!");
static_assert(offsetof(ABP_Marker_C, Color) == 0x0002F0, "Member 'ABP_Marker_C::Color' has a wrong offset!");
static_assert(offsetof(ABP_Marker_C, Markers) == 0x000300, "Member 'ABP_Marker_C::Markers' has a wrong offset!");
static_assert(offsetof(ABP_Marker_C, AddMarkerToCompass_) == 0x000310, "Member 'ABP_Marker_C::AddMarkerToCompass_' has a wrong offset!");
static_assert(offsetof(ABP_Marker_C, TooltipBorderColor) == 0x000314, "Member 'ABP_Marker_C::TooltipBorderColor' has a wrong offset!");
static_assert(offsetof(ABP_Marker_C, Marker) == 0x000328, "Member 'ABP_Marker_C::Marker' has a wrong offset!");

}

