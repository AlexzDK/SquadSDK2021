// Name: Squad, Version: 13-01-2021

#include "../pch.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function W_Slider_GridOpacity.W_Slider_GridOpacity_C.BndEvt__SettingsItem_Slider_K2Node_ComponentBoundEvent_6_OnCaptureEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Slider_GridOpacity_C::BndEvt__SettingsItem_Slider_K2Node_ComponentBoundEvent_6_OnCaptureEnd__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Slider_GridOpacity.W_Slider_GridOpacity_C.BndEvt__SettingsItem_Slider_K2Node_ComponentBoundEvent_6_OnCaptureEnd__DelegateSignature");

	UW_Slider_GridOpacity_C_BndEvt__SettingsItem_Slider_K2Node_ComponentBoundEvent_6_OnCaptureEnd__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Slider_GridOpacity.W_Slider_GridOpacity_C.Set Value
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Slider_GridOpacity_C::Set_Value(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Slider_GridOpacity.W_Slider_GridOpacity_C.Set Value");

	UW_Slider_GridOpacity_C_Set_Value_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Slider_GridOpacity.W_Slider_GridOpacity_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Slider_GridOpacity_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Slider_GridOpacity.W_Slider_GridOpacity_C.Construct");

	UW_Slider_GridOpacity_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Slider_GridOpacity.W_Slider_GridOpacity_C.ExecuteUbergraph_W_Slider_GridOpacity
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Slider_GridOpacity_C::ExecuteUbergraph_W_Slider_GridOpacity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Slider_GridOpacity.W_Slider_GridOpacity_C.ExecuteUbergraph_W_Slider_GridOpacity");

	UW_Slider_GridOpacity_C_ExecuteUbergraph_W_Slider_GridOpacity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
