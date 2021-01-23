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

// BlueprintGeneratedClass BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C
// 0x0038 (FullSize[0x0458] - InheritedSize[0x0420])
class ABP_GenericInfantryAmmoBag_C : public ASQDeployableAmmoBag
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0420(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        _3DWorldIcon;                                              // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQMapIconComponent*                         SQMapIcon;                                                 // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      UIModelNoPickup;                                           // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      UIModelWithPickup;                                         // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GenericInfantryAmmoBag.BP_GenericInfantryAmmoBag_C");
		return ptr;
	}



	void BP_PickedUp(class ASQEquipableItem* EquippableAmmoBag);
	void BPHidePrompt();
	void RemovedFromPlayersPlacedList();
	void Player_Left_Radius(class APlayerController* Player);
	void Player_Enter_Radius(class APlayerController* Player, bool Can_Pickup);
	void Pickup_Item(class APlayerController* Player);
	void ExecuteUbergraph_BP_GenericInfantryAmmoBag(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
