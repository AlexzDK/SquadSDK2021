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

// Function dshk_vehicle_base_Skeleton_AnimBlueprint.dshk_vehicle_base_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void Udshk_vehicle_base_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function dshk_vehicle_base_Skeleton_AnimBlueprint.dshk_vehicle_base_Skeleton_AnimBlueprint_C.AnimGraph");

	Udshk_vehicle_base_Skeleton_AnimBlueprint_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function dshk_vehicle_base_Skeleton_AnimBlueprint.dshk_vehicle_base_Skeleton_AnimBlueprint_C.ExecuteUbergraph_dshk_vehicle_base_Skeleton_AnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Udshk_vehicle_base_Skeleton_AnimBlueprint_C::ExecuteUbergraph_dshk_vehicle_base_Skeleton_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dshk_vehicle_base_Skeleton_AnimBlueprint.dshk_vehicle_base_Skeleton_AnimBlueprint_C.ExecuteUbergraph_dshk_vehicle_base_Skeleton_AnimBlueprint");

	Udshk_vehicle_base_Skeleton_AnimBlueprint_C_ExecuteUbergraph_dshk_vehicle_base_Skeleton_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
