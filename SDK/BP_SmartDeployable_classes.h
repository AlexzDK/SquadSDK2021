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

// BlueprintGeneratedClass BP_SmartDeployable.BP_SmartDeployable_C
// 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
class ABP_SmartDeployable_C : public ABP_Deployable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      InteractUI;                                                // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SmartDeployable.BP_SmartDeployable_C");
		return ptr;
	}



	void CreateRadialMenu(class AController* Controller, class UObject* Context);
	void ReceiveBeginPlay();
	void BPOnUsed(class AController* User);
	void SuccessfullyDeployed();
	void CompletedConstruction();
	void BPStopUsed(class AController* User);
	void BPHidePrompt();
	void ExecuteUbergraph_BP_SmartDeployable(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
