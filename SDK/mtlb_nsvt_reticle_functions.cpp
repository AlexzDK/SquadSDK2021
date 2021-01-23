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

// Function mtlb_nsvt_reticle.mtlb_nsvt_reticle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void Umtlb_nsvt_reticle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function mtlb_nsvt_reticle.mtlb_nsvt_reticle_C.Construct");

	Umtlb_nsvt_reticle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function mtlb_nsvt_reticle.mtlb_nsvt_reticle_C.UpdateTurretHealth
// (BlueprintCallable, BlueprintEvent)
void Umtlb_nsvt_reticle_C::UpdateTurretHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function mtlb_nsvt_reticle.mtlb_nsvt_reticle_C.UpdateTurretHealth");

	Umtlb_nsvt_reticle_C_UpdateTurretHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function mtlb_nsvt_reticle.mtlb_nsvt_reticle_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Umtlb_nsvt_reticle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function mtlb_nsvt_reticle.mtlb_nsvt_reticle_C.Tick");

	Umtlb_nsvt_reticle_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function mtlb_nsvt_reticle.mtlb_nsvt_reticle_C.UpdateZoomLevelReticle
// (BlueprintCallable, BlueprintEvent)
void Umtlb_nsvt_reticle_C::UpdateZoomLevelReticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function mtlb_nsvt_reticle.mtlb_nsvt_reticle_C.UpdateZoomLevelReticle");

	Umtlb_nsvt_reticle_C_UpdateZoomLevelReticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function mtlb_nsvt_reticle.mtlb_nsvt_reticle_C.ExecuteUbergraph_mtlb_nsvt_reticle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Umtlb_nsvt_reticle_C::ExecuteUbergraph_mtlb_nsvt_reticle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function mtlb_nsvt_reticle.mtlb_nsvt_reticle_C.ExecuteUbergraph_mtlb_nsvt_reticle");

	Umtlb_nsvt_reticle_C_ExecuteUbergraph_mtlb_nsvt_reticle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
