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

// Function URAL_Wheel_Right.URAL_Wheel_Right_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AURAL_Wheel_Right_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function URAL_Wheel_Right.URAL_Wheel_Right_C.ReceiveBeginPlay");

	AURAL_Wheel_Right_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function URAL_Wheel_Right.URAL_Wheel_Right_C.ExecuteUbergraph_URAL_Wheel_Right
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AURAL_Wheel_Right_C::ExecuteUbergraph_URAL_Wheel_Right(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function URAL_Wheel_Right.URAL_Wheel_Right_C.ExecuteUbergraph_URAL_Wheel_Right");

	AURAL_Wheel_Right_C_ExecuteUbergraph_URAL_Wheel_Right_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
