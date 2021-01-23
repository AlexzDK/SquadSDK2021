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

// BlueprintGeneratedClass BP_BMP2.BP_BMP2_C
// 0x0010 (FullSize[0x0AD8] - InheritedSize[0x0AC8])
class ABP_BMP2_C : public ABP_BMP1_INS_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Log;                                                       // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BMP2.BP_BMP2_C");
		return ptr;
	}



	void Attach_Turret();
	void ReceiveBeginPlay();
	void DrivetrainComponentRepaired(class USQDriveTrainComponent* DriveTrainComponent);
	void DrivetrainComponentDestroyed(class USQDriveTrainComponent* DriveTrainComponent);
	void UpdateDamagedTrackVisual(class UObject* VehicleTrack, bool bIsTrackDestroyed, bool ShowOriginalTrack);
	void ExecuteUbergraph_BP_BMP2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
