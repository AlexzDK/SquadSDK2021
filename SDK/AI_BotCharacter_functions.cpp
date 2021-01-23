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

// Function AI_BotCharacter.AI_BotCharacter_C.Pawn Seen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   In_Pawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_BotCharacter_C::Pawn_Seen(class APawn* In_Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_BotCharacter.AI_BotCharacter_C.Pawn Seen");

	AAI_BotCharacter_C_Pawn_Seen_Params params;
	params.In_Pawn = In_Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_BotCharacter.AI_BotCharacter_C.Calculate Perception
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_BotCharacter_C::Calculate_Perception(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_BotCharacter.AI_BotCharacter_C.Calculate Perception");

	AAI_BotCharacter_C_Calculate_Perception_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_BotCharacter.AI_BotCharacter_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_3_SeePawnDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_BotCharacter_C::BndEvt__PawnSensing_K2Node_ComponentBoundEvent_3_SeePawnDelegate__DelegateSignature(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_BotCharacter.AI_BotCharacter_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_3_SeePawnDelegate__DelegateSignature");

	AAI_BotCharacter_C_BndEvt__PawnSensing_K2Node_ComponentBoundEvent_3_SeePawnDelegate__DelegateSignature_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_BotCharacter.AI_BotCharacter_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_4_HearNoiseDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class APawn*                   Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_BotCharacter_C::BndEvt__PawnSensing_K2Node_ComponentBoundEvent_4_HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_BotCharacter.AI_BotCharacter_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_4_HearNoiseDelegate__DelegateSignature");

	AAI_BotCharacter_C_BndEvt__PawnSensing_K2Node_ComponentBoundEvent_4_HearNoiseDelegate__DelegateSignature_Params params;
	params.Instigator = Instigator;
	params.Location = Location;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_BotCharacter.AI_BotCharacter_C.Invalidate Sight Pawn
// (BlueprintCallable, BlueprintEvent)
void AAI_BotCharacter_C::Invalidate_Sight_Pawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_BotCharacter.AI_BotCharacter_C.Invalidate Sight Pawn");

	AAI_BotCharacter_C_Invalidate_Sight_Pawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_BotCharacter.AI_BotCharacter_C.ExecuteUbergraph_AI_BotCharacter
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_BotCharacter_C::ExecuteUbergraph_AI_BotCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_BotCharacter.AI_BotCharacter_C.ExecuteUbergraph_AI_BotCharacter");

	AAI_BotCharacter_C_ExecuteUbergraph_AI_BotCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_BotCharacter.AI_BotCharacter_C.Target Lost__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_BotCharacter_C::Target_Lost__DelegateSignature(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_BotCharacter.AI_BotCharacter_C.Target Lost__DelegateSignature");

	AAI_BotCharacter_C_Target_Lost__DelegateSignature_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_BotCharacter.AI_BotCharacter_C.Target Seen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_BotCharacter_C::Target_Seen__DelegateSignature(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_BotCharacter.AI_BotCharacter_C.Target Seen__DelegateSignature");

	AAI_BotCharacter_C_Target_Seen__DelegateSignature_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
