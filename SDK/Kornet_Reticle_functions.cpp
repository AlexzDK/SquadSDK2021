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

// Function Kornet_Reticle.Kornet_Reticle_C.TunnelOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RangeOfMotion                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Multiplier                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                 TunnelImg                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                 Reticle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKornet_Reticle_C::TunnelOffset(float RangeOfMotion, float Multiplier, float InterpSpeed, class UWidget* TunnelImg, class UWidget* Reticle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kornet_Reticle.Kornet_Reticle_C.TunnelOffset");

	UKornet_Reticle_C_TunnelOffset_Params params;
	params.RangeOfMotion = RangeOfMotion;
	params.Multiplier = Multiplier;
	params.InterpSpeed = InterpSpeed;
	params.TunnelImg = TunnelImg;
	params.Reticle = Reticle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Kornet_Reticle.Kornet_Reticle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UKornet_Reticle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kornet_Reticle.Kornet_Reticle_C.Construct");

	UKornet_Reticle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Kornet_Reticle.Kornet_Reticle_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKornet_Reticle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kornet_Reticle.Kornet_Reticle_C.Tick");

	UKornet_Reticle_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Kornet_Reticle.Kornet_Reticle_C.UpdateTurretHealth
// (BlueprintCallable, BlueprintEvent)
void UKornet_Reticle_C::UpdateTurretHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kornet_Reticle.Kornet_Reticle_C.UpdateTurretHealth");

	UKornet_Reticle_C_UpdateTurretHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Kornet_Reticle.Kornet_Reticle_C.ExecuteUbergraph_Kornet_Reticle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKornet_Reticle_C::ExecuteUbergraph_Kornet_Reticle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kornet_Reticle.Kornet_Reticle_C.ExecuteUbergraph_Kornet_Reticle");

	UKornet_Reticle_C_ExecuteUbergraph_Kornet_Reticle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
