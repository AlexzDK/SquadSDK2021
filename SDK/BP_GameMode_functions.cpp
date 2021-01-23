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

// Function BP_GameMode.BP_GameMode_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GameMode_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.ReceiveEndPlay");

	ABP_GameMode_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameMode.BP_GameMode_C.BP_InvalidatePlacement
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ASQPlayerController*     PlayerController               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQDeployable*           Deployable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESQInvalidPlacementReason      FailureReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GameMode_C::BP_InvalidatePlacement(class ASQPlayerController* PlayerController, class ASQDeployable* Deployable, ESQInvalidPlacementReason FailureReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.BP_InvalidatePlacement");

	ABP_GameMode_C_BP_InvalidatePlacement_Params params;
	params.PlayerController = PlayerController;
	params.Deployable = Deployable;
	params.FailureReason = FailureReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameMode.BP_GameMode_C.BP_InitializeDeployableFromEquippable
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ASQDeployableItem*       DeployableItem                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQEquipableItem*        Equippable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GameMode_C::BP_InitializeDeployableFromEquippable(class ASQDeployableItem* DeployableItem, class ASQEquipableItem* Equippable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.BP_InitializeDeployableFromEquippable");

	ABP_GameMode_C_BP_InitializeDeployableFromEquippable_Params params;
	params.DeployableItem = DeployableItem;
	params.Equippable = Equippable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameMode.BP_GameMode_C.BP_FailPlaceDeployableFromEquippable
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ASQEquipableItem*        Equippable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GameMode_C::BP_FailPlaceDeployableFromEquippable(class ASQEquipableItem* Equippable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.BP_FailPlaceDeployableFromEquippable");

	ABP_GameMode_C_BP_FailPlaceDeployableFromEquippable_Params params;
	params.Equippable = Equippable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameMode.BP_GameMode_C.ExecuteUbergraph_BP_GameMode
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GameMode_C::ExecuteUbergraph_BP_GameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.ExecuteUbergraph_BP_GameMode");

	ABP_GameMode_C_ExecuteUbergraph_BP_GameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
