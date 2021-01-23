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

// BlueprintGeneratedClass BP_KillhouseChallengeReset.BP_KillhouseChallengeReset_C
// 0x0064 (FullSize[0x02AC] - InheritedSize[0x0248])
class ABP_KillhouseChallengeReset_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               InteractBox;                                               // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FSQUsableData                               Usable_Data;                                               // 0x0268(0x0040) (Edit, BlueprintVisible)
	int                                                Team;                                                      // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_KillhouseChallengeReset.BP_KillhouseChallengeReset_C");
		return ptr;
	}



	bool ShouldDisplayPrompt(class AController* User);
	int GetInterfaceTeam();
	struct FSQUsableData GetUsableData();
	void BPStopUsed(class AController* User);
	void ServerOnUsed(class AController* User);
	void ServerStopUsed(class AController* User);
	void BPDisplayPrompt(class AController* User);
	void BPHidePrompt();
	void BPOnUsed(class AController* User);
	void ExecuteUbergraph_BP_KillhouseChallengeReset(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
