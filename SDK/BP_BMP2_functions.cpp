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

// Function BP_BMP2.BP_BMP2_C.Attach Turret
// (BlueprintCallable, BlueprintEvent)
void ABP_BMP2_C::Attach_Turret()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP2.BP_BMP2_C.Attach Turret");

	ABP_BMP2_C_Attach_Turret_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP2.BP_BMP2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_BMP2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP2.BP_BMP2_C.ReceiveBeginPlay");

	ABP_BMP2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP2.BP_BMP2_C.DrivetrainComponentRepaired
// (Event, Public, BlueprintEvent)
// Parameters:
// class USQDriveTrainComponent*  DriveTrainComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BMP2_C::DrivetrainComponentRepaired(class USQDriveTrainComponent* DriveTrainComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP2.BP_BMP2_C.DrivetrainComponentRepaired");

	ABP_BMP2_C_DrivetrainComponentRepaired_Params params;
	params.DriveTrainComponent = DriveTrainComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP2.BP_BMP2_C.DrivetrainComponentDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:
// class USQDriveTrainComponent*  DriveTrainComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BMP2_C::DrivetrainComponentDestroyed(class USQDriveTrainComponent* DriveTrainComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP2.BP_BMP2_C.DrivetrainComponentDestroyed");

	ABP_BMP2_C_DrivetrainComponentDestroyed_Params params;
	params.DriveTrainComponent = DriveTrainComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP2.BP_BMP2_C.UpdateDamagedTrackVisual
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 VehicleTrack                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsTrackDestroyed              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowOriginalTrack              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BMP2_C::UpdateDamagedTrackVisual(class UObject* VehicleTrack, bool bIsTrackDestroyed, bool ShowOriginalTrack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP2.BP_BMP2_C.UpdateDamagedTrackVisual");

	ABP_BMP2_C_UpdateDamagedTrackVisual_Params params;
	params.VehicleTrack = VehicleTrack;
	params.bIsTrackDestroyed = bIsTrackDestroyed;
	params.ShowOriginalTrack = ShowOriginalTrack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP2.BP_BMP2_C.ExecuteUbergraph_BP_BMP2
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BMP2_C::ExecuteUbergraph_BP_BMP2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP2.BP_BMP2_C.ExecuteUbergraph_BP_BMP2");

	ABP_BMP2_C_ExecuteUbergraph_BP_BMP2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
