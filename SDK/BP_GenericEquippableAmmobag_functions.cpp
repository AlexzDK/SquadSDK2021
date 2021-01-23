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

// Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.GetRearmMaxItemCount
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_GenericEquippableAmmobag_C::GetRearmMaxItemCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.GetRearmMaxItemCount");

	ABP_GenericEquippableAmmobag_C_GetRearmMaxItemCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.CalculateMissingRearmItems
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_GenericEquippableAmmobag_C::CalculateMissingRearmItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.CalculateMissingRearmItems");

	ABP_GenericEquippableAmmobag_C_CalculateMissingRearmItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.SortAmmoCounts
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_GenericEquippableAmmobag_C::SortAmmoCounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.SortAmmoCounts");

	ABP_GenericEquippableAmmobag_C_SortAmmoCounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.CalculateRearmAmmoCost
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            QuantityToRearm                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ABP_GenericEquippableAmmobag_C::CalculateRearmAmmoCost(int QuantityToRearm)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.CalculateRearmAmmoCost");

	ABP_GenericEquippableAmmobag_C_CalculateRearmAmmoCost_Params params;
	params.QuantityToRearm = QuantityToRearm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.CalculateMaxAmmoCost
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            MaxCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ABP_GenericEquippableAmmobag_C::CalculateMaxAmmoCost(int MaxCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.CalculateMaxAmmoCost");

	ABP_GenericEquippableAmmobag_C_CalculateMaxAmmoCost_Params params;
	params.MaxCount = MaxCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.Rearm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ABP_GenericEquippableAmmobag_C::Rearm(int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.Rearm");

	ABP_GenericEquippableAmmobag_C_Rearm_Params params;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.CreatePersistingAmmoCount
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FSQPersistedAmmoCount   ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor)
struct FSQPersistedAmmoCount ABP_GenericEquippableAmmobag_C::CreatePersistingAmmoCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.CreatePersistingAmmoCount");

	ABP_GenericEquippableAmmobag_C_CreatePersistingAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.IsAmmoFull
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_GenericEquippableAmmobag_C::IsAmmoFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.IsAmmoFull");

	ABP_GenericEquippableAmmobag_C_IsAmmoFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.BP_ServerPlacedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQDeployable*           Deployable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericEquippableAmmobag_C::BP_ServerPlacedItem(class ASQDeployable* Deployable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.BP_ServerPlacedItem");

	ABP_GenericEquippableAmmobag_C_BP_ServerPlacedItem_Params params;
	params.Deployable = Deployable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.InitializeAmmoValues
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSQInventoryData        ItemClass                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                           bSpawnMaxAmmo                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSQPersistedAmmoCount   PersistedAmmo                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void ABP_GenericEquippableAmmobag_C::InitializeAmmoValues(const struct FSQInventoryData& ItemClass, bool bSpawnMaxAmmo, const struct FSQPersistedAmmoCount& PersistedAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.InitializeAmmoValues");

	ABP_GenericEquippableAmmobag_C_InitializeAmmoValues_Params params;
	params.ItemClass = ItemClass;
	params.bSpawnMaxAmmo = bSpawnMaxAmmo;
	params.PersistedAmmo = PersistedAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.ExecuteUbergraph_BP_GenericEquippableAmmobag
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericEquippableAmmobag_C::ExecuteUbergraph_BP_GenericEquippableAmmobag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C.ExecuteUbergraph_BP_GenericEquippableAmmobag");

	ABP_GenericEquippableAmmobag_C_ExecuteUbergraph_BP_GenericEquippableAmmobag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
