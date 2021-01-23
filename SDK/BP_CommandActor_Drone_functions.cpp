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

// Function BP_CommandActor_Drone.BP_CommandActor_Drone_C.Add Drone to Inventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_CommandActor_Drone_C::Add_Drone_to_Inventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_Drone.BP_CommandActor_Drone_C.Add Drone to Inventory");

	ABP_CommandActor_Drone_C_Add_Drone_to_Inventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandActor_Drone.BP_CommandActor_Drone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_CommandActor_Drone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_Drone.BP_CommandActor_Drone_C.ReceiveBeginPlay");

	ABP_CommandActor_Drone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandActor_Drone.BP_CommandActor_Drone_C.Client Close Menu
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void ABP_CommandActor_Drone_C::Client_Close_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_Drone.BP_CommandActor_Drone_C.Client Close Menu");

	ABP_CommandActor_Drone_C_Client_Close_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandActor_Drone.BP_CommandActor_Drone_C.Remove From Inventory
// (BlueprintCallable, BlueprintEvent)
void ABP_CommandActor_Drone_C::Remove_From_Inventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_Drone.BP_CommandActor_Drone_C.Remove From Inventory");

	ABP_CommandActor_Drone_C_Remove_From_Inventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandActor_Drone.BP_CommandActor_Drone_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CommandActor_Drone_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_Drone.BP_CommandActor_Drone_C.ReceiveTick");

	ABP_CommandActor_Drone_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandActor_Drone.BP_CommandActor_Drone_C.Server End Active Duration
// (BlueprintCallable, BlueprintEvent)
void ABP_CommandActor_Drone_C::Server_End_Active_Duration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_Drone.BP_CommandActor_Drone_C.Server End Active Duration");

	ABP_CommandActor_Drone_C_Server_End_Active_Duration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandActor_Drone.BP_CommandActor_Drone_C.ExecuteUbergraph_BP_CommandActor_Drone
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CommandActor_Drone_C::ExecuteUbergraph_BP_CommandActor_Drone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_Drone.BP_CommandActor_Drone_C.ExecuteUbergraph_BP_CommandActor_Drone");

	ABP_CommandActor_Drone_C_ExecuteUbergraph_BP_CommandActor_Drone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
