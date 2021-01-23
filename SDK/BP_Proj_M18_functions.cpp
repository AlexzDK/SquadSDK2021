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

// Function BP_Proj_M18.BP_Proj_M18_C.CreateSmoke
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Proj_M18_C::CreateSmoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Proj_M18.BP_Proj_M18_C.CreateSmoke");

	ABP_Proj_M18_C_CreateSmoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Proj_M18.BP_Proj_M18_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Proj_M18_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Proj_M18.BP_Proj_M18_C.ReceiveBeginPlay");

	ABP_Proj_M18_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Proj_M18.BP_Proj_M18_C.ExecuteUbergraph_BP_Proj_M18
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Proj_M18_C::ExecuteUbergraph_BP_Proj_M18(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Proj_M18.BP_Proj_M18_C.ExecuteUbergraph_BP_Proj_M18");

	ABP_Proj_M18_C_ExecuteUbergraph_BP_Proj_M18_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
