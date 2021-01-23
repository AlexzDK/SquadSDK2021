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

// BlueprintGeneratedClass BP_DemoSpectator.BP_DemoSpectator_C
// 0x0018 (FullSize[0x05C8] - InheritedSize[0x05B0])
class ABP_DemoSpectator_C : public ASQDemoSpectator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bShowingMainMenu;                                          // 0x05B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F9YE[0x7];                                     // 0x05B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMainMenuScreen_C*                           MainMenu;                                                  // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DemoSpectator.BP_DemoSpectator_C");
		return ptr;
	}



	void InpActEvt_InGameMenu_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DemoSpectator(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
