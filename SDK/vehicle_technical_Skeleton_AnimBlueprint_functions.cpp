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

// Function vehicle_technical_Skeleton_AnimBlueprint.vehicle_technical_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void Uvehicle_technical_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function vehicle_technical_Skeleton_AnimBlueprint.vehicle_technical_Skeleton_AnimBlueprint_C.AnimGraph");

	Uvehicle_technical_Skeleton_AnimBlueprint_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function vehicle_technical_Skeleton_AnimBlueprint.vehicle_technical_Skeleton_AnimBlueprint_C.ExecuteUbergraph_vehicle_technical_Skeleton_AnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Uvehicle_technical_Skeleton_AnimBlueprint_C::ExecuteUbergraph_vehicle_technical_Skeleton_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function vehicle_technical_Skeleton_AnimBlueprint.vehicle_technical_Skeleton_AnimBlueprint_C.ExecuteUbergraph_vehicle_technical_Skeleton_AnimBlueprint");

	Uvehicle_technical_Skeleton_AnimBlueprint_C_ExecuteUbergraph_vehicle_technical_Skeleton_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
