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

// Function BP_Technical_Turret_SPG9.BP_Technical_Turret_SPG9_C.InpActEvt_Focus_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Technical_Turret_SPG9_C::InpActEvt_Focus_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Technical_Turret_SPG9.BP_Technical_Turret_SPG9_C.InpActEvt_Focus_K2Node_InputActionEvent_2");

	ABP_Technical_Turret_SPG9_C_InpActEvt_Focus_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Technical_Turret_SPG9.BP_Technical_Turret_SPG9_C.InpActEvt_Focus_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Technical_Turret_SPG9_C::InpActEvt_Focus_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Technical_Turret_SPG9.BP_Technical_Turret_SPG9_C.InpActEvt_Focus_K2Node_InputActionEvent_1");

	ABP_Technical_Turret_SPG9_C_InpActEvt_Focus_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Technical_Turret_SPG9.BP_Technical_Turret_SPG9_C.ExecuteUbergraph_BP_Technical_Turret_SPG9
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Technical_Turret_SPG9_C::ExecuteUbergraph_BP_Technical_Turret_SPG9(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Technical_Turret_SPG9.BP_Technical_Turret_SPG9_C.ExecuteUbergraph_BP_Technical_Turret_SPG9");

	ABP_Technical_Turret_SPG9_C_ExecuteUbergraph_BP_Technical_Turret_SPG9_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
