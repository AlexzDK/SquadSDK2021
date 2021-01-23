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

// BlueprintGeneratedClass BP_T72AV_MEA.BP_T72AV_MEA_C
// 0x0008 (FullSize[0x0AD0] - InheritedSize[0x0AC8])
class ABP_T72AV_MEA_C : public ABP_T72B3_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_T72AV_MEA.BP_T72AV_MEA_C");
		return ptr;
	}



	void Attach_Turret();
	void ExecuteUbergraph_BP_T72AV_MEA(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
