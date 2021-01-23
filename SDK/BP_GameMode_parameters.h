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

// Function BP_GameMode.BP_GameMode_C.ReceiveEndPlay
struct ABP_GameMode_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameMode.BP_GameMode_C.BP_InvalidatePlacement
struct ABP_GameMode_C_BP_InvalidatePlacement_Params
{
	class ASQPlayerController*                         PlayerController;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQDeployable*                               Deployable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESQInvalidPlacementReason                          FailureReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameMode.BP_GameMode_C.BP_InitializeDeployableFromEquippable
struct ABP_GameMode_C_BP_InitializeDeployableFromEquippable_Params
{
	class ASQDeployableItem*                           DeployableItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQEquipableItem*                            Equippable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameMode.BP_GameMode_C.BP_FailPlaceDeployableFromEquippable
struct ABP_GameMode_C_BP_FailPlaceDeployableFromEquippable_Params
{
	class ASQEquipableItem*                            Equippable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameMode.BP_GameMode_C.ExecuteUbergraph_BP_GameMode
struct ABP_GameMode_C_ExecuteUbergraph_BP_GameMode_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
