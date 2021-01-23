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

// Function BP_Emplaced_ZU23-2_Antiaircannon_Base.BP_Emplaced_ZU23-2_Antiaircannon_Base_C.GetWeaponAttachComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_Emplaced_ZU23_2_Antiaircannon_Base_C::GetWeaponAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Emplaced_ZU23-2_Antiaircannon_Base.BP_Emplaced_ZU23-2_Antiaircannon_Base_C.GetWeaponAttachComponent");

	ABP_Emplaced_ZU23_2_Antiaircannon_Base_C_GetWeaponAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
