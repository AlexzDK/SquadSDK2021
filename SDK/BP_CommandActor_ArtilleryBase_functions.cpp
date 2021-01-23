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

// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Get Prewarn Barrage Array
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Out_Locations                  (Parm, OutParm, ZeroConstructor)
void ABP_CommandActor_ArtilleryBase_C::Get_Prewarn_Barrage_Array(TArray<struct FVector>* Out_Locations)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Get Prewarn Barrage Array");

	ABP_CommandActor_ArtilleryBase_C_Get_Prewarn_Barrage_Array_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out_Locations != nullptr)
		*Out_Locations = params.Out_Locations;

}


// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Get Main Barrage Array
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Out_Locations                  (Parm, OutParm, ZeroConstructor)
void ABP_CommandActor_ArtilleryBase_C::Get_Main_Barrage_Array(TArray<struct FVector>* Out_Locations)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Get Main Barrage Array");

	ABP_CommandActor_ArtilleryBase_C_Get_Main_Barrage_Array_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out_Locations != nullptr)
		*Out_Locations = params.Out_Locations;

}


// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Init Artillery
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_CommandActor_ArtilleryBase_C::Init_Artillery()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Init Artillery");

	ABP_CommandActor_ArtilleryBase_C_Init_Artillery_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Get Distance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Dist                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CommandActor_ArtilleryBase_C::Get_Distance(float* Dist)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Get Distance");

	ABP_CommandActor_ArtilleryBase_C_Get_Distance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dist != nullptr)
		*Dist = params.Dist;

}


// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Get Radius
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CommandActor_ArtilleryBase_C::Get_Radius(float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Get Radius");

	ABP_CommandActor_ArtilleryBase_C_Get_Radius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;

}


// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Randomise Location
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_CommandActor_ArtilleryBase_C::Randomise_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Randomise Location");

	ABP_CommandActor_ArtilleryBase_C_Randomise_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.OnRep_Start Move
// (BlueprintCallable, BlueprintEvent)
void ABP_CommandActor_ArtilleryBase_C::OnRep_Start_Move()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.OnRep_Start Move");

	ABP_CommandActor_ArtilleryBase_C_OnRep_Start_Move_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Get Landscape Hit Location
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CommandActor_ArtilleryBase_C::Get_Landscape_Hit_Location(struct FVector* Location, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Get Landscape Hit Location");

	ABP_CommandActor_ArtilleryBase_C_Get_Landscape_Hit_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_CommandActor_ArtilleryBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.ReceiveBeginPlay");

	ABP_CommandActor_ArtilleryBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Server Projectiles
// (BlueprintCallable, BlueprintEvent)
void ABP_CommandActor_ArtilleryBase_C::Server_Projectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Server Projectiles");

	ABP_CommandActor_ArtilleryBase_C_Server_Projectiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Fire Projectiles
// (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Locations                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ABP_CommandActor_ArtilleryBase_C::Fire_Projectiles(TArray<struct FVector> Locations)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Fire Projectiles");

	ABP_CommandActor_ArtilleryBase_C_Fire_Projectiles_Params params;
	params.Locations = Locations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Server End Active Duration
// (BlueprintCallable, BlueprintEvent)
void ABP_CommandActor_ArtilleryBase_C::Server_End_Active_Duration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Server End Active Duration");

	ABP_CommandActor_ArtilleryBase_C_Server_End_Active_Duration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Server Start Active Duration
// (BlueprintCallable, BlueprintEvent)
void ABP_CommandActor_ArtilleryBase_C::Server_Start_Active_Duration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Server Start Active Duration");

	ABP_CommandActor_ArtilleryBase_C_Server_Start_Active_Duration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Server Prewarning Projectiles
// (BlueprintCallable, BlueprintEvent)
void ABP_CommandActor_ArtilleryBase_C::Server_Prewarning_Projectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.Server Prewarning Projectiles");

	ABP_CommandActor_ArtilleryBase_C_Server_Prewarning_Projectiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.ExecuteUbergraph_BP_CommandActor_ArtilleryBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CommandActor_ArtilleryBase_C::ExecuteUbergraph_BP_CommandActor_ArtilleryBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommandActor_ArtilleryBase.BP_CommandActor_ArtilleryBase_C.ExecuteUbergraph_BP_CommandActor_ArtilleryBase");

	ABP_CommandActor_ArtilleryBase_C_ExecuteUbergraph_BP_CommandActor_ArtilleryBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
