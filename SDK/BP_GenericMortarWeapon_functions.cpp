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

// Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.ResumeAnimations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            TripodAnim                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            WeaponAnim                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            SoldierAnim                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericMortarWeapon_C::ResumeAnimations(class UAnimMontage* TripodAnim, class UAnimMontage* WeaponAnim, class UAnimMontage* SoldierAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.ResumeAnimations");

	ABP_GenericMortarWeapon_C_ResumeAnimations_Params params;
	params.TripodAnim = TripodAnim;
	params.WeaponAnim = WeaponAnim;
	params.SoldierAnim = SoldierAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.StopAnimations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericMortarWeapon_C::StopAnimations(class ASQSoldier* Soldier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.StopAnimations");

	ABP_GenericMortarWeapon_C_StopAnimations_Params params;
	params.Soldier = Soldier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.PlayAnimations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            TripodAnim                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            WeaponAnim                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            SoldierAnim                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TripodAnimTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WeaponAnimTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SoldierAnimTime                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericMortarWeapon_C::PlayAnimations(class UAnimMontage* TripodAnim, class UAnimMontage* WeaponAnim, class UAnimMontage* SoldierAnim, class ASQSoldier* Soldier, float* TripodAnimTime, float* WeaponAnimTime, float* SoldierAnimTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.PlayAnimations");

	ABP_GenericMortarWeapon_C_PlayAnimations_Params params;
	params.TripodAnim = TripodAnim;
	params.WeaponAnim = WeaponAnim;
	params.SoldierAnim = SoldierAnim;
	params.Soldier = Soldier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TripodAnimTime != nullptr)
		*TripodAnimTime = params.TripodAnimTime;
	if (WeaponAnimTime != nullptr)
		*WeaponAnimTime = params.WeaponAnimTime;
	if (SoldierAnimTime != nullptr)
		*SoldierAnimTime = params.SoldierAnimTime;

}


// Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.SoldierLeavesVehicle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericMortarWeapon_C::SoldierLeavesVehicle(class ASQSoldier* Soldier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.SoldierLeavesVehicle");

	ABP_GenericMortarWeapon_C_SoldierLeavesVehicle_Params params;
	params.Soldier = Soldier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.SoldierEntersVehicle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericMortarWeapon_C::SoldierEntersVehicle(class ASQSoldier* Soldier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.SoldierEntersVehicle");

	ABP_GenericMortarWeapon_C_SoldierEntersVehicle_Params params;
	params.Soldier = Soldier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.BlueprintOnReload
// (Event, Protected, BlueprintEvent)
void ABP_GenericMortarWeapon_C::BlueprintOnReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.BlueprintOnReload");

	ABP_GenericMortarWeapon_C_BlueprintOnReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.BlueprintOnFire
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Origin                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericMortarWeapon_C::BlueprintOnFire(const struct FVector& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.BlueprintOnFire");

	ABP_GenericMortarWeapon_C_BlueprintOnFire_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.BlueprintOnZoom
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bNewZoom                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GenericMortarWeapon_C::BlueprintOnZoom(bool bNewZoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.BlueprintOnZoom");

	ABP_GenericMortarWeapon_C_BlueprintOnZoom_Params params;
	params.bNewZoom = bNewZoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.ExecuteUbergraph_BP_GenericMortarWeapon
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericMortarWeapon_C::ExecuteUbergraph_BP_GenericMortarWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericMortarWeapon.BP_GenericMortarWeapon_C.ExecuteUbergraph_BP_GenericMortarWeapon");

	ABP_GenericMortarWeapon_C_ExecuteUbergraph_BP_GenericMortarWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
