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

// Function SquadCableActor.SquadCableActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ASquadCableActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadCableActor.SquadCableActor_C.ReceiveBeginPlay");

	ASquadCableActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SquadCableActor.SquadCableActor_C.ExecuteUbergraph_SquadCableActor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASquadCableActor_C::ExecuteUbergraph_SquadCableActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadCableActor.SquadCableActor_C.ExecuteUbergraph_SquadCableActor");

	ASquadCableActor_C_ExecuteUbergraph_SquadCableActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
