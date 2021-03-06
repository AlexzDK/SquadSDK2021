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

// Function BP_CommandZone_Vehicle.BP_CommandZone_Vehicle_C.Can Allow Actions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Allow_Actions                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CommandZone_Vehicle_C::Can_Allow_Actions(bool* Allow_Actions)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandZone_Vehicle.BP_CommandZone_Vehicle_C.Can Allow Actions");

	ABP_CommandZone_Vehicle_C_Can_Allow_Actions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Allow_Actions != nullptr)
		*Allow_Actions = params.Allow_Actions;

}


// Function BP_CommandZone_Vehicle.BP_CommandZone_Vehicle_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_CommandZone_Vehicle_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandZone_Vehicle.BP_CommandZone_Vehicle_C.ReceiveDestroyed");

	ABP_CommandZone_Vehicle_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandZone_Vehicle.BP_CommandZone_Vehicle_C.ExecuteUbergraph_BP_CommandZone_Vehicle
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CommandZone_Vehicle_C::ExecuteUbergraph_BP_CommandZone_Vehicle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandZone_Vehicle.BP_CommandZone_Vehicle_C.ExecuteUbergraph_BP_CommandZone_Vehicle");

	ABP_CommandZone_Vehicle_C_ExecuteUbergraph_BP_CommandZone_Vehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
