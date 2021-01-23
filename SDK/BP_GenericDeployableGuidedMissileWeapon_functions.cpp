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

// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.ResumeAnimations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            TripodAnim                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            WeaponAnim                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            SoldierAnim                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericDeployableGuidedMissileWeapon_C::ResumeAnimations(class UAnimMontage* TripodAnim, class UAnimMontage* WeaponAnim, class UAnimMontage* SoldierAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.ResumeAnimations");

	ABP_GenericDeployableGuidedMissileWeapon_C_ResumeAnimations_Params params;
	params.TripodAnim = TripodAnim;
	params.WeaponAnim = WeaponAnim;
	params.SoldierAnim = SoldierAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.StopAnimations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericDeployableGuidedMissileWeapon_C::StopAnimations(class ASQSoldier* Soldier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.StopAnimations");

	ABP_GenericDeployableGuidedMissileWeapon_C_StopAnimations_Params params;
	params.Soldier = Soldier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.PlayAnimations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            TripodAnim                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            WeaponAnim                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            SoldierAnim                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TripodAnimTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WeaponAnimTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SoldierAnimTime                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericDeployableGuidedMissileWeapon_C::PlayAnimations(class UAnimMontage* TripodAnim, class UAnimMontage* WeaponAnim, class UAnimMontage* SoldierAnim, class ASQSoldier* Soldier, float* TripodAnimTime, float* WeaponAnimTime, float* SoldierAnimTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.PlayAnimations");

	ABP_GenericDeployableGuidedMissileWeapon_C_PlayAnimations_Params params;
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


// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_GenericDeployableGuidedMissileWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.UserConstructionScript");

	ABP_GenericDeployableGuidedMissileWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.BlueprintOnFire
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Origin                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericDeployableGuidedMissileWeapon_C::BlueprintOnFire(const struct FVector& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.BlueprintOnFire");

	ABP_GenericDeployableGuidedMissileWeapon_C_BlueprintOnFire_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.BlueprintOnReload
// (Event, Protected, BlueprintEvent)
void ABP_GenericDeployableGuidedMissileWeapon_C::BlueprintOnReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.BlueprintOnReload");

	ABP_GenericDeployableGuidedMissileWeapon_C_BlueprintOnReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.SoldierEntersVehicle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericDeployableGuidedMissileWeapon_C::SoldierEntersVehicle(class ASQSoldier* Soldier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.SoldierEntersVehicle");

	ABP_GenericDeployableGuidedMissileWeapon_C_SoldierEntersVehicle_Params params;
	params.Soldier = Soldier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.SoldierLeavesVehicle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericDeployableGuidedMissileWeapon_C::SoldierLeavesVehicle(class ASQSoldier* Soldier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.SoldierLeavesVehicle");

	ABP_GenericDeployableGuidedMissileWeapon_C_SoldierLeavesVehicle_Params params;
	params.Soldier = Soldier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.BlueprintOnEquip
// (Event, Protected, BlueprintEvent)
void ABP_GenericDeployableGuidedMissileWeapon_C::BlueprintOnEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.BlueprintOnEquip");

	ABP_GenericDeployableGuidedMissileWeapon_C_BlueprintOnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.BlueprintOnZoom
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bNewZoom                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GenericDeployableGuidedMissileWeapon_C::BlueprintOnZoom(bool bNewZoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.BlueprintOnZoom");

	ABP_GenericDeployableGuidedMissileWeapon_C_BlueprintOnZoom_Params params;
	params.bNewZoom = bNewZoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.BlueprintOnPreFire
// (Event, Protected, BlueprintCallable, BlueprintEvent)
void ABP_GenericDeployableGuidedMissileWeapon_C::BlueprintOnPreFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.BlueprintOnPreFire");

	ABP_GenericDeployableGuidedMissileWeapon_C_BlueprintOnPreFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_GenericDeployableGuidedMissileWeapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.ReceiveBeginPlay");

	ABP_GenericDeployableGuidedMissileWeapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.CPossessed
// (BlueprintCallable, BlueprintEvent)
void ABP_GenericDeployableGuidedMissileWeapon_C::CPossessed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.CPossessed");

	ABP_GenericDeployableGuidedMissileWeapon_C_CPossessed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.CUnpossessed
// (BlueprintCallable, BlueprintEvent)
void ABP_GenericDeployableGuidedMissileWeapon_C::CUnpossessed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.CUnpossessed");

	ABP_GenericDeployableGuidedMissileWeapon_C_CUnpossessed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.RemoveADS
// (BlueprintCallable, BlueprintEvent)
void ABP_GenericDeployableGuidedMissileWeapon_C::RemoveADS()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.RemoveADS");

	ABP_GenericDeployableGuidedMissileWeapon_C_RemoveADS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.CameraOnSoldier
// (BlueprintCallable, BlueprintEvent)
void ABP_GenericDeployableGuidedMissileWeapon_C::CameraOnSoldier()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.CameraOnSoldier");

	ABP_GenericDeployableGuidedMissileWeapon_C_CameraOnSoldier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.CameraOnWeapon
// (BlueprintCallable, BlueprintEvent)
void ABP_GenericDeployableGuidedMissileWeapon_C::CameraOnWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.CameraOnWeapon");

	ABP_GenericDeployableGuidedMissileWeapon_C_CameraOnWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.BlueprintOnUnequip
// (Event, Protected, BlueprintEvent)
void ABP_GenericDeployableGuidedMissileWeapon_C::BlueprintOnUnequip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.BlueprintOnUnequip");

	ABP_GenericDeployableGuidedMissileWeapon_C_BlueprintOnUnequip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.ExecuteUbergraph_BP_GenericDeployableGuidedMissileWeapon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericDeployableGuidedMissileWeapon_C::ExecuteUbergraph_BP_GenericDeployableGuidedMissileWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableGuidedMissileWeapon.BP_GenericDeployableGuidedMissileWeapon_C.ExecuteUbergraph_BP_GenericDeployableGuidedMissileWeapon");

	ABP_GenericDeployableGuidedMissileWeapon_C_ExecuteUbergraph_BP_GenericDeployableGuidedMissileWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
