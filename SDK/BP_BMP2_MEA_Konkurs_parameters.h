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

// Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.PlayAnimations
struct ABP_BMP2_MEA_Konkurs_C_PlayAnimations_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                WeaponAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                TripodAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TripodAnimTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WeaponAnimTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.GetAimDirection
struct ABP_BMP2_MEA_Konkurs_C_GetAimDirection_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.GetAimLocation
struct ABP_BMP2_MEA_Konkurs_C_GetAimLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.BlueprintOnFire
struct ABP_BMP2_MEA_Konkurs_C_BlueprintOnFire_Params
{
	struct FVector                                     Origin;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.BlueprintOnPreFire
struct ABP_BMP2_MEA_Konkurs_C_BlueprintOnPreFire_Params
{
};

// Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.SoldierEntersVehicle
struct ABP_BMP2_MEA_Konkurs_C_SoldierEntersVehicle_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.BlueprintOnReloaded
struct ABP_BMP2_MEA_Konkurs_C_BlueprintOnReloaded_Params
{
};

// Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.ExecuteUbergraph_BP_BMP2_MEA_Konkurs
struct ABP_BMP2_MEA_Konkurs_C_ExecuteUbergraph_BP_BMP2_MEA_Konkurs_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.ReloadDispatcher__DelegateSignature
struct ABP_BMP2_MEA_Konkurs_C_ReloadDispatcher__DelegateSignature_Params
{
};

// Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.FireDispatcher__DelegateSignature
struct ABP_BMP2_MEA_Konkurs_C_FireDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
