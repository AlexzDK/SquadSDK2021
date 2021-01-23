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

// Function FOBRUS_Damage.FOBRUS_Damage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AFOBRUS_Damage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FOBRUS_Damage.FOBRUS_Damage_C.ReceiveBeginPlay");

	AFOBRUS_Damage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FOBRUS_Damage.FOBRUS_Damage_C.ExecuteUbergraph_FOBRUS_Damage
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFOBRUS_Damage_C::ExecuteUbergraph_FOBRUS_Damage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FOBRUS_Damage.FOBRUS_Damage_C.ExecuteUbergraph_FOBRUS_Damage");

	AFOBRUS_Damage_C_ExecuteUbergraph_FOBRUS_Damage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif