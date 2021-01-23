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

// Function BP_BMP2_MEA.BP_BMP2_MEA_C.Attach Turret
// (BlueprintCallable, BlueprintEvent)
void ABP_BMP2_MEA_C::Attach_Turret()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP2_MEA.BP_BMP2_MEA_C.Attach Turret");

	ABP_BMP2_MEA_C_Attach_Turret_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP2_MEA.BP_BMP2_MEA_C.ExecuteUbergraph_BP_BMP2_MEA
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BMP2_MEA_C::ExecuteUbergraph_BP_BMP2_MEA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP2_MEA.BP_BMP2_MEA_C.ExecuteUbergraph_BP_BMP2_MEA");

	ABP_BMP2_MEA_C_ExecuteUbergraph_BP_BMP2_MEA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
