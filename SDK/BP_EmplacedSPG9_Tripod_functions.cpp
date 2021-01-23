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

// Function BP_EmplacedSPG9_Tripod.BP_EmplacedSPG9_Tripod_C.GetSoldierAttachComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_EmplacedSPG9_Tripod_C::GetSoldierAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EmplacedSPG9_Tripod.BP_EmplacedSPG9_Tripod_C.GetSoldierAttachComponent");

	ABP_EmplacedSPG9_Tripod_C_GetSoldierAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
