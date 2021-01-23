#pragma once

// Name: Squad, Version: 13-01-2021


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_BMP1_AT3.BP_BMP1_AT3_C.PlayAnimations
struct ABP_BMP1_AT3_C_PlayAnimations_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                WeaponAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                TripodAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TripodAnimTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WeaponAnimTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BMP1_AT3.BP_BMP1_AT3_C.GetAimDirection
struct ABP_BMP1_AT3_C_GetAimDirection_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BMP1_AT3.BP_BMP1_AT3_C.GetAimLocation
struct ABP_BMP1_AT3_C_GetAimLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BMP1_AT3.BP_BMP1_AT3_C.BlueprintOnFire
struct ABP_BMP1_AT3_C_BlueprintOnFire_Params
{
	struct FVector                                     Origin;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BMP1_AT3.BP_BMP1_AT3_C.BlueprintOnPreFire
struct ABP_BMP1_AT3_C_BlueprintOnPreFire_Params
{
};

// Function BP_BMP1_AT3.BP_BMP1_AT3_C.BlueprintOnReload
struct ABP_BMP1_AT3_C_BlueprintOnReload_Params
{
};

// Function BP_BMP1_AT3.BP_BMP1_AT3_C.BlueprintOnReloaded
struct ABP_BMP1_AT3_C_BlueprintOnReloaded_Params
{
};

// Function BP_BMP1_AT3.BP_BMP1_AT3_C.ExecuteUbergraph_BP_BMP1_AT3
struct ABP_BMP1_AT3_C_ExecuteUbergraph_BP_BMP1_AT3_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BMP1_AT3.BP_BMP1_AT3_C.AT3_OnReloaded__DelegateSignature
struct ABP_BMP1_AT3_C_AT3_OnReloaded__DelegateSignature_Params
{
};

// Function BP_BMP1_AT3.BP_BMP1_AT3_C.AT3_OnFire__DelegateSignature
struct ABP_BMP1_AT3_C_AT3_OnFire__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
