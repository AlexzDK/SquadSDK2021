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

// Function BP_I_Sandbag_murder_hole_MEA.BP_I_Sandbag_murder_hole_MEA_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_I_Sandbag_murder_hole_MEA_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_I_Sandbag_murder_hole_MEA.BP_I_Sandbag_murder_hole_MEA_C.ReceiveDestroyed");

	ABP_I_Sandbag_murder_hole_MEA_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_I_Sandbag_murder_hole_MEA.BP_I_Sandbag_murder_hole_MEA_C.ExecuteUbergraph_BP_I_Sandbag_murder_hole_MEA
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_I_Sandbag_murder_hole_MEA_C::ExecuteUbergraph_BP_I_Sandbag_murder_hole_MEA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_I_Sandbag_murder_hole_MEA.BP_I_Sandbag_murder_hole_MEA_C.ExecuteUbergraph_BP_I_Sandbag_murder_hole_MEA");

	ABP_I_Sandbag_murder_hole_MEA_C_ExecuteUbergraph_BP_I_Sandbag_murder_hole_MEA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
