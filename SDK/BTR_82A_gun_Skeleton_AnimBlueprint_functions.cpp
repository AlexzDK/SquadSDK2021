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

// Function BTR_82A_gun_Skeleton_AnimBlueprint.BTR_82A_gun_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UBTR_82A_gun_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTR_82A_gun_Skeleton_AnimBlueprint.BTR_82A_gun_Skeleton_AnimBlueprint_C.AnimGraph");

	UBTR_82A_gun_Skeleton_AnimBlueprint_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function BTR_82A_gun_Skeleton_AnimBlueprint.BTR_82A_gun_Skeleton_AnimBlueprint_C.ExecuteUbergraph_BTR_82A_gun_Skeleton_AnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTR_82A_gun_Skeleton_AnimBlueprint_C::ExecuteUbergraph_BTR_82A_gun_Skeleton_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTR_82A_gun_Skeleton_AnimBlueprint.BTR_82A_gun_Skeleton_AnimBlueprint_C.ExecuteUbergraph_BTR_82A_gun_Skeleton_AnimBlueprint");

	UBTR_82A_gun_Skeleton_AnimBlueprint_C_ExecuteUbergraph_BTR_82A_gun_Skeleton_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
