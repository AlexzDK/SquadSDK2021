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

// Function BP_ControlledCommanderCamera_Child_Airstrike.BP_ControlledCommanderCamera_Child_Airstrike_C.Can Become View Target
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Can_View                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ControlledCommanderCamera_Child_Airstrike_C::Can_Become_View_Target(bool* Can_View)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCommanderCamera_Child_Airstrike.BP_ControlledCommanderCamera_Child_Airstrike_C.Can Become View Target");

	ABP_ControlledCommanderCamera_Child_Airstrike_C_Can_Become_View_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Can_View != nullptr)
		*Can_View = params.Can_View;

}


// Function BP_ControlledCommanderCamera_Child_Airstrike.BP_ControlledCommanderCamera_Child_Airstrike_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_ControlledCommanderCamera_Child_Airstrike_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCommanderCamera_Child_Airstrike.BP_ControlledCommanderCamera_Child_Airstrike_C.ReceiveBeginPlay");

	ABP_ControlledCommanderCamera_Child_Airstrike_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCommanderCamera_Child_Airstrike.BP_ControlledCommanderCamera_Child_Airstrike_C.Cam Failure Message
// (BlueprintCallable, BlueprintEvent)
void ABP_ControlledCommanderCamera_Child_Airstrike_C::Cam_Failure_Message()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCommanderCamera_Child_Airstrike.BP_ControlledCommanderCamera_Child_Airstrike_C.Cam Failure Message");

	ABP_ControlledCommanderCamera_Child_Airstrike_C_Cam_Failure_Message_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCommanderCamera_Child_Airstrike.BP_ControlledCommanderCamera_Child_Airstrike_C.Init Camera
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_ControlledCommanderCamera_Child_Airstrike_C::Init_Camera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCommanderCamera_Child_Airstrike.BP_ControlledCommanderCamera_Child_Airstrike_C.Init Camera");

	ABP_ControlledCommanderCamera_Child_Airstrike_C_Init_Camera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCommanderCamera_Child_Airstrike.BP_ControlledCommanderCamera_Child_Airstrike_C.ExecuteUbergraph_BP_ControlledCommanderCamera_Child_Airstrike
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ControlledCommanderCamera_Child_Airstrike_C::ExecuteUbergraph_BP_ControlledCommanderCamera_Child_Airstrike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCommanderCamera_Child_Airstrike.BP_ControlledCommanderCamera_Child_Airstrike_C.ExecuteUbergraph_BP_ControlledCommanderCamera_Child_Airstrike");

	ABP_ControlledCommanderCamera_Child_Airstrike_C_ExecuteUbergraph_BP_ControlledCommanderCamera_Child_Airstrike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
