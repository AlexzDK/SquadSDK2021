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

// Function BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C.BP_PickedUp
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASQEquipableItem*        EquippableAmmoBag              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericInfantryAmmoBag_C::BP_PickedUp(class ASQEquipableItem* EquippableAmmoBag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C.BP_PickedUp");

	ABP_GenericInfantryAmmoBag_C_BP_PickedUp_Params params;
	params.EquippableAmmoBag = EquippableAmmoBag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C.BPHidePrompt
// (Event, Public, BlueprintEvent)
void ABP_GenericInfantryAmmoBag_C::BPHidePrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C.BPHidePrompt");

	ABP_GenericInfantryAmmoBag_C_BPHidePrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C.RemovedFromPlayersPlacedList
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_GenericInfantryAmmoBag_C::RemovedFromPlayersPlacedList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C.RemovedFromPlayersPlacedList");

	ABP_GenericInfantryAmmoBag_C_RemovedFromPlayersPlacedList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C.Player Left Radius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericInfantryAmmoBag_C::Player_Left_Radius(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C.Player Left Radius");

	ABP_GenericInfantryAmmoBag_C_Player_Left_Radius_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C.Player Enter Radius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Can_Pickup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GenericInfantryAmmoBag_C::Player_Enter_Radius(class APlayerController* Player, bool Can_Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C.Player Enter Radius");

	ABP_GenericInfantryAmmoBag_C_Player_Enter_Radius_Params params;
	params.Player = Player;
	params.Can_Pickup = Can_Pickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C.Pickup Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericInfantryAmmoBag_C::Pickup_Item(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C.Pickup Item");

	ABP_GenericInfantryAmmoBag_C_Pickup_Item_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C.ExecuteUbergraph_BP_GenericInfantryAmmoBag
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericInfantryAmmoBag_C::ExecuteUbergraph_BP_GenericInfantryAmmoBag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C.ExecuteUbergraph_BP_GenericInfantryAmmoBag");

	ABP_GenericInfantryAmmoBag_C_ExecuteUbergraph_BP_GenericInfantryAmmoBag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
