﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SD_GameInstance

#include "Basic.hpp"

#include "SD_GameInstance_classes.hpp"
#include "SD_GameInstance_parameters.hpp"


namespace SDK
{

// Function SD_GameInstance.SD_GameInstance_C.AmbientVolumeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USD_GameInstance_C::AmbientVolumeChanged(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "AmbientVolumeChanged");

	Params::SD_GameInstance_C_AmbientVolumeChanged Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SD_GameInstance.SD_GameInstance_C.ChangedAMDFrameGen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USD_GameInstance_C::ChangedAMDFrameGen(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "ChangedAMDFrameGen");

	Params::SD_GameInstance_C_ChangedAMDFrameGen Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SD_GameInstance.SD_GameInstance_C.ChangedUpscalingMethod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USD_GameInstance_C::ChangedUpscalingMethod(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "ChangedUpscalingMethod");

	Params::SD_GameInstance_C_ChangedUpscalingMethod Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SD_GameInstance.SD_GameInstance_C.ChangedUpscalingQuality
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USD_GameInstance_C::ChangedUpscalingQuality(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "ChangedUpscalingQuality");

	Params::SD_GameInstance_C_ChangedUpscalingQuality Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SD_GameInstance.SD_GameInstance_C.Debug_SpawnCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USD_GameInstance_C::Debug_SpawnCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "Debug_SpawnCamera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SD_GameInstance.SD_GameInstance_C.Debug_SpawnPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SpawnStartingItems_                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USD_GameInstance_C::Debug_SpawnPlayer(int32 Index_0, bool SpawnStartingItems_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "Debug_SpawnPlayer");

	Params::SD_GameInstance_C_Debug_SpawnPlayer Parms{};

	Parms.Index_0 = Index_0;
	Parms.SpawnStartingItems_ = SpawnStartingItems_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SD_GameInstance.SD_GameInstance_C.EffectsVolumeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USD_GameInstance_C::EffectsVolumeChanged(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "EffectsVolumeChanged");

	Params::SD_GameInstance_C_EffectsVolumeChanged Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SD_GameInstance.SD_GameInstance_C.Event_Fog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USD_GameInstance_C::Event_Fog(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "Event_Fog");

	Params::SD_GameInstance_C_Event_Fog Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SD_GameInstance.SD_GameInstance_C.Event_LoadLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USD_GameInstance_C::Event_LoadLevel(class FName Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "Event_LoadLevel");

	Params::SD_GameInstance_C_Event_LoadLevel Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SD_GameInstance.SD_GameInstance_C.Event_ResetAIOSpawner
// (BlueprintCallable, BlueprintEvent)

void USD_GameInstance_C::Event_ResetAIOSpawner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "Event_ResetAIOSpawner");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SD_GameInstance.SD_GameInstance_C.Event_VolFog
// (BlueprintCallable, BlueprintEvent)

void USD_GameInstance_C::Event_VolFog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "Event_VolFog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SD_GameInstance.SD_GameInstance_C.ExecuteUbergraph_SD_GameInstance
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USD_GameInstance_C::ExecuteUbergraph_SD_GameInstance(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "ExecuteUbergraph_SD_GameInstance");

	Params::SD_GameInstance_C_ExecuteUbergraph_SD_GameInstance Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SD_GameInstance.SD_GameInstance_C.FixWeather
// (BlueprintCallable, BlueprintEvent)

void USD_GameInstance_C::FixWeather()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "FixWeather");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SD_GameInstance.SD_GameInstance_C.GameMode_SpawnPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USD_GameInstance_C::GameMode_SpawnPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "GameMode_SpawnPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SD_GameInstance.SD_GameInstance_C.GamepadIconsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USD_GameInstance_C::GamepadIconsChanged(const class FString& NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "GamepadIconsChanged");

	Params::SD_GameInstance_C_GamepadIconsChanged Parms{};

	Parms.NewValue = std::move(NewValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SD_GameInstance.SD_GameInstance_C.MasterVolumeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USD_GameInstance_C::MasterVolumeChanged(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "MasterVolumeChanged");

	Params::SD_GameInstance_C_MasterVolumeChanged Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SD_GameInstance.SD_GameInstance_C.MusicVolumeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USD_GameInstance_C::MusicVolumeChanged(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "MusicVolumeChanged");

	Params::SD_GameInstance_C_MusicVolumeChanged Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SD_GameInstance.SD_GameInstance_C.OnCompleted_094C167A44DBAC5826AB0A94C7C0DD1E
// (BlueprintCallable, BlueprintEvent)

void USD_GameInstance_C::OnCompleted_094C167A44DBAC5826AB0A94C7C0DD1E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "OnCompleted_094C167A44DBAC5826AB0A94C7C0DD1E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SD_GameInstance.SD_GameInstance_C.RadioMusicVolumeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USD_GameInstance_C::RadioMusicVolumeChanged(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "RadioMusicVolumeChanged");

	Params::SD_GameInstance_C_RadioMusicVolumeChanged Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SD_GameInstance.SD_GameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)

void USD_GameInstance_C::ReceiveInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "ReceiveInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SD_GameInstance.SD_GameInstance_C.Survival_Respawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Random_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USD_GameInstance_C::Survival_Respawn(bool Random_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "Survival_Respawn");

	Params::SD_GameInstance_C_Survival_Respawn Parms{};

	Parms.Random_ = Random_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SD_GameInstance.SD_GameInstance_C.Survival_SpawnPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USD_GameInstance_C::Survival_SpawnPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "Survival_SpawnPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SD_GameInstance.SD_GameInstance_C.Survival_SuicideRespawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USD_GameInstance_C::Survival_SuicideRespawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "Survival_SuicideRespawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SD_GameInstance.SD_GameInstance_C.UIVolumeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USD_GameInstance_C::UIVolumeChanged(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SD_GameInstance_C", "UIVolumeChanged");

	Params::SD_GameInstance_C_UIVolumeChanged Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

