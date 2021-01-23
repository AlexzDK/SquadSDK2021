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

// BlueprintGeneratedClass BP_BTR80_MIL_turret.BP_BTR80_MIL_turret_C
// 0x0008 (FullSize[0x04A0] - InheritedSize[0x0498])
class ABP_BTR80_MIL_turret_C : public ABP_BTR80_RUS_turret_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0498(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTR80_MIL_turret.BP_BTR80_MIL_turret_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BTR80_MIL_turret(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
