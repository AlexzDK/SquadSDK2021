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

// Function Tpku2b_MEA_Periscope_reticle.Tpku2b_MEA_Periscope_reticle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTpku2b_MEA_Periscope_reticle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tpku2b_MEA_Periscope_reticle.Tpku2b_MEA_Periscope_reticle_C.Construct");

	UTpku2b_MEA_Periscope_reticle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tpku2b_MEA_Periscope_reticle.Tpku2b_MEA_Periscope_reticle_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTpku2b_MEA_Periscope_reticle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tpku2b_MEA_Periscope_reticle.Tpku2b_MEA_Periscope_reticle_C.Tick");

	UTpku2b_MEA_Periscope_reticle_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tpku2b_MEA_Periscope_reticle.Tpku2b_MEA_Periscope_reticle_C.UpdateZoomLevelReticle
// (BlueprintCallable, BlueprintEvent)
void UTpku2b_MEA_Periscope_reticle_C::UpdateZoomLevelReticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tpku2b_MEA_Periscope_reticle.Tpku2b_MEA_Periscope_reticle_C.UpdateZoomLevelReticle");

	UTpku2b_MEA_Periscope_reticle_C_UpdateZoomLevelReticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tpku2b_MEA_Periscope_reticle.Tpku2b_MEA_Periscope_reticle_C.ExecuteUbergraph_Tpku2b_MEA_Periscope_reticle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTpku2b_MEA_Periscope_reticle_C::ExecuteUbergraph_Tpku2b_MEA_Periscope_reticle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tpku2b_MEA_Periscope_reticle.Tpku2b_MEA_Periscope_reticle_C.ExecuteUbergraph_Tpku2b_MEA_Periscope_reticle");

	UTpku2b_MEA_Periscope_reticle_C_ExecuteUbergraph_Tpku2b_MEA_Periscope_reticle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
