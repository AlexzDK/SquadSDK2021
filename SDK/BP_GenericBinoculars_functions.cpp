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

// Function BP_GenericBinoculars.BP_GenericBinoculars_C.Get Marker Location
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
struct FVector ABP_GenericBinoculars_C::Get_Marker_Location(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericBinoculars.BP_GenericBinoculars_C.Get Marker Location");

	ABP_GenericBinoculars_C_Get_Marker_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;


	return params.ReturnValue;
}


// Function BP_GenericBinoculars.BP_GenericBinoculars_C.BlueprintOnEquip
// (Event, Protected, BlueprintEvent)
void ABP_GenericBinoculars_C::BlueprintOnEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericBinoculars.BP_GenericBinoculars_C.BlueprintOnEquip");

	ABP_GenericBinoculars_C_BlueprintOnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericBinoculars.BP_GenericBinoculars_C.BlueprintOnUnequip
// (Event, Protected, BlueprintEvent)
void ABP_GenericBinoculars_C::BlueprintOnUnequip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericBinoculars.BP_GenericBinoculars_C.BlueprintOnUnequip");

	ABP_GenericBinoculars_C_BlueprintOnUnequip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericBinoculars.BP_GenericBinoculars_C.BlueprintOnZoom
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bNewZoom                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GenericBinoculars_C::BlueprintOnZoom(bool bNewZoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericBinoculars.BP_GenericBinoculars_C.BlueprintOnZoom");

	ABP_GenericBinoculars_C_BlueprintOnZoom_Params params;
	params.bNewZoom = bNewZoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericBinoculars.BP_GenericBinoculars_C.ExecuteUbergraph_BP_GenericBinoculars
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericBinoculars_C::ExecuteUbergraph_BP_GenericBinoculars(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericBinoculars.BP_GenericBinoculars_C.ExecuteUbergraph_BP_GenericBinoculars");

	ABP_GenericBinoculars_C_ExecuteUbergraph_BP_GenericBinoculars_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
