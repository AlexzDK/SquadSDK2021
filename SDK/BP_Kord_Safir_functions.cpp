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

// Function BP_Kord_Safir.BP_Kord_Safir_C.BlueprintOnFire
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Origin                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Kord_Safir_C::BlueprintOnFire(const struct FVector& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Kord_Safir.BP_Kord_Safir_C.BlueprintOnFire");

	ABP_Kord_Safir_C_BlueprintOnFire_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Kord_Safir.BP_Kord_Safir_C.ExecuteUbergraph_BP_Kord_Safir
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Kord_Safir_C::ExecuteUbergraph_BP_Kord_Safir(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Kord_Safir.BP_Kord_Safir_C.ExecuteUbergraph_BP_Kord_Safir");

	ABP_Kord_Safir_C_ExecuteUbergraph_BP_Kord_Safir_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
