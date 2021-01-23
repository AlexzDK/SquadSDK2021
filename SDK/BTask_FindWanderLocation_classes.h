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

// BlueprintGeneratedClass BTask_FindWanderLocation.BTask_FindWanderLocation_C
// 0x0034 (FullSize[0x00D4] - InheritedSize[0x00A0])
class UBTask_FindWanderLocation_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      Move_Location;                                             // 0x00A8(0x0028) (Edit, BlueprintVisible)
	float                                              Radius;                                                    // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTask_FindWanderLocation.BTask_FindWanderLocation_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTask_FindWanderLocation(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
