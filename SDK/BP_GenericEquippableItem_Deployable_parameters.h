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

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.BP_ServerPlacedItem
struct ABP_GenericEquippableItem_Deployable_C_BP_ServerPlacedItem_Params
{
	class ASQDeployable*                               Deployable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ShowDeployable
struct ABP_GenericEquippableItem_Deployable_C_ShowDeployable_Params
{
};

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.HideDeployable
struct ABP_GenericEquippableItem_Deployable_C_HideDeployable_Params
{
};

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.PlayDeploymentAnimation
struct ABP_GenericEquippableItem_Deployable_C_PlayDeploymentAnimation_Params
{
	bool                                               bShouldHideEquippable;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.StopPlacementAnimation
struct ABP_GenericEquippableItem_Deployable_C_StopPlacementAnimation_Params
{
};

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.DisplayFailureMessageToClient
struct ABP_GenericEquippableItem_Deployable_C_DisplayFailureMessageToClient_Params
{
	ESQInvalidPlacementReason                          Reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.IsGhostPlacementValid
struct ABP_GenericEquippableItem_Deployable_C_IsGhostPlacementValid_Params
{
	bool                                               IsValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESQInvalidPlacementReason                          Reason;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.OnRep_bIsPlacingDeployable
struct ABP_GenericEquippableItem_Deployable_C_OnRep_bIsPlacingDeployable_Params
{
};

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.PlaceGhostDeployable
struct ABP_GenericEquippableItem_Deployable_C_PlaceGhostDeployable_Params
{
};

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.HideGhostDeployable
struct ABP_GenericEquippableItem_Deployable_C_HideGhostDeployable_Params
{
};

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ShowGhostDeployable
struct ABP_GenericEquippableItem_Deployable_C_ShowGhostDeployable_Params
{
};

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.BlueprintOnEquipped
struct ABP_GenericEquippableItem_Deployable_C_BlueprintOnEquipped_Params
{
};

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.BlueprintOnUnequipped
struct ABP_GenericEquippableItem_Deployable_C_BlueprintOnUnequipped_Params
{
};

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ClientSwapWeapon
struct ABP_GenericEquippableItem_Deployable_C_ClientSwapWeapon_Params
{
};

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.BPBeginUse
struct ABP_GenericEquippableItem_Deployable_C_BPBeginUse_Params
{
};

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ServerBeginDeployablePlacement
struct ABP_GenericEquippableItem_Deployable_C_ServerBeginDeployablePlacement_Params
{
};

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ServerEndDeployablePlacement
struct ABP_GenericEquippableItem_Deployable_C_ServerEndDeployablePlacement_Params
{
};

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ClientFailedToPlaceItem
struct ABP_GenericEquippableItem_Deployable_C_ClientFailedToPlaceItem_Params
{
};

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ClientShowGhost
struct ABP_GenericEquippableItem_Deployable_C_ClientShowGhost_Params
{
};

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.OnSoldierDeath
struct ABP_GenericEquippableItem_Deployable_C_OnSoldierDeath_Params
{
};

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.Client Failed Item Placement
struct ABP_GenericEquippableItem_Deployable_C_Client_Failed_Item_Placement_Params
{
};

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.Server Placed Item
struct ABP_GenericEquippableItem_Deployable_C_Server_Placed_Item_Params
{
	class ASQDeployableItem*                           Deployable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ExecuteUbergraph_BP_GenericEquippableItem_Deployable
struct ABP_GenericEquippableItem_Deployable_C_ExecuteUbergraph_BP_GenericEquippableItem_Deployable_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
