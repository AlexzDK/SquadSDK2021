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

// Function BP_T62_Commander_Periscope.BP_T62_Commander_Periscope_C.GetWeaponAttachComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_T62_Commander_Periscope_C::GetWeaponAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_T62_Commander_Periscope.BP_T62_Commander_Periscope_C.GetWeaponAttachComponent");

	ABP_T62_Commander_Periscope_C_GetWeaponAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_T62_Commander_Periscope.BP_T62_Commander_Periscope_C.GetMasterPoseComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkinnedMeshComponent*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkinnedMeshComponent* ABP_T62_Commander_Periscope_C::GetMasterPoseComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_T62_Commander_Periscope.BP_T62_Commander_Periscope_C.GetMasterPoseComponent");

	ABP_T62_Commander_Periscope_C_GetMasterPoseComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_T62_Commander_Periscope.BP_T62_Commander_Periscope_C.Get1PAttachComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_T62_Commander_Periscope_C::Get1PAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_T62_Commander_Periscope.BP_T62_Commander_Periscope_C.Get1PAttachComponent");

	ABP_T62_Commander_Periscope_C_Get1PAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_T62_Commander_Periscope.BP_T62_Commander_Periscope_C.Get3PAttachComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_T62_Commander_Periscope_C::Get3PAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_T62_Commander_Periscope.BP_T62_Commander_Periscope_C.Get3PAttachComponent");

	ABP_T62_Commander_Periscope_C_Get3PAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_T62_Commander_Periscope.BP_T62_Commander_Periscope_C.ClientRemoveCameraWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_T62_Commander_Periscope_C::ClientRemoveCameraWidget__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_T62_Commander_Periscope.BP_T62_Commander_Periscope_C.ClientRemoveCameraWidget__DelegateSignature");

	ABP_T62_Commander_Periscope_C_ClientRemoveCameraWidget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_T62_Commander_Periscope.BP_T62_Commander_Periscope_C.ClientCreateCameraWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_T62_Commander_Periscope_C::ClientCreateCameraWidget__DelegateSignature(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_T62_Commander_Periscope.BP_T62_Commander_Periscope_C.ClientCreateCameraWidget__DelegateSignature");

	ABP_T62_Commander_Periscope_C_ClientCreateCameraWidget__DelegateSignature_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
