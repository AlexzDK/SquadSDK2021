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

// Function FOB_US_Damage.FOB_US_Damage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AFOB_US_Damage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FOB_US_Damage.FOB_US_Damage_C.ReceiveBeginPlay");

	AFOB_US_Damage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FOB_US_Damage.FOB_US_Damage_C.ExecuteUbergraph_FOB_US_Damage
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFOB_US_Damage_C::ExecuteUbergraph_FOB_US_Damage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FOB_US_Damage.FOB_US_Damage_C.ExecuteUbergraph_FOB_US_Damage");

	AFOB_US_Damage_C_ExecuteUbergraph_FOB_US_Damage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
