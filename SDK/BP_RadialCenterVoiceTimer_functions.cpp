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

// Function BP_RadialCenterVoiceTimer.BP_RadialCenterVoiceTimer_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RadialCenterVoiceTimer_C::OnClicked(class UBaseRadialMenu_C* Radial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialCenterVoiceTimer.BP_RadialCenterVoiceTimer_C.OnClicked");

	UBP_RadialCenterVoiceTimer_C_OnClicked_Params params;
	params.Radial = Radial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialCenterVoiceTimer.BP_RadialCenterVoiceTimer_C.ExecuteUbergraph_BP_RadialCenterVoiceTimer
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RadialCenterVoiceTimer_C::ExecuteUbergraph_BP_RadialCenterVoiceTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialCenterVoiceTimer.BP_RadialCenterVoiceTimer_C.ExecuteUbergraph_BP_RadialCenterVoiceTimer");

	UBP_RadialCenterVoiceTimer_C_ExecuteUbergraph_BP_RadialCenterVoiceTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
