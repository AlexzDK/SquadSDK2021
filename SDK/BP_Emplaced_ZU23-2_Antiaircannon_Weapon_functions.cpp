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

// Function BP_Emplaced_ZU23-2_Antiaircannon_Weapon.BP_Emplaced_ZU23-2_Antiaircannon_Weapon_C.BlueprintOnFire
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Origin                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Emplaced_ZU23_2_Antiaircannon_Weapon_C::BlueprintOnFire(const struct FVector& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Emplaced_ZU23-2_Antiaircannon_Weapon.BP_Emplaced_ZU23-2_Antiaircannon_Weapon_C.BlueprintOnFire");

	ABP_Emplaced_ZU23_2_Antiaircannon_Weapon_C_BlueprintOnFire_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Emplaced_ZU23-2_Antiaircannon_Weapon.BP_Emplaced_ZU23-2_Antiaircannon_Weapon_C.ExecuteUbergraph_BP_Emplaced_ZU23-2_Antiaircannon_Weapon
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Emplaced_ZU23_2_Antiaircannon_Weapon_C::ExecuteUbergraph_BP_Emplaced_ZU23_2_Antiaircannon_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Emplaced_ZU23-2_Antiaircannon_Weapon.BP_Emplaced_ZU23-2_Antiaircannon_Weapon_C.ExecuteUbergraph_BP_Emplaced_ZU23-2_Antiaircannon_Weapon");

	ABP_Emplaced_ZU23_2_Antiaircannon_Weapon_C_ExecuteUbergraph_BP_Emplaced_ZU23_2_Antiaircannon_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
