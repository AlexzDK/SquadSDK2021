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

// Class MovieScene.MovieSceneSignedObject
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UMovieSceneSignedObject : public UObject
{
public:
	struct FGuid                                       Signature;                                                 // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MRDC[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSignedObject");
		return ptr;
	}



};

// Class MovieScene.MovieSceneSequence
// 0x02F8 (FullSize[0x0348] - InheritedSize[0x0050])
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneEvaluationTemplate               PrecompiledEvaluationTemplate;                             // 0x0050(0x02F0) (ContainsInstancedReference, NativeAccessSpecifierPublic)
	EMovieSceneCompletionMode                          DefaultCompletionMode;                                     // 0x0340(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bParentContextsAreSignificant;                             // 0x0341(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_44TT[0x6];                                     // 0x0342(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSequence");
		return ptr;
	}



};

// Class MovieScene.TestMovieSceneSequence
// 0x0008 (FullSize[0x0350] - InheritedSize[0x0348])
class UTestMovieSceneSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                                // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSequence");
		return ptr;
	}



};

// Class MovieScene.MovieSceneSection
// 0x0090 (FullSize[0x00E0] - InheritedSize[0x0050])
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions               EvalOptions;                                               // 0x0050(0x0002) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_52GE[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneEasingSettings                   Easing;                                                    // 0x0058(0x0038) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneFrameRange                       SectionRange;                                              // 0x0090(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FFrameNumber                                PreRollFrames;                                             // 0x00A0(0x0004) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                                PostRollFrames;                                            // 0x00A4(0x0004) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                RowIndex;                                                  // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                OverlapPriority;                                           // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bIsActive : 1;                                             // 0x00B0(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bIsLocked : 1;                                             // 0x00B0(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2DB0[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartTime;                                                 // 0x00B4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EndTime;                                                   // 0x00B8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PrerollTime;                                               // 0x00BC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PostrollTime;                                              // 0x00C0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bIsInfinite : 1;                                           // 0x00C4(0x0001) BIT_FIELD  (Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_C5DA[0x3];                                     // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bSupportsInfiniteRange;                                    // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FOptionalMovieSceneBlendType                BlendType;                                                 // 0x00C9(0x0002) (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6R24[0x15];                                    // 0x00CB(0x0015) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSection");
		return ptr;
	}



	void SetRowIndex(int NewRowIndex);
	void SetPreRollFrames(int InPreRollFrames);
	void SetPostRollFrames(int InPostRollFrames);
	void SetOverlapPriority(int NewPriority);
	void SetIsLocked(bool bInIsLocked);
	void SetIsActive(bool bInIsActive);
	bool IsLocked();
	bool IsActive();
	int GetRowIndex();
	int GetPreRollFrames();
	int GetPostRollFrames();
	int GetOverlapPriority();
};

// Class MovieScene.TestMovieSceneSection
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UTestMovieSceneSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSection");
		return ptr;
	}



};

// Class MovieScene.MovieSceneTrack
// 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions                 EvalOptions;                                               // 0x0050(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SMUF[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneTrack");
		return ptr;
	}



};

// Class MovieScene.TestMovieSceneTrack
// 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
class UTestMovieSceneTrack : public UMovieSceneTrack
{
public:
	bool                                               bHighPassFilter;                                           // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BFZG[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMovieSceneSection*>                  SectionArray;                                              // 0x0060(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneTrack");
		return ptr;
	}



};

// Class MovieScene.MovieSceneNameableTrack
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneNameableTrack");
		return ptr;
	}



};

// Class MovieScene.MovieSceneSubTrack
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSubTrack");
		return ptr;
	}



};

// Class MovieScene.MovieSceneSubSection
// 0x0070 (FullSize[0x0150] - InheritedSize[0x00E0])
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSectionParameters                Parameters;                                                // 0x00E0(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              StartOffset;                                               // 0x00F8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              TimeScale;                                                 // 0x00FC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PrerollTime;                                               // 0x0100(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_L0W5[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMovieSceneSequence*                         SubSequence;                                               // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TLazyObjectPtr<class AActor>                       ActorToRecord;                                             // 0x0110(0x001C) (Edit, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9SGS[0x4];                                     // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TargetSequenceName;                                        // 0x0130(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDirectoryPath                              TargetPathToRecordTo;                                      // 0x0140(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSubSection");
		return ptr;
	}



	void SetSequence(class UMovieSceneSequence* Sequence);
	class UMovieSceneSequence* GetSequence();
};

// Class MovieScene.MovieSceneKeyProxy
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneKeyProxy : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneKeyProxy");
		return ptr;
	}



};

// Class MovieScene.MovieSceneFolder
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UMovieSceneFolder : public UObject
{
public:
	struct FName                                       FolderName;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneFolder*>                   ChildFolders;                                              // 0x0030(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>                    ChildMasterTracks;                                         // 0x0040(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FString>                             ChildObjectBindingStrings;                                 // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_U6FQ[0x10];                                    // 0x0060(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneFolder");
		return ptr;
	}



};

// Class MovieScene.MovieSceneEasingFunction
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneEasingFunction : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneEasingFunction");
		return ptr;
	}



	float OnEvaluate(float Interp);
};

// Class MovieScene.MovieSceneEasingExternalCurve
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UMovieSceneEasingExternalCurve : public UObject
{
public:
	unsigned char                                      UnknownData_LEZF[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 Curve;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneEasingExternalCurve");
		return ptr;
	}



};

