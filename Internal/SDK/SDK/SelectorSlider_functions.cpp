﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SelectorSlider

#include "Basic.hpp"

#include "SelectorSlider_classes.hpp"
#include "SelectorSlider_parameters.hpp"


namespace SDK
{

// Function SelectorSlider.SelectorSlider_C.BndEvt__btn_left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USelectorSlider_C::BndEvt__btn_left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorSlider_C", "BndEvt__btn_left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorSlider.SelectorSlider_C.BndEvt__btn_right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USelectorSlider_C::BndEvt__btn_right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorSlider_C", "BndEvt__btn_right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorSlider.SelectorSlider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectorSlider_C::BndEvt__Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorSlider_C", "BndEvt__Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	Params::SelectorSlider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectorSlider.SelectorSlider_C.ChangeValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Focus__0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectorSlider_C::ChangeValue(double Value, bool Focus__0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorSlider_C", "ChangeValue");

	Params::SelectorSlider_C_ChangeValue Parms{};

	Parms.Value = Value;
	Parms.Focus__0 = Focus__0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectorSlider.SelectorSlider_C.ExecuteUbergraph_SelectorSlider
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectorSlider_C::ExecuteUbergraph_SelectorSlider(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorSlider_C", "ExecuteUbergraph_SelectorSlider");

	Params::SelectorSlider_C_ExecuteUbergraph_SelectorSlider Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectorSlider.SelectorSlider_C.FocusWithMouseWheel
// (BlueprintCallable, BlueprintEvent)

void USelectorSlider_C::FocusWithMouseWheel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorSlider_C", "FocusWithMouseWheel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorSlider.SelectorSlider_C.Initialize
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DefaultValue_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const TArray<class FText>&              Options_0                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Use_0_as_default_option__0                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText&                      Default_option_name__if_boolean_is_true__0             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UPhotoModeWidget_C*               PhotoModeWidget__Self_                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void USelectorSlider_C::Initialize(double DefaultValue_0, const TArray<class FText>& Options_0, bool Use_0_as_default_option__0, const class FText& Default_option_name__if_boolean_is_true__0, class UPhotoModeWidget_C* PhotoModeWidget__Self_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorSlider_C", "Initialize");

	Params::SelectorSlider_C_Initialize Parms{};

	Parms.DefaultValue_0 = DefaultValue_0;
	Parms.Options_0 = std::move(Options_0);
	Parms.Use_0_as_default_option__0 = Use_0_as_default_option__0;
	Parms.Default_option_name__if_boolean_is_true__0 = std::move(Default_option_name__if_boolean_is_true__0);
	Parms.PhotoModeWidget__Self_ = PhotoModeWidget__Self_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectorSlider.SelectorSlider_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USelectorSlider_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorSlider_C", "OnMouseEnter");

	Params::SelectorSlider_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectorSlider.SelectorSlider_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USelectorSlider_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorSlider_C", "OnMouseLeave");

	Params::SelectorSlider_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectorSlider.SelectorSlider_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply USelectorSlider_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorSlider_C", "OnMouseWheel");

	Params::SelectorSlider_C_OnMouseWheel Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SelectorSlider.SelectorSlider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectorSlider_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorSlider_C", "PreConstruct");

	Params::SelectorSlider_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectorSlider.SelectorSlider_C.ResetSlider
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Focus__0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ResetThisSlider_                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectorSlider_C::ResetSlider(bool Focus__0, bool ResetThisSlider_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorSlider_C", "ResetSlider");

	Params::SelectorSlider_C_ResetSlider Parms{};

	Parms.Focus__0 = Focus__0;
	Parms.ResetThisSlider_ = ResetThisSlider_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectorSlider.SelectorSlider_C.ResetSliderFocus
// (BlueprintCallable, BlueprintEvent)

void USelectorSlider_C::ResetSliderFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorSlider_C", "ResetSliderFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorSlider.SelectorSlider_C.Set Focused or Unfocused Color
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ChangeSliderColorWhenFocused_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ChangeTextColorWhenFocused__0                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USlider*                          Slider_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UImage*                           imgLeftButton                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UImage*                           imgRightButton                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          SliderTitle_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          SliderValue_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    SetMargin                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush*                     LeftButtonColor                                        (Parm, OutParm)
// struct FSlateBrush*                     RightButtonColor                                       (Parm, OutParm)

void USelectorSlider_C::Set_Focused_or_Unfocused_Color(bool ChangeSliderColorWhenFocused_, bool ChangeTextColorWhenFocused__0, class USlider* Slider_0, class UImage* imgLeftButton, class UImage* imgRightButton, class UWidget* SliderTitle_0, class UWidget* SliderValue_0, bool SetMargin, struct FSlateBrush* LeftButtonColor, struct FSlateBrush* RightButtonColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorSlider_C", "Set Focused or Unfocused Color");

	Params::SelectorSlider_C_Set_Focused_or_Unfocused_Color Parms{};

	Parms.ChangeSliderColorWhenFocused_ = ChangeSliderColorWhenFocused_;
	Parms.ChangeTextColorWhenFocused__0 = ChangeTextColorWhenFocused__0;
	Parms.Slider_0 = Slider_0;
	Parms.imgLeftButton = imgLeftButton;
	Parms.imgRightButton = imgRightButton;
	Parms.SliderTitle_0 = SliderTitle_0;
	Parms.SliderValue_0 = SliderValue_0;
	Parms.SetMargin = SetMargin;

	UObject::ProcessEvent(Func, &Parms);

	if (LeftButtonColor != nullptr)
		*LeftButtonColor = std::move(Parms.LeftButtonColor);

	if (RightButtonColor != nullptr)
		*RightButtonColor = std::move(Parms.RightButtonColor);
}


// Function SelectorSlider.SelectorSlider_C.SetLeftButtonSettings
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateBrush USelectorSlider_C::SetLeftButtonSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorSlider_C", "SetLeftButtonSettings");

	Params::SelectorSlider_C_SetLeftButtonSettings Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SelectorSlider.SelectorSlider_C.SetRightButtonSettings
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateBrush USelectorSlider_C::SetRightButtonSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorSlider_C", "SetRightButtonSettings");

	Params::SelectorSlider_C_SetRightButtonSettings Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SelectorSlider.SelectorSlider_C.SetSliderFocus
// (BlueprintCallable, BlueprintEvent)

void USelectorSlider_C::SetSliderFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorSlider_C", "SetSliderFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorSlider.SelectorSlider_C.setTxtValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText USelectorSlider_C::setTxtValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorSlider_C", "setTxtValue");

	Params::SelectorSlider_C_setTxtValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

