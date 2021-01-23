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

// Function BP_DemoSpectator.BP_DemoSpectator_C.InpActEvt_InGameMenu_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_DemoSpectator_C::InpActEvt_InGameMenu_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoSpectator.BP_DemoSpectator_C.InpActEvt_InGameMenu_K2Node_InputActionEvent_1");

	ABP_DemoSpectator_C_InpActEvt_InGameMenu_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DemoSpectator.BP_DemoSpectator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_DemoSpectator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoSpectator.BP_DemoSpectator_C.ReceiveBeginPlay");

	ABP_DemoSpectator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DemoSpectator.BP_DemoSpectator_C.ExecuteUbergraph_BP_DemoSpectator
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DemoSpectator_C::ExecuteUbergraph_BP_DemoSpectator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoSpectator.BP_DemoSpectator_C.ExecuteUbergraph_BP_DemoSpectator");

	ABP_DemoSpectator_C_ExecuteUbergraph_BP_DemoSpectator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
