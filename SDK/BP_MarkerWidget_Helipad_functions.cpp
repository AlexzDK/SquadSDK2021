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

// Function BP_MarkerWidget_Helipad.BP_MarkerWidget_Helipad_C.UpdateMarkerImageBrush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Helipad_C::UpdateMarkerImageBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Helipad.BP_MarkerWidget_Helipad_C.UpdateMarkerImageBrush");

	UBP_MarkerWidget_Helipad_C_UpdateMarkerImageBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Helipad.BP_MarkerWidget_Helipad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MarkerWidget_Helipad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Helipad.BP_MarkerWidget_Helipad_C.Construct");

	UBP_MarkerWidget_Helipad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Helipad.BP_MarkerWidget_Helipad_C.Find SQ Map Icon
// (BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Helipad_C::Find_SQ_Map_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Helipad.BP_MarkerWidget_Helipad_C.Find SQ Map Icon");

	UBP_MarkerWidget_Helipad_C_Find_SQ_Map_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Helipad.BP_MarkerWidget_Helipad_C.ExecuteUbergraph_BP_MarkerWidget_Helipad
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_Helipad_C::ExecuteUbergraph_BP_MarkerWidget_Helipad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Helipad.BP_MarkerWidget_Helipad_C.ExecuteUbergraph_BP_MarkerWidget_Helipad");

	UBP_MarkerWidget_Helipad_C_ExecuteUbergraph_BP_MarkerWidget_Helipad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
