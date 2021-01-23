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

// Function AI_BotCharacter.AI_BotCharacter_C.Pawn Seen
struct AAI_BotCharacter_C_Pawn_Seen_Params
{
	class APawn*                                       In_Pawn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_BotCharacter.AI_BotCharacter_C.Calculate Perception
struct AAI_BotCharacter_C_Calculate_Perception_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_BotCharacter.AI_BotCharacter_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_3_SeePawnDelegate__DelegateSignature
struct AAI_BotCharacter_C_BndEvt__PawnSensing_K2Node_ComponentBoundEvent_3_SeePawnDelegate__DelegateSignature_Params
{
	class APawn*                                       Pawn;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_BotCharacter.AI_BotCharacter_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_4_HearNoiseDelegate__DelegateSignature
struct AAI_BotCharacter_C_BndEvt__PawnSensing_K2Node_ComponentBoundEvent_4_HearNoiseDelegate__DelegateSignature_Params
{
	class APawn*                                       Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Volume;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_BotCharacter.AI_BotCharacter_C.Invalidate Sight Pawn
struct AAI_BotCharacter_C_Invalidate_Sight_Pawn_Params
{
};

// Function AI_BotCharacter.AI_BotCharacter_C.ExecuteUbergraph_AI_BotCharacter
struct AAI_BotCharacter_C_ExecuteUbergraph_AI_BotCharacter_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_BotCharacter.AI_BotCharacter_C.Target Lost__DelegateSignature
struct AAI_BotCharacter_C_Target_Lost__DelegateSignature_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_BotCharacter.AI_BotCharacter_C.Target Seen__DelegateSignature
struct AAI_BotCharacter_C_Target_Seen__DelegateSignature_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
