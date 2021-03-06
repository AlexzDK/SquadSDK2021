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

// Function BMP1_Burn.BMP1_Burn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABMP1_Burn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BMP1_Burn.BMP1_Burn_C.ReceiveBeginPlay");

	ABMP1_Burn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BMP1_Burn.BMP1_Burn_C.OnBeginDestroyedVehicle
// (Event, Public, BlueprintEvent)
void ABMP1_Burn_C::OnBeginDestroyedVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BMP1_Burn.BMP1_Burn_C.OnBeginDestroyedVehicle");

	ABMP1_Burn_C_OnBeginDestroyedVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BMP1_Burn.BMP1_Burn_C.BndEvt__Turret_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABMP1_Burn_C::BndEvt__Turret_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BMP1_Burn.BMP1_Burn_C.BndEvt__Turret_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABMP1_Burn_C_BndEvt__Turret_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BMP1_Burn.BMP1_Burn_C.ExecuteUbergraph_BMP1_Burn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABMP1_Burn_C::ExecuteUbergraph_BMP1_Burn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BMP1_Burn.BMP1_Burn_C.ExecuteUbergraph_BMP1_Burn");

	ABMP1_Burn_C_ExecuteUbergraph_BMP1_Burn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
