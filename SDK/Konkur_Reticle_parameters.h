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

// Function Konkur_Reticle.Konkur_Reticle_C.UpdateCurrentWeapon
struct UKonkur_Reticle_C_UpdateCurrentWeapon_Params
{
};

// Function Konkur_Reticle.Konkur_Reticle_C.Construct
struct UKonkur_Reticle_C_Construct_Params
{
};

// Function Konkur_Reticle.Konkur_Reticle_C.Tick
struct UKonkur_Reticle_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Konkur_Reticle.Konkur_Reticle_C.UpdateTurretHealth
struct UKonkur_Reticle_C_UpdateTurretHealth_Params
{
};

// Function Konkur_Reticle.Konkur_Reticle_C.UpdateAmmo
struct UKonkur_Reticle_C_UpdateAmmo_Params
{
};

// Function Konkur_Reticle.Konkur_Reticle_C.ExecuteUbergraph_Konkur_Reticle
struct UKonkur_Reticle_C_ExecuteUbergraph_Konkur_Reticle_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
