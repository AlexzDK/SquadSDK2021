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

// Function BP_Safir.BP_Safir_C.UpdateDamageWheelVisual
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Destroyed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USQVehicleWheel*         Wheel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Do_Effects                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Safir_C::UpdateDamageWheelVisual(const struct FName& Bone, bool Destroyed, class USQVehicleWheel* Wheel, bool Do_Effects)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Safir.BP_Safir_C.UpdateDamageWheelVisual");

	ABP_Safir_C_UpdateDamageWheelVisual_Params params;
	params.Bone = Bone;
	params.Destroyed = Destroyed;
	params.Wheel = Wheel;
	params.Do_Effects = Do_Effects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Safir.BP_Safir_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Safir_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Safir.BP_Safir_C.UserConstructionScript");

	ABP_Safir_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Safir.BP_Safir_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Safir_C::InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Safir.BP_Safir_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2");

	ABP_Safir_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Safir.BP_Safir_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Safir_C::InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Safir.BP_Safir_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1");

	ABP_Safir_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Safir.BP_Safir_C.InpActEvt_ToggleView_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Safir_C::InpActEvt_ToggleView_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Safir.BP_Safir_C.InpActEvt_ToggleView_K2Node_InputActionEvent_1");

	ABP_Safir_C_InpActEvt_ToggleView_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Safir.BP_Safir_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Safir_C::InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Safir.BP_Safir_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16");

	ABP_Safir_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Safir.BP_Safir_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_18
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Safir_C::InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_18(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Safir.BP_Safir_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_18");

	ABP_Safir_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_18_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Safir.BP_Safir_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Safir_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Safir.BP_Safir_C.ReceiveBeginPlay");

	ABP_Safir_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Safir.BP_Safir_C.DrivetrainComponentDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:
// class USQDriveTrainComponent*  DriveTrainComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Safir_C::DrivetrainComponentDestroyed(class USQDriveTrainComponent* DriveTrainComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Safir.BP_Safir_C.DrivetrainComponentDestroyed");

	ABP_Safir_C_DrivetrainComponentDestroyed_Params params;
	params.DriveTrainComponent = DriveTrainComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Safir.BP_Safir_C.DrivetrainComponentRepaired
// (Event, Public, BlueprintEvent)
// Parameters:
// class USQDriveTrainComponent*  DriveTrainComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Safir_C::DrivetrainComponentRepaired(class USQDriveTrainComponent* DriveTrainComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Safir.BP_Safir_C.DrivetrainComponentRepaired");

	ABP_Safir_C_DrivetrainComponentRepaired_Params params;
	params.DriveTrainComponent = DriveTrainComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Safir.BP_Safir_C.ExecuteUbergraph_BP_Safir
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Safir_C::ExecuteUbergraph_BP_Safir(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Safir.BP_Safir_C.ExecuteUbergraph_BP_Safir");

	ABP_Safir_C_ExecuteUbergraph_BP_Safir_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
