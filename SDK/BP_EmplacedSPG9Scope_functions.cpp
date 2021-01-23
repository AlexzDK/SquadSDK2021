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

// Function BP_EmplacedSPG9Scope.BP_EmplacedSPG9Scope_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_EmplacedSPG9Scope_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedSPG9Scope.BP_EmplacedSPG9Scope_C.UserConstructionScript");

	ABP_EmplacedSPG9Scope_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EmplacedSPG9Scope.BP_EmplacedSPG9Scope_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ABP_EmplacedSPG9Scope_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedSPG9Scope.BP_EmplacedSPG9Scope_C.Timeline_0__FinishedFunc");

	ABP_EmplacedSPG9Scope_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EmplacedSPG9Scope.BP_EmplacedSPG9Scope_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ABP_EmplacedSPG9Scope_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedSPG9Scope.BP_EmplacedSPG9Scope_C.Timeline_0__UpdateFunc");

	ABP_EmplacedSPG9Scope_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EmplacedSPG9Scope.BP_EmplacedSPG9Scope_C.BlueprintOnZoom
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bNewZoom                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_EmplacedSPG9Scope_C::BlueprintOnZoom(bool bNewZoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedSPG9Scope.BP_EmplacedSPG9Scope_C.BlueprintOnZoom");

	ABP_EmplacedSPG9Scope_C_BlueprintOnZoom_Params params;
	params.bNewZoom = bNewZoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EmplacedSPG9Scope.BP_EmplacedSPG9Scope_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_EmplacedSPG9Scope_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedSPG9Scope.BP_EmplacedSPG9Scope_C.ReceiveBeginPlay");

	ABP_EmplacedSPG9Scope_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EmplacedSPG9Scope.BP_EmplacedSPG9Scope_C.CPossessed
// (BlueprintCallable, BlueprintEvent)
void ABP_EmplacedSPG9Scope_C::CPossessed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedSPG9Scope.BP_EmplacedSPG9Scope_C.CPossessed");

	ABP_EmplacedSPG9Scope_C_CPossessed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EmplacedSPG9Scope.BP_EmplacedSPG9Scope_C.CUnpossessed
// (BlueprintCallable, BlueprintEvent)
void ABP_EmplacedSPG9Scope_C::CUnpossessed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedSPG9Scope.BP_EmplacedSPG9Scope_C.CUnpossessed");

	ABP_EmplacedSPG9Scope_C_CUnpossessed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EmplacedSPG9Scope.BP_EmplacedSPG9Scope_C.RemoveADS
// (BlueprintCallable, BlueprintEvent)
void ABP_EmplacedSPG9Scope_C::RemoveADS()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedSPG9Scope.BP_EmplacedSPG9Scope_C.RemoveADS");

	ABP_EmplacedSPG9Scope_C_RemoveADS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EmplacedSPG9Scope.BP_EmplacedSPG9Scope_C.ExecuteUbergraph_BP_EmplacedSPG9Scope
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_EmplacedSPG9Scope_C::ExecuteUbergraph_BP_EmplacedSPG9Scope(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedSPG9Scope.BP_EmplacedSPG9Scope_C.ExecuteUbergraph_BP_EmplacedSPG9Scope");

	ABP_EmplacedSPG9Scope_C_ExecuteUbergraph_BP_EmplacedSPG9Scope_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
