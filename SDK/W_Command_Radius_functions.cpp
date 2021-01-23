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

// Function W_Command_Radius.W_Command_Radius_C.Get Pixel Distance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Command_Radius_C::Get_Pixel_Distance(float* distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Command_Radius.W_Command_Radius_C.Get Pixel Distance");

	UW_Command_Radius_C_Get_Pixel_Distance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (distance != nullptr)
		*distance = params.distance;

}


// Function W_Command_Radius.W_Command_Radius_C.Get World Distance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          World_Distance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Command_Radius_C::Get_World_Distance(float* World_Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Command_Radius.W_Command_Radius_C.Get World Distance");

	UW_Command_Radius_C_Get_World_Distance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (World_Distance != nullptr)
		*World_Distance = params.World_Distance;

}


// Function W_Command_Radius.W_Command_Radius_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Command_Radius_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Command_Radius.W_Command_Radius_C.Tick");

	UW_Command_Radius_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Command_Radius.W_Command_Radius_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Command_Radius_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Command_Radius.W_Command_Radius_C.Construct");

	UW_Command_Radius_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Command_Radius.W_Command_Radius_C.Spawn Command Actor_2
// (BlueprintCallable, BlueprintEvent)
void UW_Command_Radius_C::Spawn_Command_Actor_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Command_Radius.W_Command_Radius_C.Spawn Command Actor_2");

	UW_Command_Radius_C_Spawn_Command_Actor_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Command_Radius.W_Command_Radius_C.ExecuteUbergraph_W_Command_Radius
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Command_Radius_C::ExecuteUbergraph_W_Command_Radius(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Command_Radius.W_Command_Radius_C.ExecuteUbergraph_W_Command_Radius");

	UW_Command_Radius_C_ExecuteUbergraph_W_Command_Radius_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
