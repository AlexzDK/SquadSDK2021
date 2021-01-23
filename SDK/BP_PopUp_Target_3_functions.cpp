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

// Function BP_PopUp_Target_3.BP_PopUp_Target_2_C.PopUp
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PopUp_Target_2_C::PopUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopUp_Target_3.BP_PopUp_Target_2_C.PopUp");

	ABP_PopUp_Target_2_C_PopUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PopUp_Target_3.BP_PopUp_Target_2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PopUp_Target_2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopUp_Target_3.BP_PopUp_Target_2_C.UserConstructionScript");

	ABP_PopUp_Target_2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PopUp_Target_3.BP_PopUp_Target_2_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                          damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PopUp_Target_2_C::ReceiveAnyDamage(float damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopUp_Target_3.BP_PopUp_Target_2_C.ReceiveAnyDamage");

	ABP_PopUp_Target_2_C_ReceiveAnyDamage_Params params;
	params.damage = damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PopUp_Target_3.BP_PopUp_Target_2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_PopUp_Target_2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopUp_Target_3.BP_PopUp_Target_2_C.ReceiveBeginPlay");

	ABP_PopUp_Target_2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PopUp_Target_3.BP_PopUp_Target_2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PopUp_Target_2_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopUp_Target_3.BP_PopUp_Target_2_C.ReceiveTick");

	ABP_PopUp_Target_2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PopUp_Target_3.BP_PopUp_Target_2_C.ExecuteUbergraph_BP_PopUp_Target_3
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PopUp_Target_2_C::ExecuteUbergraph_BP_PopUp_Target_3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PopUp_Target_3.BP_PopUp_Target_2_C.ExecuteUbergraph_BP_PopUp_Target_3");

	ABP_PopUp_Target_2_C_ExecuteUbergraph_BP_PopUp_Target_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
