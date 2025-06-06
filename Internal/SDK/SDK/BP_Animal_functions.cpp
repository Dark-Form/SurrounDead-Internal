﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Animal

#include "Basic.hpp"

#include "BP_Animal_classes.hpp"
#include "BP_Animal_parameters.hpp"


namespace SDK
{

// Function BP_Animal.BP_Animal_C.Actor Aim Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Instigator_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Animal_C::Actor_Aim_Focus(class AActor* Instigator_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Animal_C", "Actor Aim Focus");

	Params::BP_Animal_C_Actor_Aim_Focus Parms{};

	Parms.Instigator_0 = Instigator_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Animal.BP_Animal_C.Actor Attack Target
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                          Attack_Target                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Animal_C::Actor_Attack_Target(class AActor** Attack_Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Animal_C", "Actor Attack Target");

	Params::BP_Animal_C_Actor_Attack_Target Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Attack_Target != nullptr)
		*Attack_Target = Parms.Attack_Target;
}


// Function BP_Animal.BP_Animal_C.AI Alert
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Alert_Actor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Animal_C::AI_Alert(class AActor* Alert_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Animal_C", "AI Alert");

	Params::BP_Animal_C_AI_Alert Parms{};

	Parms.Alert_Actor = Alert_Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Animal.BP_Animal_C.AI Animation Switch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_AIBehaviour                           Behaviour                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Animal_C::AI_Animation_Switch(E_AIBehaviour Behaviour)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Animal_C", "AI Animation Switch");

	Params::BP_Animal_C_AI_Animation_Switch Parms{};

	Parms.Behaviour = Behaviour;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Animal.BP_Animal_C.AI Block
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BlockType                             Block_Type                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Block_Attacker                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Animal_C::AI_Block(E_BlockType Block_Type, class AActor* Block_Attacker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Animal_C", "AI Block");

	Params::BP_Animal_C_AI_Block Parms{};

	Parms.Block_Type = Block_Type;
	Parms.Block_Attacker = Block_Attacker;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Animal.BP_Animal_C.AI Camera Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Activate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Animal_C::AI_Camera_Activate(bool Activate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Animal_C", "AI Camera Activate");

	Params::BP_Animal_C_AI_Camera_Activate Parms{};

	Parms.Activate = Activate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Animal.BP_Animal_C.AI Can Interact?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Can_Interact                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Animal_C::AI_Can_Interact_(bool* Can_Interact)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Animal_C", "AI Can Interact?");

	Params::BP_Animal_C_AI_Can_Interact_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Can_Interact != nullptr)
		*Can_Interact = Parms.Can_Interact;
}


// Function BP_Animal.BP_Animal_C.AI Dead
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Animal_C::AI_Dead()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Animal_C", "AI Dead");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Animal.BP_Animal_C.AI End Alert
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Animal_C::AI_End_Alert()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Animal_C", "AI End Alert");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Animal.BP_Animal_C.Alert Actor Defenders
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Attacked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Attacker                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Animal_C::Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Animal_C", "Alert Actor Defenders");

	Params::BP_Animal_C_Alert_Actor_Defenders Parms{};

	Parms.Attacked = Attacked;
	Parms.Attacker = Attacker;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Animal.BP_Animal_C.ExecuteUbergraph_BP_Animal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Animal_C::ExecuteUbergraph_BP_Animal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Animal_C", "ExecuteUbergraph_BP_Animal");

	Params::BP_Animal_C_ExecuteUbergraph_BP_Animal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Animal.BP_Animal_C.Turret Destroyed Effect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Animal_C::Turret_Destroyed_Effect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Animal_C", "Turret Destroyed Effect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Animal.BP_Animal_C.Turret End Reload
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Animal_C::Turret_End_Reload()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Animal_C", "Turret End Reload");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Animal.BP_Animal_C.Turret Idle Start
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Animal_C::Turret_Idle_Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Animal_C", "Turret Idle Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Animal.BP_Animal_C.Turret Idle Stop
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Animal_C::Turret_Idle_Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Animal_C", "Turret Idle Stop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Animal.BP_Animal_C.Turret Start Reload
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Animal_C::Turret_Start_Reload()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Animal_C", "Turret Start Reload");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Animal.BP_Animal_C.AI Is Dead?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool*                                   Dead_0                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Animal_C::AI_Is_Dead_(bool* Dead_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Animal_C", "AI Is Dead?");

	Params::BP_Animal_C_AI_Is_Dead_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Dead_0 != nullptr)
		*Dead_0 = Parms.Dead_0;
}

}

