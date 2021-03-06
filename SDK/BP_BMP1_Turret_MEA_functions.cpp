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

// Function BP_BMP1_Turret_MEA.BP_BMP1_Turret_MEA_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_BMP1_Turret_MEA_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_Turret_MEA.BP_BMP1_Turret_MEA_C.ReceiveBeginPlay");

	ABP_BMP1_Turret_MEA_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP1_Turret_MEA.BP_BMP1_Turret_MEA_C.AT3_OnReloaded
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_BMP1_Turret_MEA_C::AT3_OnReloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_Turret_MEA.BP_BMP1_Turret_MEA_C.AT3_OnReloaded");

	ABP_BMP1_Turret_MEA_C_AT3_OnReloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP1_Turret_MEA.BP_BMP1_Turret_MEA_C.AT3_OnFire
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_BMP1_Turret_MEA_C::AT3_OnFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_Turret_MEA.BP_BMP1_Turret_MEA_C.AT3_OnFire");

	ABP_BMP1_Turret_MEA_C_AT3_OnFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP1_Turret_MEA.BP_BMP1_Turret_MEA_C.ExecuteUbergraph_BP_BMP1_Turret_MEA
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BMP1_Turret_MEA_C::ExecuteUbergraph_BP_BMP1_Turret_MEA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_Turret_MEA.BP_BMP1_Turret_MEA_C.ExecuteUbergraph_BP_BMP1_Turret_MEA");

	ABP_BMP1_Turret_MEA_C_ExecuteUbergraph_BP_BMP1_Turret_MEA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
