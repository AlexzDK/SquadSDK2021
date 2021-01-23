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

// BlueprintGeneratedClass BP_GenericAmmocrate.BP_GenericAmmocrate_C
// 0x0010 (FullSize[0x03F0] - InheritedSize[0x03E0])
class ABP_GenericAmmocrate_C : public ABP_SmartDeployable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USQMapIconComponent*                         SquadMapIcon;                                              // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GenericAmmocrate.BP_GenericAmmocrate_C");
		return ptr;
	}



	bool CanRearmPawn(class APawn* Rearmer);
	bool CanRearmWeapon(class ASQEquipableItem* Weapon);
	bool BindEventToAmmoUpdated(const struct FScriptDelegate& Delegate);
	bool ConsumeAmmo(float AmmoRequired);
	float GetAmmo();
	struct FString GetRearmNoAmmoString();
	struct FString GetRearmSuccessString();
	ESQRearmType GetRearmType();
	bool UnbindEventToAmmoUpdated(const struct FScriptDelegate& Delegate);
	void SetTeam(int Team);
	void ExecuteUbergraph_BP_GenericAmmocrate(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
