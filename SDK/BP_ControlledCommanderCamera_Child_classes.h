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

// BlueprintGeneratedClass BP_ControlledCommanderCamera_Child.BP_ControlledCommanderCamera_Child_C
// 0x0009 (FullSize[0x0329] - InheritedSize[0x0320])
class ABP_ControlledCommanderCamera_Child_C : public ABP_ControlledCamera_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0320(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Force_Allow_Camera;                                        // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ControlledCommanderCamera_Child.BP_ControlledCommanderCamera_Child_C");
		return ptr;
	}



	void Can_Become_View_Target(bool* Can_View);
	void ReceiveBeginPlay();
	void Cam_Failure_Message();
	void ExecuteUbergraph_BP_ControlledCommanderCamera_Child(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
