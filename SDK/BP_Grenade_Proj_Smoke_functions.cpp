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

// Function BP_Grenade_Proj_Smoke.BP_Grenade_Proj_Smoke_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Grenade_Proj_Smoke_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Proj_Smoke.BP_Grenade_Proj_Smoke_C.ReceiveBeginPlay");

	ABP_Grenade_Proj_Smoke_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_Proj_Smoke.BP_Grenade_Proj_Smoke_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_Grenade_Proj_Smoke_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Proj_Smoke.BP_Grenade_Proj_Smoke_C.ReceiveDestroyed");

	ABP_Grenade_Proj_Smoke_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_Proj_Smoke.BP_Grenade_Proj_Smoke_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Grenade_Proj_Smoke_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Proj_Smoke.BP_Grenade_Proj_Smoke_C.ReceiveTick");

	ABP_Grenade_Proj_Smoke_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_Proj_Smoke.BP_Grenade_Proj_Smoke_C.ExecuteUbergraph_BP_Grenade_Proj_Smoke
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Grenade_Proj_Smoke_C::ExecuteUbergraph_BP_Grenade_Proj_Smoke(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Proj_Smoke.BP_Grenade_Proj_Smoke_C.ExecuteUbergraph_BP_Grenade_Proj_Smoke");

	ABP_Grenade_Proj_Smoke_C_ExecuteUbergraph_BP_Grenade_Proj_Smoke_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_Proj_Smoke.BP_Grenade_Proj_Smoke_C.ClientChangeColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_Grenade_Proj_Smoke_C::ClientChangeColor__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Proj_Smoke.BP_Grenade_Proj_Smoke_C.ClientChangeColor__DelegateSignature");

	ABP_Grenade_Proj_Smoke_C_ClientChangeColor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
