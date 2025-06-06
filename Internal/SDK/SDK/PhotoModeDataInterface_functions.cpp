﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PhotoModeDataInterface

#include "Basic.hpp"

#include "PhotoModeDataInterface_classes.hpp"
#include "PhotoModeDataInterface_parameters.hpp"


namespace SDK
{

// Function PhotoModeDataInterface.PhotoModeDataInterface_C.SendPhotoData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPhotosData&               PhotoData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IPhotoModeDataInterface_C::SendPhotoData(const struct FPhotosData& PhotoData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("PhotoModeDataInterface_C", "SendPhotoData");

	Params::PhotoModeDataInterface_C_SendPhotoData Parms{};

	Parms.PhotoData = std::move(PhotoData);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function PhotoModeDataInterface.PhotoModeDataInterface_C.TabToOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TabIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonTab_C*               CommonButtonPressed                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IPhotoModeDataInterface_C::TabToOpen(int32 TabIndex, class UCommonButtonTab_C* CommonButtonPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("PhotoModeDataInterface_C", "TabToOpen");

	Params::PhotoModeDataInterface_C_TabToOpen Parms{};

	Parms.TabIndex = TabIndex;
	Parms.CommonButtonPressed = CommonButtonPressed;

	AsUObject()->ProcessEvent(Func, &Parms);
}

}

