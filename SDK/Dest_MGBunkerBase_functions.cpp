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

// Function Dest_MGBunkerBase.Dest_MGBunkerBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ADest_MGBunkerBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dest_MGBunkerBase.Dest_MGBunkerBase_C.ReceiveBeginPlay");

	ADest_MGBunkerBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dest_MGBunkerBase.Dest_MGBunkerBase_C.ExecuteUbergraph_Dest_MGBunkerBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADest_MGBunkerBase_C::ExecuteUbergraph_Dest_MGBunkerBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dest_MGBunkerBase.Dest_MGBunkerBase_C.ExecuteUbergraph_Dest_MGBunkerBase");

	ADest_MGBunkerBase_C_ExecuteUbergraph_Dest_MGBunkerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
