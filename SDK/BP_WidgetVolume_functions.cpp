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

// Function BP_WidgetVolume.BP_WidgetVolume_C.WIdget Volume Overlapped
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WidgetVolume_C::WIdget_Volume_Overlapped(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetVolume.BP_WidgetVolume_C.WIdget Volume Overlapped");

	ABP_WidgetVolume_C_WIdget_Volume_Overlapped_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WidgetVolume.BP_WidgetVolume_C.Remove Other Volume Widgets
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_WidgetVolume_C::Remove_Other_Volume_Widgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetVolume.BP_WidgetVolume_C.Remove Other Volume Widgets");

	ABP_WidgetVolume_C_Remove_Other_Volume_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WidgetVolume.BP_WidgetVolume_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_WidgetVolume_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetVolume.BP_WidgetVolume_C.UserConstructionScript");

	ABP_WidgetVolume_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WidgetVolume.BP_WidgetVolume_C.BndEvt__Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_WidgetVolume_C::BndEvt__Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetVolume.BP_WidgetVolume_C.BndEvt__Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_WidgetVolume_C_BndEvt__Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WidgetVolume.BP_WidgetVolume_C.Start Widget
// (BlueprintCallable, BlueprintEvent)
void ABP_WidgetVolume_C::Start_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetVolume.BP_WidgetVolume_C.Start Widget");

	ABP_WidgetVolume_C_Start_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WidgetVolume.BP_WidgetVolume_C.DisableWidget
// (BlueprintCallable, BlueprintEvent)
void ABP_WidgetVolume_C::DisableWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetVolume.BP_WidgetVolume_C.DisableWidget");

	ABP_WidgetVolume_C_DisableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WidgetVolume.BP_WidgetVolume_C.EnableWidget
// (BlueprintCallable, BlueprintEvent)
void ABP_WidgetVolume_C::EnableWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetVolume.BP_WidgetVolume_C.EnableWidget");

	ABP_WidgetVolume_C_EnableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WidgetVolume.BP_WidgetVolume_C.ExecuteUbergraph_BP_WidgetVolume
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WidgetVolume_C::ExecuteUbergraph_BP_WidgetVolume(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetVolume.BP_WidgetVolume_C.ExecuteUbergraph_BP_WidgetVolume");

	ABP_WidgetVolume_C_ExecuteUbergraph_BP_WidgetVolume_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
