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

// Function W_VolumeWidget.W_VolumeWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_VolumeWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VolumeWidget.W_VolumeWidget_C.Construct");

	UW_VolumeWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VolumeWidget.W_VolumeWidget_C.Fade Out
// (BlueprintCallable, BlueprintEvent)
void UW_VolumeWidget_C::Fade_Out()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VolumeWidget.W_VolumeWidget_C.Fade Out");

	UW_VolumeWidget_C_Fade_Out_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VolumeWidget.W_VolumeWidget_C.Fade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Fade_In                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_VolumeWidget_C::Fade(bool Fade_In)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VolumeWidget.W_VolumeWidget_C.Fade");

	UW_VolumeWidget_C_Fade_Params params;
	params.Fade_In = Fade_In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VolumeWidget.W_VolumeWidget_C.ExecuteUbergraph_W_VolumeWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_VolumeWidget_C::ExecuteUbergraph_W_VolumeWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VolumeWidget.W_VolumeWidget_C.ExecuteUbergraph_W_VolumeWidget");

	UW_VolumeWidget_C_ExecuteUbergraph_W_VolumeWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
