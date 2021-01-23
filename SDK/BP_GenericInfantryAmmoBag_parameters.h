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

// Function BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C.BP_PickedUp
struct ABP_GenericInfantryAmmoBag_C_BP_PickedUp_Params
{
	class ASQEquipableItem*                            EquippableAmmoBag;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C.BPHidePrompt
struct ABP_GenericInfantryAmmoBag_C_BPHidePrompt_Params
{
};

// Function BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C.RemovedFromPlayersPlacedList
struct ABP_GenericInfantryAmmoBag_C_RemovedFromPlayersPlacedList_Params
{
};

// Function BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C.Player Left Radius
struct ABP_GenericInfantryAmmoBag_C_Player_Left_Radius_Params
{
	class APlayerController*                           Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C.Player Enter Radius
struct ABP_GenericInfantryAmmoBag_C_Player_Enter_Radius_Params
{
	class APlayerController*                           Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Can_Pickup;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C.Pickup Item
struct ABP_GenericInfantryAmmoBag_C_Pickup_Item_Params
{
	class APlayerController*                           Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C.ExecuteUbergraph_BP_GenericInfantryAmmoBag
struct ABP_GenericInfantryAmmoBag_C_ExecuteUbergraph_BP_GenericInfantryAmmoBag_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
