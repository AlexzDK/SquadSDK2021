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

// Function BP_Refleks_Proj2.BP_Refleks_Proj2_C.FlightVariationOverTime__FinishedFunc
struct ABP_Refleks_Proj2_C_FlightVariationOverTime__FinishedFunc_Params
{
};

// Function BP_Refleks_Proj2.BP_Refleks_Proj2_C.FlightVariationOverTime__UpdateFunc
struct ABP_Refleks_Proj2_C_FlightVariationOverTime__UpdateFunc_Params
{
};

// Function BP_Refleks_Proj2.BP_Refleks_Proj2_C.TowDirectionInput
struct ABP_Refleks_Proj2_C_TowDirectionInput_Params
{
	struct FVector                                     TowDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Refleks_Proj2.BP_Refleks_Proj2_C.ReceiveBeginPlay
struct ABP_Refleks_Proj2_C_ReceiveBeginPlay_Params
{
};

// Function BP_Refleks_Proj2.BP_Refleks_Proj2_C.OnImpact
struct ABP_Refleks_Proj2_C_OnImpact_Params
{
	class AActor*                                      SelfActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_Refleks_Proj2.BP_Refleks_Proj2_C.ExecuteUbergraph_BP_Refleks_Proj2
struct ABP_Refleks_Proj2_C_ExecuteUbergraph_BP_Refleks_Proj2_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
