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

// Function Destroy_HescoWallFullTAN.Destroy_HescoWallFullTAN_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ADestroy_HescoWallFullTAN_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Destroy_HescoWallFullTAN.Destroy_HescoWallFullTAN_C.ReceiveBeginPlay");

	ADestroy_HescoWallFullTAN_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Destroy_HescoWallFullTAN.Destroy_HescoWallFullTAN_C.ExecuteUbergraph_Destroy_HescoWallFullTAN
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADestroy_HescoWallFullTAN_C::ExecuteUbergraph_Destroy_HescoWallFullTAN(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Destroy_HescoWallFullTAN.Destroy_HescoWallFullTAN_C.ExecuteUbergraph_Destroy_HescoWallFullTAN");

	ADestroy_HescoWallFullTAN_C_ExecuteUbergraph_Destroy_HescoWallFullTAN_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
