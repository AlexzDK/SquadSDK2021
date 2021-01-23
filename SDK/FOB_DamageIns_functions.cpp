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

// Function FOB_DamageIns.FOB_DamageIns_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AFOB_DamageIns_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FOB_DamageIns.FOB_DamageIns_C.ReceiveBeginPlay");

	AFOB_DamageIns_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FOB_DamageIns.FOB_DamageIns_C.ExecuteUbergraph_FOB_DamageIns
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFOB_DamageIns_C::ExecuteUbergraph_FOB_DamageIns(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FOB_DamageIns.FOB_DamageIns_C.ExecuteUbergraph_FOB_DamageIns");

	AFOB_DamageIns_C_ExecuteUbergraph_FOB_DamageIns_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
