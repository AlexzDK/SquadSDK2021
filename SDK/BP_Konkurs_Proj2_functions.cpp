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

// Function BP_Konkurs_Proj2.BP_Konkurs_Proj2_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ABP_Konkurs_Proj2_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Konkurs_Proj2.BP_Konkurs_Proj2_C.Timeline_0__FinishedFunc");

	ABP_Konkurs_Proj2_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Konkurs_Proj2.BP_Konkurs_Proj2_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ABP_Konkurs_Proj2_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Konkurs_Proj2.BP_Konkurs_Proj2_C.Timeline_0__UpdateFunc");

	ABP_Konkurs_Proj2_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Konkurs_Proj2.BP_Konkurs_Proj2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Konkurs_Proj2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Konkurs_Proj2.BP_Konkurs_Proj2_C.ReceiveBeginPlay");

	ABP_Konkurs_Proj2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Konkurs_Proj2.BP_Konkurs_Proj2_C.OnImpact
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SelfActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_Konkurs_Proj2_C::OnImpact(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Konkurs_Proj2.BP_Konkurs_Proj2_C.OnImpact");

	ABP_Konkurs_Proj2_C_OnImpact_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Konkurs_Proj2.BP_Konkurs_Proj2_C.ExecuteUbergraph_BP_Konkurs_Proj2
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Konkurs_Proj2_C::ExecuteUbergraph_BP_Konkurs_Proj2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Konkurs_Proj2.BP_Konkurs_Proj2_C.ExecuteUbergraph_BP_Konkurs_Proj2");

	ABP_Konkurs_Proj2_C_ExecuteUbergraph_BP_Konkurs_Proj2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
