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

// Function BP_WorldText.BP_WorldText_C.Update Widget
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_WorldText_C::Update_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldText.BP_WorldText_C.Update Widget");

	ABP_WorldText_C_Update_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WorldText.BP_WorldText_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_WorldText_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldText.BP_WorldText_C.UserConstructionScript");

	ABP_WorldText_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WorldText.BP_WorldText_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_WorldText_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldText.BP_WorldText_C.ReceiveBeginPlay");

	ABP_WorldText_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WorldText.BP_WorldText_C.ExecuteUbergraph_BP_WorldText
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WorldText_C::ExecuteUbergraph_BP_WorldText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldText.BP_WorldText_C.ExecuteUbergraph_BP_WorldText");

	ABP_WorldText_C_ExecuteUbergraph_BP_WorldText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
