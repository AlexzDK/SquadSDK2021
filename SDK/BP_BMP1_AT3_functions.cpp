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

// Function BP_BMP1_AT3.BP_BMP1_AT3_C.PlayAnimations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            WeaponAnim                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            TripodAnim                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TripodAnimTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WeaponAnimTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BMP1_AT3_C::PlayAnimations(class ASQSoldier* Soldier, class UAnimMontage* WeaponAnim, class UAnimMontage* TripodAnim, float* TripodAnimTime, float* WeaponAnimTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_AT3.BP_BMP1_AT3_C.PlayAnimations");

	ABP_BMP1_AT3_C_PlayAnimations_Params params;
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


// Function BP_BMP1_AT3.BP_BMP1_AT3_C.GetAimDirection
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector ABP_BMP1_AT3_C::GetAimDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_AT3.BP_BMP1_AT3_C.GetAimDirection");

	ABP_BMP1_AT3_C_GetAimDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BMP1_AT3.BP_BMP1_AT3_C.GetAimLocation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector ABP_BMP1_AT3_C::GetAimLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_AT3.BP_BMP1_AT3_C.GetAimLocation");

	ABP_BMP1_AT3_C_GetAimLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BMP1_AT3.BP_BMP1_AT3_C.BlueprintOnFire
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Origin                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BMP1_AT3_C::BlueprintOnFire(const struct FVector& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_AT3.BP_BMP1_AT3_C.BlueprintOnFire");

	ABP_BMP1_AT3_C_BlueprintOnFire_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP1_AT3.BP_BMP1_AT3_C.BlueprintOnPreFire
// (Event, Protected, BlueprintCallable, BlueprintEvent)
void ABP_BMP1_AT3_C::BlueprintOnPreFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_AT3.BP_BMP1_AT3_C.BlueprintOnPreFire");

	ABP_BMP1_AT3_C_BlueprintOnPreFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP1_AT3.BP_BMP1_AT3_C.BlueprintOnReload
// (Event, Protected, BlueprintEvent)
void ABP_BMP1_AT3_C::BlueprintOnReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_AT3.BP_BMP1_AT3_C.BlueprintOnReload");

	ABP_BMP1_AT3_C_BlueprintOnReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP1_AT3.BP_BMP1_AT3_C.BlueprintOnReloaded
// (Event, Protected, BlueprintEvent)
void ABP_BMP1_AT3_C::BlueprintOnReloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_AT3.BP_BMP1_AT3_C.BlueprintOnReloaded");

	ABP_BMP1_AT3_C_BlueprintOnReloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP1_AT3.BP_BMP1_AT3_C.ExecuteUbergraph_BP_BMP1_AT3
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BMP1_AT3_C::ExecuteUbergraph_BP_BMP1_AT3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_AT3.BP_BMP1_AT3_C.ExecuteUbergraph_BP_BMP1_AT3");

	ABP_BMP1_AT3_C_ExecuteUbergraph_BP_BMP1_AT3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP1_AT3.BP_BMP1_AT3_C.AT3_OnReloaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BMP1_AT3_C::AT3_OnReloaded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_AT3.BP_BMP1_AT3_C.AT3_OnReloaded__DelegateSignature");

	ABP_BMP1_AT3_C_AT3_OnReloaded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BMP1_AT3.BP_BMP1_AT3_C.AT3_OnFire__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BMP1_AT3_C::AT3_OnFire__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMP1_AT3.BP_BMP1_AT3_C.AT3_OnFire__DelegateSignature");

	ABP_BMP1_AT3_C_AT3_OnFire__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
