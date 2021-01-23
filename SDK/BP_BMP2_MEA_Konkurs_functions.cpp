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

// Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.PlayAnimations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            WeaponAnim                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            TripodAnim                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TripodAnimTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WeaponAnimTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BMP2_MEA_Konkurs_C::PlayAnimations(class ASQSoldier* Soldier, class UAnimMontage* WeaponAnim, class UAnimMontage* TripodAnim, float* TripodAnimTime, float* WeaponAnimTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.PlayAnimations");

	ABP_BMP2_MEA_Konkurs_C_PlayAnimations_Params params;
	params.Soldier = Soldier;
	params.WeaponAnim = WeaponAnim;
	params.TripodAnim = TripodAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TripodAnimTime != nullptr)
		*TripodAnimTime = params.TripodAnimTime;
	if (WeaponAnimTime != nullptr)
		*WeaponAnimTime = params.WeaponAnimTime;

}


// Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.GetAimDirection
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector ABP_BMP2_MEA_Konkurs_C::GetAimDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.GetAimDirection");

	ABP_BMP2_MEA_Konkurs_C_GetAimDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.GetAimLocation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector ABP_BMP2_MEA_Konkurs_C::GetAimLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.GetAimLocation");

	ABP_BMP2_MEA_Konkurs_C_GetAimLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.BlueprintOnFire
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Origin                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BMP2_MEA_Konkurs_C::BlueprintOnFire(const struct FVector& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.BlueprintOnFire");

	ABP_BMP2_MEA_Konkurs_C_BlueprintOnFire_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.BlueprintOnPreFire
// (Event, Protected, BlueprintCallable, BlueprintEvent)
void ABP_BMP2_MEA_Konkurs_C::BlueprintOnPreFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.BlueprintOnPreFire");

	ABP_BMP2_MEA_Konkurs_C_BlueprintOnPreFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.SoldierEntersVehicle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BMP2_MEA_Konkurs_C::SoldierEntersVehicle(class ASQSoldier* Soldier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.SoldierEntersVehicle");

	ABP_BMP2_MEA_Konkurs_C_SoldierEntersVehicle_Params params;
	params.Soldier = Soldier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.BlueprintOnReloaded
// (Event, Protected, BlueprintEvent)
void ABP_BMP2_MEA_Konkurs_C::BlueprintOnReloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.BlueprintOnReloaded");

	ABP_BMP2_MEA_Konkurs_C_BlueprintOnReloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.ExecuteUbergraph_BP_BMP2_MEA_Konkurs
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BMP2_MEA_Konkurs_C::ExecuteUbergraph_BP_BMP2_MEA_Konkurs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.ExecuteUbergraph_BP_BMP2_MEA_Konkurs");

	ABP_BMP2_MEA_Konkurs_C_ExecuteUbergraph_BP_BMP2_MEA_Konkurs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.ReloadDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BMP2_MEA_Konkurs_C::ReloadDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.ReloadDispatcher__DelegateSignature");

	ABP_BMP2_MEA_Konkurs_C_ReloadDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.FireDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BMP2_MEA_Konkurs_C::FireDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP2_MEA_Konkurs.BP_BMP2_MEA_Konkurs_C.FireDispatcher__DelegateSignature");

	ABP_BMP2_MEA_Konkurs_C_FireDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
