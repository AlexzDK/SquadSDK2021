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

// Function BP_BTR80_MIL_turret.BP_BTR80_MIL_turret_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_BTR80_MIL_turret_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTR80_MIL_turret.BP_BTR80_MIL_turret_C.ReceiveBeginPlay");

	ABP_BTR80_MIL_turret_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTR80_MIL_turret.BP_BTR80_MIL_turret_C.ExecuteUbergraph_BP_BTR80_MIL_turret
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BTR80_MIL_turret_C::ExecuteUbergraph_BP_BTR80_MIL_turret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTR80_MIL_turret.BP_BTR80_MIL_turret_C.ExecuteUbergraph_BP_BTR80_MIL_turret");

	ABP_BTR80_MIL_turret_C_ExecuteUbergraph_BP_BTR80_MIL_turret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
