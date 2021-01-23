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

// Function AnimBP_BotCharacter.AnimBP_BotCharacter_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UAnimBP_BotCharacter_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_BotCharacter.AnimBP_BotCharacter_C.AnimGraph");

	UAnimBP_BotCharacter_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function AnimBP_BotCharacter.AnimBP_BotCharacter_C.UpdateSpineRotation
// (Public, BlueprintCallable, BlueprintEvent)
void UAnimBP_BotCharacter_C::UpdateSpineRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_BotCharacter.AnimBP_BotCharacter_C.UpdateSpineRotation");

	UAnimBP_BotCharacter_C_UpdateSpineRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimBP_BotCharacter.AnimBP_BotCharacter_C.UpdateGroundInclination
// (Public, BlueprintCallable, BlueprintEvent)
void UAnimBP_BotCharacter_C::UpdateGroundInclination()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_BotCharacter.AnimBP_BotCharacter_C.UpdateGroundInclination");

	UAnimBP_BotCharacter_C_UpdateGroundInclination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimBP_BotCharacter.AnimBP_BotCharacter_C.UpdateAimOffset
// (Public, BlueprintCallable, BlueprintEvent)
void UAnimBP_BotCharacter_C::UpdateAimOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_BotCharacter.AnimBP_BotCharacter_C.UpdateAimOffset");

	UAnimBP_BotCharacter_C_UpdateAimOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimBP_BotCharacter.AnimBP_BotCharacter_C.UpdateSpeedVars
// (Public, BlueprintCallable, BlueprintEvent)
void UAnimBP_BotCharacter_C::UpdateSpeedVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_BotCharacter.AnimBP_BotCharacter_C.UpdateSpeedVars");

	UAnimBP_BotCharacter_C_UpdateSpeedVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimBP_BotCharacter.AnimBP_BotCharacter_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnimBP_BotCharacter_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_BotCharacter.AnimBP_BotCharacter_C.BlueprintUpdateAnimation");

	UAnimBP_BotCharacter_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimBP_BotCharacter.AnimBP_BotCharacter_C.Set Static Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemStaticInfo                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnimBP_BotCharacter_C::Set_Static_Info(class UClass* ItemStaticInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_BotCharacter.AnimBP_BotCharacter_C.Set Static Info");

	UAnimBP_BotCharacter_C_Set_Static_Info_Params params;
	params.ItemStaticInfo = ItemStaticInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimBP_BotCharacter.AnimBP_BotCharacter_C.ExecuteUbergraph_AnimBP_BotCharacter
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnimBP_BotCharacter_C::ExecuteUbergraph_AnimBP_BotCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_BotCharacter.AnimBP_BotCharacter_C.ExecuteUbergraph_AnimBP_BotCharacter");

	UAnimBP_BotCharacter_C_ExecuteUbergraph_AnimBP_BotCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
