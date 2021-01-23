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

// Function BP_GenericDeployableMortarVehicle.BP_GenericDeployableMortarVehicle_C.GetADSCameraLocationComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_GenericDeployableMortarVehicle_C::GetADSCameraLocationComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableMortarVehicle.BP_GenericDeployableMortarVehicle_C.GetADSCameraLocationComponent");

	ABP_GenericDeployableMortarVehicle_C_GetADSCameraLocationComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_GenericDeployableMortarVehicle.BP_GenericDeployableMortarVehicle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_GenericDeployableMortarVehicle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableMortarVehicle.BP_GenericDeployableMortarVehicle_C.UserConstructionScript");

	ABP_GenericDeployableMortarVehicle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableMortarVehicle.BP_GenericDeployableMortarVehicle_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             OldController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericDeployableMortarVehicle_C::ReceiveUnpossessed(class AController* OldController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableMortarVehicle.BP_GenericDeployableMortarVehicle_C.ReceiveUnpossessed");

	ABP_GenericDeployableMortarVehicle_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableMortarVehicle.BP_GenericDeployableMortarVehicle_C.LookUp
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericDeployableMortarVehicle_C::LookUp(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableMortarVehicle.BP_GenericDeployableMortarVehicle_C.LookUp");

	ABP_GenericDeployableMortarVehicle_C_LookUp_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableMortarVehicle.BP_GenericDeployableMortarVehicle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_GenericDeployableMortarVehicle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableMortarVehicle.BP_GenericDeployableMortarVehicle_C.ReceiveBeginPlay");

	ABP_GenericDeployableMortarVehicle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableMortarVehicle.BP_GenericDeployableMortarVehicle_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericDeployableMortarVehicle_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableMortarVehicle.BP_GenericDeployableMortarVehicle_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1");

	ABP_GenericDeployableMortarVehicle_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableMortarVehicle.BP_GenericDeployableMortarVehicle_C.ExecuteUbergraph_BP_GenericDeployableMortarVehicle
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericDeployableMortarVehicle_C::ExecuteUbergraph_BP_GenericDeployableMortarVehicle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableMortarVehicle.BP_GenericDeployableMortarVehicle_C.ExecuteUbergraph_BP_GenericDeployableMortarVehicle");

	ABP_GenericDeployableMortarVehicle_C_ExecuteUbergraph_BP_GenericDeployableMortarVehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
