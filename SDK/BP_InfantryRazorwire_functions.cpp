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

// Function BP_InfantryRazorwire.BP_InfantryRazorwire_C.RemovedFromPlayersPlacedList
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_InfantryRazorwire_C::RemovedFromPlayersPlacedList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfantryRazorwire.BP_InfantryRazorwire_C.RemovedFromPlayersPlacedList");

	ABP_InfantryRazorwire_C_RemovedFromPlayersPlacedList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_InfantryRazorwire.BP_InfantryRazorwire_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_InfantryRazorwire_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfantryRazorwire.BP_InfantryRazorwire_C.ReceiveDestroyed");

	ABP_InfantryRazorwire_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_InfantryRazorwire.BP_InfantryRazorwire_C.ExecuteUbergraph_BP_InfantryRazorwire
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_InfantryRazorwire_C::ExecuteUbergraph_BP_InfantryRazorwire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfantryRazorwire.BP_InfantryRazorwire_C.ExecuteUbergraph_BP_InfantryRazorwire");

	ABP_InfantryRazorwire_C_ExecuteUbergraph_BP_InfantryRazorwire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
