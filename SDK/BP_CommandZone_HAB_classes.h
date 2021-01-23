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

// BlueprintGeneratedClass BP_CommandZone_HAB.BP_CommandZone_HAB_C
// 0x0008 (FullSize[0x02A0] - InheritedSize[0x0298])
class ABP_CommandZone_HAB_C : public ABP_CommandZone_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0298(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CommandZone_HAB.BP_CommandZone_HAB_C");
		return ptr;
	}



	void Can_Allow_Actions(bool* Allow_Actions);
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_CommandZone_HAB(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
