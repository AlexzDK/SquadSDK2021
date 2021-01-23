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

// Function BP_Campfire.BP_Campfire_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Campfire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Campfire.BP_Campfire_C.UserConstructionScript");

	ABP_Campfire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Campfire.BP_Campfire_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Campfire_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Campfire.BP_Campfire_C.ReceiveBeginPlay");

	ABP_Campfire_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Campfire.BP_Campfire_C.ExecuteUbergraph_BP_Campfire
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Campfire_C::ExecuteUbergraph_BP_Campfire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Campfire.BP_Campfire_C.ExecuteUbergraph_BP_Campfire");

	ABP_Campfire_C_ExecuteUbergraph_BP_Campfire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
