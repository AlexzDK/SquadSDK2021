#pragma once

// Name: Squad, Version: 13-01-2021


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function IDeployableEvents.IDeployableEvents_C.Client Failed Item Placement
struct UIDeployableEvents_C_Client_Failed_Item_Placement_Params
{
};

// Function IDeployableEvents.IDeployableEvents_C.Server Placed Item
struct UIDeployableEvents_C_Server_Placed_Item_Params
{
	class ASQDeployableItem*                           Deployable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
