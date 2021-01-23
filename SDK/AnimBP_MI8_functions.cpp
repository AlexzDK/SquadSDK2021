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

// Function AnimBP_MI8.AnimBP_MI8_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UAnimBP_MI8_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_MI8.AnimBP_MI8_C.AnimGraph");

	UAnimBP_MI8_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function AnimBP_MI8.AnimBP_MI8_C.RPMtoDegPerSec
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          RPM                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MI8_C*               Helicopter                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Main                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          DegPerSec                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnimBP_MI8_C::RPMtoDegPerSec(float RPM, class ABP_MI8_C* Helicopter, bool Main, float* DegPerSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_MI8.AnimBP_MI8_C.RPMtoDegPerSec");

	UAnimBP_MI8_C_RPMtoDegPerSec_Params params;
	params.RPM = RPM;
	params.Helicopter = Helicopter;
	params.Main = Main;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DegPerSec != nullptr)
		*DegPerSec = params.DegPerSec;

}


// Function AnimBP_MI8.AnimBP_MI8_C.GerCurrentRotorRPM
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_MI8_C*               Helicopter                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Main                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          RPM                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnimBP_MI8_C::GerCurrentRotorRPM(class ABP_MI8_C* Helicopter, bool Main, float* RPM)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_MI8.AnimBP_MI8_C.GerCurrentRotorRPM");

	UAnimBP_MI8_C_GerCurrentRotorRPM_Params params;
	params.Helicopter = Helicopter;
	params.Main = Main;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RPM != nullptr)
		*RPM = params.RPM;

}


// Function AnimBP_MI8.AnimBP_MI8_C.GetBladesScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_MI8_C*               Helicopter                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Main                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Blades                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 BlurBlades                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnimBP_MI8_C::GetBladesScale(class ABP_MI8_C* Helicopter, bool Main, struct FVector* Blades, struct FVector* BlurBlades)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_MI8.AnimBP_MI8_C.GetBladesScale");

	UAnimBP_MI8_C_GetBladesScale_Params params;
	params.Helicopter = Helicopter;
	params.Main = Main;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Blades != nullptr)
		*Blades = params.Blades;
	if (BlurBlades != nullptr)
		*BlurBlades = params.BlurBlades;

}


// Function AnimBP_MI8.AnimBP_MI8_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnimBP_MI8_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_MI8.AnimBP_MI8_C.BlueprintUpdateAnimation");

	UAnimBP_MI8_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimBP_MI8.AnimBP_MI8_C.ExecuteUbergraph_AnimBP_MI8
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnimBP_MI8_C::ExecuteUbergraph_AnimBP_MI8(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_MI8.AnimBP_MI8_C.ExecuteUbergraph_AnimBP_MI8");

	UAnimBP_MI8_C_ExecuteUbergraph_AnimBP_MI8_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
