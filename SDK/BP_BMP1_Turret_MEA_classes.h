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

// BlueprintGeneratedClass BP_BMP1_Turret_MEA.BP_BMP1_Turret_MEA_C
// 0x0010 (FullSize[0x04C8] - InheritedSize[0x04B8])
class ABP_BMP1_Turret_MEA_C : public ABP_GenericVehicleClosedTurret_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        AT3;                                                       // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BMP1_Turret_MEA.BP_BMP1_Turret_MEA_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void AT3_OnReloaded();
	void AT3_OnFire();
	void ExecuteUbergraph_BP_BMP1_Turret_MEA(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
