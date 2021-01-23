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

// Function FOBINS_Destroy.FOBINS_Destroy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AFOBINS_Destroy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FOBINS_Destroy.FOBINS_Destroy_C.ReceiveBeginPlay");

	AFOBINS_Destroy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FOBINS_Destroy.FOBINS_Destroy_C.ExecuteUbergraph_FOBINS_Destroy
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFOBINS_Destroy_C::ExecuteUbergraph_FOBINS_Destroy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FOBINS_Destroy.FOBINS_Destroy_C.ExecuteUbergraph_FOBINS_Destroy");

	AFOBINS_Destroy_C_ExecuteUbergraph_FOBINS_Destroy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
