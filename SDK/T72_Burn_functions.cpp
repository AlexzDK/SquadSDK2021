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

// Function T72_Burn.T72_Burn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AT72_Burn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function T72_Burn.T72_Burn_C.ReceiveBeginPlay");

	AT72_Burn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function T72_Burn.T72_Burn_C.OnBeginDestroyedVehicle
// (Event, Public, BlueprintEvent)
void AT72_Burn_C::OnBeginDestroyedVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function T72_Burn.T72_Burn_C.OnBeginDestroyedVehicle");

	AT72_Burn_C_OnBeginDestroyedVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function T72_Burn.T72_Burn_C.ExecuteUbergraph_T72_Burn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AT72_Burn_C::ExecuteUbergraph_T72_Burn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function T72_Burn.T72_Burn_C.ExecuteUbergraph_T72_Burn");

	AT72_Burn_C_ExecuteUbergraph_T72_Burn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
