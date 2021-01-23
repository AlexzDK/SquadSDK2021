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

// Function W_InteractableList_Deployable.W_InteractableList_Deployable_C.Same Team
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UW_InteractableList_Deployable_C::Same_Team()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Deployable.W_InteractableList_Deployable_C.Same Team");

	UW_InteractableList_Deployable_C_Same_Team_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_InteractableList_Deployable.W_InteractableList_Deployable_C.Get Fade Animation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Fade_Animation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableList_Deployable_C::Get_Fade_Animation(class UWidgetAnimation** Fade_Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Deployable.W_InteractableList_Deployable_C.Get Fade Animation");

	UW_InteractableList_Deployable_C_Get_Fade_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Fade_Animation != nullptr)
		*Fade_Animation = params.Fade_Animation;

}


// Function W_InteractableList_Deployable.W_InteractableList_Deployable_C.Get Interact List
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UVerticalBox*            InteractList                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableList_Deployable_C::Get_Interact_List(class UVerticalBox** InteractList)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Deployable.W_InteractableList_Deployable_C.Get Interact List");

	UW_InteractableList_Deployable_C_Get_Interact_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractList != nullptr)
		*InteractList = params.InteractList;

}


// Function W_InteractableList_Deployable.W_InteractableList_Deployable_C.Create Contextual Data
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Force_Update                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_InteractableList_Deployable_C::Create_Contextual_Data(bool* Force_Update)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Deployable.W_InteractableList_Deployable_C.Create Contextual Data");

	UW_InteractableList_Deployable_C_Create_Contextual_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Force_Update != nullptr)
		*Force_Update = params.Force_Update;

}


// Function W_InteractableList_Deployable.W_InteractableList_Deployable_C.Is Deployable Built
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Is_Built                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Full_Health                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bCanUnbuild                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_InteractableList_Deployable_C::Is_Deployable_Built(bool* Is_Built, bool* Full_Health, bool* bCanUnbuild)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Deployable.W_InteractableList_Deployable_C.Is Deployable Built");

	UW_InteractableList_Deployable_C_Is_Deployable_Built_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_Built != nullptr)
		*Is_Built = params.Is_Built;
	if (Full_Health != nullptr)
		*Full_Health = params.Full_Health;
	if (bCanUnbuild != nullptr)
		*bCanUnbuild = params.bCanUnbuild;

}


// Function W_InteractableList_Deployable.W_InteractableList_Deployable_C.Soldier Has Shovel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Shovel_Equipped                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Owns_Shovel                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_InteractableList_Deployable_C::Soldier_Has_Shovel(bool* Shovel_Equipped, bool* Owns_Shovel)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Deployable.W_InteractableList_Deployable_C.Soldier Has Shovel");

	UW_InteractableList_Deployable_C_Soldier_Has_Shovel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Shovel_Equipped != nullptr)
		*Shovel_Equipped = params.Shovel_Equipped;
	if (Owns_Shovel != nullptr)
		*Owns_Shovel = params.Owns_Shovel;

}


// Function W_InteractableList_Deployable.W_InteractableList_Deployable_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableList_Deployable_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Deployable.W_InteractableList_Deployable_C.Tick");

	UW_InteractableList_Deployable_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableList_Deployable.W_InteractableList_Deployable_C.Set Custom Data
// (BlueprintCallable, BlueprintEvent)
void UW_InteractableList_Deployable_C::Set_Custom_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Deployable.W_InteractableList_Deployable_C.Set Custom Data");

	UW_InteractableList_Deployable_C_Set_Custom_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableList_Deployable.W_InteractableList_Deployable_C.ExecuteUbergraph_W_InteractableList_Deployable
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableList_Deployable_C::ExecuteUbergraph_W_InteractableList_Deployable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableList_Deployable.W_InteractableList_Deployable_C.ExecuteUbergraph_W_InteractableList_Deployable");

	UW_InteractableList_Deployable_C_ExecuteUbergraph_W_InteractableList_Deployable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
