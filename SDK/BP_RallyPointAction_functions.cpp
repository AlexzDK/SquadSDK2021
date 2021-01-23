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

// Function BP_RallyPointAction.BP_RallyPointAction_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Raidal_Menu                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RallyPointAction_C::OnClicked(class UBaseRadialMenu_C* Raidal_Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RallyPointAction.BP_RallyPointAction_C.OnClicked");

	UBP_RallyPointAction_C_OnClicked_Params params;
	params.Raidal_Menu = Raidal_Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RallyPointAction.BP_RallyPointAction_C.ExecuteUbergraph_BP_RallyPointAction
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RallyPointAction_C::ExecuteUbergraph_BP_RallyPointAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RallyPointAction.BP_RallyPointAction_C.ExecuteUbergraph_BP_RallyPointAction");

	UBP_RallyPointAction_C_ExecuteUbergraph_BP_RallyPointAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
