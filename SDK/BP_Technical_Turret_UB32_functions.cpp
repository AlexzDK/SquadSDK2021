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

// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.IsCurrentWeaponInputEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInputEnabled                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Technical_Turret_UB32_C::IsCurrentWeaponInputEnabled(bool* bInputEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.IsCurrentWeaponInputEnabled");

	ABP_Technical_Turret_UB32_C_IsCurrentWeaponInputEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bInputEnabled != nullptr)
		*bInputEnabled = params.bInputEnabled;

}


// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.IsSoldierAlive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Technical_Turret_UB32_C::IsSoldierAlive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.IsSoldierAlive");

	ABP_Technical_Turret_UB32_C_IsSoldierAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.GetADSCameraLocationComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_Technical_Turret_UB32_C::GetADSCameraLocationComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.GetADSCameraLocationComponent");

	ABP_Technical_Turret_UB32_C_GetADSCameraLocationComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.GetDefaultCameraLocationComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_Technical_Turret_UB32_C::GetDefaultCameraLocationComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.GetDefaultCameraLocationComponent");

	ABP_Technical_Turret_UB32_C_GetDefaultCameraLocationComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.GetSoldierAttachComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_Technical_Turret_UB32_C::GetSoldierAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.GetSoldierAttachComponent");

	ABP_Technical_Turret_UB32_C_GetSoldierAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.GetWeaponAttachComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_Technical_Turret_UB32_C::GetWeaponAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.GetWeaponAttachComponent");

	ABP_Technical_Turret_UB32_C_GetWeaponAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.GetMasterPoseComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkinnedMeshComponent*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkinnedMeshComponent* ABP_Technical_Turret_UB32_C::GetMasterPoseComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.GetMasterPoseComponent");

	ABP_Technical_Turret_UB32_C_GetMasterPoseComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.Get1PAttachComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_Technical_Turret_UB32_C::Get1PAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.Get1PAttachComponent");

	ABP_Technical_Turret_UB32_C_Get1PAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.Get3PAttachComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_Technical_Turret_UB32_C::Get3PAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.Get3PAttachComponent");

	ABP_Technical_Turret_UB32_C_Get3PAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Technical_Turret_UB32_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.UserConstructionScript");

	ABP_Technical_Turret_UB32_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.InpActEvt_Fire_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Technical_Turret_UB32_C::InpActEvt_Fire_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.InpActEvt_Fire_K2Node_InputActionEvent_2");

	ABP_Technical_Turret_UB32_C_InpActEvt_Fire_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.InpActEvt_Fire_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Technical_Turret_UB32_C::InpActEvt_Fire_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.InpActEvt_Fire_K2Node_InputActionEvent_1");

	ABP_Technical_Turret_UB32_C_InpActEvt_Fire_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_40
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Technical_Turret_UB32_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_40(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_40");

	ABP_Technical_Turret_UB32_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_40_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_43
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Technical_Turret_UB32_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_43(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_43");

	ABP_Technical_Turret_UB32_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_43_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.InpAxisEvt_VehicleMoveForward_K2Node_InputAxisEvent_58
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Technical_Turret_UB32_C::InpAxisEvt_VehicleMoveForward_K2Node_InputAxisEvent_58(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.InpAxisEvt_VehicleMoveForward_K2Node_InputAxisEvent_58");

	ABP_Technical_Turret_UB32_C_InpAxisEvt_VehicleMoveForward_K2Node_InputAxisEvent_58_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.InpAxisEvt_VehicleMoveRight_K2Node_InputAxisEvent_62
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Technical_Turret_UB32_C::InpAxisEvt_VehicleMoveRight_K2Node_InputAxisEvent_62(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.InpAxisEvt_VehicleMoveRight_K2Node_InputAxisEvent_62");

	ABP_Technical_Turret_UB32_C_InpAxisEvt_VehicleMoveRight_K2Node_InputAxisEvent_62_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Technical_Turret_UB32_C::ReceivePossessed(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.ReceivePossessed");

	ABP_Technical_Turret_UB32_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             OldController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Technical_Turret_UB32_C::ReceiveUnpossessed(class AController* OldController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.ReceiveUnpossessed");

	ABP_Technical_Turret_UB32_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.ExecuteUbergraph_BP_Technical_Turret_UB32
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Technical_Turret_UB32_C::ExecuteUbergraph_BP_Technical_Turret_UB32(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.ExecuteUbergraph_BP_Technical_Turret_UB32");

	ABP_Technical_Turret_UB32_C_ExecuteUbergraph_BP_Technical_Turret_UB32_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
