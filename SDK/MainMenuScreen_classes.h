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

// WidgetBlueprintGeneratedClass MainMenuScreen.MainMenuScreen_C
// 0x0424 (FullSize[0x0654] - InheritedSize[0x0230])
class UMainMenuScreen_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMainMenu_Button_C*                          AudioApply;                                                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          AudioDefaults;                                             // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAudioWindow_C*                              AudioSettings;                                             // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      BlockInput;                                                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_BackToMain;                                         // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_HideHUD;                                            // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          Button_ModsRefresh;                                        // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          ButtonCREDITS;                                             // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          ButtonCUSTOMSERVERS;                                       // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ButtonEXIT;                                                // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          ButtonFRIENDS;                                             // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          ButtonRefreshAllServers;                                   // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          ButtonRefreshFriends;                                      // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          ButtonResetFilters;                                        // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          ButtonRestoreDefaultControls;                              // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          ButtonSERVERBROWSER;                                       // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          ButtonSETTINGS;                                            // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          ButtonSettingsAUDIO;                                       // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          ButtonSettingsCONTROLS;                                    // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          ButtonSettingsGAME;                                        // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          ButtonSettingsGRAPHICS;                                    // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          ButtonSettingsSTEAM;                                       // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          ButtonSettingsUI;                                          // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          ButtonTRAIN;                                               // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                CanvasPanel_129;                                           // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              Context_Audio;                                             // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              Context_Controls;                                          // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              Context_FriendsList;                                       // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              Context_GameSettings;                                      // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              Context_Graphics;                                          // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              Context_Mods;                                              // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              Context_Server;                                            // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              Context_SteamItems;                                        // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UControlsWindow_C*                           ControlsSettings;                                          // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCreditsWindow_C*                            CreditsWindow;                                             // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UServerBrowserWindow_C*                      CustomBrowser;                                             // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UServerBrowserWindow_C*                      DedicatedBrowser;                                          // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    DisconnectWindow;                                          // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    ExitWindow;                                                // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Eye;                                                       // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFriendsBrowserWindow_C*                     FriendsBrowserWindow;                                      // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          GameApply;                                                 // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          GameDebug;                                                 // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          GameDefaults;                                              // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          GameReset;                                                 // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGameSettingsWindow_C*                       GameSettings;                                              // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          GraphicsApply;                                             // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          GraphicsBenchmark;                                         // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          GraphicsDefaults;                                          // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGraphicsWindow_C*                           GraphicsSettings;                                          // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      HideHUDBar;                                                // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_3;                                                   // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_4;                                                   // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_5;                                                   // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_SteamOnline;                                         // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     InGameBlackoutBG;                                          // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputCapture_C*                             InputCaptureWidget;                                        // 0x0408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidPasswordWidget_C*                    InvalidPassword;                                           // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                                   JoinThrobber;                                              // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                LandingCanvas;                                             // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChallengeWindow_C*                          LeaveQueueConfirm;                                         // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      LineBottom;                                                // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      LineTop;                                                   // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UModBrowser_C*                               ModBrowser;                                                // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UModBrowser_C*                               ModBrowser_90;                                             // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMusicPlayer_C*                              MusicPlayer;                                               // 0x0450(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                NavigationHorizontalBox;                                   // 0x0458(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  PendingServerText;                                         // 0x0460(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChallengeWindow_C*                          PopupDisconnect;                                           // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChallengeWindow_C*                          PopupExit;                                                 // 0x0470(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChallengeWindow_C*                          PopupLocalGame;                                            // 0x0478(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChallengeWindow_C*                          ResetDataConfirm;                                          // 0x0480(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             SecondaryNavSectionSwitcher;                               // 0x0488(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChallengeWindow_C*                          ServerConfirm;                                             // 0x0490(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     ServerFriendsWindow;                                       // 0x0498(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    ServerOverlay;                                             // 0x04A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             ServerSwitch;                                              // 0x04A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              SettingsNav;                                               // 0x04B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     SettingsPanel;                                             // 0x04B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             SettingsSwitcher;                                          // 0x04C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                     Spacer_BottomContext;                                      // 0x04C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                     Spacer_SecNav;                                             // 0x04D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USQNetInfoWidgetSlot_C*                      SQNetInfoWidgetSlot_Development;                           // 0x04D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    StartLocalWindow;                                          // 0x04E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          SteamInventoryApply;                                       // 0x04E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Button_C*                          SteamInventoryDefaults;                                    // 0x04F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USteamInventorySettings_C*                   SteamInventorySettings;                                    // 0x04F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             Switcher_BottomContext;                                    // 0x0500(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             SwitcherMain;                                              // 0x0508(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             SwitcherTitle;                                             // 0x0510(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TB_Title;                                                  // 0x0518(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    TrainingWindow;                                            // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTravelQueueWidget_C*                        TravelQueueWidget;                                         // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULevelSelector_C*                            Tutorial_LevelSelector;                                    // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUISettingsWindow_C*                         UISettings;                                                // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVersionWidget_C*                            VersionWidget;                                             // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Filters_C*                                W_Filters;                                                 // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Training_LevelList_C*                     W_LevelList;                                               // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_Pending;                                    // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_SteamStatus;                                // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              FadeProgress;                                              // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFading;                                                   // 0x056C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bWantsToBeVisible;                                         // 0x056D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCheckUpdate;                                              // 0x056E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bShowServerConfirmation;                                   // 0x056F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UServerBrowserWindow_C*                      Current_Browser;                                           // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMainMenu_ExitButtons_C*                     ExitButtons;                                               // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Is_Browsing_Dedicated;                                     // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LO3Q[0x7];                                     // 0x0581(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMenuCamPawn_C*                              My_Menu_Cam_Pawn;                                          // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Show_Leave_Queue_Challenge;                                // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_I7LV[0x7];                                     // 0x0591(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlueprintSessionResult                     Cached_Session;                                            // 0x0598(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Session_Cached;                                            // 0x0650(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Block_Input_Visible;                                       // 0x0651(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Is_In_Queue;                                               // 0x0652(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bHideHud;                                                  // 0x0653(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MainMenuScreen.MainMenuScreen_C");
		return ptr;
	}



	void Setup_Pending_Queue_Screen(class USQGameInstance* instance);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void Get_Main_Menu(bool* Success, class ABP_MainMenu_PC_C** Menu_PC);
	void Hide_Back_Button();
	class UWidget* Get_Button_HideHUD_ToolTipWidget_1();
	void Toggle_Game_HUD();
	class UWidget* Get_GameDebug_ToolTipWidget_1();
	class UWidget* Get_GameReset_ToolTipWidget_1();
	void Close_Menu();
	void Check_Server_Issues();
	void Leave_Queue_Challenge(bool Cached_Session_, const struct FBlueprintSessionResult& Cached_Session);
	void Enable_Refresh_Servers();
	void Get_Menu_Cam();
	void On_Join_Queue();
	void Hide_Queue_Info();
	void Start_Training();
	ESlateVisibility Get_StopInputImage_Visibility_1();
	void On_Leave_Queue(bool New_Server, const struct FBlueprintSessionResult& Sesh);
	ESlateVisibility Get_LeaveQueueConfirm_Visibility_1();
	void Remove_Exit_Buttons();
	void Set_Context_Widgets(class UWidget* Context_Widget);
	void Set_Visible_Widgets(class UWidget* Main_Widget, class UWidget* Nav_Widget, class UWidget* Bottom_context_widget, bool selected);
	void Clear_Menu();
	ESlateVisibility Get_ServerMessageConfirmation_Visibility_1();
	ESlateVisibility CustomGamesButtonVisibility();
	ESlateVisibility InfoWidgetVisibility();
	ESlateVisibility Get_DISCONNECT_Visiblity_1();
	ESlateVisibility Get_Background_Image_Visiblity_1();
	void Close();
	void Open();
	void UnselectNavButtons(class UWidget* Except);
	void UnselectSettingsButtons(bool selected, class UWidget* Except);
	struct FSlateBrush GetBrush_1();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OpenResetBox();
	void HideServerMessageConfirmation();
	void BndEvt__ButtonSERVERBROWSER_K2Node_ComponentBoundEvent_3227_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__ButtonCUSTOMSERVERS_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__ButtonCREDITS_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__ButtonSETTINGS_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__ButtonSettingsAUDIO_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__ButtonSettingsCONTROLS_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__ButtonSettingsGAME_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__ButtonSettingsGRAPHICS_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__ButtonTRAIN_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__ButtonRefreshAllServers_K2Node_ComponentBoundEvent_2471_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__ButtonRestoreDefaultControls_K2Node_ComponentBoundEvent_2565_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__ButtonEXIT_K2Node_ComponentBoundEvent_5063_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ButtonEXIT_K2Node_ComponentBoundEvent_430_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonEXIT_K2Node_ComponentBoundEvent_440_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonSettingsSTEAM_K2Node_ComponentBoundEvent_970_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void Open_Exit_Window();
	void Open_Disconnect_Window();
	void Construct();
	void BndEvt__GraphicsBenchmark_K2Node_ComponentBoundEvent_2864_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__GraphicsApply_K2Node_ComponentBoundEvent_2908_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__GraphicsDefaults_K2Node_ComponentBoundEvent_2952_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__GameReset_K2Node_ComponentBoundEvent_3003_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__GameApply_K2Node_ComponentBoundEvent_3049_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__GameDefaults_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__GameDebug_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__PopupExit_K2Node_ComponentBoundEvent_3_OnRightButtonClicked__DelegateSignature();
	void BndEvt__PopupDisconnect_K2Node_ComponentBoundEvent_4_OnRightButtonClicked__DelegateSignature();
	void BndEvt__PopupLocalGame_K2Node_ComponentBoundEvent_5_OnRightButtonClicked__DelegateSignature();
	void BndEvt__PopupExit_K2Node_ComponentBoundEvent_6_OnLeftButtonClicked__DelegateSignature();
	void BndEvt__PopupLocalGame_K2Node_ComponentBoundEvent_7_OnLeftButtonClicked__DelegateSignature();
	void BndEvt__PopupDisconnect_K2Node_ComponentBoundEvent_9_OnLeftButtonClicked__DelegateSignature();
	void BndEvt__ResetDataConfirm_K2Node_ComponentBoundEvent_11_OnLeftButtonClicked__DelegateSignature();
	void BndEvt__ResetDataConfirm_K2Node_ComponentBoundEvent_12_OnRightButtonClicked__DelegateSignature();
	void Reset_Settings_Active_Widget();
	void BndEvt__LeaveQueueConfirm_K2Node_ComponentBoundEvent_723_OnLeftButtonClicked__DelegateSignature();
	void BndEvt__LeaveQueueConfirm_K2Node_ComponentBoundEvent_727_OnRightButtonClicked__DelegateSignature();
	void BndEvt__AudioApply_K2Node_ComponentBoundEvent_430_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__AudioDefaults_K2Node_ComponentBoundEvent_756_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void Refresh_Steam_Status();
	void BndEvt__ServerConfirm_K2Node_ComponentBoundEvent_306_OnLeftButtonClicked__DelegateSignature();
	void BndEvt__ServerConfirm_K2Node_ComponentBoundEvent_310_OnRightButtonClicked__DelegateSignature();
	void Return_To_Browser(bool Dedicated_);
	void BndEvt__Button_BackToMain_K2Node_ComponentBoundEvent_445_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_HideHUD_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SteamInventoryApply_K2Node_ComponentBoundEvent_543_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__SteamInventoryDefaults_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__MainMenu_Button_C_4_K2Node_ComponentBoundEvent_983_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__ButtonFRIENDS_K2Node_ComponentBoundEvent_353_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void Finished_Search_Event_1();
	void BndEvt__ButtonResetFilters_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void BndEvt__MainMenu_Button_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void Listen_For_Menu_Cam();
	void Possessed_Menu_Cam(class AMenuCamPawn_C* NewMenuCam);
	void Destruct();
	void BndEvt__ButtonSERVERBROWSER_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button);
	void ExecuteUbergraph_MainMenuScreen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
