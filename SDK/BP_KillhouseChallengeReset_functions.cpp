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

// Function BP_KillhouseChallengeReset.BP_KillhouseChallengeReset_C.ShouldDisplayPrompt
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_KillhouseChallengeReset_C::ShouldDisplayPrompt(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseChallengeReset.BP_KillhouseChallengeReset_C.ShouldDisplayPrompt");

	ABP_KillhouseChallengeReset_C_ShouldDisplayPrompt_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_KillhouseChallengeReset.BP_KillhouseChallengeReset_C.GetInterfaceTeam
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_KillhouseChallengeReset_C::GetInterfaceTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseChallengeReset.BP_KillhouseChallengeReset_C.GetInterfaceTeam");

	ABP_KillhouseChallengeReset_C_GetInterfaceTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_KillhouseChallengeReset.BP_KillhouseChallengeReset_C.GetUsableData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSQUsableData           ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSQUsableData ABP_KillhouseChallengeReset_C::GetUsableData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseChallengeReset.BP_KillhouseChallengeReset_C.GetUsableData");

	ABP_KillhouseChallengeReset_C_GetUsableData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_KillhouseChallengeReset.BP_KillhouseChallengeReset_C.BPStopUsed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_KillhouseChallengeReset_C::BPStopUsed(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseChallengeReset.BP_KillhouseChallengeReset_C.BPStopUsed");

	ABP_KillhouseChallengeReset_C_BPStopUsed_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_KillhouseChallengeReset.BP_KillhouseChallengeReset_C.ServerOnUsed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_KillhouseChallengeReset_C::ServerOnUsed(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseChallengeReset.BP_KillhouseChallengeReset_C.ServerOnUsed");

	ABP_KillhouseChallengeReset_C_ServerOnUsed_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_KillhouseChallengeReset.BP_KillhouseChallengeReset_C.ServerStopUsed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_KillhouseChallengeReset_C::ServerStopUsed(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseChallengeReset.BP_KillhouseChallengeReset_C.ServerStopUsed");

	ABP_KillhouseChallengeReset_C_ServerStopUsed_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_KillhouseChallengeReset.BP_KillhouseChallengeReset_C.BPDisplayPrompt
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_KillhouseChallengeReset_C::BPDisplayPrompt(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseChallengeReset.BP_KillhouseChallengeReset_C.BPDisplayPrompt");

	ABP_KillhouseChallengeReset_C_BPDisplayPrompt_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_KillhouseChallengeReset.BP_KillhouseChallengeReset_C.BPHidePrompt
// (Event, Public, BlueprintEvent)
void ABP_KillhouseChallengeReset_C::BPHidePrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseChallengeReset.BP_KillhouseChallengeReset_C.BPHidePrompt");

	ABP_KillhouseChallengeReset_C_BPHidePrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_KillhouseChallengeReset.BP_KillhouseChallengeReset_C.BPOnUsed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_KillhouseChallengeReset_C::BPOnUsed(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseChallengeReset.BP_KillhouseChallengeReset_C.BPOnUsed");

	ABP_KillhouseChallengeReset_C_BPOnUsed_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_KillhouseChallengeReset.BP_KillhouseChallengeReset_C.ExecuteUbergraph_BP_KillhouseChallengeReset
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_KillhouseChallengeReset_C::ExecuteUbergraph_BP_KillhouseChallengeReset(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseChallengeReset.BP_KillhouseChallengeReset_C.ExecuteUbergraph_BP_KillhouseChallengeReset");

	ABP_KillhouseChallengeReset_C_ExecuteUbergraph_BP_KillhouseChallengeReset_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
