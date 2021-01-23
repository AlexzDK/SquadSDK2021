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

// Function BP_Deployable_DroneItem.BP_Deployable_DroneItem_C.BP_ServerPlacedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQDeployable*           Deployable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Deployable_DroneItem_C::BP_ServerPlacedItem(class ASQDeployable* Deployable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deployable_DroneItem.BP_Deployable_DroneItem_C.BP_ServerPlacedItem");

	ABP_Deployable_DroneItem_C_BP_ServerPlacedItem_Params params;
	params.Deployable = Deployable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Deployable_DroneItem.BP_Deployable_DroneItem_C.Set Drone Action
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Deployable_DroneItem_C::Set_Drone_Action(class UClass* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deployable_DroneItem.BP_Deployable_DroneItem_C.Set Drone Action");

	ABP_Deployable_DroneItem_C_Set_Drone_Action_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Deployable_DroneItem.BP_Deployable_DroneItem_C.ExecuteUbergraph_BP_Deployable_DroneItem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Deployable_DroneItem_C::ExecuteUbergraph_BP_Deployable_DroneItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deployable_DroneItem.BP_Deployable_DroneItem_C.ExecuteUbergraph_BP_Deployable_DroneItem");

	ABP_Deployable_DroneItem_C_ExecuteUbergraph_BP_Deployable_DroneItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
