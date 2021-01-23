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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IDeployableEvents.IDeployableEvents_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UIDeployableEvents_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IDeployableEvents.IDeployableEvents_C");
		return ptr;
	}



	void Client_Failed_Item_Placement();
	void Server_Placed_Item(class ASQDeployableItem* Deployable);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
