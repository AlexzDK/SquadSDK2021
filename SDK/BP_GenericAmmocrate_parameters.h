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

// Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.CanRearmPawn
struct ABP_GenericAmmocrate_C_CanRearmPawn_Params
{
	class APawn*                                       Rearmer;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.CanRearmWeapon
struct ABP_GenericAmmocrate_C_CanRearmWeapon_Params
{
	class ASQEquipableItem*                            Weapon;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.BindEventToAmmoUpdated
struct ABP_GenericAmmocrate_C_BindEventToAmmoUpdated_Params
{
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.ConsumeAmmo
struct ABP_GenericAmmocrate_C_ConsumeAmmo_Params
{
	float                                              AmmoRequired;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.GetAmmo
struct ABP_GenericAmmocrate_C_GetAmmo_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.GetRearmNoAmmoString
struct ABP_GenericAmmocrate_C_GetRearmNoAmmoString_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.GetRearmSuccessString
struct ABP_GenericAmmocrate_C_GetRearmSuccessString_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.GetRearmType
struct ABP_GenericAmmocrate_C_GetRearmType_Params
{
	ESQRearmType                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.UnbindEventToAmmoUpdated
struct ABP_GenericAmmocrate_C_UnbindEventToAmmoUpdated_Params
{
	struct FScriptDelegate                             Delegate;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.SetTeam
struct ABP_GenericAmmocrate_C_SetTeam_Params
{
	int                                                Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.ExecuteUbergraph_BP_GenericAmmocrate
struct ABP_GenericAmmocrate_C_ExecuteUbergraph_BP_GenericAmmocrate_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
