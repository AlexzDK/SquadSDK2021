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

// Function W_VolumeWidget_KillhouseChallengeReset.W_VolumeWidget_KillhouseChallengeReset_C.Fade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Fade_In                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_VolumeWidget_KillhouseChallengeReset_C::Fade(bool Fade_In)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VolumeWidget_KillhouseChallengeReset.W_VolumeWidget_KillhouseChallengeReset_C.Fade");

	UW_VolumeWidget_KillhouseChallengeReset_C_Fade_Params params;
	params.Fade_In = Fade_In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VolumeWidget_KillhouseChallengeReset.W_VolumeWidget_KillhouseChallengeReset_C.ExecuteUbergraph_W_VolumeWidget_KillhouseChallengeReset
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_VolumeWidget_KillhouseChallengeReset_C::ExecuteUbergraph_W_VolumeWidget_KillhouseChallengeReset(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VolumeWidget_KillhouseChallengeReset.W_VolumeWidget_KillhouseChallengeReset_C.ExecuteUbergraph_W_VolumeWidget_KillhouseChallengeReset");

	UW_VolumeWidget_KillhouseChallengeReset_C_ExecuteUbergraph_W_VolumeWidget_KillhouseChallengeReset_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
