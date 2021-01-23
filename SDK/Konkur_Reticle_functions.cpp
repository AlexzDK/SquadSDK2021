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

// Function Konkur_Reticle.Konkur_Reticle_C.UpdateCurrentWeapon
// (Public, BlueprintCallable, BlueprintEvent)
void UKonkur_Reticle_C::UpdateCurrentWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Konkur_Reticle.Konkur_Reticle_C.UpdateCurrentWeapon");

	UKonkur_Reticle_C_UpdateCurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Konkur_Reticle.Konkur_Reticle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UKonkur_Reticle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Konkur_Reticle.Konkur_Reticle_C.Construct");

	UKonkur_Reticle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Konkur_Reticle.Konkur_Reticle_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKonkur_Reticle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Konkur_Reticle.Konkur_Reticle_C.Tick");

	UKonkur_Reticle_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Konkur_Reticle.Konkur_Reticle_C.UpdateTurretHealth
// (BlueprintCallable, BlueprintEvent)
void UKonkur_Reticle_C::UpdateTurretHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Konkur_Reticle.Konkur_Reticle_C.UpdateTurretHealth");

	UKonkur_Reticle_C_UpdateTurretHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Konkur_Reticle.Konkur_Reticle_C.UpdateAmmo
// (BlueprintCallable, BlueprintEvent)
void UKonkur_Reticle_C::UpdateAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Konkur_Reticle.Konkur_Reticle_C.UpdateAmmo");

	UKonkur_Reticle_C_UpdateAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Konkur_Reticle.Konkur_Reticle_C.ExecuteUbergraph_Konkur_Reticle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKonkur_Reticle_C::ExecuteUbergraph_Konkur_Reticle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Konkur_Reticle.Konkur_Reticle_C.ExecuteUbergraph_Konkur_Reticle");

	UKonkur_Reticle_C_ExecuteUbergraph_Konkur_Reticle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
