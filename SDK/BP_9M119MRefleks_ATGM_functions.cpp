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

// Function BP_9M119MRefleks_ATGM.BP_9M119MRefleks_ATGM_C.PlayAnimations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            TripodAnim                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            WeaponAnim                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            SoldierAnim                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TripodAnimTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WeaponAnimTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SoldierAnimTime                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_9M119MRefleks_ATGM_C::PlayAnimations(class UAnimMontage* TripodAnim, class UAnimMontage* WeaponAnim, class UAnimMontage* SoldierAnim, class ASQSoldier* Soldier, float* TripodAnimTime, float* WeaponAnimTime, float* SoldierAnimTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_9M119MRefleks_ATGM.BP_9M119MRefleks_ATGM_C.PlayAnimations");

	ABP_9M119MRefleks_ATGM_C_PlayAnimations_Params params;
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


// Function BP_9M119MRefleks_ATGM.BP_9M119MRefleks_ATGM_C.BlueprintOnFire
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Origin                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_9M119MRefleks_ATGM_C::BlueprintOnFire(const struct FVector& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_9M119MRefleks_ATGM.BP_9M119MRefleks_ATGM_C.BlueprintOnFire");

	ABP_9M119MRefleks_ATGM_C_BlueprintOnFire_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_9M119MRefleks_ATGM.BP_9M119MRefleks_ATGM_C.SoldierEntersVehicle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_9M119MRefleks_ATGM_C::SoldierEntersVehicle(class ASQSoldier* Soldier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_9M119MRefleks_ATGM.BP_9M119MRefleks_ATGM_C.SoldierEntersVehicle");

	ABP_9M119MRefleks_ATGM_C_SoldierEntersVehicle_Params params;
	params.Soldier = Soldier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_9M119MRefleks_ATGM.BP_9M119MRefleks_ATGM_C.BlueprintOnPreFire
// (Event, Protected, BlueprintCallable, BlueprintEvent)
void ABP_9M119MRefleks_ATGM_C::BlueprintOnPreFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_9M119MRefleks_ATGM.BP_9M119MRefleks_ATGM_C.BlueprintOnPreFire");

	ABP_9M119MRefleks_ATGM_C_BlueprintOnPreFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_9M119MRefleks_ATGM.BP_9M119MRefleks_ATGM_C.BlueprintOnEquip
// (Event, Protected, BlueprintEvent)
void ABP_9M119MRefleks_ATGM_C::BlueprintOnEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_9M119MRefleks_ATGM.BP_9M119MRefleks_ATGM_C.BlueprintOnEquip");

	ABP_9M119MRefleks_ATGM_C_BlueprintOnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_9M119MRefleks_ATGM.BP_9M119MRefleks_ATGM_C.ExecuteUbergraph_BP_9M119MRefleks_ATGM
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_9M119MRefleks_ATGM_C::ExecuteUbergraph_BP_9M119MRefleks_ATGM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_9M119MRefleks_ATGM.BP_9M119MRefleks_ATGM_C.ExecuteUbergraph_BP_9M119MRefleks_ATGM");

	ABP_9M119MRefleks_ATGM_C_ExecuteUbergraph_BP_9M119MRefleks_ATGM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
