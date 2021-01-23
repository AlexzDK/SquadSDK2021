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

// BlueprintGeneratedClass BP_GameMode.BP_GameMode_C
// 0x0010 (FullSize[0x0738] - InheritedSize[0x0728])
class ABP_GameMode_C : public ASQGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0728(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameMode.BP_GameMode_C");
		return ptr;
	}



	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void BP_InvalidatePlacement(class ASQPlayerController* PlayerController, class ASQDeployable* Deployable, ESQInvalidPlacementReason FailureReason);
	void BP_InitializeDeployableFromEquippable(class ASQDeployableItem* DeployableItem, class ASQEquipableItem* Equippable);
	void BP_FailPlaceDeployableFromEquippable(class ASQEquipableItem* Equippable);
	void ExecuteUbergraph_BP_GameMode(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
