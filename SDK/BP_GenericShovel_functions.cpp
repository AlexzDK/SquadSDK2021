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

// Function BP_GenericShovel.BP_GenericShovel_C.OnRep_IsDestroying
// (BlueprintCallable, BlueprintEvent)
void ABP_GenericShovel_C::OnRep_IsDestroying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericShovel.BP_GenericShovel_C.OnRep_IsDestroying");

	ABP_GenericShovel_C_OnRep_IsDestroying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericShovel.BP_GenericShovel_C.OnRep_IsBuilding
// (BlueprintCallable, BlueprintEvent)
void ABP_GenericShovel_C::OnRep_IsBuilding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericShovel.BP_GenericShovel_C.OnRep_IsBuilding");

	ABP_GenericShovel_C_OnRep_IsBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericShovel.BP_GenericShovel_C.CleanUpBuildingState
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_GenericShovel_C::CleanUpBuildingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericShovel.BP_GenericShovel_C.CleanUpBuildingState");

	ABP_GenericShovel_C_CleanUpBuildingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericShovel.BP_GenericShovel_C.TryShovel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQDeployable*           Deployable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericShovel_C::TryShovel(class ASQDeployable** Deployable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericShovel.BP_GenericShovel_C.TryShovel");

	ABP_GenericShovel_C_TryShovel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Deployable != nullptr)
		*Deployable = params.Deployable;

}


// Function BP_GenericShovel.BP_GenericShovel_C.MovementBlock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AllowHit                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GenericShovel_C::MovementBlock(bool* AllowHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericShovel.BP_GenericShovel_C.MovementBlock");

	ABP_GenericShovel_C_MovementBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AllowHit != nullptr)
		*AllowHit = params.AllowHit;

}


// Function BP_GenericShovel.BP_GenericShovel_C.HitDeployable
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_GenericShovel_C::HitDeployable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericShovel.BP_GenericShovel_C.HitDeployable");

	ABP_GenericShovel_C_HitDeployable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericShovel.BP_GenericShovel_C.ApplyHealth
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQDeployable*           DeployableToBuild              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          HealAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericShovel_C::ApplyHealth(class ASQDeployable* DeployableToBuild, float HealAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericShovel.BP_GenericShovel_C.ApplyHealth");

	ABP_GenericShovel_C_ApplyHealth_Params params;
	params.DeployableToBuild = DeployableToBuild;
	params.HealAmount = HealAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericShovel.BP_GenericShovel_C.BPBeginUse
// (Event, Public, BlueprintEvent)
void ABP_GenericShovel_C::BPBeginUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericShovel.BP_GenericShovel_C.BPBeginUse");

	ABP_GenericShovel_C_BPBeginUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericShovel.BP_GenericShovel_C.BPEndUse
// (Event, Public, BlueprintEvent)
void ABP_GenericShovel_C::BPEndUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericShovel.BP_GenericShovel_C.BPEndUse");

	ABP_GenericShovel_C_BPEndUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericShovel.BP_GenericShovel_C.BPBeginAltUse
// (Event, Public, BlueprintEvent)
void ABP_GenericShovel_C::BPBeginAltUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericShovel.BP_GenericShovel_C.BPBeginAltUse");

	ABP_GenericShovel_C_BPBeginAltUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericShovel.BP_GenericShovel_C.BPEndAltUse
// (Event, Public, BlueprintEvent)
void ABP_GenericShovel_C::BPEndAltUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericShovel.BP_GenericShovel_C.BPEndAltUse");

	ABP_GenericShovel_C_BPEndAltUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericShovel.BP_GenericShovel_C.BlueprintOnUnequip
// (Event, Protected, BlueprintEvent)
void ABP_GenericShovel_C::BlueprintOnUnequip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericShovel.BP_GenericShovel_C.BlueprintOnUnequip");

	ABP_GenericShovel_C_BlueprintOnUnequip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericShovel.BP_GenericShovel_C.ServerStartBuilding
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsConstructing                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GenericShovel_C::ServerStartBuilding(bool IsConstructing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericShovel.BP_GenericShovel_C.ServerStartBuilding");

	ABP_GenericShovel_C_ServerStartBuilding_Params params;
	params.IsConstructing = IsConstructing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericShovel.BP_GenericShovel_C.ServerStopBuilding
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_GenericShovel_C::ServerStopBuilding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericShovel.BP_GenericShovel_C.ServerStopBuilding");

	ABP_GenericShovel_C_ServerStopBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericShovel.BP_GenericShovel_C.MovementWasBlocked
// (BlueprintCallable, BlueprintEvent)
void ABP_GenericShovel_C::MovementWasBlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericShovel.BP_GenericShovel_C.MovementWasBlocked");

	ABP_GenericShovel_C_MovementWasBlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericShovel.BP_GenericShovel_C.Event Dig
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Digging                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GenericShovel_C::Event_Dig(bool Digging)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericShovel.BP_GenericShovel_C.Event Dig");

	ABP_GenericShovel_C_Event_Dig_Params params;
	params.Digging = Digging;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericShovel.BP_GenericShovel_C.Event Destroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Destroying                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GenericShovel_C::Event_Destroy(bool Destroying)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericShovel.BP_GenericShovel_C.Event Destroy");

	ABP_GenericShovel_C_Event_Destroy_Params params;
	params.Destroying = Destroying;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericShovel.BP_GenericShovel_C.ExecuteUbergraph_BP_GenericShovel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericShovel_C::ExecuteUbergraph_BP_GenericShovel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericShovel.BP_GenericShovel_C.ExecuteUbergraph_BP_GenericShovel");

	ABP_GenericShovel_C_ExecuteUbergraph_BP_GenericShovel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
