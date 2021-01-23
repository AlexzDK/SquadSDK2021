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

// Function Destroy_Hesco.Destroy_Hesco_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ADestroy_Hesco_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Destroy_Hesco.Destroy_Hesco_C.ReceiveBeginPlay");

	ADestroy_Hesco_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Destroy_Hesco.Destroy_Hesco_C.ExecuteUbergraph_Destroy_Hesco
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADestroy_Hesco_C::ExecuteUbergraph_Destroy_Hesco(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Destroy_Hesco.Destroy_Hesco_C.ExecuteUbergraph_Destroy_Hesco");

	ADestroy_Hesco_C_ExecuteUbergraph_Destroy_Hesco_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
