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

// Function Dest_BunkerHalf.Dest_BunkerHalf_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ADest_BunkerHalf_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dest_BunkerHalf.Dest_BunkerHalf_C.ReceiveBeginPlay");

	ADest_BunkerHalf_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dest_BunkerHalf.Dest_BunkerHalf_C.ExecuteUbergraph_Dest_BunkerHalf
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADest_BunkerHalf_C::ExecuteUbergraph_Dest_BunkerHalf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dest_BunkerHalf.Dest_BunkerHalf_C.ExecuteUbergraph_Dest_BunkerHalf");

	ADest_BunkerHalf_C_ExecuteUbergraph_Dest_BunkerHalf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
