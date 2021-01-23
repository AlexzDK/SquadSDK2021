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

// Function Dest_RepairUS.Dest_RepairUS_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ADest_RepairUS_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dest_RepairUS.Dest_RepairUS_C.ReceiveBeginPlay");

	ADest_RepairUS_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dest_RepairUS.Dest_RepairUS_C.ExecuteUbergraph_Dest_RepairUS
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADest_RepairUS_C::ExecuteUbergraph_Dest_RepairUS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dest_RepairUS.Dest_RepairUS_C.ExecuteUbergraph_Dest_RepairUS");

	ADest_RepairUS_C_ExecuteUbergraph_Dest_RepairUS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
