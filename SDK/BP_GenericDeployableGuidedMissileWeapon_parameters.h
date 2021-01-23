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

// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.ResumeAnimations
struct ABP_GenericDeployableGuidedMissileWeapon_C_ResumeAnimations_Params
{
	class UAnimMontage*                                TripodAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                WeaponAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                SoldierAnim;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.StopAnimations
struct ABP_GenericDeployableGuidedMissileWeapon_C_StopAnimations_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.PlayAnimations
struct ABP_GenericDeployableGuidedMissileWeapon_C_PlayAnimations_Params
{
	class UAnimMontage*                                TripodAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                WeaponAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                SoldierAnim;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TripodAnimTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WeaponAnimTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SoldierAnimTime;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.UserConstructionScript
struct ABP_GenericDeployableGuidedMissileWeapon_C_UserConstructionScript_Params
{
};

// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.BlueprintOnFire
struct ABP_GenericDeployableGuidedMissileWeapon_C_BlueprintOnFire_Params
{
	struct FVector                                     Origin;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.BlueprintOnReload
struct ABP_GenericDeployableGuidedMissileWeapon_C_BlueprintOnReload_Params
{
};

// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.SoldierEntersVehicle
struct ABP_GenericDeployableGuidedMissileWeapon_C_SoldierEntersVehicle_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.SoldierLeavesVehicle
struct ABP_GenericDeployableGuidedMissileWeapon_C_SoldierLeavesVehicle_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.BlueprintOnEquip
struct ABP_GenericDeployableGuidedMissileWeapon_C_BlueprintOnEquip_Params
{
};

// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.BlueprintOnZoom
struct ABP_GenericDeployableGuidedMissileWeapon_C_BlueprintOnZoom_Params
{
	bool                                               bNewZoom;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.BlueprintOnPreFire
struct ABP_GenericDeployableGuidedMissileWeapon_C_BlueprintOnPreFire_Params
{
};

// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.ReceiveBeginPlay
struct ABP_GenericDeployableGuidedMissileWeapon_C_ReceiveBeginPlay_Params
{
};

// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.CPossessed
struct ABP_GenericDeployableGuidedMissileWeapon_C_CPossessed_Params
{
};

// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.CUnpossessed
struct ABP_GenericDeployableGuidedMissileWeapon_C_CUnpossessed_Params
{
};

// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.RemoveADS
struct ABP_GenericDeployableGuidedMissileWeapon_C_RemoveADS_Params
{
};

// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.CameraOnSoldier
struct ABP_GenericDeployableGuidedMissileWeapon_C_CameraOnSoldier_Params
{
};

// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.CameraOnWeapon
struct ABP_GenericDeployableGuidedMissileWeapon_C_CameraOnWeapon_Params
{
};

// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.BlueprintOnUnequip
struct ABP_GenericDeployableGuidedMissileWeapon_C_BlueprintOnUnequip_Params
{
};

// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.ExecuteUbergraph_BP_GenericDeployableGuidedMissileWeapon
struct ABP_GenericDeployableGuidedMissileWeapon_C_ExecuteUbergraph_BP_GenericDeployableGuidedMissileWeapon_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
