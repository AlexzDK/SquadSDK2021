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

// Function BP_MapMarker_Circle.BP_MapMarker_Circle_C.InitDirectorMarker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_MapMarker_Circle_C::InitDirectorMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_Circle.BP_MapMarker_Circle_C.InitDirectorMarker");

	UBP_MapMarker_Circle_C_InitDirectorMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_Circle.BP_MapMarker_Circle_C.RefreshVisibility
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapMarker_Circle_C::RefreshVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_Circle.BP_MapMarker_Circle_C.RefreshVisibility");

	UBP_MapMarker_Circle_C_RefreshVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_Circle.BP_MapMarker_Circle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MapMarker_Circle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_Circle.BP_MapMarker_Circle_C.Construct");

	UBP_MapMarker_Circle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_Circle.BP_MapMarker_Circle_C.OnMapZoom
// (BlueprintCallable, BlueprintEvent)
void UBP_MapMarker_Circle_C::OnMapZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_Circle.BP_MapMarker_Circle_C.OnMapZoom");

	UBP_MapMarker_Circle_C_OnMapZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_Circle.BP_MapMarker_Circle_C.OnMapCoreChanged
// (BlueprintCallable, BlueprintEvent)
void UBP_MapMarker_Circle_C::OnMapCoreChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_Circle.BP_MapMarker_Circle_C.OnMapCoreChanged");

	UBP_MapMarker_Circle_C_OnMapCoreChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_Circle.BP_MapMarker_Circle_C.OnHasFadedChanged
// (Event, Public, BlueprintEvent)
void UBP_MapMarker_Circle_C::OnHasFadedChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_Circle.BP_MapMarker_Circle_C.OnHasFadedChanged");

	UBP_MapMarker_Circle_C_OnHasFadedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapMarker_Circle.BP_MapMarker_Circle_C.ExecuteUbergraph_BP_MapMarker_Circle
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapMarker_Circle_C::ExecuteUbergraph_BP_MapMarker_Circle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapMarker_Circle.BP_MapMarker_Circle_C.ExecuteUbergraph_BP_MapMarker_Circle");

	UBP_MapMarker_Circle_C_ExecuteUbergraph_BP_MapMarker_Circle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
