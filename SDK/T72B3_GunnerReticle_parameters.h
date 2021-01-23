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

// Function T72B3_GunnerReticle.T72B3_GunnerReticle_C.UpdateCurrentWeapon
struct UT72B3_GunnerReticle_C_UpdateCurrentWeapon_Params
{
};

// Function T72B3_GunnerReticle.T72B3_GunnerReticle_C.SetWeaponName
struct UT72B3_GunnerReticle_C_SetWeaponName_Params
{
};

// Function T72B3_GunnerReticle.T72B3_GunnerReticle_C.RangeFinder
struct UT72B3_GunnerReticle_C_RangeFinder_Params
{
};

// Function T72B3_GunnerReticle.T72B3_GunnerReticle_C.TunnelOffset
struct UT72B3_GunnerReticle_C_TunnelOffset_Params
{
	float                                              RangeOfMotion;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Multiplier;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     TunnelImg;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Reticle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function T72B3_GunnerReticle.T72B3_GunnerReticle_C.Construct
struct UT72B3_GunnerReticle_C_Construct_Params
{
};

// Function T72B3_GunnerReticle.T72B3_GunnerReticle_C.Tick
struct UT72B3_GunnerReticle_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function T72B3_GunnerReticle.T72B3_GunnerReticle_C.UpdateAmmo
struct UT72B3_GunnerReticle_C_UpdateAmmo_Params
{
};

// Function T72B3_GunnerReticle.T72B3_GunnerReticle_C.UpdateZoomLevelReticle
struct UT72B3_GunnerReticle_C_UpdateZoomLevelReticle_Params
{
};

// Function T72B3_GunnerReticle.T72B3_GunnerReticle_C.UpdateWeaponRotation
struct UT72B3_GunnerReticle_C_UpdateWeaponRotation_Params
{
};

// Function T72B3_GunnerReticle.T72B3_GunnerReticle_C.UpdateStabilizationIndicator
struct UT72B3_GunnerReticle_C_UpdateStabilizationIndicator_Params
{
};

// Function T72B3_GunnerReticle.T72B3_GunnerReticle_C.UpdateTurretHealth
struct UT72B3_GunnerReticle_C_UpdateTurretHealth_Params
{
};

// Function T72B3_GunnerReticle.T72B3_GunnerReticle_C.ExecuteUbergraph_T72B3_GunnerReticle
struct UT72B3_GunnerReticle_C_ExecuteUbergraph_T72B3_GunnerReticle_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
