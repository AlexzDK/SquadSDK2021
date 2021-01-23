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

// Function MTLB_30mm_GunnerReticle.MTLB_30mm_GunnerReticle_C.UpdateCurrentWeapon
struct UMTLB_30mm_GunnerReticle_C_UpdateCurrentWeapon_Params
{
};

// Function MTLB_30mm_GunnerReticle.MTLB_30mm_GunnerReticle_C.TunnelOffset
struct UMTLB_30mm_GunnerReticle_C_TunnelOffset_Params
{
	float                                              RangeOfMotion;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Multiplier;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     TunnelImg;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Reticle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MTLB_30mm_GunnerReticle.MTLB_30mm_GunnerReticle_C.Construct
struct UMTLB_30mm_GunnerReticle_C_Construct_Params
{
};

// Function MTLB_30mm_GunnerReticle.MTLB_30mm_GunnerReticle_C.Tick
struct UMTLB_30mm_GunnerReticle_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MTLB_30mm_GunnerReticle.MTLB_30mm_GunnerReticle_C.UpdateZoomLevelReticle
struct UMTLB_30mm_GunnerReticle_C_UpdateZoomLevelReticle_Params
{
};

// Function MTLB_30mm_GunnerReticle.MTLB_30mm_GunnerReticle_C.UpdateTurretHealth
struct UMTLB_30mm_GunnerReticle_C_UpdateTurretHealth_Params
{
};

// Function MTLB_30mm_GunnerReticle.MTLB_30mm_GunnerReticle_C.UpdateStabilizationIndicator
struct UMTLB_30mm_GunnerReticle_C_UpdateStabilizationIndicator_Params
{
};

// Function MTLB_30mm_GunnerReticle.MTLB_30mm_GunnerReticle_C.ExecuteUbergraph_MTLB_30mm_GunnerReticle
struct UMTLB_30mm_GunnerReticle_C_ExecuteUbergraph_MTLB_30mm_GunnerReticle_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
