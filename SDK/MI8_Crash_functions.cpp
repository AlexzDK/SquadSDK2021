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

// Function MI8_Crash.MI8_Crash_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMI8_Crash_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MI8_Crash.MI8_Crash_C.ReceiveBeginPlay");

	AMI8_Crash_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MI8_Crash.MI8_Crash_C.BndEvt__ParticleSystem4_K2Node_ComponentBoundEvent_1_ParticleSpawnSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMI8_Crash_C::BndEvt__ParticleSystem4_K2Node_ComponentBoundEvent_1_ParticleSpawnSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function MI8_Crash.MI8_Crash_C.BndEvt__ParticleSystem4_K2Node_ComponentBoundEvent_1_ParticleSpawnSignature__DelegateSignature");

	AMI8_Crash_C_BndEvt__ParticleSystem4_K2Node_ComponentBoundEvent_1_ParticleSpawnSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.Location = Location;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MI8_Crash.MI8_Crash_C.ExecuteUbergraph_MI8_Crash
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMI8_Crash_C::ExecuteUbergraph_MI8_Crash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MI8_Crash.MI8_Crash_C.ExecuteUbergraph_MI8_Crash");

	AMI8_Crash_C_ExecuteUbergraph_MI8_Crash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
