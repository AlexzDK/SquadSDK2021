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

// Function T72B3_gun_Skeleton_AnimBlueprint.T72B3_gun_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UT72B3_gun_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function T72B3_gun_Skeleton_AnimBlueprint.T72B3_gun_Skeleton_AnimBlueprint_C.AnimGraph");

	UT72B3_gun_Skeleton_AnimBlueprint_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function T72B3_gun_Skeleton_AnimBlueprint.T72B3_gun_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UT72B3_gun_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function T72B3_gun_Skeleton_AnimBlueprint.T72B3_gun_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation");

	UT72B3_gun_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function T72B3_gun_Skeleton_AnimBlueprint.T72B3_gun_Skeleton_AnimBlueprint_C.ExecuteUbergraph_T72B3_gun_Skeleton_AnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UT72B3_gun_Skeleton_AnimBlueprint_C::ExecuteUbergraph_T72B3_gun_Skeleton_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function T72B3_gun_Skeleton_AnimBlueprint.T72B3_gun_Skeleton_AnimBlueprint_C.ExecuteUbergraph_T72B3_gun_Skeleton_AnimBlueprint");

	UT72B3_gun_Skeleton_AnimBlueprint_C_ExecuteUbergraph_T72B3_gun_Skeleton_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
