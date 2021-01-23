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

// Function BP_MI8.BP_MI8_C.Set Helicopter Widget Materials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           All_Valid_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MI8_C::Set_Helicopter_Widget_Materials(bool* All_Valid_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MI8.BP_MI8_C.Set Helicopter Widget Materials");

	ABP_MI8_C_Set_Helicopter_Widget_Materials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (All_Valid_ != nullptr)
		*All_Valid_ = params.All_Valid_;

}


// Function BP_MI8.BP_MI8_C.Set Helicopter Widgets Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MI8_C::Set_Helicopter_Widgets_Visibility(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MI8.BP_MI8_C.Set Helicopter Widgets Visibility");

	ABP_MI8_C_Set_Helicopter_Widgets_Visibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MI8.BP_MI8_C.Manage Helicopter Widgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MI8_C::Manage_Helicopter_Widgets(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MI8.BP_MI8_C.Manage Helicopter Widgets");

	ABP_MI8_C_Manage_Helicopter_Widgets_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MI8.BP_MI8_C.Get UI Tint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MI8_C::Get_UI_Tint(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MI8.BP_MI8_C.Get UI Tint");

	ABP_MI8_C_Get_UI_Tint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function BP_MI8.BP_MI8_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MI8_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MI8.BP_MI8_C.UserConstructionScript");

	ABP_MI8_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MI8.BP_MI8_C.Timeline_0_0__FinishedFunc
// (BlueprintEvent)
void ABP_MI8_C::Timeline_0_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MI8.BP_MI8_C.Timeline_0_0__FinishedFunc");

	ABP_MI8_C_Timeline_0_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MI8.BP_MI8_C.Timeline_0_0__UpdateFunc
// (BlueprintEvent)
void ABP_MI8_C::Timeline_0_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MI8.BP_MI8_C.Timeline_0_0__UpdateFunc");

	ABP_MI8_C_Timeline_0_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MI8.BP_MI8_C.Timeline_1_0__FinishedFunc
// (BlueprintEvent)
void ABP_MI8_C::Timeline_1_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MI8.BP_MI8_C.Timeline_1_0__FinishedFunc");

	ABP_MI8_C_Timeline_1_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MI8.BP_MI8_C.Timeline_1_0__UpdateFunc
// (BlueprintEvent)
void ABP_MI8_C::Timeline_1_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MI8.BP_MI8_C.Timeline_1_0__UpdateFunc");

	ABP_MI8_C_Timeline_1_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MI8.BP_MI8_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_MI8_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MI8.BP_MI8_C.ReceiveBeginPlay");

	ABP_MI8_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MI8.BP_MI8_C.ActivationSequence
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_MI8_C::ActivationSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MI8.BP_MI8_C.ActivationSequence");

	ABP_MI8_C_ActivationSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MI8.BP_MI8_C.DeactivationSequence
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_MI8_C::DeactivationSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MI8.BP_MI8_C.DeactivationSequence");

	ABP_MI8_C_DeactivationSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MI8.BP_MI8_C.Set UI Enabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable_UI                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MI8_C::Set_UI_Enabled(bool Enable_UI)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MI8.BP_MI8_C.Set UI Enabled");

	ABP_MI8_C_Set_UI_Enabled_Params params;
	params.Enable_UI = Enable_UI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MI8.BP_MI8_C.ExecuteUbergraph_BP_MI8
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MI8_C::ExecuteUbergraph_BP_MI8(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MI8.BP_MI8_C.ExecuteUbergraph_BP_MI8");

	ABP_MI8_C_ExecuteUbergraph_BP_MI8_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
