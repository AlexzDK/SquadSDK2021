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

// Function BP_M18Smoke_Parent.BP_M18Smoke_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_M18Smoke_Parent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M18Smoke_Parent.BP_M18Smoke_Parent_C.UserConstructionScript");

	ABP_M18Smoke_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
