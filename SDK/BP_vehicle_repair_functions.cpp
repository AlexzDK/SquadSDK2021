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

// Function BP_vehicle_repair.BP_vehicle_repair_C.OnRep_PlayingEngineAudio
// (BlueprintCallable, BlueprintEvent)
void ABP_vehicle_repair_C::OnRep_PlayingEngineAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_vehicle_repair.BP_vehicle_repair_C.OnRep_PlayingEngineAudio");

	ABP_vehicle_repair_C_OnRep_PlayingEngineAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_vehicle_repair.BP_vehicle_repair_C.SetTeam
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_vehicle_repair_C::SetTeam(int Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_vehicle_repair.BP_vehicle_repair_C.SetTeam");

	ABP_vehicle_repair_C_SetTeam_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_vehicle_repair.BP_vehicle_repair_C.OnBuildStateChange_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESQBuildState                  BuildState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_vehicle_repair_C::OnBuildStateChange_Event(ESQBuildState BuildState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_vehicle_repair.BP_vehicle_repair_C.OnBuildStateChange_Event");

	ABP_vehicle_repair_C_OnBuildStateChange_Event_Params params;
	params.BuildState = BuildState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_vehicle_repair.BP_vehicle_repair_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_vehicle_repair_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_vehicle_repair.BP_vehicle_repair_C.ReceiveBeginPlay");

	ABP_vehicle_repair_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_vehicle_repair.BP_vehicle_repair_C.ExecuteUbergraph_BP_vehicle_repair
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_vehicle_repair_C::ExecuteUbergraph_BP_vehicle_repair(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_vehicle_repair.BP_vehicle_repair_C.ExecuteUbergraph_BP_vehicle_repair");

	ABP_vehicle_repair_C_ExecuteUbergraph_BP_vehicle_repair_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
