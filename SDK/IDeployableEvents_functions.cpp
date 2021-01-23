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

// Function IDeployableEvents.IDeployableEvents_C.Client Failed Item Placement
// (Public, BlueprintCallable, BlueprintEvent)
void UIDeployableEvents_C::Client_Failed_Item_Placement()
{
	static auto fn = UObject::FindObject<UFunction>("Function IDeployableEvents.IDeployableEvents_C.Client Failed Item Placement");

	UIDeployableEvents_C_Client_Failed_Item_Placement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IDeployableEvents.IDeployableEvents_C.Server Placed Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQDeployableItem*       Deployable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIDeployableEvents_C::Server_Placed_Item(class ASQDeployableItem* Deployable)
{
	static auto fn = UObject::FindObject<UFunction>("Function IDeployableEvents.IDeployableEvents_C.Server Placed Item");

	UIDeployableEvents_C_Server_Placed_Item_Params params;
	params.Deployable = Deployable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
