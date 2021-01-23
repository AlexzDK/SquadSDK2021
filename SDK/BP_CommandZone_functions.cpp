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

// Function BP_CommandZone.BP_CommandZone_C.Leader Role Check
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_CommandZone_C::Leader_Role_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandZone.BP_CommandZone_C.Leader Role Check");

	ABP_CommandZone_C_Leader_Role_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandZone.BP_CommandZone_C.Can Allow Actions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Allow_Actions                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CommandZone_C::Can_Allow_Actions(bool* Allow_Actions)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandZone.BP_CommandZone_C.Can Allow Actions");

	ABP_CommandZone_C_Can_Allow_Actions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Allow_Actions != nullptr)
		*Allow_Actions = params.Allow_Actions;

}


// Function BP_CommandZone.BP_CommandZone_C.Compare Teams
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Same_Team                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CommandZone_C::Compare_Teams(int B, bool* Same_Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandZone.BP_CommandZone_C.Compare Teams");

	ABP_CommandZone_C_Compare_Teams_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Same_Team != nullptr)
		*Same_Team = params.Same_Team;

}


// Function BP_CommandZone.BP_CommandZone_C.Get Overlapping Commander
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASQPlayerController*     AsSQPlayer_Controller          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CommandZone_C::Get_Overlapping_Commander(class ASQPlayerController** AsSQPlayer_Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandZone.BP_CommandZone_C.Get Overlapping Commander");

	ABP_CommandZone_C_Get_Overlapping_Commander_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsSQPlayer_Controller != nullptr)
		*AsSQPlayer_Controller = params.AsSQPlayer_Controller;

}


// Function BP_CommandZone.BP_CommandZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_CommandZone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandZone.BP_CommandZone_C.UserConstructionScript");

	ABP_CommandZone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandZone.BP_CommandZone_C.OnCommanderRevivedEvent_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerState*          CommanderPS                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CommandZone_C::OnCommanderRevivedEvent_Event_1(class ASQPlayerState* CommanderPS)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandZone.BP_CommandZone_C.OnCommanderRevivedEvent_Event_1");

	ABP_CommandZone_C_OnCommanderRevivedEvent_Event_1_Params params;
	params.CommanderPS = CommanderPS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandZone.BP_CommandZone_C.Set Actions Allowed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerController*     Target_PC                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bNewActionsEnabled             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CommandZone_C::Set_Actions_Allowed(class ASQPlayerController* Target_PC, bool bNewActionsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandZone.BP_CommandZone_C.Set Actions Allowed");

	ABP_CommandZone_C_Set_Actions_Allowed_Params params;
	params.Target_PC = Target_PC;
	params.bNewActionsEnabled = bNewActionsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandZone.BP_CommandZone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_CommandZone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandZone.BP_CommandZone_C.ReceiveBeginPlay");

	ABP_CommandZone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandZone.BP_CommandZone_C.Bind Commander Changed
// (BlueprintCallable, BlueprintEvent)
void ABP_CommandZone_C::Bind_Commander_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandZone.BP_CommandZone_C.Bind Commander Changed");

	ABP_CommandZone_C_Bind_Commander_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandZone.BP_CommandZone_C.Refresh Commander Actions Allowed
// (BlueprintCallable, BlueprintEvent)
void ABP_CommandZone_C::Refresh_Commander_Actions_Allowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandZone.BP_CommandZone_C.Refresh Commander Actions Allowed");

	ABP_CommandZone_C_Refresh_Commander_Actions_Allowed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandZone.BP_CommandZone_C.Commander Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerState*          OldCommander                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQPlayerState*          NewCommander                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CommandZone_C::Commander_Changed(class ASQPlayerState* OldCommander, class ASQPlayerState* NewCommander)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandZone.BP_CommandZone_C.Commander Changed");

	ABP_CommandZone_C_Commander_Changed_Params params;
	params.OldCommander = OldCommander;
	params.NewCommander = NewCommander;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandZone.BP_CommandZone_C.BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_CommandZone_C::BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandZone.BP_CommandZone_C.BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_CommandZone_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandZone.BP_CommandZone_C.BndEvt__Collision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CommandZone_C::BndEvt__Collision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandZone.BP_CommandZone_C.BndEvt__Collision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	ABP_CommandZone_C_BndEvt__Collision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandZone.BP_CommandZone_C.Begin Role Checks
// (BlueprintCallable, BlueprintEvent)
void ABP_CommandZone_C::Begin_Role_Checks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandZone.BP_CommandZone_C.Begin Role Checks");

	ABP_CommandZone_C_Begin_Role_Checks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandZone.BP_CommandZone_C.ExecuteUbergraph_BP_CommandZone
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CommandZone_C::ExecuteUbergraph_BP_CommandZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandZone.BP_CommandZone_C.ExecuteUbergraph_BP_CommandZone");

	ABP_CommandZone_C_ExecuteUbergraph_BP_CommandZone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
