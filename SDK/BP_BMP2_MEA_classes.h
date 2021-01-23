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

// BlueprintGeneratedClass BP_BMP2_MEA.BP_BMP2_MEA_C
// 0x0008 (FullSize[0x0AE0] - InheritedSize[0x0AD8])
class ABP_BMP2_MEA_C : public ABP_BMP2_Desert_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BMP2_MEA.BP_BMP2_MEA_C");
		return ptr;
	}



	void Attach_Turret();
	void ExecuteUbergraph_BP_BMP2_MEA(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
