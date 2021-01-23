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

// Function KPVT_UB32_Skeleton_AnimBlueprint.KPVT_UB32_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UKPVT_UB32_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function KPVT_UB32_Skeleton_AnimBlueprint.KPVT_UB32_Skeleton_AnimBlueprint_C.AnimGraph");

	UKPVT_UB32_Skeleton_AnimBlueprint_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function KPVT_UB32_Skeleton_AnimBlueprint.KPVT_UB32_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKPVT_UB32_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function KPVT_UB32_Skeleton_AnimBlueprint.KPVT_UB32_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation");

	UKPVT_UB32_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function KPVT_UB32_Skeleton_AnimBlueprint.KPVT_UB32_Skeleton_AnimBlueprint_C.ExecuteUbergraph_KPVT_UB32_Skeleton_AnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKPVT_UB32_Skeleton_AnimBlueprint_C::ExecuteUbergraph_KPVT_UB32_Skeleton_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KPVT_UB32_Skeleton_AnimBlueprint.KPVT_UB32_Skeleton_AnimBlueprint_C.ExecuteUbergraph_KPVT_UB32_Skeleton_AnimBlueprint");

	UKPVT_UB32_Skeleton_AnimBlueprint_C_ExecuteUbergraph_KPVT_UB32_Skeleton_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
