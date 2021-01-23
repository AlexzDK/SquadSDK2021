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

// Function BP_GenericWorldIcon.BP_GenericWorldIcon_C.Is Player Aiming Down Sights
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_GenericWorldIcon_C::Is_Player_Aiming_Down_Sights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericWorldIcon.BP_GenericWorldIcon_C.Is Player Aiming Down Sights");

	ABP_GenericWorldIcon_C_Is_Player_Aiming_Down_Sights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_GenericWorldIcon.BP_GenericWorldIcon_C.Should Be Visible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_GenericWorldIcon_C::Should_Be_Visible()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericWorldIcon.BP_GenericWorldIcon_C.Should Be Visible");

	ABP_GenericWorldIcon_C_Should_Be_Visible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_GenericWorldIcon.BP_GenericWorldIcon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_GenericWorldIcon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericWorldIcon.BP_GenericWorldIcon_C.UserConstructionScript");

	ABP_GenericWorldIcon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericWorldIcon.BP_GenericWorldIcon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_GenericWorldIcon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericWorldIcon.BP_GenericWorldIcon_C.ReceiveBeginPlay");

	ABP_GenericWorldIcon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericWorldIcon.BP_GenericWorldIcon_C.Check Distance
// (BlueprintCallable, BlueprintEvent)
void ABP_GenericWorldIcon_C::Check_Distance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericWorldIcon.BP_GenericWorldIcon_C.Check Distance");

	ABP_GenericWorldIcon_C_Check_Distance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericWorldIcon.BP_GenericWorldIcon_C.OnDestroyed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericWorldIcon_C::OnDestroyed_Event_1(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericWorldIcon.BP_GenericWorldIcon_C.OnDestroyed_Event_1");

	ABP_GenericWorldIcon_C_OnDestroyed_Event_1_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericWorldIcon.BP_GenericWorldIcon_C.ExecuteUbergraph_BP_GenericWorldIcon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericWorldIcon_C::ExecuteUbergraph_BP_GenericWorldIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericWorldIcon.BP_GenericWorldIcon_C.ExecuteUbergraph_BP_GenericWorldIcon");

	ABP_GenericWorldIcon_C_ExecuteUbergraph_BP_GenericWorldIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
