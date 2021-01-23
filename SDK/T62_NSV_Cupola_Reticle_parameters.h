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

// Function T62_NSV_Cupola_Reticle.T62_NSV_Cupola_Reticle_C.UpdateCurrentWeapon
struct UT62_NSV_Cupola_Reticle_C_UpdateCurrentWeapon_Params
{
};

// Function T62_NSV_Cupola_Reticle.T62_NSV_Cupola_Reticle_C.TunnelOffset
struct UT62_NSV_Cupola_Reticle_C_TunnelOffset_Params
{
	float                                              RangeOfMotion;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Multiplier;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     TunnelImg;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Reticle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function T62_NSV_Cupola_Reticle.T62_NSV_Cupola_Reticle_C.Tick
struct UT62_NSV_Cupola_Reticle_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function T62_NSV_Cupola_Reticle.T62_NSV_Cupola_Reticle_C.UpdateZoomLevelReticle
struct UT62_NSV_Cupola_Reticle_C_UpdateZoomLevelReticle_Params
{
};

// Function T62_NSV_Cupola_Reticle.T62_NSV_Cupola_Reticle_C.Construct
struct UT62_NSV_Cupola_Reticle_C_Construct_Params
{
};

// Function T62_NSV_Cupola_Reticle.T62_NSV_Cupola_Reticle_C.UpdateTurretHealth
struct UT62_NSV_Cupola_Reticle_C_UpdateTurretHealth_Params
{
};

// Function T62_NSV_Cupola_Reticle.T62_NSV_Cupola_Reticle_C.ExecuteUbergraph_T62_NSV_Cupola_Reticle
struct UT62_NSV_Cupola_Reticle_C_ExecuteUbergraph_T62_NSV_Cupola_Reticle_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
