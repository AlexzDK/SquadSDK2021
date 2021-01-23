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

// Function W_SPP_reticle.W_SPP_reticle_C.TunnelEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RangeOfMotion                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Multiplier                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                 Tunnel                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                 Reticle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SPP_reticle_C::TunnelEffect(float RangeOfMotion, float Multiplier, float InterpSpeed, class UWidget* Tunnel, class UWidget* Reticle)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SPP_reticle.W_SPP_reticle_C.TunnelEffect");

	UW_SPP_reticle_C_TunnelEffect_Params params;
	params.RangeOfMotion = RangeOfMotion;
	params.Multiplier = Multiplier;
	params.InterpSpeed = InterpSpeed;
	params.Tunnel = Tunnel;
	params.Reticle = Reticle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SPP_reticle.W_SPP_reticle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_SPP_reticle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SPP_reticle.W_SPP_reticle_C.Construct");

	UW_SPP_reticle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SPP_reticle.W_SPP_reticle_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SPP_reticle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SPP_reticle.W_SPP_reticle_C.Tick");

	UW_SPP_reticle_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SPP_reticle.W_SPP_reticle_C.ExecuteUbergraph_W_SPP_reticle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SPP_reticle_C::ExecuteUbergraph_W_SPP_reticle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SPP_reticle.W_SPP_reticle_C.ExecuteUbergraph_W_SPP_reticle");

	UW_SPP_reticle_C_ExecuteUbergraph_W_SPP_reticle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
