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

// Function W_WorldIcon.W_WorldIcon_C.Set Texture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_WorldIcon_C::Set_Texture(class UTexture2D* Texture, const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WorldIcon.W_WorldIcon_C.Set Texture");

	UW_WorldIcon_C_Set_Texture_Params params;
	params.Texture = Texture;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_WorldIcon.W_WorldIcon_C.Do Fade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Fade_In                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_WorldIcon_C::Do_Fade(bool Fade_In)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WorldIcon.W_WorldIcon_C.Do Fade");

	UW_WorldIcon_C_Do_Fade_Params params;
	params.Fade_In = Fade_In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_WorldIcon.W_WorldIcon_C.ExecuteUbergraph_W_WorldIcon
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_WorldIcon_C::ExecuteUbergraph_W_WorldIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WorldIcon.W_WorldIcon_C.ExecuteUbergraph_W_WorldIcon");

	UW_WorldIcon_C_ExecuteUbergraph_W_WorldIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
