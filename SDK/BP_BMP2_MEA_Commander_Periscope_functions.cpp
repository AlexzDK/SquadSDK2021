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

// Function BP_BMP2_MEA_Commander_Periscope.BP_BMP2_MEA_Commander_Periscope_C.InpActEvt_DesignateTarget_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_BMP2_MEA_Commander_Periscope_C::InpActEvt_DesignateTarget_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP2_MEA_Commander_Periscope.BP_BMP2_MEA_Commander_Periscope_C.InpActEvt_DesignateTarget_K2Node_InputActionEvent_1");

	ABP_BMP2_MEA_Commander_Periscope_C_InpActEvt_DesignateTarget_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP2_MEA_Commander_Periscope.BP_BMP2_MEA_Commander_Periscope_C.ServerSetStabilizationHeading
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_BMP2_MEA_Commander_Periscope_C::ServerSetStabilizationHeading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP2_MEA_Commander_Periscope.BP_BMP2_MEA_Commander_Periscope_C.ServerSetStabilizationHeading");

	ABP_BMP2_MEA_Commander_Periscope_C_ServerSetStabilizationHeading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP2_MEA_Commander_Periscope.BP_BMP2_MEA_Commander_Periscope_C.ExecuteUbergraph_BP_BMP2_MEA_Commander_Periscope
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BMP2_MEA_Commander_Periscope_C::ExecuteUbergraph_BP_BMP2_MEA_Commander_Periscope(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP2_MEA_Commander_Periscope.BP_BMP2_MEA_Commander_Periscope_C.ExecuteUbergraph_BP_BMP2_MEA_Commander_Periscope");

	ABP_BMP2_MEA_Commander_Periscope_C_ExecuteUbergraph_BP_BMP2_MEA_Commander_Periscope_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
