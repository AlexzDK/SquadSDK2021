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

// Function BTR80_KPVT_GunnerReticle.BTR80_KPVT_GunnerReticle_C.UpdateCurrentWeapon
struct UBTR80_KPVT_GunnerReticle_C_UpdateCurrentWeapon_Params
{
};

// Function BTR80_KPVT_GunnerReticle.BTR80_KPVT_GunnerReticle_C.TunnelOffset
struct UBTR80_KPVT_GunnerReticle_C_TunnelOffset_Params
{
	float                                              RangeOfMotion;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Multiplier;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     TunnelImg;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Reticle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTR80_KPVT_GunnerReticle.BTR80_KPVT_GunnerReticle_C.Construct
struct UBTR80_KPVT_GunnerReticle_C_Construct_Params
{
};

// Function BTR80_KPVT_GunnerReticle.BTR80_KPVT_GunnerReticle_C.Tick
struct UBTR80_KPVT_GunnerReticle_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTR80_KPVT_GunnerReticle.BTR80_KPVT_GunnerReticle_C.UpdateZoomLevelReticle
struct UBTR80_KPVT_GunnerReticle_C_UpdateZoomLevelReticle_Params
{
};

// Function BTR80_KPVT_GunnerReticle.BTR80_KPVT_GunnerReticle_C.UpdateTurretHealth
struct UBTR80_KPVT_GunnerReticle_C_UpdateTurretHealth_Params
{
};

// Function BTR80_KPVT_GunnerReticle.BTR80_KPVT_GunnerReticle_C.ExecuteUbergraph_BTR80_KPVT_GunnerReticle
struct UBTR80_KPVT_GunnerReticle_C_ExecuteUbergraph_BTR80_KPVT_GunnerReticle_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
