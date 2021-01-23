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

// Function BP_PopUp_Target_Interior.BP_PopUp_Target_Interior_C.PopUp
struct ABP_PopUp_Target_Interior_C_PopUp_Params
{
};

// Function BP_PopUp_Target_Interior.BP_PopUp_Target_Interior_C.UserConstructionScript
struct ABP_PopUp_Target_Interior_C_UserConstructionScript_Params
{
};

// Function BP_PopUp_Target_Interior.BP_PopUp_Target_Interior_C.ReceiveAnyDamage
struct ABP_PopUp_Target_Interior_C_ReceiveAnyDamage_Params
{
	float                                              damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PopUp_Target_Interior.BP_PopUp_Target_Interior_C.ReceiveBeginPlay
struct ABP_PopUp_Target_Interior_C_ReceiveBeginPlay_Params
{
};

// Function BP_PopUp_Target_Interior.BP_PopUp_Target_Interior_C.ReceiveTick
struct ABP_PopUp_Target_Interior_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PopUp_Target_Interior.BP_PopUp_Target_Interior_C.ExecuteUbergraph_BP_PopUp_Target_Interior
struct ABP_PopUp_Target_Interior_C_ExecuteUbergraph_BP_PopUp_Target_Interior_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PopUp_Target_Interior.BP_PopUp_Target_Interior_C.TargetDropped__DelegateSignature
struct ABP_PopUp_Target_Interior_C_TargetDropped__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
