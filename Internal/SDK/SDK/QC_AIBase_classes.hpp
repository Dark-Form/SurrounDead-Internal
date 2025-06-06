﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QC_AIBase

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass QC_AIBase.QC_AIBase_C
// 0x0000 (0x0030 - 0x0030)
class UQC_AIBase_C final : public UEnvQueryContext_BlueprintBase
{
public:
	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QC_AIBase_C">();
	}
	static class UQC_AIBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQC_AIBase_C>();
	}
};
static_assert(alignof(UQC_AIBase_C) == 0x000008, "Wrong alignment on UQC_AIBase_C");
static_assert(sizeof(UQC_AIBase_C) == 0x000030, "Wrong size on UQC_AIBase_C");

}

