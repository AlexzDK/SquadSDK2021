#pragma once

// Name: Squad, Version: 13-01-2021


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_CommandZone.BP_CommandZone_C.Leader Role Check
struct ABP_CommandZone_C_Leader_Role_Check_Params
{
};

// Function BP_CommandZone.BP_CommandZone_C.Can Allow Actions
struct ABP_CommandZone_C_Can_Allow_Actions_Params
{
	bool                                               Allow_Actions;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CommandZone.BP_CommandZone_C.Compare Teams
struct ABP_CommandZone_C_Compare_Teams_Params
{
	int                                                B;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Same_Team;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CommandZone.BP_CommandZone_C.Get Overlapping Commander
struct ABP_CommandZone_C_Get_Overlapping_Commander_Params
{
	class ASQPlayerController*                         AsSQPlayer_Controller;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CommandZone.BP_CommandZone_C.UserConstructionScript
struct ABP_CommandZone_C_UserConstructionScript_Params
{
};

// Function BP_CommandZone.BP_CommandZone_C.OnCommanderRevivedEvent_Event_1
struct ABP_CommandZone_C_OnCommanderRevivedEvent_Event_1_Params
{
	class ASQPlayerState*                              CommanderPS;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CommandZone.BP_CommandZone_C.Set Actions Allowed
struct ABP_CommandZone_C_Set_Actions_Allowed_Params
{
	class ASQPlayerController*                         Target_PC;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bNewActionsEnabled;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CommandZone.BP_CommandZone_C.ReceiveBeginPlay
struct ABP_CommandZone_C_ReceiveBeginPlay_Params
{
};

// Function BP_CommandZone.BP_CommandZone_C.Bind Commander Changed
struct ABP_CommandZone_C_Bind_Commander_Changed_Params
{
};

// Function BP_CommandZone.BP_CommandZone_C.Refresh Commander Actions Allowed
struct ABP_CommandZone_C_Refresh_Commander_Actions_Allowed_Params
{
};

// Function BP_CommandZone.BP_CommandZone_C.Commander Changed
struct ABP_CommandZone_C_Commander_Changed_Params
{
	class ASQPlayerState*                              OldCommander;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerState*                              NewCommander;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CommandZone.BP_CommandZone_C.BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_CommandZone_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_CommandZone.BP_CommandZone_C.BndEvt__Collision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ABP_CommandZone_C_BndEvt__Collision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CommandZone.BP_CommandZone_C.Begin Role Checks
struct ABP_CommandZone_C_Begin_Role_Checks_Params
{
};

// Function BP_CommandZone.BP_CommandZone_C.ExecuteUbergraph_BP_CommandZone
struct ABP_CommandZone_C_ExecuteUbergraph_BP_CommandZone_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
