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

// Function BP_Mortarround4.BP_Mortarround4_C.BPOnNearGroundDistanceReached
// (Event, Public, BlueprintEvent)
void ABP_Mortarround4_C::BPOnNearGroundDistanceReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mortarround4.BP_Mortarround4_C.BPOnNearGroundDistanceReached");

	ABP_Mortarround4_C_BPOnNearGroundDistanceReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Mortarround4.BP_Mortarround4_C.OnImpact
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SelfActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_Mortarround4_C::OnImpact(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mortarround4.BP_Mortarround4_C.OnImpact");

	ABP_Mortarround4_C_OnImpact_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Mortarround4.BP_Mortarround4_C.BPOnBeginDescending
// (Event, Public, BlueprintEvent)
void ABP_Mortarround4_C::BPOnBeginDescending()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mortarround4.BP_Mortarround4_C.BPOnBeginDescending");

	ABP_Mortarround4_C_BPOnBeginDescending_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Mortarround4.BP_Mortarround4_C.ExecuteUbergraph_BP_Mortarround4
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Mortarround4_C::ExecuteUbergraph_BP_Mortarround4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mortarround4.BP_Mortarround4_C.ExecuteUbergraph_BP_Mortarround4");

	ABP_Mortarround4_C_ExecuteUbergraph_BP_Mortarround4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
