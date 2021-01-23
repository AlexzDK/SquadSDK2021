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

// BlueprintGeneratedClass BP_Kornet_Safir.BP_Kornet_Safir_C
// 0x001C (FullSize[0x0B58] - InheritedSize[0x0B3C])
class ABP_Kornet_Safir_C : public ABP_GenericDeployableGuidedMissileWeapon_C
{
public:
	unsigned char                                      UnknownData_W307[0x4];                                     // 0x0B3C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0B40(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_A31B273340EFE983C86457AC875F8710;    // 0x0B48(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UZGR[0x7];                                     // 0x0B49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0B50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Kornet_Safir.BP_Kornet_Safir_C");
		return ptr;
	}



	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void CameraOnSoldier();
	void CameraOnWeapon();
	void BlueprintOnZoom(bool bNewZoom);
	void ReceiveBeginPlay();
	void RemoveADS();
	void CUnpossessed();
	void CPossessed();
	void ExecuteUbergraph_BP_Kornet_Safir(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
