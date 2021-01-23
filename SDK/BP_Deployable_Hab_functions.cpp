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

// Function BP_Deployable_Hab.BP_Deployable_Hab_C.Additional Can Capture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can_Capture                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Deployable_Hab_C::Additional_Can_Capture(bool* Can_Capture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deployable_Hab.BP_Deployable_Hab_C.Additional Can Capture");

	ABP_Deployable_Hab_C_Additional_Can_Capture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Can_Capture != nullptr)
		*Can_Capture = params.Can_Capture;

}


// Function BP_Deployable_Hab.BP_Deployable_Hab_C.Update Commander Actions
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Deployable_Hab_C::Update_Commander_Actions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deployable_Hab.BP_Deployable_Hab_C.Update Commander Actions");

	ABP_Deployable_Hab_C_Update_Commander_Actions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Deployable_Hab.BP_Deployable_Hab_C.Update TC Protection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gain_Protection                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Deployable_Hab_C::Update_TC_Protection(bool Gain_Protection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deployable_Hab.BP_Deployable_Hab_C.Update TC Protection");

	ABP_Deployable_Hab_C_Update_TC_Protection_Params params;
	params.Gain_Protection = Gain_Protection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Deployable_Hab.BP_Deployable_Hab_C.OnRep_Spawnable
// (BlueprintCallable, BlueprintEvent)
void ABP_Deployable_Hab_C::OnRep_Spawnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deployable_Hab.BP_Deployable_Hab_C.OnRep_Spawnable");

	ABP_Deployable_Hab_C_OnRep_Spawnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Deployable_Hab.BP_Deployable_Hab_C.BP_OnStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// ESQBuildState                  OldBuildState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Deployable_Hab_C::BP_OnStateChange(ESQBuildState OldBuildState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deployable_Hab.BP_Deployable_Hab_C.BP_OnStateChange");

	ABP_Deployable_Hab_C_BP_OnStateChange_Params params;
	params.OldBuildState = OldBuildState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Deployable_Hab.BP_Deployable_Hab_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
void ABP_Deployable_Hab_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deployable_Hab.BP_Deployable_Hab_C.CustomEvent_1");

	ABP_Deployable_Hab_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Deployable_Hab.BP_Deployable_Hab_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Deployable_Hab_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deployable_Hab.BP_Deployable_Hab_C.ReceiveBeginPlay");

	ABP_Deployable_Hab_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Deployable_Hab.BP_Deployable_Hab_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_Deployable_Hab_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deployable_Hab.BP_Deployable_Hab_C.ReceiveDestroyed");

	ABP_Deployable_Hab_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Deployable_Hab.BP_Deployable_Hab_C.ExecuteUbergraph_BP_Deployable_Hab
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Deployable_Hab_C::ExecuteUbergraph_BP_Deployable_Hab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deployable_Hab.BP_Deployable_Hab_C.ExecuteUbergraph_BP_Deployable_Hab");

	ABP_Deployable_Hab_C_ExecuteUbergraph_BP_Deployable_Hab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
