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

// Function BP_InfantryAmmobag_USA.BP_InfantryAmmobag_USA_C.RemovedFromPlayersPlacedList
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_InfantryAmmobag_USA_C::RemovedFromPlayersPlacedList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfantryAmmobag_USA.BP_InfantryAmmobag_USA_C.RemovedFromPlayersPlacedList");

	ABP_InfantryAmmobag_USA_C_RemovedFromPlayersPlacedList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_InfantryAmmobag_USA.BP_InfantryAmmobag_USA_C.ExecuteUbergraph_BP_InfantryAmmobag_USA
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_InfantryAmmobag_USA_C::ExecuteUbergraph_BP_InfantryAmmobag_USA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfantryAmmobag_USA.BP_InfantryAmmobag_USA_C.ExecuteUbergraph_BP_InfantryAmmobag_USA");

	ABP_InfantryAmmobag_USA_C_ExecuteUbergraph_BP_InfantryAmmobag_USA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
