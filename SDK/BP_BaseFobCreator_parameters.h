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

// Function BP_BaseFobCreator.BP_BaseFobCreator_C.GetUsableData
struct ABP_BaseFobCreator_C_GetUsableData_Params
{
	struct FSQUsableData                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_BaseFobCreator.BP_BaseFobCreator_C.Remove Nearby FOB Request Markers
struct ABP_BaseFobCreator_C_Remove_Nearby_FOB_Request_Markers_Params
{
};

// Function BP_BaseFobCreator.BP_BaseFobCreator_C.GetFailedSpawnReasonText
struct ABP_BaseFobCreator_C_GetFailedSpawnReasonText_Params
{
	ESQInvalidPlacementReason                          Reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_BaseFobCreator.BP_BaseFobCreator_C.UserConstructionScript
struct ABP_BaseFobCreator_C_UserConstructionScript_Params
{
};

// Function BP_BaseFobCreator.BP_BaseFobCreator_C.ReceiveBeginPlay
struct ABP_BaseFobCreator_C_ReceiveBeginPlay_Params
{
};

// Function BP_BaseFobCreator.BP_BaseFobCreator_C.BPOnGhostMade
struct ABP_BaseFobCreator_C_BPOnGhostMade_Params
{
};

// Function BP_BaseFobCreator.BP_BaseFobCreator_C.ReceiveDestroyed
struct ABP_BaseFobCreator_C_ReceiveDestroyed_Params
{
};

// Function BP_BaseFobCreator.BP_BaseFobCreator_C.ReceiveEndPlay
struct ABP_BaseFobCreator_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseFobCreator.BP_BaseFobCreator_C.CompletedConstruction
struct ABP_BaseFobCreator_C_CompletedConstruction_Params
{
};

// Function BP_BaseFobCreator.BP_BaseFobCreator_C.BPOnUsed
struct ABP_BaseFobCreator_C_BPOnUsed_Params
{
	class AController*                                 User;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseFobCreator.BP_BaseFobCreator_C.BPStopUsed
struct ABP_BaseFobCreator_C_BPStopUsed_Params
{
	class AController*                                 User;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseFobCreator.BP_BaseFobCreator_C.BPOverrun
struct ABP_BaseFobCreator_C_BPOverrun_Params
{
	bool                                               bFriendly;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseFobCreator.BP_BaseFobCreator_C.BPPostTicketTick
struct ABP_BaseFobCreator_C_BPPostTicketTick_Params
{
	float                                              Difference;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseFobCreator.BP_BaseFobCreator_C.InvalidatePlacement
struct ABP_BaseFobCreator_C_InvalidatePlacement_Params
{
};

// Function BP_BaseFobCreator.BP_BaseFobCreator_C.BPOnIsBleedingChanged
struct ABP_BaseFobCreator_C_BPOnIsBleedingChanged_Params
{
};

// Function BP_BaseFobCreator.BP_BaseFobCreator_C.ExecuteUbergraph_BP_BaseFobCreator
struct ABP_BaseFobCreator_C_ExecuteUbergraph_BP_BaseFobCreator_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
