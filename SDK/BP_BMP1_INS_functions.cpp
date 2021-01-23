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

// Function BP_BMP1_INS.BP_BMP1_INS_C.UpdateDamagedTrackVisual
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 VehicleTrack                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsTrackDestroyed              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowOriginalTrack              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BMP1_INS_C::UpdateDamagedTrackVisual(class UObject* VehicleTrack, bool bIsTrackDestroyed, bool ShowOriginalTrack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_INS.BP_BMP1_INS_C.UpdateDamagedTrackVisual");

	ABP_BMP1_INS_C_UpdateDamagedTrackVisual_Params params;
	params.VehicleTrack = VehicleTrack;
	params.bIsTrackDestroyed = bIsTrackDestroyed;
	params.ShowOriginalTrack = ShowOriginalTrack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP1_INS.BP_BMP1_INS_C.UpdateTrackMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MovementSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic* TrackMaterial                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TrackOffset                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NewUVOffset                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BMP1_INS_C::UpdateTrackMaterial(float DeltaTime, float MovementSpeed, class UMaterialInstanceDynamic* TrackMaterial, float TrackOffset, float* NewUVOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_INS.BP_BMP1_INS_C.UpdateTrackMaterial");

	ABP_BMP1_INS_C_UpdateTrackMaterial_Params params;
	params.DeltaTime = DeltaTime;
	params.MovementSpeed = MovementSpeed;
	params.TrackMaterial = TrackMaterial;
	params.TrackOffset = TrackOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewUVOffset != nullptr)
		*NewUVOffset = params.NewUVOffset;

}


// Function BP_BMP1_INS.BP_BMP1_INS_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_BMP1_INS_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_INS.BP_BMP1_INS_C.UserConstructionScript");

	ABP_BMP1_INS_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP1_INS.BP_BMP1_INS_C.InpActEvt_ToggleView_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_BMP1_INS_C::InpActEvt_ToggleView_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_INS.BP_BMP1_INS_C.InpActEvt_ToggleView_K2Node_InputActionEvent_1");

	ABP_BMP1_INS_C_InpActEvt_ToggleView_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP1_INS.BP_BMP1_INS_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_BMP1_INS_C::InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_INS.BP_BMP1_INS_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2");

	ABP_BMP1_INS_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP1_INS.BP_BMP1_INS_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_BMP1_INS_C::InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_INS.BP_BMP1_INS_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1");

	ABP_BMP1_INS_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP1_INS.BP_BMP1_INS_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_BMP1_INS_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_INS.BP_BMP1_INS_C.ReceiveBeginPlay");

	ABP_BMP1_INS_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP1_INS.BP_BMP1_INS_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BMP1_INS_C::InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_INS.BP_BMP1_INS_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16");

	ABP_BMP1_INS_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP1_INS.BP_BMP1_INS_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_18
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BMP1_INS_C::InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_18(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_INS.BP_BMP1_INS_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_18");

	ABP_BMP1_INS_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_18_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP1_INS.BP_BMP1_INS_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BMP1_INS_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_INS.BP_BMP1_INS_C.ReceiveTick");

	ABP_BMP1_INS_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP1_INS.BP_BMP1_INS_C.DrivetrainComponentRepaired
// (Event, Public, BlueprintEvent)
// Parameters:
// class USQDriveTrainComponent*  DriveTrainComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BMP1_INS_C::DrivetrainComponentRepaired(class USQDriveTrainComponent* DriveTrainComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_INS.BP_BMP1_INS_C.DrivetrainComponentRepaired");

	ABP_BMP1_INS_C_DrivetrainComponentRepaired_Params params;
	params.DriveTrainComponent = DriveTrainComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP1_INS.BP_BMP1_INS_C.DrivetrainComponentDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:
// class USQDriveTrainComponent*  DriveTrainComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BMP1_INS_C::DrivetrainComponentDestroyed(class USQDriveTrainComponent* DriveTrainComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_INS.BP_BMP1_INS_C.DrivetrainComponentDestroyed");

	ABP_BMP1_INS_C_DrivetrainComponentDestroyed_Params params;
	params.DriveTrainComponent = DriveTrainComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP1_INS.BP_BMP1_INS_C.ExecuteUbergraph_BP_BMP1_INS
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BMP1_INS_C::ExecuteUbergraph_BP_BMP1_INS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_INS.BP_BMP1_INS_C.ExecuteUbergraph_BP_BMP1_INS");

	ABP_BMP1_INS_C_ExecuteUbergraph_BP_BMP1_INS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
