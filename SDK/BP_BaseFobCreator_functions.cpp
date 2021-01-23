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

// Function BP_BaseFobCreator.BP_BaseFobCreator_C.GetUsableData
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSQUsableData           ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSQUsableData ABP_BaseFobCreator_C::GetUsableData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseFobCreator.BP_BaseFobCreator_C.GetUsableData");

	ABP_BaseFobCreator_C_GetUsableData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseFobCreator.BP_BaseFobCreator_C.Remove Nearby FOB Request Markers
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseFobCreator_C::Remove_Nearby_FOB_Request_Markers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseFobCreator.BP_BaseFobCreator_C.Remove Nearby FOB Request Markers");

	ABP_BaseFobCreator_C_Remove_Nearby_FOB_Request_Markers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseFobCreator.BP_BaseFobCreator_C.GetFailedSpawnReasonText
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESQInvalidPlacementReason      Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText ABP_BaseFobCreator_C::GetFailedSpawnReasonText(ESQInvalidPlacementReason Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseFobCreator.BP_BaseFobCreator_C.GetFailedSpawnReasonText");

	ABP_BaseFobCreator_C_GetFailedSpawnReasonText_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseFobCreator.BP_BaseFobCreator_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_BaseFobCreator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseFobCreator.BP_BaseFobCreator_C.UserConstructionScript");

	ABP_BaseFobCreator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseFobCreator.BP_BaseFobCreator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_BaseFobCreator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseFobCreator.BP_BaseFobCreator_C.ReceiveBeginPlay");

	ABP_BaseFobCreator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseFobCreator.BP_BaseFobCreator_C.BPOnGhostMade
// (Event, Public, BlueprintEvent)
void ABP_BaseFobCreator_C::BPOnGhostMade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseFobCreator.BP_BaseFobCreator_C.BPOnGhostMade");

	ABP_BaseFobCreator_C_BPOnGhostMade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseFobCreator.BP_BaseFobCreator_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_BaseFobCreator_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseFobCreator.BP_BaseFobCreator_C.ReceiveDestroyed");

	ABP_BaseFobCreator_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseFobCreator.BP_BaseFobCreator_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseFobCreator_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseFobCreator.BP_BaseFobCreator_C.ReceiveEndPlay");

	ABP_BaseFobCreator_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseFobCreator.BP_BaseFobCreator_C.CompletedConstruction
// (Event, Public, BlueprintEvent)
void ABP_BaseFobCreator_C::CompletedConstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseFobCreator.BP_BaseFobCreator_C.CompletedConstruction");

	ABP_BaseFobCreator_C_CompletedConstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseFobCreator.BP_BaseFobCreator_C.BPOnUsed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseFobCreator_C::BPOnUsed(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseFobCreator.BP_BaseFobCreator_C.BPOnUsed");

	ABP_BaseFobCreator_C_BPOnUsed_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseFobCreator.BP_BaseFobCreator_C.BPStopUsed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseFobCreator_C::BPStopUsed(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseFobCreator.BP_BaseFobCreator_C.BPStopUsed");

	ABP_BaseFobCreator_C_BPStopUsed_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseFobCreator.BP_BaseFobCreator_C.BPOverrun
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bFriendly                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseFobCreator_C::BPOverrun(bool bFriendly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseFobCreator.BP_BaseFobCreator_C.BPOverrun");

	ABP_BaseFobCreator_C_BPOverrun_Params params;
	params.bFriendly = bFriendly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseFobCreator.BP_BaseFobCreator_C.BPPostTicketTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Difference                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseFobCreator_C::BPPostTicketTick(float Difference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseFobCreator.BP_BaseFobCreator_C.BPPostTicketTick");

	ABP_BaseFobCreator_C_BPPostTicketTick_Params params;
	params.Difference = Difference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseFobCreator.BP_BaseFobCreator_C.InvalidatePlacement
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseFobCreator_C::InvalidatePlacement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseFobCreator.BP_BaseFobCreator_C.InvalidatePlacement");

	ABP_BaseFobCreator_C_InvalidatePlacement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseFobCreator.BP_BaseFobCreator_C.BPOnIsBleedingChanged
// (Event, Public, BlueprintEvent)
void ABP_BaseFobCreator_C::BPOnIsBleedingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseFobCreator.BP_BaseFobCreator_C.BPOnIsBleedingChanged");

	ABP_BaseFobCreator_C_BPOnIsBleedingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseFobCreator.BP_BaseFobCreator_C.ExecuteUbergraph_BP_BaseFobCreator
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseFobCreator_C::ExecuteUbergraph_BP_BaseFobCreator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseFobCreator.BP_BaseFobCreator_C.ExecuteUbergraph_BP_BaseFobCreator");

	ABP_BaseFobCreator_C_ExecuteUbergraph_BP_BaseFobCreator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
