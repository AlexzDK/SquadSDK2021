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

// Function BP_Mortarround_SMOKE2.BP_Mortarround_SMOKE2_C.BPOnNearGroundDistanceReached
// (Event, Public, BlueprintEvent)
void ABP_Mortarround_SMOKE2_C::BPOnNearGroundDistanceReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mortarround_SMOKE2.BP_Mortarround_SMOKE2_C.BPOnNearGroundDistanceReached");

	ABP_Mortarround_SMOKE2_C_BPOnNearGroundDistanceReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Mortarround_SMOKE2.BP_Mortarround_SMOKE2_C.BPOnBeginDescending
// (Event, Public, BlueprintEvent)
void ABP_Mortarround_SMOKE2_C::BPOnBeginDescending()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mortarround_SMOKE2.BP_Mortarround_SMOKE2_C.BPOnBeginDescending");

	ABP_Mortarround_SMOKE2_C_BPOnBeginDescending_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Mortarround_SMOKE2.BP_Mortarround_SMOKE2_C.ExecuteUbergraph_BP_Mortarround_SMOKE2
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Mortarround_SMOKE2_C::ExecuteUbergraph_BP_Mortarround_SMOKE2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mortarround_SMOKE2.BP_Mortarround_SMOKE2_C.ExecuteUbergraph_BP_Mortarround_SMOKE2");

	ABP_Mortarround_SMOKE2_C_ExecuteUbergraph_BP_Mortarround_SMOKE2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
