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

// Function BP_BTR82A_RUS_2A72_AP.BP_BTR82A_RUS_2A72_AP_C.ResumeAnimations
struct ABP_BTR82A_RUS_2A72_AP_C_ResumeAnimations_Params
{
	class UAnimMontage*                                TripodAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                WeaponAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                SoldierAnim;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTR82A_RUS_2A72_AP.BP_BTR82A_RUS_2A72_AP_C.StopAnimations
struct ABP_BTR82A_RUS_2A72_AP_C_StopAnimations_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTR82A_RUS_2A72_AP.BP_BTR82A_RUS_2A72_AP_C.PlayAnimations
struct ABP_BTR82A_RUS_2A72_AP_C_PlayAnimations_Params
{
	class UAnimMontage*                                TripodAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                WeaponAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                SoldierAnim;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TripodAnimTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WeaponAnimTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SoldierAnimTime;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTR82A_RUS_2A72_AP.BP_BTR82A_RUS_2A72_AP_C.BndEvt__SQTemperature_K2Node_ComponentBoundEvent_486_TemperatureIncrementDelegate__DelegateSignature
struct ABP_BTR82A_RUS_2A72_AP_C_BndEvt__SQTemperature_K2Node_ComponentBoundEvent_486_TemperatureIncrementDelegate__DelegateSignature_Params
{
	class USQTemperatureComponent*                     TriggeringComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TriggeringTemp;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsLowerTrigger;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BTR82A_RUS_2A72_AP.BP_BTR82A_RUS_2A72_AP_C.BlueprintOnFire
struct ABP_BTR82A_RUS_2A72_AP_C_BlueprintOnFire_Params
{
	struct FVector                                     Origin;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTR82A_RUS_2A72_AP.BP_BTR82A_RUS_2A72_AP_C.BlueprintOnReload
struct ABP_BTR82A_RUS_2A72_AP_C_BlueprintOnReload_Params
{
};

// Function BP_BTR82A_RUS_2A72_AP.BP_BTR82A_RUS_2A72_AP_C.SoldierEntersVehicle
struct ABP_BTR82A_RUS_2A72_AP_C_SoldierEntersVehicle_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTR82A_RUS_2A72_AP.BP_BTR82A_RUS_2A72_AP_C.SoldierLeavesVehicle
struct ABP_BTR82A_RUS_2A72_AP_C_SoldierLeavesVehicle_Params
{
	class ASQSoldier*                                  Soldier;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTR82A_RUS_2A72_AP.BP_BTR82A_RUS_2A72_AP_C.ExecuteUbergraph_BP_BTR82A_RUS_2A72_AP
struct ABP_BTR82A_RUS_2A72_AP_C_ExecuteUbergraph_BP_BTR82A_RUS_2A72_AP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
