// Name: Squad, Version: 13-01-2021

#include "../pch.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.BP_ServerPlacedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQDeployable*           Deployable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericEquippableItem_Deployable_C::BP_ServerPlacedItem(class ASQDeployable* Deployable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.BP_ServerPlacedItem");

	ABP_GenericEquippableItem_Deployable_C_BP_ServerPlacedItem_Params params;
	params.Deployable = Deployable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ShowDeployable
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_GenericEquippableItem_Deployable_C::ShowDeployable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ShowDeployable");

	ABP_GenericEquippableItem_Deployable_C_ShowDeployable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.HideDeployable
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_GenericEquippableItem_Deployable_C::HideDeployable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.HideDeployable");

	ABP_GenericEquippableItem_Deployable_C_HideDeployable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.PlayDeploymentAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShouldHideEquippable          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GenericEquippableItem_Deployable_C::PlayDeploymentAnimation(bool bShouldHideEquippable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.PlayDeploymentAnimation");

	ABP_GenericEquippableItem_Deployable_C_PlayDeploymentAnimation_Params params;
	params.bShouldHideEquippable = bShouldHideEquippable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.StopPlacementAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_GenericEquippableItem_Deployable_C::StopPlacementAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.StopPlacementAnimation");

	ABP_GenericEquippableItem_Deployable_C_StopPlacementAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.DisplayFailureMessageToClient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESQInvalidPlacementReason      Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericEquippableItem_Deployable_C::DisplayFailureMessageToClient(ESQInvalidPlacementReason Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.DisplayFailureMessageToClient");

	ABP_GenericEquippableItem_Deployable_C_DisplayFailureMessageToClient_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.IsGhostPlacementValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESQInvalidPlacementReason      Reason                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericEquippableItem_Deployable_C::IsGhostPlacementValid(bool* IsValid, ESQInvalidPlacementReason* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.IsGhostPlacementValid");

	ABP_GenericEquippableItem_Deployable_C_IsGhostPlacementValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (Reason != nullptr)
		*Reason = params.Reason;

}


// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.OnRep_bIsPlacingDeployable
// (BlueprintCallable, BlueprintEvent)
void ABP_GenericEquippableItem_Deployable_C::OnRep_bIsPlacingDeployable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.OnRep_bIsPlacingDeployable");

	ABP_GenericEquippableItem_Deployable_C_OnRep_bIsPlacingDeployable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.PlaceGhostDeployable
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_GenericEquippableItem_Deployable_C::PlaceGhostDeployable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.PlaceGhostDeployable");

	ABP_GenericEquippableItem_Deployable_C_PlaceGhostDeployable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.HideGhostDeployable
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_GenericEquippableItem_Deployable_C::HideGhostDeployable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.HideGhostDeployable");

	ABP_GenericEquippableItem_Deployable_C_HideGhostDeployable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ShowGhostDeployable
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_GenericEquippableItem_Deployable_C::ShowGhostDeployable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ShowGhostDeployable");

	ABP_GenericEquippableItem_Deployable_C_ShowGhostDeployable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.BlueprintOnEquipped
// (Event, Protected, BlueprintEvent)
void ABP_GenericEquippableItem_Deployable_C::BlueprintOnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.BlueprintOnEquipped");

	ABP_GenericEquippableItem_Deployable_C_BlueprintOnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.BlueprintOnUnequipped
// (Event, Protected, BlueprintEvent)
void ABP_GenericEquippableItem_Deployable_C::BlueprintOnUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.BlueprintOnUnequipped");

	ABP_GenericEquippableItem_Deployable_C_BlueprintOnUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ClientSwapWeapon
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void ABP_GenericEquippableItem_Deployable_C::ClientSwapWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ClientSwapWeapon");

	ABP_GenericEquippableItem_Deployable_C_ClientSwapWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.BPBeginUse
// (Event, Public, BlueprintEvent)
void ABP_GenericEquippableItem_Deployable_C::BPBeginUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.BPBeginUse");

	ABP_GenericEquippableItem_Deployable_C_BPBeginUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ServerBeginDeployablePlacement
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_GenericEquippableItem_Deployable_C::ServerBeginDeployablePlacement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ServerBeginDeployablePlacement");

	ABP_GenericEquippableItem_Deployable_C_ServerBeginDeployablePlacement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ServerEndDeployablePlacement
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_GenericEquippableItem_Deployable_C::ServerEndDeployablePlacement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ServerEndDeployablePlacement");

	ABP_GenericEquippableItem_Deployable_C_ServerEndDeployablePlacement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ClientFailedToPlaceItem
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void ABP_GenericEquippableItem_Deployable_C::ClientFailedToPlaceItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ClientFailedToPlaceItem");

	ABP_GenericEquippableItem_Deployable_C_ClientFailedToPlaceItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ClientShowGhost
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void ABP_GenericEquippableItem_Deployable_C::ClientShowGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ClientShowGhost");

	ABP_GenericEquippableItem_Deployable_C_ClientShowGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.OnSoldierDeath
// (BlueprintCallable, BlueprintEvent)
void ABP_GenericEquippableItem_Deployable_C::OnSoldierDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.OnSoldierDeath");

	ABP_GenericEquippableItem_Deployable_C_OnSoldierDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.Client Failed Item Placement
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_GenericEquippableItem_Deployable_C::Client_Failed_Item_Placement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.Client Failed Item Placement");

	ABP_GenericEquippableItem_Deployable_C_Client_Failed_Item_Placement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.Server Placed Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQDeployableItem*       Deployable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericEquippableItem_Deployable_C::Server_Placed_Item(class ASQDeployableItem* Deployable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.Server Placed Item");

	ABP_GenericEquippableItem_Deployable_C_Server_Placed_Item_Params params;
	params.Deployable = Deployable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ExecuteUbergraph_BP_GenericEquippableItem_Deployable
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericEquippableItem_Deployable_C::ExecuteUbergraph_BP_GenericEquippableItem_Deployable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C.ExecuteUbergraph_BP_GenericEquippableItem_Deployable");

	ABP_GenericEquippableItem_Deployable_C_ExecuteUbergraph_BP_GenericEquippableItem_Deployable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
