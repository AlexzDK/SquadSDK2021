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

// Function T72AV_CommanderReticle.T72AV_CommanderReticle_C.UpdateCurrentWeapon
struct UT72AV_CommanderReticle_C_UpdateCurrentWeapon_Params
{
};

// Function T72AV_CommanderReticle.T72AV_CommanderReticle_C.TunnelOffset
struct UT72AV_CommanderReticle_C_TunnelOffset_Params
{
	float                                              RangeOfMotion;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Multiplier;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     TunnelImg;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Reticle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function T72AV_CommanderReticle.T72AV_CommanderReticle_C.Tick
struct UT72AV_CommanderReticle_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function T72AV_CommanderReticle.T72AV_CommanderReticle_C.UpdateWeaponRotation
struct UT72AV_CommanderReticle_C_UpdateWeaponRotation_Params
{
};

// Function T72AV_CommanderReticle.T72AV_CommanderReticle_C.UpdateZoomLevelReticle
struct UT72AV_CommanderReticle_C_UpdateZoomLevelReticle_Params
{
};

// Function T72AV_CommanderReticle.T72AV_CommanderReticle_C.Construct
struct UT72AV_CommanderReticle_C_Construct_Params
{
};

// Function T72AV_CommanderReticle.T72AV_CommanderReticle_C.UpdateStabilizationIndicator
struct UT72AV_CommanderReticle_C_UpdateStabilizationIndicator_Params
{
};

// Function T72AV_CommanderReticle.T72AV_CommanderReticle_C.UpdateTurretHealth
struct UT72AV_CommanderReticle_C_UpdateTurretHealth_Params
{
};

// Function T72AV_CommanderReticle.T72AV_CommanderReticle_C.ExecuteUbergraph_T72AV_CommanderReticle
struct UT72AV_CommanderReticle_C_ExecuteUbergraph_T72AV_CommanderReticle_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
