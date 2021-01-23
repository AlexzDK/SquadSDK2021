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

// Function I_OverlapNotification.I_OverlapNotification_C.Notify End Overlap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_OverlapNotification_C::Notify_End_Overlap(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_OverlapNotification.I_OverlapNotification_C.Notify End Overlap");

	UI_OverlapNotification_C_Notify_End_Overlap_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function I_OverlapNotification.I_OverlapNotification_C.Notify Overlap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_OverlapNotification_C::Notify_Overlap(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_OverlapNotification.I_OverlapNotification_C.Notify Overlap");

	UI_OverlapNotification_C_Notify_Overlap_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
