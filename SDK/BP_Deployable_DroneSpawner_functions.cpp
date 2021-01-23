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

// Function BP_Deployable_DroneSpawner.BP_Deployable_DroneSpawner_C.Spawn Drone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Deployable_DroneSpawner_C::Spawn_Drone(class AActor* Owner, class UClass* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deployable_DroneSpawner.BP_Deployable_DroneSpawner_C.Spawn Drone");

	ABP_Deployable_DroneSpawner_C_Spawn_Drone_Params params;
	params.Owner = Owner;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Deployable_DroneSpawner.BP_Deployable_DroneSpawner_C.ExecuteUbergraph_BP_Deployable_DroneSpawner
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Deployable_DroneSpawner_C::ExecuteUbergraph_BP_Deployable_DroneSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deployable_DroneSpawner.BP_Deployable_DroneSpawner_C.ExecuteUbergraph_BP_Deployable_DroneSpawner");

	ABP_Deployable_DroneSpawner_C_ExecuteUbergraph_BP_Deployable_DroneSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
