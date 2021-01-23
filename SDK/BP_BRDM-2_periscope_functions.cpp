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

// Function BP_BRDM-2_periscope.BP_BRDM-2_periscope_C.GetWeaponAttachComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_BRDM_2_periscope_C::GetWeaponAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRDM-2_periscope.BP_BRDM-2_periscope_C.GetWeaponAttachComponent");

	ABP_BRDM_2_periscope_C_GetWeaponAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BRDM-2_periscope.BP_BRDM-2_periscope_C.GetMasterPoseComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkinnedMeshComponent*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkinnedMeshComponent* ABP_BRDM_2_periscope_C::GetMasterPoseComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRDM-2_periscope.BP_BRDM-2_periscope_C.GetMasterPoseComponent");

	ABP_BRDM_2_periscope_C_GetMasterPoseComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BRDM-2_periscope.BP_BRDM-2_periscope_C.Get1PAttachComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_BRDM_2_periscope_C::Get1PAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRDM-2_periscope.BP_BRDM-2_periscope_C.Get1PAttachComponent");

	ABP_BRDM_2_periscope_C_Get1PAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BRDM-2_periscope.BP_BRDM-2_periscope_C.Get3PAttachComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_BRDM_2_periscope_C::Get3PAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRDM-2_periscope.BP_BRDM-2_periscope_C.Get3PAttachComponent");

	ABP_BRDM_2_periscope_C_Get3PAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
