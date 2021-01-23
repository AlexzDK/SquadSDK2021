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

// Function BP_9M119MRefleks_ATGM.BP_9M119MRefleks_ATGM_C.PlayAnimations
struct ABP_9M119MRefleks_ATGM_C_PlayAnimations_Params
{
	class UAnimMontage*                                TripodAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                WeaponAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                SoldierAnim;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TripodAnimTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WeaponAnimTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SoldierAnimTime;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_9M119MRefleks_ATGM.BP_9M119MRefleks_ATGM_C.BlueprintOnFire
struct ABP_9M119MRefleks_ATGM_C_BlueprintOnFire_Params
{
	struct FVector                                     Origin;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_9M119MRefleks_ATGM.BP_9M119MRefleks_ATGM_C.SoldierEntersVehicle
struct ABP_9M119MRefleks_ATGM_C_SoldierEntersVehicle_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_9M119MRefleks_ATGM.BP_9M119MRefleks_ATGM_C.BlueprintOnPreFire
struct ABP_9M119MRefleks_ATGM_C_BlueprintOnPreFire_Params
{
};

// Function BP_9M119MRefleks_ATGM.BP_9M119MRefleks_ATGM_C.BlueprintOnEquip
struct ABP_9M119MRefleks_ATGM_C_BlueprintOnEquip_Params
{
};

// Function BP_9M119MRefleks_ATGM.BP_9M119MRefleks_ATGM_C.ExecuteUbergraph_BP_9M119MRefleks_ATGM
struct ABP_9M119MRefleks_ATGM_C_ExecuteUbergraph_BP_9M119MRefleks_ATGM_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
