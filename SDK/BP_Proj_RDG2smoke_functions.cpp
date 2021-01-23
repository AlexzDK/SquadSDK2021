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

// Function BP_Proj_RDG2smoke.BP_Proj_RDG2smoke_C.CreateSmoke
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Proj_RDG2smoke_C::CreateSmoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Proj_RDG2smoke.BP_Proj_RDG2smoke_C.CreateSmoke");

	ABP_Proj_RDG2smoke_C_CreateSmoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
