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

// BlueprintGeneratedClass BP_EmplacedSPG9Scope.BP_EmplacedSPG9Scope_C
// 0x0048 (FullSize[0x0B70] - InheritedSize[0x0B28])
class ABP_EmplacedSPG9Scope_C : public ABP_EmplacedSPG9_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0B28(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USQBlastComponent*                           SquadBlast_1;                                              // 0x0B30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Scope;                                                     // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_89E5335E475A036BED3B15B05B2ED2A0;    // 0x0B40(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3WQO[0x7];                                     // 0x0B41(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ReticleClass;                                              // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            OverlayCamera;                                             // 0x0B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 Last_PC;                                                   // 0x0B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQHUD*                                      Last_HUD;                                                  // 0x0B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EmplacedSPG9Scope.BP_EmplacedSPG9Scope_C");
		return ptr;
	}



	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BlueprintOnZoom(bool bNewZoom);
	void ReceiveBeginPlay();
	void CPossessed();
	void CUnpossessed();
	void RemoveADS();
	void ExecuteUbergraph_BP_EmplacedSPG9Scope(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
