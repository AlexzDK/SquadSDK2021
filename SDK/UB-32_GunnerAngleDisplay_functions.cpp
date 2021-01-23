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

// Function UB-32_GunnerAngleDisplay.UB-32_GunnerAngleDisplay_C.AngleRotationDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUB_32_GunnerAngleDisplay_C::AngleRotationDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UB-32_GunnerAngleDisplay.UB-32_GunnerAngleDisplay_C.AngleRotationDisplay");

	UUB_32_GunnerAngleDisplay_C_AngleRotationDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UB-32_GunnerAngleDisplay.UB-32_GunnerAngleDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUB_32_GunnerAngleDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UB-32_GunnerAngleDisplay.UB-32_GunnerAngleDisplay_C.Construct");

	UUB_32_GunnerAngleDisplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UB-32_GunnerAngleDisplay.UB-32_GunnerAngleDisplay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUB_32_GunnerAngleDisplay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UB-32_GunnerAngleDisplay.UB-32_GunnerAngleDisplay_C.Tick");

	UUB_32_GunnerAngleDisplay_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UB-32_GunnerAngleDisplay.UB-32_GunnerAngleDisplay_C.ExecuteUbergraph_UB-32_GunnerAngleDisplay
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUB_32_GunnerAngleDisplay_C::ExecuteUbergraph_UB_32_GunnerAngleDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UB-32_GunnerAngleDisplay.UB-32_GunnerAngleDisplay_C.ExecuteUbergraph_UB-32_GunnerAngleDisplay");

	UUB_32_GunnerAngleDisplay_C_ExecuteUbergraph_UB_32_GunnerAngleDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
