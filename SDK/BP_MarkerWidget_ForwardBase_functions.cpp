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

// Function BP_MarkerWidget_ForwardBase.BP_MarkerWidget_ForwardBase_C.Update Radius Color
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_ForwardBase_C::Update_Radius_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_ForwardBase.BP_MarkerWidget_ForwardBase_C.Update Radius Color");

	UBP_MarkerWidget_ForwardBase_C_Update_Radius_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_ForwardBase.BP_MarkerWidget_ForwardBase_C.GetSpawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASQGameSpawn*            Spawn                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_ForwardBase_C::GetSpawn(class ASQGameSpawn** Spawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_ForwardBase.BP_MarkerWidget_ForwardBase_C.GetSpawn");

	UBP_MarkerWidget_ForwardBase_C_GetSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Spawn != nullptr)
		*Spawn = params.Spawn;

}


// Function BP_MarkerWidget_ForwardBase.BP_MarkerWidget_ForwardBase_C.UpdateSpawnBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UBP_MarkerWidget_ForwardBase_C::UpdateSpawnBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_ForwardBase.BP_MarkerWidget_ForwardBase_C.UpdateSpawnBrush");

	UBP_MarkerWidget_ForwardBase_C_UpdateSpawnBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_ForwardBase.BP_MarkerWidget_ForwardBase_C.GetFOB
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ASQForwardBase*          Forward_Base                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_ForwardBase_C::GetFOB(class ASQForwardBase** Forward_Base)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_ForwardBase.BP_MarkerWidget_ForwardBase_C.GetFOB");

	UBP_MarkerWidget_ForwardBase_C_GetFOB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Forward_Base != nullptr)
		*Forward_Base = params.Forward_Base;

}


// Function BP_MarkerWidget_ForwardBase.BP_MarkerWidget_ForwardBase_C.UpdateStateEvent
// (BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_ForwardBase_C::UpdateStateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_ForwardBase.BP_MarkerWidget_ForwardBase_C.UpdateStateEvent");

	UBP_MarkerWidget_ForwardBase_C_UpdateStateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_ForwardBase.BP_MarkerWidget_ForwardBase_C.Get Fob
// (BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_ForwardBase_C::Get_Fob()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_ForwardBase.BP_MarkerWidget_ForwardBase_C.Get Fob");

	UBP_MarkerWidget_ForwardBase_C_Get_Fob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_ForwardBase.BP_MarkerWidget_ForwardBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MarkerWidget_ForwardBase_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_ForwardBase.BP_MarkerWidget_ForwardBase_C.Construct");

	UBP_MarkerWidget_ForwardBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_ForwardBase.BP_MarkerWidget_ForwardBase_C.Update Color
// (BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_ForwardBase_C::Update_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_ForwardBase.BP_MarkerWidget_ForwardBase_C.Update Color");

	UBP_MarkerWidget_ForwardBase_C_Update_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_ForwardBase.BP_MarkerWidget_ForwardBase_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_ForwardBase_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_ForwardBase.BP_MarkerWidget_ForwardBase_C.Tick");

	UBP_MarkerWidget_ForwardBase_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_ForwardBase.BP_MarkerWidget_ForwardBase_C.ExecuteUbergraph_BP_MarkerWidget_ForwardBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_ForwardBase_C::ExecuteUbergraph_BP_MarkerWidget_ForwardBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_ForwardBase.BP_MarkerWidget_ForwardBase_C.ExecuteUbergraph_BP_MarkerWidget_ForwardBase");

	UBP_MarkerWidget_ForwardBase_C_ExecuteUbergraph_BP_MarkerWidget_ForwardBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
