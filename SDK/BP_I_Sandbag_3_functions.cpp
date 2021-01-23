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

// Function BP_I_Sandbag_3.BP_I_Sandbag_2_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_I_Sandbag_2_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_I_Sandbag_3.BP_I_Sandbag_2_C.ReceiveDestroyed");

	ABP_I_Sandbag_2_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_I_Sandbag_3.BP_I_Sandbag_2_C.ExecuteUbergraph_BP_I_Sandbag_3
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_I_Sandbag_2_C::ExecuteUbergraph_BP_I_Sandbag_3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_I_Sandbag_3.BP_I_Sandbag_2_C.ExecuteUbergraph_BP_I_Sandbag_3");

	ABP_I_Sandbag_2_C_ExecuteUbergraph_BP_I_Sandbag_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
