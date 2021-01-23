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

// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.UnselectSpawn
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_HAB_C::UnselectSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.UnselectSpawn");

	UBP_MarkerWidget_HAB_C_UnselectSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.GetSpawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ASQGameSpawn*            Spawn                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_HAB_C::GetSpawn(class ASQGameSpawn** Spawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.GetSpawn");

	UBP_MarkerWidget_HAB_C_GetSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Spawn != nullptr)
		*Spawn = params.Spawn;

}


// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.UpdateSpawnBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UBP_MarkerWidget_HAB_C::UpdateSpawnBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.UpdateSpawnBrush");

	UBP_MarkerWidget_HAB_C_UpdateSpawnBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UBP_MarkerWidget_HAB_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.OnMouseButtonDoubleClick");

	UBP_MarkerWidget_HAB_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.SelectSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Commit                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_HAB_C::SelectSpawn(bool Commit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.SelectSpawn");

	UBP_MarkerWidget_HAB_C_SelectSpawn_Params params;
	params.Commit = Commit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UBP_MarkerWidget_HAB_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.OnMouseButtonDown");

	UBP_MarkerWidget_HAB_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.GetHAB
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_Deployable_Hab_C*    HAB                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_HAB_C::GetHAB(class ABP_Deployable_Hab_C** HAB)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.GetHAB");

	UBP_MarkerWidget_HAB_C_GetHAB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HAB != nullptr)
		*HAB = params.HAB;

}


// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.IsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           selected                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_HAB_C::IsSelected(bool* selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.IsSelected");

	UBP_MarkerWidget_HAB_C_IsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (selected != nullptr)
		*selected = params.selected;

}


// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.UpdateSelectSpawnVisibility
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_HAB_C::UpdateSelectSpawnVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.UpdateSelectSpawnVisibility");

	UBP_MarkerWidget_HAB_C_UpdateSelectSpawnVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MarkerWidget_HAB_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.Construct");

	UBP_MarkerWidget_HAB_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.UpdateStateEvent
// (BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_HAB_C::UpdateStateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.UpdateStateEvent");

	UBP_MarkerWidget_HAB_C_UpdateStateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.ExecuteUbergraph_BP_MarkerWidget_HAB
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_HAB_C::ExecuteUbergraph_BP_MarkerWidget_HAB(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.ExecuteUbergraph_BP_MarkerWidget_HAB");

	UBP_MarkerWidget_HAB_C_ExecuteUbergraph_BP_MarkerWidget_HAB_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
