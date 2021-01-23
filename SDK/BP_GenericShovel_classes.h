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

// BlueprintGeneratedClass BP_GenericShovel.BP_GenericShovel_C
// 0x0048 (FullSize[0x04C8] - InheritedSize[0x0480])
class ABP_GenericShovel_C : public ABP_GenericEquippableItem_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0480(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<TEnumAsByte<EObjectTypeQuery>>              Interact_Object_Types;                                     // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Trace_Length;                                              // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsCurrentlyBuilding;                                      // 0x049C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_613H[0x3];                                     // 0x049D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              Objects_To_Ignore;                                         // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bCouldBuild;                                               // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JQJB[0x3];                                     // 0x04B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BuildHealthAmount;                                         // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TraceSphereRadius;                                         // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsBuilding;                                                // 0x04BC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               bIsRemovingHealth;                                         // 0x04BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsDestroying;                                              // 0x04BE(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               BPCachedDig;                                               // 0x04BF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              BuildPercentage;                                           // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DestroyPercentage;                                         // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GenericShovel.BP_GenericShovel_C");
		return ptr;
	}



	void OnRep_IsDestroying();
	void OnRep_IsBuilding();
	void CleanUpBuildingState();
	void TryShovel(class ASQDeployable** Deployable);
	void MovementBlock(bool* AllowHit);
	void HitDeployable();
	void ApplyHealth(class ASQDeployable* DeployableToBuild, float HealAmount);
	void BPBeginUse();
	void BPEndUse();
	void BPBeginAltUse();
	void BPEndAltUse();
	void BlueprintOnUnequip();
	void ServerStartBuilding(bool IsConstructing);
	void ServerStopBuilding();
	void MovementWasBlocked();
	void Event_Dig(bool Digging);
	void Event_Destroy(bool Destroying);
	void ExecuteUbergraph_BP_GenericShovel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
