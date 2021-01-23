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

// Function BMP-2_MEA_GunnerReticle.BMP-2_MEA_GunnerReticle_C.UpdateCurrentWeapon
// (Public, BlueprintCallable, BlueprintEvent)
void UBMP_2_MEA_GunnerReticle_C::UpdateCurrentWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BMP-2_MEA_GunnerReticle.BMP-2_MEA_GunnerReticle_C.UpdateCurrentWeapon");

	UBMP_2_MEA_GunnerReticle_C_UpdateCurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BMP-2_MEA_GunnerReticle.BMP-2_MEA_GunnerReticle_C.TunnelOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RangeOfMotion                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Multiplier                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                 TunnelImg                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                 Reticle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBMP_2_MEA_GunnerReticle_C::TunnelOffset(float RangeOfMotion, float Multiplier, float InterpSpeed, class UWidget* TunnelImg, class UWidget* Reticle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BMP-2_MEA_GunnerReticle.BMP-2_MEA_GunnerReticle_C.TunnelOffset");

	UBMP_2_MEA_GunnerReticle_C_TunnelOffset_Params params;
	params.RangeOfMotion = RangeOfMotion;
	params.Multiplier = Multiplier;
	params.InterpSpeed = InterpSpeed;
	params.TunnelImg = TunnelImg;
	params.Reticle = Reticle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BMP-2_MEA_GunnerReticle.BMP-2_MEA_GunnerReticle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBMP_2_MEA_GunnerReticle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BMP-2_MEA_GunnerReticle.BMP-2_MEA_GunnerReticle_C.Construct");

	UBMP_2_MEA_GunnerReticle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BMP-2_MEA_GunnerReticle.BMP-2_MEA_GunnerReticle_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBMP_2_MEA_GunnerReticle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BMP-2_MEA_GunnerReticle.BMP-2_MEA_GunnerReticle_C.Tick");

	UBMP_2_MEA_GunnerReticle_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BMP-2_MEA_GunnerReticle.BMP-2_MEA_GunnerReticle_C.UpdateZoomLevelReticle
// (BlueprintCallable, BlueprintEvent)
void UBMP_2_MEA_GunnerReticle_C::UpdateZoomLevelReticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BMP-2_MEA_GunnerReticle.BMP-2_MEA_GunnerReticle_C.UpdateZoomLevelReticle");

	UBMP_2_MEA_GunnerReticle_C_UpdateZoomLevelReticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BMP-2_MEA_GunnerReticle.BMP-2_MEA_GunnerReticle_C.UpdateTurretHealth
// (BlueprintCallable, BlueprintEvent)
void UBMP_2_MEA_GunnerReticle_C::UpdateTurretHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BMP-2_MEA_GunnerReticle.BMP-2_MEA_GunnerReticle_C.UpdateTurretHealth");

	UBMP_2_MEA_GunnerReticle_C_UpdateTurretHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BMP-2_MEA_GunnerReticle.BMP-2_MEA_GunnerReticle_C.UpdateStabilizationIndicator
// (BlueprintCallable, BlueprintEvent)
void UBMP_2_MEA_GunnerReticle_C::UpdateStabilizationIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BMP-2_MEA_GunnerReticle.BMP-2_MEA_GunnerReticle_C.UpdateStabilizationIndicator");

	UBMP_2_MEA_GunnerReticle_C_UpdateStabilizationIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BMP-2_MEA_GunnerReticle.BMP-2_MEA_GunnerReticle_C.ExecuteUbergraph_BMP-2_MEA_GunnerReticle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBMP_2_MEA_GunnerReticle_C::ExecuteUbergraph_BMP_2_MEA_GunnerReticle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BMP-2_MEA_GunnerReticle.BMP-2_MEA_GunnerReticle_C.ExecuteUbergraph_BMP-2_MEA_GunnerReticle");

	UBMP_2_MEA_GunnerReticle_C_ExecuteUbergraph_BMP_2_MEA_GunnerReticle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
