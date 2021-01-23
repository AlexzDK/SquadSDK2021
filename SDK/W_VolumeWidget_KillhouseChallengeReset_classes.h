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

// WidgetBlueprintGeneratedClass W_VolumeWidget_KillhouseChallengeReset.W_VolumeWidget_KillhouseChallengeReset_C
// 0x0013 (FullSize[0x0250] - InheritedSize[0x023D])
class UW_VolumeWidget_KillhouseChallengeReset_C : public UW_VolumeWidget_C
{
public:
	unsigned char                                      UnknownData_YITJ[0x3];                                     // 0x023D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Fade_CanCopyThis;                                          // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_VolumeWidget_KillhouseChallengeReset.W_VolumeWidget_KillhouseChallengeReset_C");
		return ptr;
	}



	void Fade(bool Fade_In);
	void ExecuteUbergraph_W_VolumeWidget_KillhouseChallengeReset(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
