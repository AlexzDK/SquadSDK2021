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

// Function BP_InfantrySandbags.BP_InfantrySandbags_C.RemovedFromPlayersPlacedList
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_InfantrySandbags_C::RemovedFromPlayersPlacedList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfantrySandbags.BP_InfantrySandbags_C.RemovedFromPlayersPlacedList");

	ABP_InfantrySandbags_C_RemovedFromPlayersPlacedList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_InfantrySandbags.BP_InfantrySandbags_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_InfantrySandbags_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfantrySandbags.BP_InfantrySandbags_C.ReceiveDestroyed");

	ABP_InfantrySandbags_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_InfantrySandbags.BP_InfantrySandbags_C.ExecuteUbergraph_BP_InfantrySandbags
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_InfantrySandbags_C::ExecuteUbergraph_BP_InfantrySandbags(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfantrySandbags.BP_InfantrySandbags_C.ExecuteUbergraph_BP_InfantrySandbags");

	ABP_InfantrySandbags_C_ExecuteUbergraph_BP_InfantrySandbags_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
