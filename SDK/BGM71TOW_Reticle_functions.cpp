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

// Function BGM71TOW_Reticle.BGM71TOW_Reticle_C.RangeFinder
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBGM71TOW_Reticle_C::RangeFinder()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGM71TOW_Reticle.BGM71TOW_Reticle_C.RangeFinder");

	UBGM71TOW_Reticle_C_RangeFinder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BGM71TOW_Reticle.BGM71TOW_Reticle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBGM71TOW_Reticle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGM71TOW_Reticle.BGM71TOW_Reticle_C.Construct");

	UBGM71TOW_Reticle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BGM71TOW_Reticle.BGM71TOW_Reticle_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBGM71TOW_Reticle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGM71TOW_Reticle.BGM71TOW_Reticle_C.Tick");

	UBGM71TOW_Reticle_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BGM71TOW_Reticle.BGM71TOW_Reticle_C.ExecuteUbergraph_BGM71TOW_Reticle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBGM71TOW_Reticle_C::ExecuteUbergraph_BGM71TOW_Reticle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGM71TOW_Reticle.BGM71TOW_Reticle_C.ExecuteUbergraph_BGM71TOW_Reticle");

	UBGM71TOW_Reticle_C_ExecuteUbergraph_BGM71TOW_Reticle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
