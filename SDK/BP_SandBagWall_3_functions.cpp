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

// Function BP_SandBagWall_3.BP_SandBagWall_2_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_SandBagWall_2_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SandBagWall_3.BP_SandBagWall_2_C.ReceiveDestroyed");

	ABP_SandBagWall_2_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SandBagWall_3.BP_SandBagWall_2_C.ExecuteUbergraph_BP_SandBagWall_3
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SandBagWall_2_C::ExecuteUbergraph_BP_SandBagWall_3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SandBagWall_3.BP_SandBagWall_2_C.ExecuteUbergraph_BP_SandBagWall_3");

	ABP_SandBagWall_2_C_ExecuteUbergraph_BP_SandBagWall_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
