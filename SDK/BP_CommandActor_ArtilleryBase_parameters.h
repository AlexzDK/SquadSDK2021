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

// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Get Prewarn Barrage Array
struct ABP_CommandActor_ArtilleryBase_C_Get_Prewarn_Barrage_Array_Params
{
	TArray<struct FVector>                             Out_Locations;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Get Main Barrage Array
struct ABP_CommandActor_ArtilleryBase_C_Get_Main_Barrage_Array_Params
{
	TArray<struct FVector>                             Out_Locations;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Init Artillery
struct ABP_CommandActor_ArtilleryBase_C_Init_Artillery_Params
{
};

// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Get Distance
struct ABP_CommandActor_ArtilleryBase_C_Get_Distance_Params
{
	float                                              Dist;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Get Radius
struct ABP_CommandActor_ArtilleryBase_C_Get_Radius_Params
{
	float                                              Radius;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Randomise Location
struct ABP_CommandActor_ArtilleryBase_C_Randomise_Location_Params
{
};

// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.OnRep_Start Move
struct ABP_CommandActor_ArtilleryBase_C_OnRep_Start_Move_Params
{
};

// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Get Landscape Hit Location
struct ABP_CommandActor_ArtilleryBase_C_Get_Landscape_Hit_Location_Params
{
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.ReceiveBeginPlay
struct ABP_CommandActor_ArtilleryBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Server Projectiles
struct ABP_CommandActor_ArtilleryBase_C_Server_Projectiles_Params
{
};

// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Fire Projectiles
struct ABP_CommandActor_ArtilleryBase_C_Fire_Projectiles_Params
{
	TArray<struct FVector>                             Locations;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Server End Active Duration
struct ABP_CommandActor_ArtilleryBase_C_Server_End_Active_Duration_Params
{
};

// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Server Start Active Duration
struct ABP_CommandActor_ArtilleryBase_C_Server_Start_Active_Duration_Params
{
};

// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Server Prewarning Projectiles
struct ABP_CommandActor_ArtilleryBase_C_Server_Prewarning_Projectiles_Params
{
};

// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.ExecuteUbergraph_BP_CommandActor_ArtilleryBase
struct ABP_CommandActor_ArtilleryBase_C_ExecuteUbergraph_BP_CommandActor_ArtilleryBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
