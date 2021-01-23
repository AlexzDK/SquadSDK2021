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

// Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.Command Visible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MapWidgetMapMarker_Radius_C::Command_Visible(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.Command Visible");

	UBP_MapWidgetMapMarker_Radius_C_Command_Visible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;

}


// Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.Update Size
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetMapMarker_Radius_C::Update_Size()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.Update Size");

	UBP_MapWidgetMapMarker_Radius_C_Update_Size_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.Init Command Marker
// (BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetMapMarker_Radius_C::Init_Command_Marker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.Init Command Marker");

	UBP_MapWidgetMapMarker_Radius_C_Init_Command_Marker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MapWidgetMapMarker_Radius_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.Destruct");

	UBP_MapWidgetMapMarker_Radius_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.OnRightClicked
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetMapMarker_Radius_C::OnRightClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.OnRightClicked");

	UBP_MapWidgetMapMarker_Radius_C_OnRightClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.Find Map Icon
// (BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetMapMarker_Radius_C::Find_Map_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.Find Map Icon");

	UBP_MapWidgetMapMarker_Radius_C_Find_Map_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.OnTextureChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetMapMarker_Radius_C::OnTextureChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.OnTextureChanged");

	UBP_MapWidgetMapMarker_Radius_C_OnTextureChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MapWidgetMapMarker_Radius_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.Construct");

	UBP_MapWidgetMapMarker_Radius_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.OnScaleChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          UniformScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetMapMarker_Radius_C::OnScaleChanged(float UniformScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.OnScaleChanged");

	UBP_MapWidgetMapMarker_Radius_C_OnScaleChanged_Params params;
	params.UniformScale = UniformScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetMapMarker_Radius_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.Tick");

	UBP_MapWidgetMapMarker_Radius_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.OnTintChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetMapMarker_Radius_C::OnTintChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.OnTintChanged");

	UBP_MapWidgetMapMarker_Radius_C_OnTintChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.ExecuteUbergraph_BP_MapWidgetMapMarker_Radius
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetMapMarker_Radius_C::ExecuteUbergraph_BP_MapWidgetMapMarker_Radius(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarker_Radius.BP_MapWidgetMapMarker_Radius_C.ExecuteUbergraph_BP_MapWidgetMapMarker_Radius");

	UBP_MapWidgetMapMarker_Radius_C_ExecuteUbergraph_BP_MapWidgetMapMarker_Radius_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
