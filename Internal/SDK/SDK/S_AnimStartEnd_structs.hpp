﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_AnimStartEnd

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_AnimStartEnd.S_AnimStartEnd
// 0x0020 (0x0020 - 0x0000)
struct FS_AnimStartEnd final
{
public:
	TArray<class UAnimMontage*>                   StartMontage_5_409764B94200090D6CE6D2A17BF156ED;   // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<class UAnimMontage*>                   EndMontage_6_E6B747C142413F4D1CCC32946732410C;     // 0x0010(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FS_AnimStartEnd) == 0x000008, "Wrong alignment on FS_AnimStartEnd");
static_assert(sizeof(FS_AnimStartEnd) == 0x000020, "Wrong size on FS_AnimStartEnd");
static_assert(offsetof(FS_AnimStartEnd, StartMontage_5_409764B94200090D6CE6D2A17BF156ED) == 0x000000, "Member 'FS_AnimStartEnd::StartMontage_5_409764B94200090D6CE6D2A17BF156ED' has a wrong offset!");
static_assert(offsetof(FS_AnimStartEnd, EndMontage_6_E6B747C142413F4D1CCC32946732410C) == 0x000010, "Member 'FS_AnimStartEnd::EndMontage_6_E6B747C142413F4D1CCC32946732410C' has a wrong offset!");

}

