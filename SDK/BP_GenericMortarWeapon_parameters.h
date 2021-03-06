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

// Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.ResumeAnimations
struct ABP_GenericMortarWeapon_C_ResumeAnimations_Params
{
	class UAnimMontage*                                TripodAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                WeaponAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                SoldierAnim;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.StopAnimations
struct ABP_GenericMortarWeapon_C_StopAnimations_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.PlayAnimations
struct ABP_GenericMortarWeapon_C_PlayAnimations_Params
{
	class UAnimMontage*                                TripodAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                WeaponAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                SoldierAnim;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TripodAnimTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WeaponAnimTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SoldierAnimTime;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.SoldierLeavesVehicle
struct ABP_GenericMortarWeapon_C_SoldierLeavesVehicle_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.SoldierEntersVehicle
struct ABP_GenericMortarWeapon_C_SoldierEntersVehicle_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.BlueprintOnReload
struct ABP_GenericMortarWeapon_C_BlueprintOnReload_Params
{
};

// Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.BlueprintOnFire
struct ABP_GenericMortarWeapon_C_BlueprintOnFire_Params
{
	struct FVector                                     Origin;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.BlueprintOnZoom
struct ABP_GenericMortarWeapon_C_BlueprintOnZoom_Params
{
	bool                                               bNewZoom;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.ExecuteUbergraph_BP_GenericMortarWeapon
struct ABP_GenericMortarWeapon_C_ExecuteUbergraph_BP_GenericMortarWeapon_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
