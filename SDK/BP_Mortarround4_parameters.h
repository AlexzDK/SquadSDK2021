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

// Function BP_Mortarround4.BP_Mortarround4_C.BPOnNearGroundDistanceReached
struct ABP_Mortarround4_C_BPOnNearGroundDistanceReached_Params
{
};

// Function BP_Mortarround4.BP_Mortarround4_C.OnImpact
struct ABP_Mortarround4_C_OnImpact_Params
{
	class AActor*                                      SelfActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_Mortarround4.BP_Mortarround4_C.BPOnBeginDescending
struct ABP_Mortarround4_C_BPOnBeginDescending_Params
{
};

// Function BP_Mortarround4.BP_Mortarround4_C.ExecuteUbergraph_BP_Mortarround4
struct ABP_Mortarround4_C_ExecuteUbergraph_BP_Mortarround4_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
