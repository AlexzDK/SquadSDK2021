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

// Function W_MI8_CompassDisplay.W_MI8_CompassDisplay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MI8_CompassDisplay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MI8_CompassDisplay.W_MI8_CompassDisplay_C.Tick");

	UW_MI8_CompassDisplay_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MI8_CompassDisplay.W_MI8_CompassDisplay_C.InitializeCompass
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OwningVehicle                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MI8_CompassDisplay_C::InitializeCompass(class AActor* OwningVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MI8_CompassDisplay.W_MI8_CompassDisplay_C.InitializeCompass");

	UW_MI8_CompassDisplay_C_InitializeCompass_Params params;
	params.OwningVehicle = OwningVehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MI8_CompassDisplay.W_MI8_CompassDisplay_C.ExecuteUbergraph_W_MI8_CompassDisplay
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MI8_CompassDisplay_C::ExecuteUbergraph_W_MI8_CompassDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MI8_CompassDisplay.W_MI8_CompassDisplay_C.ExecuteUbergraph_W_MI8_CompassDisplay");

	UW_MI8_CompassDisplay_C_ExecuteUbergraph_W_MI8_CompassDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