// Class MovieScene.MovieSceneBuiltInEasingFunction
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	unsigned char                                      UnknownData_I1N8[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EMovieSceneBuiltInEasing                           Type;                                                      // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DEBV[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBuiltInEasingFunction");
		return ptr;
	}



};

// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOwnerInterface");
		return ptr;
	}



};

// Class MovieScene.MovieSceneBindingOverrides
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UMovieSceneBindingOverrides : public UObject
{
public:
	TArray<struct FMovieSceneBindingOverrideData>      BindingData;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_A64R[0x58];                                    // 0x0038(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOverrides");
		return ptr;
	}



};

// Class MovieScene.MovieScene
// 0x0090 (FullSize[0x00E0] - InheritedSize[0x0050])
class UMovieScene : public UMovieSceneSignedObject
{
public:
	TArray<struct FMovieSceneSpawnable>                Spawnables;                                                // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieScenePossessable>              Possessables;                                              // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneBinding>                  ObjectBindings;                                            // 0x0070(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>                    MasterTracks;                                              // 0x0080(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UMovieSceneTrack*                            CameraCutTrack;                                            // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneFrameRange                       SelectionRange;                                            // 0x0098(0x0010) (NoDestructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneFrameRange                       PlaybackRange;                                             // 0x00A8(0x0010) (NoDestructor, NativeAccessSpecifierPrivate)
	struct FFrameRate                                  TickResolution;                                            // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameRate                                  DisplayRate;                                               // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	EMovieSceneEvaluationType                          EvaluationType;                                            // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	EUpdateClockSource                                 ClockSource;                                               // 0x00C9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QKCB[0x6];                                     // 0x00CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMovieSceneMarkedFrame>              MarkedFrames;                                              // 0x00D0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieScene");
		return ptr;
	}



};

// Class MovieScene.MovieScenePlaybackClient
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieScenePlaybackClient : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieScenePlaybackClient");
		return ptr;
	}



};

// Class MovieScene.MovieSceneSequencePlayer
// 0x07F0 (FullSize[0x0818] - InheritedSize[0x0028])
class UMovieSceneSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData_JXD1[0x390];                                   // 0x0028(0x0390) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPlay;                                                    // 0x03B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayReverse;                                             // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnStop;                                                    // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPause;                                                   // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFinished;                                                // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TEnumAsByte<EMovieScenePlayerStatus>               Status;                                                    // 0x0408(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3AAX[0x3];                                     // 0x0409(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bReversePlayback : 1;                                      // 0x040C(0x0001) BIT_FIELD  (Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S499[0x3];                                     // 0x040D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMovieSceneSequence*                         Sequence;                                                  // 0x0410(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFrameNumber                                StartTime;                                                 // 0x0418(0x0004) (Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                DurationFrames;                                            // 0x041C(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CurrentNumLoops;                                           // 0x0420(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_B7O4[0x14];                                    // 0x0424(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                          // 0x0438(0x0014) (Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_N8GL[0x4];                                     // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneRootEvaluationTemplateInstance   RootTemplateInstance;                                      // 0x0450(0x0300) (Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TI9R[0x68];                                    // 0x0750(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneSequenceReplProperties           NetSyncProps;                                              // 0x07B8(0x0010) (Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TScriptInterface<class UMovieScenePlaybackClient>  PlaybackClient;                                            // 0x07C8(0x0010) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M08V[0x40];                                    // 0x07D8(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSequencePlayer");
		return ptr;
	}



	void StopAtCurrentTime();
	void Stop();
	void SetTimeRange(float StartTime, float Duration);
	void SetPlayRate(float PlayRate);
	void SetPlaybackRange(float NewStartTime, float NewEndTime);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void SetFrameRate(const struct FFrameRate& FrameRate);
	void SetFrameRange(int StartFrame, int Duration);
	void SetDisableCameraCuts(bool bInDisableCameraCuts);
	void ScrubToSeconds(float TimeInSeconds);
	bool ScrubToMarkedFrame(const struct FString& InLabel);
	void ScrubToFrame(const struct FFrameTime& NewPosition);
	void Scrub();
	void RPC_OnStopEvent(const struct FFrameTime& StoppedTime);
	void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime);
	void PlayToSeconds(float TimeInSeconds);
	bool PlayToMarkedFrame(const struct FString& InLabel);
	void PlayToFrame(const struct FFrameTime& NewPosition);
	void PlayReverse();
	void PlayLooping(int NumLoops);
	void Play();
	void Pause();
	void JumpToSeconds(float TimeInSeconds);
	void JumpToPosition(float NewPlaybackPosition);
	bool JumpToMarkedFrame(const struct FString& InLabel);
	void JumpToFrame(const struct FFrameTime& NewPosition);
	bool IsReversed();
	bool IsPlaying();
	bool IsPaused();
	void GoToEndAndStop();
	struct FQualifiedFrameTime GetStartTime();
	float GetPlayRate();
	float GetPlaybackStart();
	float GetPlaybackPosition();
	float GetPlaybackEnd();
	TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject);
	float GetLength();
	struct FFrameRate GetFrameRate();
	int GetFrameDuration();
	struct FQualifiedFrameTime GetEndTime();
	struct FQualifiedFrameTime GetDuration();
	bool GetDisableCameraCuts();
	struct FQualifiedFrameTime GetCurrentTime();
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	void ChangePlaybackDirection();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
