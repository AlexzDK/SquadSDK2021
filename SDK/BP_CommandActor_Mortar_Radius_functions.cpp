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

// Function BP_CommandActor_Mortar_Radius.BP_CommandActor_Mortar_Radius_C.Get Radius
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CommandActor_Mortar_Radius_C::Get_Radius(float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_Mortar_Radius.BP_CommandActor_Mortar_Radius_C.Get Radius");

	ABP_CommandActor_Mortar_Radius_C_Get_Radius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;

}


// Function BP_CommandActor_Mortar_Radius.BP_CommandActor_Mortar_Radius_C.Get Distance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Dist                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CommandActor_Mortar_Radius_C::Get_Distance(float* Dist)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_Mortar_Radius.BP_CommandActor_Mortar_Radius_C.Get Distance");

	ABP_CommandActor_Mortar_Radius_C_Get_Distance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dist != nullptr)
		*Dist = params.Dist;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
