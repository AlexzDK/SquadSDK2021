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

// Function BTR_Wheel_Right.BTR_Wheel_Right_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABTR_Wheel_Right_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTR_Wheel_Right.BTR_Wheel_Right_C.ReceiveBeginPlay");

	ABTR_Wheel_Right_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTR_Wheel_Right.BTR_Wheel_Right_C.ExecuteUbergraph_BTR_Wheel_Right
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABTR_Wheel_Right_C::ExecuteUbergraph_BTR_Wheel_Right(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTR_Wheel_Right.BTR_Wheel_Right_C.ExecuteUbergraph_BTR_Wheel_Right");

	ABTR_Wheel_Right_C_ExecuteUbergraph_BTR_Wheel_Right_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
