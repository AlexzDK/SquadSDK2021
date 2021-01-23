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

// Function BP_Ural_375_ZU23.BP_Ural_375_ZU23_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Ural_375_ZU23_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ural_375_ZU23.BP_Ural_375_ZU23_C.UserConstructionScript");

	ABP_Ural_375_ZU23_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
