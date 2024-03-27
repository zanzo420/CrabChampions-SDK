#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// Function CrabChampions.CrabC.ServerSpawnCosmeticProjectile
struct ACrabC_ServerSpawnCosmeticProjectile_Params
{
public:
	struct FCrabProjectileInfo                   ProjectileInfo;                                    // 0x0(0x30)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                ProjectileOwner;                                   // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   StartLoc;                                          // 0x38(0xC)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExplodeInstantly;                                 // 0x44(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9EC[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabC.ServerDealDamage
struct ACrabC_ServerDealDamage_Params
{
public:
	TArray<struct FCrabDamageInfo>               DamageInfoArray;                                   // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function CrabChampions.CrabC.ServerClientAuthoritativeMove
struct ACrabC_ServerClientAuthoritativeMove_Params
{
public:
	struct FClientAuthoritativeMoveData          MoveData;                                          // 0x0(0x50)(ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CrabChampions.CrabC.OnRep_DebuffState
struct ACrabC_OnRep_DebuffState_Params
{
public:
	struct FCrabDebuffState                      PreviousDebuffState;                               // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabC.ClientKnockback
struct ACrabC_ClientKnockback_Params
{
public:
	struct FVector_NetQuantizeNormal             Dir;                                               // 0x0(0xC)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CrabChampions.CrabEnemyC.MulticastSpawnMirroredProjectile
struct ACrabEnemyC_MulticastSpawnMirroredProjectile_Params
{
public:
	class ACrabC*                                DamagingC;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CrabChampions.CrabEnemyAIC.OnReceiveMoveCompleted
struct ACrabEnemyAIC_OnReceiveMoveCompleted_Params
{
public:
	struct FAIRequestID                          RequestID;                                         // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPathFollowingResult              Result;                                            // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A59[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CrabChampions.CrabPlayerC.ServerSalvage
struct ACrabPlayerC_ServerSalvage_Params
{
public:
	class ACrabInteractPickup*                   PickupToSalvage;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function CrabChampions.CrabPlayerC.ServerPing
struct ACrabPlayerC_ServerPing_Params
{
public:
	struct FVector_NetQuantize                   InPingLoc;                                         // 0x0(0xC)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CrabChampions.CrabPlayerC.ServerInteract
struct ACrabPlayerC_ServerInteract_Params
{
public:
	class ACrabInteractable*                     ActorToInteractWith;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrabChampions.CrabPlayerC.ServerFlip
struct ACrabPlayerC_ServerFlip_Params
{
public:
	enum class ECrabInputDir                     FlipDir;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CrabChampions.CrabPlayerC.ServerDropPickup
struct ACrabPlayerC_ServerDropPickup_Params
{
public:
	class UCrabPickupDA*                         PickupDA;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCrabInventoryInfo                    InventoryInfo;                                     // 0x8(0x20)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrabChampions.CrabPlayerC.ServerDash
struct ACrabPlayerC_ServerDash_Params
{
public:
	enum class ECrabInputDir                     DashDir;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function CrabChampions.CrabPlayerC.OnRep_PingLoc
struct ACrabPlayerC_OnRep_PingLoc_Params
{
public:
	struct FVector_NetQuantize                   PreviousPingLoc;                                   // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrabChampions.CrabPlayerC.MulticastFlip
struct ACrabPlayerC_MulticastFlip_Params
{
public:
	enum class ECrabInputDir                     FlipDir;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrabChampions.CrabPlayerC.MulticastDash
struct ACrabPlayerC_MulticastDash_Params
{
public:
	enum class ECrabInputDir                     DashDir;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabPlayerC.ClientTeleport
struct ACrabPlayerC_ClientTeleport_Params
{
public:
	struct FVector_NetQuantize                   Loc;                                               // 0x0(0xC)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CrabChampions.CrabPlayerC.ClientPrePortal
struct ACrabPlayerC_ClientPrePortal_Params
{
public:
	class ACrabPortal*                           Portal;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CrabChampions.CrabDestructible.MulticastExplode
struct ACrabDestructible_MulticastExplode_Params
{
public:
	class ACrabC*                                ExplodingC;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function CrabChampions.CrabDestructible.MulticastAddLeak
struct ACrabDestructible_MulticastAddLeak_Params
{
public:
	struct FVector_NetQuantize                   DamageLoc;                                         // 0x0(0xC)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function CrabChampions.CrabShopPedestal.MulticastInitPedestalInfo
struct ACrabShopPedestal_MulticastInitPedestalInfo_Params
{
public:
	struct FCrabPedestalInfo                     NewPedestalInfo;                                   // 0x0(0xC)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CrabChampions.CrabSpectatorC.ClientInitSpectatorC
struct ACrabSpectatorC_ClientInitSpectatorC_Params
{
public:
	class ACrabPlayerC*                          EliminatedPlayerToSpectate;                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CrabChampions.CrabKeyBindRowUI.OnPressedKeyboardKeySelector
struct UCrabKeyBindRowUI_OnPressedKeyboardKeySelector_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CrabChampions.CrabKeyBindRowUI.OnPressedControllerKeySelector
struct UCrabKeyBindRowUI_OnPressedControllerKeySelector_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CrabChampions.CrabGameStateUI.OnChatTextCommitted
struct UCrabGameStateUI_OnChatTextCommitted_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BEC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function CrabChampions.CrabSliderUI.OnMainSliderValueChanged
struct UCrabSliderUI_OnMainSliderValueChanged_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrabChampions.CrabWeapon.ServerSetIsReloading
struct ACrabWeapon_ServerSetIsReloading_Params
{
public:
	bool                                         bNewIsReloading;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabVideoMenuUI.SetWeaponEffects
struct UCrabVideoMenuUI_SetWeaponEffects_Params
{
public:
	class FString                                NewSelection;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabVideoMenuUI.SetVSync
struct UCrabVideoMenuUI_SetVSync_Params
{
public:
	class FString                                NewSelection;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabVideoMenuUI.SetTextChatVisibility
struct UCrabVideoMenuUI_SetTextChatVisibility_Params
{
public:
	class FString                                NewSelection;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabVideoMenuUI.SetShowFPS
struct UCrabVideoMenuUI_SetShowFPS_Params
{
public:
	class FString                                NewSelection;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabVideoMenuUI.SetSharpening
struct UCrabVideoMenuUI_SetSharpening_Params
{
public:
	class FString                                NewSelection;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabVideoMenuUI.SetResolutionQuality
struct UCrabVideoMenuUI_SetResolutionQuality_Params
{
public:
	class FString                                NewSelection;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabVideoMenuUI.SetResolution
struct UCrabVideoMenuUI_SetResolution_Params
{
public:
	class FString                                NewSelection;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabVideoMenuUI.SetPauseWhenLosingFocus
struct UCrabVideoMenuUI_SetPauseWhenLosingFocus_Params
{
public:
	class FString                                NewSelection;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabVideoMenuUI.SetMotionBlur
struct UCrabVideoMenuUI_SetMotionBlur_Params
{
public:
	class FString                                NewSelection;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabVideoMenuUI.SetHitmarkers
struct UCrabVideoMenuUI_SetHitmarkers_Params
{
public:
	class FString                                NewSelection;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabVideoMenuUI.SetGraphicsQuality
struct UCrabVideoMenuUI_SetGraphicsQuality_Params
{
public:
	class FString                                NewSelection;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabVideoMenuUI.SetFPSLimit
struct UCrabVideoMenuUI_SetFPSLimit_Params
{
public:
	class FString                                NewSelection;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabVideoMenuUI.SetFieldOfView
struct UCrabVideoMenuUI_SetFieldOfView_Params
{
public:
	class FString                                NewSelection;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabVideoMenuUI.SetDisplayMode
struct UCrabVideoMenuUI_SetDisplayMode_Params
{
public:
	class FString                                NewSelection;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabVideoMenuUI.SetDamageNumbers
struct UCrabVideoMenuUI_SetDamageNumbers_Params
{
public:
	class FString                                NewSelection;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabVideoMenuUI.SetCameraShake
struct UCrabVideoMenuUI_SetCameraShake_Params
{
public:
	class FString                                NewSelection;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabVideoMenuUI.SetAntiAliasingType
struct UCrabVideoMenuUI_SetAntiAliasingType_Params
{
public:
	class FString                                NewSelection;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CrabChampions.CrabGM.OnNavigationGenerationFinished
struct ACrabGM_OnNavigationGenerationFinished_Params
{
public:
	class ANavigationData*                       NavData;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CrabChampions.CrabGM.DebugGoToIsland
struct ACrabGM_DebugGoToIsland_Params
{
public:
	int32                                        IslandToGoTo;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function CrabChampions.CrabLM.MulticastSpawnCosmeticProjectile
struct ACrabLM_MulticastSpawnCosmeticProjectile_Params
{
public:
	struct FCrabProjectileInfo                   ProjectileInfo;                                    // 0x0(0x30)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                ProjectileOwner;                                   // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   StartLoc;                                          // 0x38(0xC)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExplodeInstantly;                                 // 0x44(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA7[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function CrabChampions.CrabLM.MulticastPlayOneShotFX
struct ACrabLM_MulticastPlayOneShotFX_Params
{
public:
	class UNiagaraSystem*                        FXToPlay;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             SoundToPlay;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SpawnLoc;                                          // 0x10(0xC)(ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CAB[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function CrabChampions.CrabPC.ServerUploadLobbyStats
struct ACrabPC_ServerUploadLobbyStats_Params
{
public:
	struct FCrabLobbyStats                       LobbyStats;                                        // 0x0(0x58)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabPC.ServerSpawnKeyTotemPickup
struct ACrabPC_ServerSpawnKeyTotemPickup_Params
{
public:
	class ACrabTotem*                            KeyTotem;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabPickupDA*                         PickupToSpawn;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabPC.ServerSendChatMessage
struct ACrabPC_ServerSendChatMessage_Params
{
public:
	class FString                                ChatMessage;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function CrabChampions.CrabPC.ServerRestoreAutoSave
struct ACrabPC_ServerRestoreAutoSave_Params
{
public:
	struct FCrabAutoSave                         AutoSave;                                          // 0x0(0x130)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CrabChampions.CrabPC.OnSlomoRampTimelineUpdated
struct ACrabPC_OnSlomoRampTimelineUpdated_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrabChampions.CrabPC.ClientSetIsCharacterInputEnabled
struct ACrabPC_ClientSetIsCharacterInputEnabled_Params
{
public:
	bool                                         bNewIsCharacterInputEnabled;                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrabChampions.CrabPC.ClientOnTookDamage
struct ACrabPC_ClientOnTookDamage_Params
{
public:
	enum class ECrabDamageHitType                DamageHitType;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CrabChampions.CrabPC.ClientOnReceivedChatMessage
struct ACrabPC_ClientOnReceivedChatMessage_Params
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ChatMessage;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabPC.ClientOnPickedUpPickup
struct ACrabPC_ClientOnPickedUpPickup_Params
{
public:
	class UCrabPickupDA*                         PickupDA;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Level;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CDC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CrabChampions.CrabPC.ClientOnInteractedWithKeyTotem
struct ACrabPC_ClientOnInteractedWithKeyTotem_Params
{
public:
	class ACrabTotem*                            KeyTotem;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CrabChampions.CrabPC.ClientOnEnteredPortal
struct ACrabPC_ClientOnEnteredPortal_Params
{
public:
	struct FCrabNextIslandInfo                   NextIslandInfo;                                    // 0x0(0x30)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabPC.ClientOnEliminated
struct ACrabPC_ClientOnEliminated_Params
{
public:
	class FString                                EliminatedByPlayerName;                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrabChampions.CrabPC.ClientOnClearedIsland
struct ACrabPC_ClientOnClearedIsland_Params
{
public:
	bool                                         bWasFlawlessClear;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function CrabChampions.CrabPC.ClientNotifyDamageDealt
struct ACrabPC_ClientNotifyDamageDealt_Params
{
public:
	struct FCrabDamageInfo                       DamageInfo;                                        // 0x0(0x38)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class ECrabDamageHitType                DamageHitType;                                     // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CrabChampions.CrabPC.ClientInventoryEvent
struct ACrabPC_ClientInventoryEvent_Params
{
public:
	class FString                                InventoryEventMessage;                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CrabChampions.CrabPS.ServerSetWeaponDA
struct ACrabPS_ServerSetWeaponDA_Params
{
public:
	class UCrabWeaponDA*                         NewWeaponDA;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CrabChampions.CrabPS.ServerSetMeleeDA
struct ACrabPS_ServerSetMeleeDA_Params
{
public:
	class UCrabMeleeDA*                          NewMeleeDA;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CrabChampions.CrabPS.ServerSetAbilityDA
struct ACrabPS_ServerSetAbilityDA_Params
{
public:
	class UCrabAbilityDA*                        NewAbilityDA;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrabChampions.CrabPS.ServerRemoveWeaponMod
struct ACrabPS_ServerRemoveWeaponMod_Params
{
public:
	enum class ECrabWeaponModType                WeaponModType;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrabChampions.CrabPS.ServerRemoveRelic
struct ACrabPS_ServerRemoveRelic_Params
{
public:
	enum class ECrabRelicType                    RelicType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrabChampions.CrabPS.ServerRemovePerk
struct ACrabPS_ServerRemovePerk_Params
{
public:
	enum class ECrabPerkType                     PerkType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrabChampions.CrabPS.ServerRemoveGrenadeMod
struct ACrabPS_ServerRemoveGrenadeMod_Params
{
public:
	enum class ECrabGrenadeModType               GrenadeModType;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function CrabChampions.CrabPS.ServerRefreshAccount
struct ACrabPS_ServerRefreshAccount_Params
{
public:
	enum class ECrabRank                         NewAccountRank;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CF3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NewAccountLevel;                                   // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewKeys;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CrabChampions.CrabPS.ServerIncrementNumInventorySlots
struct ACrabPS_ServerIncrementNumInventorySlots_Params
{
public:
	enum class ECrabPickupType                   PickupType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CF4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Cost;                                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CrabChampions.CrabPS.ServerEquipInventory
struct ACrabPS_ServerEquipInventory_Params
{
public:
	class UCrabWeaponDA*                         NewWeaponDA;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabAbilityDA*                        NewAbilityDA;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabMeleeDA*                          NewMeleeDA;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CrabChampions.CrabPS.ServerEquipCosmetics
struct ACrabPS_ServerEquipCosmetics_Params
{
public:
	class UMaterialInterface*                    NewCrabSkin;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


