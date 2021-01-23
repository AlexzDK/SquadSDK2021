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

// Function BP_MapWidgetHAB.BP_MapWidgetHAB_C.OnBuildStateChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetHAB_C::OnBuildStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetHAB.BP_MapWidgetHAB_C.OnBuildStateChanged");

	UBP_MapWidgetHAB_C_OnBuildStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetHAB.BP_MapWidgetHAB_C.OnScaleChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          UniformScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetHAB_C::OnScaleChanged(float UniformScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetHAB.BP_MapWidgetHAB_C.OnScaleChanged");

	UBP_MapWidgetHAB_C_OnScaleChanged_Params params;
	params.UniformScale = UniformScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetHAB.BP_MapWidgetHAB_C.Spawn Validation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Valid_Spawn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MapWidgetHAB_C::Spawn_Validation(bool Valid_Spawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetHAB.BP_MapWidgetHAB_C.Spawn Validation");

	UBP_MapWidgetHAB_C_Spawn_Validation_Params params;
	params.Valid_Spawn = Valid_Spawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetHAB.BP_MapWidgetHAB_C.ExecuteUbergraph_BP_MapWidgetHAB
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetHAB_C::ExecuteUbergraph_BP_MapWidgetHAB(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetHAB.BP_MapWidgetHAB_C.ExecuteUbergraph_BP_MapWidgetHAB");

	UBP_MapWidgetHAB_C_ExecuteUbergraph_BP_MapWidgetHAB_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
