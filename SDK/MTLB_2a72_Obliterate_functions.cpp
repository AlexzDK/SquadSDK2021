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

// Function MTLB_2a72_Obliterate.MTLB_2a72_Obliterate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMTLB_2a72_Obliterate_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MTLB_2a72_Obliterate.MTLB_2a72_Obliterate_C.ReceiveBeginPlay");

	AMTLB_2a72_Obliterate_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MTLB_2a72_Obliterate.MTLB_2a72_Obliterate_C.OnBeginDestroyedVehicle
// (Event, Public, BlueprintEvent)
void AMTLB_2a72_Obliterate_C::OnBeginDestroyedVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function MTLB_2a72_Obliterate.MTLB_2a72_Obliterate_C.OnBeginDestroyedVehicle");

	AMTLB_2a72_Obliterate_C_OnBeginDestroyedVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MTLB_2a72_Obliterate.MTLB_2a72_Obliterate_C.BndEvt__Turret_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AMTLB_2a72_Obliterate_C::BndEvt__Turret_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function MTLB_2a72_Obliterate.MTLB_2a72_Obliterate_C.BndEvt__Turret_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	AMTLB_2a72_Obliterate_C_BndEvt__Turret_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MTLB_2a72_Obliterate.MTLB_2a72_Obliterate_C.ExecuteUbergraph_MTLB_2a72_Obliterate
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMTLB_2a72_Obliterate_C::ExecuteUbergraph_MTLB_2a72_Obliterate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MTLB_2a72_Obliterate.MTLB_2a72_Obliterate_C.ExecuteUbergraph_MTLB_2a72_Obliterate");

	AMTLB_2a72_Obliterate_C_ExecuteUbergraph_MTLB_2a72_Obliterate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
