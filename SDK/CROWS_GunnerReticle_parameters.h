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

// Function CROWS_GunnerReticle.CROWS_GunnerReticle_C.UpdateCurrentWeapon
struct UCROWS_GunnerReticle_C_UpdateCurrentWeapon_Params
{
};

// Function CROWS_GunnerReticle.CROWS_GunnerReticle_C.SetWeaponName
struct UCROWS_GunnerReticle_C_SetWeaponName_Params
{
	struct FText                                       NewParam;                                                  // (Parm, OutParm)
};

// Function CROWS_GunnerReticle.CROWS_GunnerReticle_C.RangeFinder
struct UCROWS_GunnerReticle_C_RangeFinder_Params
{
};

// Function CROWS_GunnerReticle.CROWS_GunnerReticle_C.TunnelOffset
struct UCROWS_GunnerReticle_C_TunnelOffset_Params
{
	float                                              RangeOfMotion;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Multiplier;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     TunnelImg;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Reticle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CROWS_GunnerReticle.CROWS_GunnerReticle_C.Tick
struct UCROWS_GunnerReticle_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CROWS_GunnerReticle.CROWS_GunnerReticle_C.UpdateWeaponRotation
struct UCROWS_GunnerReticle_C_UpdateWeaponRotation_Params
{
};

// Function CROWS_GunnerReticle.CROWS_GunnerReticle_C.UpdateAmmo
struct UCROWS_GunnerReticle_C_UpdateAmmo_Params
{
};

// Function CROWS_GunnerReticle.CROWS_GunnerReticle_C.UpdateZoomLevelReticle
struct UCROWS_GunnerReticle_C_UpdateZoomLevelReticle_Params
{
};

// Function CROWS_GunnerReticle.CROWS_GunnerReticle_C.Construct
struct UCROWS_GunnerReticle_C_Construct_Params
{
};

// Function CROWS_GunnerReticle.CROWS_GunnerReticle_C.UpdateStabilizationIndicator
struct UCROWS_GunnerReticle_C_UpdateStabilizationIndicator_Params
{
};

// Function CROWS_GunnerReticle.CROWS_GunnerReticle_C.UpdateTurretHealth
struct UCROWS_GunnerReticle_C_UpdateTurretHealth_Params
{
};

// Function CROWS_GunnerReticle.CROWS_GunnerReticle_C.ExecuteUbergraph_CROWS_GunnerReticle
struct UCROWS_GunnerReticle_C_ExecuteUbergraph_CROWS_GunnerReticle_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
