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

// Function AMMO_INS_Top.AMMO_INS_Top_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AAMMO_INS_Top_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AMMO_INS_Top.AMMO_INS_Top_C.ReceiveBeginPlay");

	AAMMO_INS_Top_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AMMO_INS_Top.AMMO_INS_Top_C.ExecuteUbergraph_AMMO_INS_Top
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAMMO_INS_Top_C::ExecuteUbergraph_AMMO_INS_Top(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AMMO_INS_Top.AMMO_INS_Top_C.ExecuteUbergraph_AMMO_INS_Top");

	AAMMO_INS_Top_C_ExecuteUbergraph_AMMO_INS_Top_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
