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

// Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.CanRearmPawn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   Rearmer                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_GenericAmmocrate_C::CanRearmPawn(class APawn* Rearmer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.CanRearmPawn");

	ABP_GenericAmmocrate_C_CanRearmPawn_Params params;
	params.Rearmer = Rearmer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.CanRearmWeapon
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ASQEquipableItem*        Weapon                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_GenericAmmocrate_C::CanRearmWeapon(class ASQEquipableItem* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.CanRearmWeapon");

	ABP_GenericAmmocrate_C_CanRearmWeapon_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.BindEventToAmmoUpdated
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_GenericAmmocrate_C::BindEventToAmmoUpdated(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.BindEventToAmmoUpdated");

	ABP_GenericAmmocrate_C_BindEventToAmmoUpdated_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.ConsumeAmmo
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AmmoRequired                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_GenericAmmocrate_C::ConsumeAmmo(float AmmoRequired)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.ConsumeAmmo");

	ABP_GenericAmmocrate_C_ConsumeAmmo_Params params;
	params.AmmoRequired = AmmoRequired;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.GetAmmo
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ABP_GenericAmmocrate_C::GetAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.GetAmmo");

	ABP_GenericAmmocrate_C_GetAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.GetRearmNoAmmoString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString ABP_GenericAmmocrate_C::GetRearmNoAmmoString()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.GetRearmNoAmmoString");

	ABP_GenericAmmocrate_C_GetRearmNoAmmoString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.GetRearmSuccessString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString ABP_GenericAmmocrate_C::GetRearmSuccessString()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.GetRearmSuccessString");

	ABP_GenericAmmocrate_C_GetRearmSuccessString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.GetRearmType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESQRearmType                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESQRearmType ABP_GenericAmmocrate_C::GetRearmType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.GetRearmType");

	ABP_GenericAmmocrate_C_GetRearmType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.UnbindEventToAmmoUpdated
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_GenericAmmocrate_C::UnbindEventToAmmoUpdated(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.UnbindEventToAmmoUpdated");

	ABP_GenericAmmocrate_C_UnbindEventToAmmoUpdated_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.SetTeam
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericAmmocrate_C::SetTeam(int Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.SetTeam");

	ABP_GenericAmmocrate_C_SetTeam_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.ExecuteUbergraph_BP_GenericAmmocrate
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericAmmocrate_C::ExecuteUbergraph_BP_GenericAmmocrate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericAmmocrate.BP_GenericAmmocrate_C.ExecuteUbergraph_BP_GenericAmmocrate");

	ABP_GenericAmmocrate_C_ExecuteUbergraph_BP_GenericAmmocrate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
