﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Event_RemoveActor

#include "Basic.hpp"

#include "Narrative_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Event_RemoveActor.Event_RemoveActor_C
// 0x0008 (0x0038 - 0x0030)
class UEvent_RemoveActor_C final : public UNarrativeEvent
{
public:
	class FName                                   Tag;                                               // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteEvent(class APawn* Pawn, class APlayerController* Controller, class UNarrativeComponent* NarrativeComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Event_RemoveActor_C">();
	}
	static class UEvent_RemoveActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEvent_RemoveActor_C>();
	}
};
static_assert(alignof(UEvent_RemoveActor_C) == 0x000008, "Wrong alignment on UEvent_RemoveActor_C");
static_assert(sizeof(UEvent_RemoveActor_C) == 0x000038, "Wrong size on UEvent_RemoveActor_C");
static_assert(offsetof(UEvent_RemoveActor_C, Tag) == 0x000030, "Member 'UEvent_RemoveActor_C::Tag' has a wrong offset!");

}

