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

// Function BP_SPG9.BP_SPG9_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SPG9_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPG9.BP_SPG9_C.UserConstructionScript");

	ABP_SPG9_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SPG9.BP_SPG9_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ABP_SPG9_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPG9.BP_SPG9_C.Timeline_0__FinishedFunc");

	ABP_SPG9_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SPG9.BP_SPG9_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ABP_SPG9_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPG9.BP_SPG9_C.Timeline_0__UpdateFunc");

	ABP_SPG9_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SPG9.BP_SPG9_C.BlueprintOnZoom
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bNewZoom                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SPG9_C::BlueprintOnZoom(bool bNewZoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPG9.BP_SPG9_C.BlueprintOnZoom");

	ABP_SPG9_C_BlueprintOnZoom_Params params;
	params.bNewZoom = bNewZoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SPG9.BP_SPG9_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_SPG9_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPG9.BP_SPG9_C.ReceiveBeginPlay");

	ABP_SPG9_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SPG9.BP_SPG9_C.CPossessed
// (BlueprintCallable, BlueprintEvent)
void ABP_SPG9_C::CPossessed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPG9.BP_SPG9_C.CPossessed");

	ABP_SPG9_C_CPossessed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SPG9.BP_SPG9_C.CUnpossessed
// (BlueprintCallable, BlueprintEvent)
void ABP_SPG9_C::CUnpossessed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPG9.BP_SPG9_C.CUnpossessed");

	ABP_SPG9_C_CUnpossessed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SPG9.BP_SPG9_C.RemoveADS
// (BlueprintCallable, BlueprintEvent)
void ABP_SPG9_C::RemoveADS()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPG9.BP_SPG9_C.RemoveADS");

	ABP_SPG9_C_RemoveADS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SPG9.BP_SPG9_C.BlueprintOnEquip
// (Event, Protected, BlueprintEvent)
void ABP_SPG9_C::BlueprintOnEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPG9.BP_SPG9_C.BlueprintOnEquip");

	ABP_SPG9_C_BlueprintOnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SPG9.BP_SPG9_C.BlueprintOnFire
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Origin                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SPG9_C::BlueprintOnFire(const struct FVector& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPG9.BP_SPG9_C.BlueprintOnFire");

	ABP_SPG9_C_BlueprintOnFire_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SPG9.BP_SPG9_C.ExecuteUbergraph_BP_SPG9
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SPG9_C::ExecuteUbergraph_BP_SPG9(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SPG9.BP_SPG9_C.ExecuteUbergraph_BP_SPG9");

	ABP_SPG9_C_ExecuteUbergraph_BP_SPG9_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
