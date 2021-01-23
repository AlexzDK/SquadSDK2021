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

// BlueprintGeneratedClass BP_GenericHelicopterWreck.BP_GenericHelicopterWreck_C
// 0x0008 (FullSize[0x0328] - InheritedSize[0x0320])
class ABP_GenericHelicopterWreck_C : public ABP_GenericDestroyedVehicleWreck_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0320(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GenericHelicopterWreck.BP_GenericHelicopterWreck_C");
		return ptr;
	}



	void StopReplication();
	void ExecuteUbergraph_BP_GenericHelicopterWreck(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
