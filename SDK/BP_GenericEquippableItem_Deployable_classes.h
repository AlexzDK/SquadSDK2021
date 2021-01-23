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

// BlueprintGeneratedClass BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C
// 0x0028 (FullSize[0x04A8] - InheritedSize[0x0480])
class ABP_GenericEquippableItem_Deployable_C : public ABP_GenericEquippableItem_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0480(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bIsPlacingDeployable;                                      // 0x0488(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               BPCachedbIsPlacingDeployable;                              // 0x0489(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5VNO[0x6];                                     // 0x048A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                DeployAnimTimerHandle;                                     // 0x0490(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               bShouldReequip;                                            // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XQYB[0x7];                                     // 0x0499(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASQDeployable*                               ActiveGhostRef;                                            // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GenericEquippableItem_Deployable.BP_GenericEquippableItem_Deployable_C");
		return ptr;
	}



	void BP_ServerPlacedItem(class ASQDeployable* Deployable);
	void ShowDeployable();
	void HideDeployable();
	void PlayDeploymentAnimation(bool bShouldHideEquippable);
	void StopPlacementAnimation();
	void DisplayFailureMessageToClient(ESQInvalidPlacementReason Reason);
	void IsGhostPlacementValid(bool* IsValid, ESQInvalidPlacementReason* Reason);
	void OnRep_bIsPlacingDeployable();
	void PlaceGhostDeployable();
	void HideGhostDeployable();
	void ShowGhostDeployable();
	void BlueprintOnEquipped();
	void BlueprintOnUnequipped();
	void ClientSwapWeapon();
	void BPBeginUse();
	void ServerBeginDeployablePlacement();
	void ServerEndDeployablePlacement();
	void ClientFailedToPlaceItem();
	void ClientShowGhost();
	void OnSoldierDeath();
	void Client_Failed_Item_Placement();
	void Server_Placed_Item(class ASQDeployableItem* Deployable);
	void ExecuteUbergraph_BP_GenericEquippableItem_Deployable(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
