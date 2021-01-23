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

// BlueprintGeneratedClass BP_Deployable_DroneItem.BP_Deployable_DroneItem_C
// 0x0010 (FullSize[0x04B8] - InheritedSize[0x04A8])
class ABP_Deployable_DroneItem_C : public ABP_GenericEquippableItem_Deployable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      Action;                                                    // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Deployable_DroneItem.BP_Deployable_DroneItem_C");
		return ptr;
	}



	void BP_ServerPlacedItem(class ASQDeployable* Deployable);
	void Set_Drone_Action(class UClass* Action);
	void ExecuteUbergraph_BP_Deployable_DroneItem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
