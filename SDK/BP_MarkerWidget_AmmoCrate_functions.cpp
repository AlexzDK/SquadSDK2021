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

// Function BP_MarkerWidget_AmmoCrate.BP_MarkerWidget_AmmoCrate_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UBP_MarkerWidget_AmmoCrate_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_AmmoCrate.BP_MarkerWidget_AmmoCrate_C.GetText_1");

	UBP_MarkerWidget_AmmoCrate_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_AmmoCrate.BP_MarkerWidget_AmmoCrate_C.UpdateMarkerImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_AmmoCrate_C::UpdateMarkerImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_AmmoCrate.BP_MarkerWidget_AmmoCrate_C.UpdateMarkerImage");

	UBP_MarkerWidget_AmmoCrate_C_UpdateMarkerImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_AmmoCrate.BP_MarkerWidget_AmmoCrate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MarkerWidget_AmmoCrate_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_AmmoCrate.BP_MarkerWidget_AmmoCrate_C.Construct");

	UBP_MarkerWidget_AmmoCrate_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_AmmoCrate.BP_MarkerWidget_AmmoCrate_C.ExecuteUbergraph_BP_MarkerWidget_AmmoCrate
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_AmmoCrate_C::ExecuteUbergraph_BP_MarkerWidget_AmmoCrate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_AmmoCrate.BP_MarkerWidget_AmmoCrate_C.ExecuteUbergraph_BP_MarkerWidget_AmmoCrate");

	UBP_MarkerWidget_AmmoCrate_C_ExecuteUbergraph_BP_MarkerWidget_AmmoCrate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
