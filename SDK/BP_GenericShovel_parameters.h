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

// Function BP_GenericShovel.BP_GenericShovel_C.OnRep_IsDestroying
struct ABP_GenericShovel_C_OnRep_IsDestroying_Params
{
};

// Function BP_GenericShovel.BP_GenericShovel_C.OnRep_IsBuilding
struct ABP_GenericShovel_C_OnRep_IsBuilding_Params
{
};

// Function BP_GenericShovel.BP_GenericShovel_C.CleanUpBuildingState
struct ABP_GenericShovel_C_CleanUpBuildingState_Params
{
};

// Function BP_GenericShovel.BP_GenericShovel_C.TryShovel
struct ABP_GenericShovel_C_TryShovel_Params
{
	class ASQDeployable*                               Deployable;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericShovel.BP_GenericShovel_C.MovementBlock
struct ABP_GenericShovel_C_MovementBlock_Params
{
	bool                                               AllowHit;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GenericShovel.BP_GenericShovel_C.HitDeployable
struct ABP_GenericShovel_C_HitDeployable_Params
{
};

// Function BP_GenericShovel.BP_GenericShovel_C.ApplyHealth
struct ABP_GenericShovel_C_ApplyHealth_Params
{
	class ASQDeployable*                               DeployableToBuild;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HealAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericShovel.BP_GenericShovel_C.BPBeginUse
struct ABP_GenericShovel_C_BPBeginUse_Params
{
};

// Function BP_GenericShovel.BP_GenericShovel_C.BPEndUse
struct ABP_GenericShovel_C_BPEndUse_Params
{
};

// Function BP_GenericShovel.BP_GenericShovel_C.BPBeginAltUse
struct ABP_GenericShovel_C_BPBeginAltUse_Params
{
};

// Function BP_GenericShovel.BP_GenericShovel_C.BPEndAltUse
struct ABP_GenericShovel_C_BPEndAltUse_Params
{
};

// Function BP_GenericShovel.BP_GenericShovel_C.BlueprintOnUnequip
struct ABP_GenericShovel_C_BlueprintOnUnequip_Params
{
};

// Function BP_GenericShovel.BP_GenericShovel_C.ServerStartBuilding
struct ABP_GenericShovel_C_ServerStartBuilding_Params
{
	bool                                               IsConstructing;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GenericShovel.BP_GenericShovel_C.ServerStopBuilding
struct ABP_GenericShovel_C_ServerStopBuilding_Params
{
};

// Function BP_GenericShovel.BP_GenericShovel_C.MovementWasBlocked
struct ABP_GenericShovel_C_MovementWasBlocked_Params
{
};

// Function BP_GenericShovel.BP_GenericShovel_C.Event Dig
struct ABP_GenericShovel_C_Event_Dig_Params
{
	bool                                               Digging;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GenericShovel.BP_GenericShovel_C.Event Destroy
struct ABP_GenericShovel_C_Event_Destroy_Params
{
	bool                                               Destroying;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GenericShovel.BP_GenericShovel_C.ExecuteUbergraph_BP_GenericShovel
struct ABP_GenericShovel_C_ExecuteUbergraph_BP_GenericShovel_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
