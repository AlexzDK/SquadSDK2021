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

// Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.GetRearmMaxItemCount
struct ABP_GenericEquippableAmmobag_C_GetRearmMaxItemCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.CalculateMissingRearmItems
struct ABP_GenericEquippableAmmobag_C_CalculateMissingRearmItems_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.SortAmmoCounts
struct ABP_GenericEquippableAmmobag_C_SortAmmoCounts_Params
{
};

// Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.CalculateRearmAmmoCost
struct ABP_GenericEquippableAmmobag_C_CalculateRearmAmmoCost_Params
{
	int                                                QuantityToRearm;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.CalculateMaxAmmoCost
struct ABP_GenericEquippableAmmobag_C_CalculateMaxAmmoCost_Params
{
	int                                                MaxCount;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.Rearm
struct ABP_GenericEquippableAmmobag_C_Rearm_Params
{
	int                                                Quantity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.CreatePersistingAmmoCount
struct ABP_GenericEquippableAmmobag_C_CreatePersistingAmmoCount_Params
{
	struct FSQPersistedAmmoCount                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor)
};

// Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.IsAmmoFull
struct ABP_GenericEquippableAmmobag_C_IsAmmoFull_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.BP_ServerPlacedItem
struct ABP_GenericEquippableAmmobag_C_BP_ServerPlacedItem_Params
{
	class ASQDeployable*                               Deployable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.InitializeAmmoValues
struct ABP_GenericEquippableAmmobag_C_InitializeAmmoValues_Params
{
	struct FSQInventoryData                            ItemClass;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                               bSpawnMaxAmmo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSQPersistedAmmoCount                       PersistedAmmo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.ExecuteUbergraph_BP_GenericEquippableAmmobag
struct ABP_GenericEquippableAmmobag_C_ExecuteUbergraph_BP_GenericEquippableAmmobag_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
