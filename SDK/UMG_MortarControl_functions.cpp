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

// Function UMG_MortarControl.UMG_MortarControl_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_MortarControl_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MortarControl.UMG_MortarControl_C.Construct");

	UUMG_MortarControl_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_MortarControl.UMG_MortarControl_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_MortarControl_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MortarControl.UMG_MortarControl_C.Tick");

	UUMG_MortarControl_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_MortarControl.UMG_MortarControl_C.BPInit
// (Event, Public, BlueprintEvent)
void UUMG_MortarControl_C::BPInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MortarControl.UMG_MortarControl_C.BPInit");

	UUMG_MortarControl_C_BPInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_MortarControl.UMG_MortarControl_C.ExecuteUbergraph_UMG_MortarControl
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_MortarControl_C::ExecuteUbergraph_UMG_MortarControl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MortarControl.UMG_MortarControl_C.ExecuteUbergraph_UMG_MortarControl");

	UUMG_MortarControl_C_ExecuteUbergraph_UMG_MortarControl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
