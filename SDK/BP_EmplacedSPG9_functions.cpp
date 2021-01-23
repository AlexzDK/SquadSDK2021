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

// Function BP_EmplacedSPG9.BP_EmplacedSPG9_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_EmplacedSPG9_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedSPG9.BP_EmplacedSPG9_C.UserConstructionScript");

	ABP_EmplacedSPG9_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EmplacedSPG9.BP_EmplacedSPG9_C.BlueprintOnFire
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Origin                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_EmplacedSPG9_C::BlueprintOnFire(const struct FVector& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedSPG9.BP_EmplacedSPG9_C.BlueprintOnFire");

	ABP_EmplacedSPG9_C_BlueprintOnFire_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EmplacedSPG9.BP_EmplacedSPG9_C.BlueprintOnEquip
// (Event, Protected, BlueprintEvent)
void ABP_EmplacedSPG9_C::BlueprintOnEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedSPG9.BP_EmplacedSPG9_C.BlueprintOnEquip");

	ABP_EmplacedSPG9_C_BlueprintOnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EmplacedSPG9.BP_EmplacedSPG9_C.ExecuteUbergraph_BP_EmplacedSPG9
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_EmplacedSPG9_C::ExecuteUbergraph_BP_EmplacedSPG9(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedSPG9.BP_EmplacedSPG9_C.ExecuteUbergraph_BP_EmplacedSPG9");

	ABP_EmplacedSPG9_C_ExecuteUbergraph_BP_EmplacedSPG9_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
