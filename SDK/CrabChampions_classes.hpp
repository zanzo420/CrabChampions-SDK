#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x68 - 0x30)
// Class CrabChampions.CrabActionDA
class UCrabActionDA : public UDataAsset
{
public:
	float                                        Range;                                             // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequiresLOS;                                      // 0x34(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMustBeGrounded;                                   // 0x35(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9BA[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x38(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopMovementDuringAction;                         // 0x3C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9BB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LoopingActionInterval;                             // 0x40(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9BC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          Montage;                                           // 0x48(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FXSocketName;                                      // 0x50(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        FX;                                                // 0x58(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             Sound;                                             // 0x60(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCrabActionDA* GetDefaultObj();

};

// 0x8 (0x70 - 0x68)
// Class CrabChampions.CrabAOEActionDA
class UCrabAOEActionDA : public UCrabActionDA
{
public:
	class UCrabAOEDA*                            AOEDA;                                             // 0x68(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCrabAOEActionDA* GetDefaultObj();

};

// 0x10 (0x78 - 0x68)
// Class CrabChampions.CrabLaunchActionDA
class UCrabLaunchActionDA : public UCrabActionDA
{
public:
	float                                        PreLaunchHeight;                                   // 0x68(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LaunchSpeed;                                       // 0x6C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabAOEDA*                            LandAOEDA;                                         // 0x70(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCrabLaunchActionDA* GetDefaultObj();

};

// 0x18 (0x80 - 0x68)
// Class CrabChampions.CrabSpawnActionDA
class UCrabSpawnActionDA : public UCrabActionDA
{
public:
	TArray<TSubclassOf<class ACrabEnemyC>>       LesserEnemiesToSpawn;                              // 0x68(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        MaxSpawnedLesserEnemies;                           // 0x78(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrabSpawnActionDA* GetDefaultObj();

};

// 0x8 (0x70 - 0x68)
// Class CrabChampions.CrabProximityExplodeActionDA
class UCrabProximityExplodeActionDA : public UCrabActionDA
{
public:
	class UCrabAOEDA*                            ExplosionAOEDA;                                    // 0x68(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCrabProximityExplodeActionDA* GetDefaultObj();

};

// 0x28 (0x90 - 0x68)
// Class CrabChampions.CrabStrikeActionDA
class UCrabStrikeActionDA : public UCrabActionDA
{
public:
	enum class ECrabTargetType                   TargetType;                                        // 0x68(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ACrabStrike>               StrikeToSpawn;                                     // 0x70(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumLineStrikesToSpawn;                             // 0x78(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LineStrikeSpawnFrequency;                          // 0x7C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrabFormationType                FormationType;                                     // 0x80(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FormationSpacing;                                  // 0x84(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Spread;                                            // 0x88(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrabStrikeActionDA* GetDefaultObj();

};

// 0x18 (0x2D0 - 0x2B8)
// Class CrabChampions.CrabAnimInstance
class UCrabAnimInstance : public UAnimInstance
{
public:
	class ACrabC*                                OwningC;                                           // 0x2B8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Pitch;                                             // 0x2C0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Direction;                                         // 0x2C4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Speed;                                             // 0x2C8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsFalling;                                        // 0x2CC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsKnockedBack;                                    // 0x2CD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9CC[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrabAnimInstance* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class CrabChampions.CrabAOEDA
class UCrabAOEDA : public UDataAsset
{
public:
	class FName                                  SocketName;                                        // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x38(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x3C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrabDamageType                   DamageType;                                        // 0x40(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        KnockbackStrength;                                 // 0x44(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDamageArea>           DamageAreaToSpawn;                                 // 0x48(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        AOEFX;                                             // 0x50(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             AOESound;                                          // 0x58(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShakeBase>          CameraShake;                                       // 0x60(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCrabAOEDA* GetDefaultObj();

};

// 0x100 (0x130 - 0x30)
// Class CrabChampions.CrabBiomeDA
class UCrabBiomeDA : public UDataAsset
{
public:
	enum class ECrabBiome                        Biome;                                             // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCrabIsland>                   ArenaIslands;                                      // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCrabIsland>                   HordeIslands;                                      // 0x48(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCrabIsland>                   LargeIslands;                                      // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCrabIsland>                   ParkourIslands;                                    // 0x68(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCrabIsland>                   ShopIslands;                                       // 0x78(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCrabIsland>                   BossIslands;                                       // 0x88(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ACrabEnemyC>>       Enemies;                                           // 0x98(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ACrabDestructible>> CombatDestructibles;                               // 0xA8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ACrabDestructible>> RewardDestructibles;                               // 0xB8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ACrabDestructible>> PhysicsDestructibles;                              // 0xC8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        AmbienceFX;                                        // 0xD8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             AmbienceSound;                                     // 0xE0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        UnderwaterFX;                                      // 0xE8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        SmallOceanImpactFX;                                // 0xF0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             SmallOceanImpactSound;                             // 0xF8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        LargeOceanImpactFX;                                // 0x100(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             LargeOceanImpactSound;                             // 0x108(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnderwaterSpeedMultiplier;                         // 0x110(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCrabDebuff                           UnderwaterDebuff;                                  // 0x114(0x8)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             MusicPlaylist;                                     // 0x120(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             ShopMusic;                                         // 0x128(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCrabBiomeDA* GetDefaultObj();

};

// 0x258 (0x718 - 0x4C0)
// Class CrabChampions.CrabC
class ACrabC : public ACharacter
{
public:
	class UCrabHC*                               HC;                                                // 0x4C0(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     DebuffNC;                                          // 0x4C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioComponent*                       DebuffAC;                                          // 0x4D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     ChainLightningNC;                                  // 0x4D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMesh*                         MeshToSpawn;                                       // 0x4E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    MeshMat;                                           // 0x4E8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UAnimInstance>             AnimationBlueprintToUse;                           // 0x4F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          Tint;                                              // 0x4F8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CoreSocketName;                                    // 0x508(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabLM*                               LM;                                                // 0x510(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AActor*>                        ActorsToIgnore;                                    // 0x518(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_9F7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ACrabWeapon*>                   Weapons;                                           // 0x530(0x10)(Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_9F8[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                UROIntervalPerLOD;                                 // 0x570(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        UpdateMovementStateFrequency;                      // 0x580(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9F9[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bAlignToTerrain;                                   // 0x594(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9FA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AlignToTerrainSocketName;                          // 0x598(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9FB[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseWalkSpeed;                                     // 0x5B0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BaseGravityScale;                                  // 0x5B4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GroundFriction;                                    // 0x5B8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxAcceleration;                                   // 0x5BC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AirControl;                                        // 0x5C0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCalculateViewPitch;                               // 0x5C4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9FD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentViewPitch;                                  // 0x5C8(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9FF[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             LandSound;                                         // 0x5D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A00[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSlowWhenUnderwater;                               // 0x5E1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A01[0xE];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsKnockedBack;                                    // 0x5F0(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A02[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACrabC*                                KnockbackDamageCauser;                             // 0x5F8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A03[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinTimeBetweenDamageEvents;                        // 0x604(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A04[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsImmuneToKnockbacks;                             // 0x610(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsImmuneToKnockbackDamage;                        // 0x611(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsImmuneToIce;                                    // 0x612(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsImmuneToFire;                                   // 0x613(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsImmuneToLightning;                              // 0x614(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsImmuneToPoison;                                 // 0x615(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A05[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DebuffStackMultiplier;                             // 0x618(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        DebuffStackLimit;                                  // 0x61C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsImmuneToSelfDamage;                             // 0x620(0x1)(Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A07[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SelfDamageMultiplier;                              // 0x624(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLimitIncomingDamage;                              // 0x628(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsInvulnerable;                                   // 0x629(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A08[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     InvulnerableNC;                                    // 0x630(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        InvulnerableFX;                                    // 0x638(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             InvulnerableSound;                                 // 0x640(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabC*                                LastDamageCauser;                                  // 0x648(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAwardDamageDealtWhenDamaged;                      // 0x650(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A09[0x1F];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsEliminated;                                     // 0x670(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A0B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          EliminatedMontage;                                 // 0x678(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LifeSpanCleanupTime;                               // 0x680(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A0C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACrabC*                                DOTDamageCauser;                                   // 0x688(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A0D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinTimeBetweenFreezes;                             // 0x694(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabC*                                IceDamageCauser;                                   // 0x698(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabC*                                FireDamageCauser;                                  // 0x6A0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabC*                                LightningDamageCauser;                             // 0x6A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabC*                                ArcaneDamageCauser;                                // 0x6B0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A0F[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCrabDebuffState                      DebuffState;                                       // 0x6E0(0x20)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_A10[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACrabC*                                ChainedToC;                                        // 0x708(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A11[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACrabC* GetDefaultObj();

	void ServerSpawnCosmeticProjectile(struct FCrabProjectileInfo& ProjectileInfo, class AActor* ProjectileOwner, struct FVector_NetQuantize& StartLoc, bool bExplodeInstantly);
	void ServerOnOutOfBounds();
	void ServerDealDamage(TArray<struct FCrabDamageInfo>& DamageInfoArray);
	void ServerClientAuthoritativeMove(struct FClientAuthoritativeMoveData& MoveData);
	void OnRep_IsInvulnerable();
	void OnRep_IsEliminated();
	void OnRep_DebuffState(struct FCrabDebuffState& PreviousDebuffState);
	void OnRep_ChainedToC();
	void ClientKnockback(struct FVector_NetQuantizeNormal& Dir, float Strength);
};

// 0x248 (0x960 - 0x718)
// Class CrabChampions.CrabEnemyC
class ACrabEnemyC : public ACrabC
{
public:
	class UWidgetComponent*                      HealthBarWC;                                       // 0x718(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ScaleMultiplier;                                   // 0x720(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A17[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MeshDMI;                                           // 0x728(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A18[0x9];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bCollideWithCharacters;                            // 0x739(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEliminateIfStuck;                                 // 0x73A(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A19[0x1D];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCrabEnemySpawnSettings               EnemySpawnSettings;                                // 0x758(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class ACrabEnemyAIC*                         OwningAIC;                                         // 0x780(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabEnemyCategory                EnemyCategory;                                     // 0x788(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A1A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EnemyName;                                         // 0x790(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HealthBarHeightOffset;                             // 0x7A0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldFloat;                                      // 0x7A4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A1B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HeightOffset;                                      // 0x7A8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A1C[0x14];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bInvulnerableWhenNoActionIsActive;                 // 0x7C0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A1D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ECrabEnemyBuff>            BannedEnemyBuffs;                                  // 0x7C8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	enum class ECrabEnemyBuff                    EnemyBuff;                                         // 0x7D8(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsShielded;                                       // 0x7D9(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A1E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     ShieldNC;                                          // 0x7E0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FCrabAISettings                       AISettings;                                        // 0x7E8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_A1F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACrabC*                                BestEnemyC;                                        // 0x818(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCrabActionDA*>                 ActionDAs;                                         // 0x820(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        CurrentActionIndex;                                // 0x830(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A21[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCrabActionDA*                         CurrentActionDA;                                   // 0x838(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     ActionNC;                                          // 0x840(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioComponent*                       ActionAC;                                          // 0x848(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A22[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class ACrabEnemyC>>       PendingLesserEnemiesToSpawn;                       // 0x870(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_A23[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        JumpSpeed;                                         // 0x898(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        JumpHeight;                                        // 0x89C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DashSpeed;                                         // 0x8A0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DashHeight;                                        // 0x8A4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FCrabDebuff                           EnemyDebuff;                                       // 0x8A8(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class ACrabDamageArea>           DamageAreaToSpawnWhileMoving;                      // 0x8B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabHealthBarUI>          HealthBarUIToSpawn;                                // 0x8B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabWeaponDA*                         WeaponDA;                                          // 0x8C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          EnemySpawnMontage;                                 // 0x8C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        EnemySpawnFX;                                      // 0x8D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             EnemySpawnSound;                                   // 0x8D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     MeshNC;                                            // 0x8E0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        MeshFX;                                            // 0x8E8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioComponent*                       MeshAC;                                            // 0x8F0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             MeshSound;                                         // 0x8F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  MeshFXSocketName;                                  // 0x900(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsLesserEnemy;                                    // 0x908(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A35[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bHasBeenDamagedPastMaxHealth;                      // 0x910(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A38[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACrabC*                                EliminatingC;                                      // 0x920(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A39[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ChanceToSpawnOnEliminatedEnemies;                  // 0x92C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class ACrabEnemyC>>       OnEliminatedEnemiesToSpawn;                        // 0x930(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_A3B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        GibFX;                                             // 0x948(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             GibSound;                                          // 0x950(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A3C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACrabEnemyC* GetDefaultObj();

	void OnRep_IsShielded();
	void OnRep_EnemyBuff();
	void OnRep_CurrentActionIndex();
	void MulticastSpawnShrapnelProjectiles();
	void MulticastSpawnMirroredProjectile(class ACrabC* DamagingC);
	void MulticastSpawnHomingThornProjectiles();
	void MulticastShowHealthBar();
};

// 0x50 (0x9B0 - 0x960)
// Class CrabChampions.CrabBossC
class ACrabBossC : public ACrabEnemyC
{
public:
	uint8                                        Pad_A41[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class ACrabEnemyC>>       PotentialPhaseLesserEnemiesToSpawn;                // 0x968(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	int32                                        NumPhaseTwoLesserEnemiesToSpawn;                   // 0x978(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumPhaseThreeLesserEnemiesToSpawn;                 // 0x97C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A42[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ACrabPS*>                       BossLootToSpawn;                                   // 0x988(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_A43[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACrabBossC* GetDefaultObj();

};

// 0x30 (0x990 - 0x960)
// Class CrabChampions.CrabTargetDummyC
class ACrabTargetDummyC : public ACrabEnemyC
{
public:
	class UWidgetComponent*                      DPSWC;                                             // 0x960(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCrabDamageTextUI>         DPSWidgetClass;                                    // 0x968(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DPSInterval;                                       // 0x970(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A46[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCrabDamageTextUI*                     DPSUI;                                             // 0x978(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A47[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DPS;                                               // 0x984(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A48[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACrabTargetDummyC* GetDefaultObj();

	void OnRep_DPS();
};

// 0x30 (0x250 - 0x220)
// Class CrabChampions.CrabCheckpoint
class ACrabCheckpoint : public AActor
{
public:
	uint8                                        Pad_A4B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USphereComponent*                      CheckpointCollision;                               // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     CheckpointNC;                                      // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        CheckpointFX;                                      // 0x238(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsFinalCheckpoint;                                // 0x240(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A4C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             CheckpointActiveSound;                             // 0x248(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ACrabCheckpoint* GetDefaultObj();

};

// 0x48 (0x268 - 0x220)
// Class CrabChampions.CrabCosmeticC
class ACrabCosmeticC : public AActor
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  WeaponMesh;                                        // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMesh*                         MeshToSpawn;                                       // 0x230(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UAnimInstance>             AnimationBlueprintToUse;                           // 0x238(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMesh*                           WeaponMeshToSpawn;                                 // 0x240(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          OnEquippedNewCrabSkinMontage;                      // 0x248(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    CrabSkin;                                          // 0x250(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          OnEquippedNewWeaponSkinMontage;                    // 0x258(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    WeaponSkin;                                        // 0x260(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ACrabCosmeticC* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class CrabChampions.CrabCosmeticsDA
class UCrabCosmeticsDA : public UDataAsset
{
public:
	TArray<struct FCrabCosmetic>                 CrabSkins;                                         // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCrabCosmeticsDA* GetDefaultObj();

};

// 0x18 (0x278 - 0x260)
// Class CrabChampions.CrabDamageTextUI
class UCrabDamageTextUI : public UUserWidget
{
public:
	class UScaleBox*                             DamageTextScaleBox;                                // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            DamageText;                                        // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      DamageTextAnim;                                    // 0x270(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabDamageTextUI* GetDefaultObj();

};

// 0x98 (0x3C0 - 0x328)
// Class CrabChampions.CrabEnemyAIC
class ACrabEnemyAIC : public AAIController
{
public:
	struct FCrabAISettings                       AISettings;                                        // 0x328(0x28)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_A5A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACrabEnemyC*                           OwnedC;                                            // 0x358(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A5B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACrabC*                                BestEnemyC;                                        // 0x368(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A5C[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnvQuery*                             RangedActionEnvQuery;                              // 0x3A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A5D[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACrabEnemyAIC* GetDefaultObj();

	void OnReceiveMoveCompleted(const struct FAIRequestID& RequestID, enum class EPathFollowingResult Result);
};

// 0xE8 (0x308 - 0x220)
// Class CrabChampions.CrabDamageArea
class ACrabDamageArea : public AActor
{
public:
	class UNiagaraComponent*                     DamageAreaNC;                                      // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioComponent*                       DamageAreaAC;                                      // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAlignToGround;                                    // 0x230(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabDamageAreaType               DamageAreaType;                                    // 0x231(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A62[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Radius;                                            // 0x234(0x4)(Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LifeTime;                                          // 0x238(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A64[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        FX;                                                // 0x240(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             Sound;                                             // 0x248(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    DecalMat;                                          // 0x250(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabC*                                OwningC;                                           // 0x258(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A65[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        ActorsToIgnore;                                    // 0x268(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FCrabDamageInfo                       DamageInfo;                                        // 0x278(0x38)(Transient, Protected, NativeAccessSpecifierProtected)
	float                                        Damage;                                            // 0x2B0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabDamageType                   DamageType;                                        // 0x2B4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A67[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCrabDebuff                           Debuff;                                            // 0x2B8(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        DamageInterval;                                    // 0x2C0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A6A[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ACrabPlayerC*>                  DamagedPlayers;                                    // 0x2D0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_A6B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ACrabC*>                        OverlappingCharacters;                             // 0x2E8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	float                                        EnergyRingSpeed;                                   // 0x2F8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A6C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SuctionForce;                                      // 0x300(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A6D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACrabDamageArea* GetDefaultObj();

	void OnRep_Radius();
};

// 0x8 (0x30 - 0x28)
// Class CrabChampions.CrabEnemyEQC
class UCrabEnemyEQC : public UEnvQueryContext
{
public:
	enum class ECrabEQCType                      EQCType;                                           // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A6E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrabEnemyEQC* GetDefaultObj();

};

// 0x3A8 (0xAC0 - 0x718)
// Class CrabChampions.CrabPlayerC
class ACrabPlayerC : public ACrabC
{
public:
	class USpringArmComponent*                   CameraSpringArm;                                   // 0x718(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCameraComponent*                      Camera;                                            // 0x720(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  MeleeMesh;                                         // 0x728(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  CosmeticMesh;                                      // 0x730(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetComponent*                      PlayerNameWC;                                      // 0x738(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetComponent*                      PingWC;                                            // 0x740(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     SlideNC;                                           // 0x748(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioComponent*                       SlideAC;                                           // 0x750(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     AmbienceNC;                                        // 0x758(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     UnderwaterNC;                                      // 0x760(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A7D[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsBananaActive;                                   // 0x7B0(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A7E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCrabAbilityDA*                        AbilityDA;                                         // 0x7B8(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabMeleeDA*                          MeleeDA;                                           // 0x7C0(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    CrabSkin;                                          // 0x7C8(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMesh*                           CosmeticToSpawn;                                   // 0x7D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A7F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FOverlapResult>                NearbyActors;                                      // 0x7E0(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	float                                        OverlapSearchRadius;                               // 0x7F0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A80[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACrabInteractable*                     BestInteractable;                                  // 0x7F8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A81[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCrabPlayerNameUI>         PlayerNameUIToSpawn;                               // 0x808(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabPingUI>               PingUIToSpawn;                                     // 0x810(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        AmbientFX;                                         // 0x818(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabPC*                               OwningPC;                                          // 0x820(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A82[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            InteractControllerIcon;                            // 0x838(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A83[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            SalvageControllerIcon;                             // 0x850(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A84[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DefaultSpringArmOffset;                            // 0x864(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A85[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FallingSpringArmZOffset;                           // 0x87C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A86[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimAssistRadius;                                   // 0x88C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AimAssistSpeed;                                    // 0x890(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A87[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                AimAssistTarget;                                   // 0x898(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A88[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          FlipMontageF;                                      // 0x8B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          FlipMontageB;                                      // 0x8B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          FlipMontageR;                                      // 0x8C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          FlipMontageL;                                      // 0x8C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FlipSpeed;                                         // 0x8D0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FlipHeight;                                        // 0x8D4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A89[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StopFlipDelay;                                     // 0x8E0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PostFlipVelocityMultiplier;                        // 0x8E4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A8A[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseDashCooldown;                                  // 0x8F4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          DashMontageF;                                      // 0x8F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          DashMontageB;                                      // 0x900(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          DashMontageR;                                      // 0x908(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          DashMontageL;                                      // 0x910(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DashSpeed;                                         // 0x918(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DashHeight;                                        // 0x91C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PostDashVelocityMultiplier;                        // 0x920(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A8B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        DashBlockedDamageFX;                               // 0x928(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             DashBlockedDamageSound;                            // 0x930(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A8C[0x19];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsSliding;                                        // 0x951(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A8D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           SlideSpeedCurve;                                   // 0x958(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A8E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        IceSlideFX;                                        // 0x968(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             IceSlideSound;                                     // 0x970(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        RockSlideFX;                                       // 0x978(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             RockSlideSound;                                    // 0x980(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        SandSlideFX;                                       // 0x988(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             SandSlideSound;                                    // 0x990(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlideMaxAcceleration;                              // 0x998(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlideBrakingFrictionFactor;                        // 0x99C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlideGroundFriction;                               // 0x9A0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A8F[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SlideDamageIteration;                              // 0x9B0(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsAiming;                                         // 0x9B4(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A90[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          AimingMontage;                                     // 0x9C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             StartAimSound;                                     // 0x9C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             StopAimSound;                                      // 0x9D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A91[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          InteractMontage;                                   // 0xA08(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             InteractFailureSound;                              // 0xA10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabInteractPickup*                   PendingPickupToSalvage;                            // 0xA18(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A92[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ACrabChest*>                    ChestsToAutoLoot;                                  // 0xA30(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_A93[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector_NetQuantize                   PingLoc;                                           // 0xA48(0xC)(Net, Transient, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A94[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             PingSound;                                         // 0xA58(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A95[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        PrePortalFX;                                       // 0xA70(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             PrePortalSound;                                    // 0xA78(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        PostPortalFX;                                      // 0xA80(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             PostPortalSound;                                   // 0xA88(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A96[0x14];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECrabPerkType                     CurrentTriggeredPerk;                              // 0xAA4(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A97[0x1B];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACrabPlayerC* GetDefaultObj();

	void ServerThrowGrenade();
	void ServerStopSlide();
	void ServerStopAim();
	void ServerStartSlide();
	void ServerStartAim();
	void ServerSalvage(class ACrabInteractPickup* PickupToSalvage);
	void ServerPing(struct FVector_NetQuantize& InPingLoc);
	void ServerMelee();
	void ServerInteract(class ACrabInteractable* ActorToInteractWith);
	void ServerFlip(enum class ECrabInputDir FlipDir);
	void ServerDropPickup(class UCrabPickupDA* PickupDA, struct FCrabInventoryInfo& InventoryInfo);
	void ServerDealFallDamage();
	void ServerDash(enum class ECrabInputDir DashDir);
	void ServerAutoLoot();
	void OnRep_SlideDamageIteration();
	void OnRep_PingLoc(const struct FVector_NetQuantize& PreviousPingLoc);
	void OnRep_MeleeDA();
	void OnRep_IsSliding();
	void OnRep_IsBananaActive();
	void OnRep_IsAiming();
	void OnRep_CurrentTriggeredPerk();
	void OnRep_CrabSkin();
	void OnRep_AbilityDA();
	void MulticastThrowGrenade();
	void MulticastMelee();
	void MulticastInteract();
	void MulticastHideStalePing();
	void MulticastFlip(enum class ECrabInputDir FlipDir);
	void MulticastDash(enum class ECrabInputDir DashDir);
	void ClientTeleport(struct FVector_NetQuantize& Loc, float Yaw);
	void ClientPrePortal(class ACrabPortal* Portal);
	void ClientPostPortal();
	void ClientOnTriggeredRingOfDestruction();
	void ClientDashBlockedDamage();
};

// 0x1C0 (0x3E0 - 0x220)
// Class CrabChampions.CrabDestructible
class ACrabDestructible : public AActor
{
public:
	uint8                                        Pad_A9E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  Mesh;                                              // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioComponent*                       LeakAC;                                            // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabHC*                               HC;                                                // 0x238(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<enum class ECrabIslandType>           BannedIslandTypes;                                 // 0x240(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        SpawnWeight;                                       // 0x250(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A9F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           MeshToSpawn;                                       // 0x258(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    MeshMat;                                           // 0x260(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        MeshFX;                                            // 0x268(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     MeshNC;                                            // 0x270(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          Tint;                                              // 0x278(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetComponent*                      HealthBarWC;                                       // 0x288(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabHealthBarUI>          HealthBarUIToSpawn;                                // 0x290(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIgnoreCharacterCollision;                         // 0x298(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabDamageType                   ImmuneDamageType;                                  // 0x299(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bScaleMaxHealthByIsland;                           // 0x29A(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AA2[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinScale;                                          // 0x29C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxScale;                                          // 0x2A0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ScaleMultiplier;                                   // 0x2A4(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AA3[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ProximityExplosionOverlapRadius;                   // 0x2B8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ProximityExplosionDelay;                           // 0x2BC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsProximityExplosionTriggered;                    // 0x2C0(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AA4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        ProximityExplosionTriggeredFX;                     // 0x2C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             ProximityExplosionTriggeredSound;                  // 0x2D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AA5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsPhysicallySimulated;                            // 0x2E0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AA6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PhysicsMassScale;                                  // 0x2E4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PhysicsLinearDamping;                              // 0x2E8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PhysicsImpulseMultiplier;                          // 0x2EC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bChaoticPhysicsMovement;                           // 0x2F0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AA9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PhysicsHomingScale;                                // 0x2F4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabC*                                HomingTarget;                                      // 0x2F8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AAA[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACrabC*                                DamagingC;                                         // 0x310(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AAD[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class ACrabEnemyC>>       PotentialNestEnemiesToSpawn;                       // 0x320(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_AAE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bCanLeak;                                          // 0x334(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AB0[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        LeakFX;                                            // 0x340(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             LeakSound;                                         // 0x348(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UNiagaraComponent*>             Leaks;                                             // 0x350(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_AB1[0x14];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ExplosionRadius;                                   // 0x374(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bScaleExplosionDamageByIsland;                     // 0x378(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AB3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ExplosionDamage;                                   // 0x37C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabDamageType                   ExplosionDamageType;                               // 0x380(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AB4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCrabDebuff                           ExplosionDebuff;                                   // 0x384(0x8)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        ExplosionKnockbackStrength;                        // 0x38C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class ACrabDamageArea>           DamageAreaToSpawn;                                 // 0x390(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabRarity                       CrystalsToSpawnRarity;                             // 0x398(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AB6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ChanceToSpawnRandomPickup;                         // 0x39C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class ACrabEnemyC>>       PotentialChallengeEnemiesToSpawn;                  // 0x3A0(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	float                                        ChanceToSpawnChallengeEnemies;                     // 0x3B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MinChallengeEnemiesToSpawn;                        // 0x3B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxChallengeEnemiesToSpawn;                        // 0x3B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AB7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        ExplosionFX;                                       // 0x3C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             ExplosionSound;                                    // 0x3C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabProjectileDA*                     SecondaryProjectileToSpawn;                        // 0x3D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumSecondaryProjectilesToSpawn;                    // 0x3D8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AB8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACrabDestructible* GetDefaultObj();

	void OnRep_ScaleMultiplier();
	void OnRep_IsProximityExplosionTriggered();
	void MulticastExplode(class ACrabC* ExplodingC);
	void MulticastAddLeak(struct FVector_NetQuantize& DamageLoc);
};

// 0x58 (0x278 - 0x220)
// Class CrabChampions.CrabHarvestArea
class ACrabHarvestArea : public AActor
{
public:
	class USphereComponent*                      HarvestAreaCollision;                              // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     HarvestAreaNC;                                     // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        HarvestAreaFX;                                     // 0x230(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Radius;                                            // 0x238(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        InitialCountdown;                                  // 0x23C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_ABA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACrabPlayerC*                          OverlappingPlayerC;                                // 0x248(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_ABB[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        HarvestCountdownFX;                                // 0x258(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             HarvestCountdownSound;                             // 0x260(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        HarvestClearFX;                                    // 0x268(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             HarvestClearSound;                                 // 0x270(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ACrabHarvestArea* GetDefaultObj();

	void MulticastOnHarvestAreaCleared();
	void MulticastOnCountdownDecremented();
};

// 0x58 (0x278 - 0x220)
// Class CrabChampions.CrabInteractable
class ACrabInteractable : public AActor
{
public:
	class USphereComponent*                      InteractableCollision;                             // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetComponent*                      InteractWC;                                        // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabInteractUI>           InteractUIToSpawn;                                 // 0x230(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabInteractUI*                       InteractUI;                                        // 0x238(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        InteractUIHeightOffset;                            // 0x240(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_ABF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InteractMessage;                                   // 0x248(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AC0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InteractCooldown;                                  // 0x25C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AC1[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACrabInteractable* GetDefaultObj();

};

// 0x30 (0x2A8 - 0x278)
// Class CrabChampions.CrabCrown
class ACrabCrown : public ACrabInteractable
{
public:
	class UStaticMeshComponent*                  CrownMesh;                                         // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     CrownNC;                                           // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioComponent*                       CrownAC;                                           // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMesh*                           Mesh;                                              // 0x290(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        FX;                                                // 0x298(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             Sound;                                             // 0x2A0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ACrabCrown* GetDefaultObj();

};

// 0x98 (0x310 - 0x278)
// Class CrabChampions.CrabInteractPickup
class ACrabInteractPickup : public ACrabInteractable
{
public:
	class UNiagaraComponent*                     PickupPrimaryNC;                                   // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     PickupSecondaryNC;                                 // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetComponent*                      PickupLocationWC;                                  // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FCrabPickupInfo                       PickupInfo;                                        // 0x290(0x58)(Edit, Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_AD0[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        NumTimesPickedUp;                                  // 0x308(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsPickupDeactivated;                              // 0x309(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AD2[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACrabInteractPickup* GetDefaultObj();

	void OnRep_PickupInfo();
	void OnRep_NumTimesPickedUp();
	void OnRep_IsPickupDeactivated();
};

// 0x80 (0x2F8 - 0x278)
// Class CrabChampions.CrabPortal
class ACrabPortal : public ACrabInteractable
{
public:
	class UStaticMeshComponent*                  PortalMesh;                                        // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     PortalNC;                                          // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioComponent*                       PortalAC;                                          // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabIslandType                   IslandType;                                        // 0x290(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AD8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Icon;                                              // 0x298(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                Description;                                       // 0x2A0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          Tint;                                              // 0x2B0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMesh*                           Mesh;                                              // 0x2C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        FX;                                                // 0x2C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             Sound;                                             // 0x2D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FCrabPortalInfo                       PortalInfo;                                        // 0x2D8(0x20)(Net, RepNotify, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ACrabPortal* GetDefaultObj();

	void OnRep_PortalInfo();
};

// 0xC8 (0x340 - 0x278)
// Class CrabChampions.CrabChest
class ACrabChest : public ACrabInteractable
{
public:
	class USkeletalMeshComponent*                ChestMesh;                                         // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     ChestNC;                                           // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioComponent*                       ChestAC;                                           // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetComponent*                      ChestLocationWC;                                   // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                Name;                                              // 0x298(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabLootPool                     LootPool;                                          // 0x2A8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabRarity                       Rarity;                                            // 0x2A9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AE3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumPickupsToSpawn;                                 // 0x2AC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabCurrencyType                 CurrencyType;                                      // 0x2B0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AE5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Cost;                                              // 0x2B4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMesh*                         ChestMeshToSpawn;                                  // 0x2B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             ChestSound;                                        // 0x2C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             OpenSound;                                         // 0x2C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        OpenFX;                                            // 0x2D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UUserWidget>               ChestLocationUI;                                   // 0x2D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                         SpawnAnim;                                         // 0x2E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                         OpenAnim;                                          // 0x2E8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabPS*                               OwningPS;                                          // 0x2F0(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsChestOpened;                                    // 0x2F8(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AE7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCrabPickupsSpawnInfo                 PickupsSpawnInfo;                                  // 0x300(0x20)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ACrabInteractPickup*>           SpawnedPickups;                                    // 0x328(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_AE9[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACrabChest* GetDefaultObj();

	void OnRep_OwningPS();
	void OnRep_IsChestOpened();
};

// 0x48 (0x268 - 0x220)
// Class CrabChampions.CrabLaunchPad
class ACrabLaunchPad : public AActor
{
public:
	class UNiagaraComponent*                     LaunchPadNC;                                       // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioComponent*                       LaunchPadAC;                                       // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        FX;                                                // 0x230(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             Sound;                                             // 0x238(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AED[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LaunchCollisionRadius;                             // 0x248(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LaunchSpeed;                                       // 0x24C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideXYVelocity;                               // 0x250(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AEE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        LaunchFX;                                          // 0x258(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             LaunchSound;                                       // 0x260(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ACrabLaunchPad* GetDefaultObj();

};

// 0xB0 (0x328 - 0x278)
// Class CrabChampions.CrabTotem
class ACrabTotem : public ACrabInteractable
{
public:
	uint8                                        Pad_AF1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  TotemMesh;                                         // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     TotemNC;                                           // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioComponent*                       TotemAC;                                           // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabTotemType                    TotemType;                                         // 0x298(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AF3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpawnWeight;                                       // 0x29C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ChanceToExplode;                                   // 0x2A0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          Tint;                                              // 0x2A4(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AF4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           Mesh;                                              // 0x2B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        FX;                                                // 0x2C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             Sound;                                             // 0x2C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Cost;                                              // 0x2D0(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AF5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumBuffs;                                          // 0x2D8(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AF6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             BuffSound;                                         // 0x2E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumDebuffs;                                        // 0x2E8(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AF8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             DebuffSound;                                       // 0x2F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AF9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsExploded;                                       // 0x300(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AFA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           DestroyedMesh;                                     // 0x308(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        ExplosionFX;                                       // 0x310(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             ExplosionSound;                                    // 0x318(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCameraShakeBase>          ExplosionCameraShake;                              // 0x320(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ACrabTotem* GetDefaultObj();

	void OnRep_NumDebuffs();
	void OnRep_NumBuffs();
	void OnRep_IsExploded();
	void OnRep_Cost();
};

// 0x48 (0x268 - 0x220)
// Class CrabChampions.CrabOverlapPickup
class ACrabOverlapPickup : public AActor
{
public:
	uint8                                        Pad_AFC[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     PickupNC;                                          // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USphereComponent*                      PickupCollision;                                   // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        OverlapRadius;                                     // 0x238(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LifeTime;                                          // 0x23C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        PickupFX;                                          // 0x240(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabPlayerC*                          PickedUpByC;                                       // 0x248(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AFD[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             OnPickedUpSound;                                   // 0x260(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ACrabOverlapPickup* GetDefaultObj();

	void OnRep_PickedUpByC();
};

// 0x0 (0x268 - 0x268)
// Class CrabChampions.CrabBananaPickup
class ACrabBananaPickup : public ACrabOverlapPickup
{
public:

	static class UClass* StaticClass();
	static class ACrabBananaPickup* GetDefaultObj();

};

// 0x8 (0x270 - 0x268)
// Class CrabChampions.CrabCrystalPickup
class ACrabCrystalPickup : public ACrabOverlapPickup
{
public:
	uint8                                        Pad_AFF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CrystalsMultiplier;                                // 0x26C(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ACrabCrystalPickup* GetDefaultObj();

	void OnRep_CrystalsMultiplier();
};

// 0x8 (0x270 - 0x268)
// Class CrabChampions.CrabHealthPickup
class ACrabHealthPickup : public ACrabOverlapPickup
{
public:
	float                                        HealthToGive;                                      // 0x268(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B03[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACrabHealthPickup* GetDefaultObj();

	void OnRep_HealthToGive();
};

// 0x48 (0x268 - 0x220)
// Class CrabChampions.CrabPhysicsActor
class ACrabPhysicsActor : public AActor
{
public:
	uint8                                        Pad_B0D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  Mesh;                                              // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMesh*                           MeshToSpawn;                                       // 0x230(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinScale;                                          // 0x238(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxScale;                                          // 0x23C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRandomizeInitialRotation;                         // 0x240(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B10[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bExplodeWhenTakingDamage;                          // 0x250(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsExploded;                                       // 0x251(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B11[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        ExplosionFX;                                       // 0x258(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             ExplosionSound;                                    // 0x260(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ACrabPhysicsActor* GetDefaultObj();

	void OnRep_IsExploded();
};

// 0x70 (0xA0 - 0x30)
// Class CrabChampions.CrabPickupDA
class UCrabPickupDA : public UDataAsset
{
public:
	bool                                         bRequiresUnlock;                                   // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B12[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x48(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Icon;                                              // 0x58(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrabPickupType                   PickupType;                                        // 0x60(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrabLootPool                     LootPool;                                          // 0x61(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrabRarity                       Rarity;                                            // 0x62(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrabPickupTag                    PickupTag;                                         // 0x63(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequiresMatchingPickupTag;                        // 0x64(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B14[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpawnWeight;                                       // 0x68(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B15[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        PrimaryFX;                                         // 0x70(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        SecondaryFX;                                       // 0x78(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCrabInteractUI>           InteractUI;                                        // 0x80(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>               LocationUI;                                        // 0x88(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        OnPickedUpFX;                                      // 0x90(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             OnPickedUpSound;                                   // 0x98(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCrabPickupDA* GetDefaultObj();

};

// 0x58 (0x2B8 - 0x260)
// Class CrabChampions.CrabUI
class UCrabUI : public UUserWidget
{
public:
	uint8                                        Pad_B17[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrabUI* GetDefaultObj();

};

// 0x1A8 (0x460 - 0x2B8)
// Class CrabChampions.CrabGameplayUI
class UCrabGameplayUI : public UCrabUI
{
public:
	class ACrabPlayerC*                          OwningC;                                           // 0x2B8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabPS*                               OwningPS;                                          // 0x2C0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabCrosshairUI*                      CrosshairUI;                                       // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabHealthBarUI*                      HealthBarUI;                                       // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            PointsText;                                        // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ComboText;                                         // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OnUpdatedComboSmallAnim;                           // 0x2E8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OnUpdatedComboLargeAnim;                           // 0x2F0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B1A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            CrystalsText;                                      // 0x300(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CrystalsDifferenceText;                            // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OnUpdatedCrystalsAnim;                             // 0x310(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B1C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            KeysText;                                          // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            KeysDifferenceText;                                // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OnUpdatedKeysAnim;                                 // 0x330(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OnArmorBreakAnim;                                  // 0x338(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OnTookDamageAnim;                                  // 0x340(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B1F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            CrabChampionsVersionText;                          // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          FPSVerticalBox;                                    // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            FPSText;                                           // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            PingText;                                          // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            EliminatedByText;                                  // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      EliminatedByAnim;                                  // 0x378(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabWeapon*                           EquippedWeapon;                                    // 0x380(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                ScopeImage;                                        // 0x388(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OnStartedScopeAimingAnim;                          // 0x390(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OnStoppedScopeAimingAnim;                          // 0x398(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CurrentAmmoText;                                   // 0x3A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            WeaponNameText;                                    // 0x3A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            AbilityKeyText;                                    // 0x3B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                AbilityControllerIcon;                             // 0x3B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                AbilityIcon;                                       // 0x3C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            AbilityCooldownText;                               // 0x3C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OnAbilityCooldownExpiredAnim;                      // 0x3D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            AbilityStackText;                                  // 0x3D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            MeleeKeyText;                                      // 0x3E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                MeleeControllerIcon;                               // 0x3E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                MeleeIcon;                                         // 0x3F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            MeleeCooldownText;                                 // 0x3F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OnMeleeCooldownExpiredAnim;                        // 0x400(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            InventoryKeyText;                                  // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                InventoryControllerIcon;                           // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               NewPickupBorder;                                   // 0x418(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            NewPickupNameText;                                 // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                NewPickupIcon;                                     // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            NewPickupDescriptionText;                          // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            NewPickupTypeText;                                 // 0x438(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            NewPickupLevelText;                                // 0x440(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      NewPickupAnim;                                     // 0x448(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          InventoryEventVerticalBox;                         // 0x450(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabInventoryEventUI>     InventoryEventUIToSpawn;                           // 0x458(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabGameplayUI* GetDefaultObj();

};

// 0x18 (0xB8 - 0xA0)
// Class CrabChampions.CrabAbilityDA
class UCrabAbilityDA : public UCrabPickupDA
{
public:
	class UCrabProjectileDA*                     ProjectileDA;                                      // 0xA0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrabHitmarkerType                HitmarkerType;                                     // 0xA8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B22[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Cooldown;                                          // 0xAC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          Montage;                                           // 0xB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCrabAbilityDA* GetDefaultObj();

};

// 0x8 (0xA8 - 0xA0)
// Class CrabChampions.CrabConsumableDA
class UCrabConsumableDA : public UCrabPickupDA
{
public:
	enum class ECrabConsumableType               ConsumableType;                                    // 0xA0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B24[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Buff;                                              // 0xA4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCrabConsumableDA* GetDefaultObj();

};

// 0x28 (0xC8 - 0xA0)
// Class CrabChampions.CrabInventoryDA
class UCrabInventoryDA : public UCrabPickupDA
{
public:
	bool                                         bCanBeEnhanced;                                    // 0xA0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B25[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LevelDescription;                                  // 0xA8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseBuff;                                          // 0xB8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHyperbolicBuff;                                   // 0xBC(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGetBuffAsMultiplier;                              // 0xBD(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B27[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseDebuff;                                        // 0xC0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHyperbolicDebuff;                                 // 0xC4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGetDebuffAsMultiplier;                            // 0xC5(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Cooldown;                                          // 0xC6(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B29[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrabInventoryDA* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class CrabChampions.CrabGrenadeModDA
class UCrabGrenadeModDA : public UCrabInventoryDA
{
public:
	enum class ECrabGrenadeModType               GrenadeModType;                                    // 0xC8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B2D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrabGrenadeModDA* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class CrabChampions.CrabPerkDA
class UCrabPerkDA : public UCrabInventoryDA
{
public:
	enum class ECrabPerkType                     PerkType;                                          // 0xC8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B30[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrabPerkDA* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class CrabChampions.CrabRelicDA
class UCrabRelicDA : public UCrabInventoryDA
{
public:
	enum class ECrabRelicType                    RelicType;                                         // 0xC8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B34[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrabRelicDA* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class CrabChampions.CrabWeaponModDA
class UCrabWeaponModDA : public UCrabInventoryDA
{
public:
	enum class ECrabWeaponModType                WeaponModType;                                     // 0xC8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChanceBased;                                      // 0xC9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B36[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrabWeaponModDA* GetDefaultObj();

};

// 0x28 (0xC8 - 0xA0)
// Class CrabChampions.CrabMeleeDA
class UCrabMeleeDA : public UCrabPickupDA
{
public:
	class UStaticMesh*                           Mesh;                                              // 0xA0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrabHitmarkerType                HitmarkerType;                                     // 0xA8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B37[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Cooldown;                                          // 0xAC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          Montage;                                           // 0xB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LaunchHeight;                                      // 0xB8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Range;                                             // 0xBC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0xC0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        KnockbackStrength;                                 // 0xC4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCrabMeleeDA* GetDefaultObj();

};

// 0x208 (0x428 - 0x220)
// Class CrabChampions.CrabProjectile
class ACrabProjectile : public AActor
{
public:
	class USphereComponent*                      ProjectileCollision;                               // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabPMC*                              ProjectilePMC;                                     // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     ProjectileNC;                                      // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     ProjectileTrailNC;                                 // 0x238(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioComponent*                       ProjectileAC;                                      // 0x240(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B3C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCrabProjectileInfo                   ProjectileInfo;                                    // 0x250(0x30)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B3D[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ECrabEnhancementType>      Enhancements;                                      // 0x2A8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCrabWeaponMod>                WeaponMods;                                        // 0x2B8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCrabGrenadeMod>               GrenadeMods;                                       // 0x2C8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCrabPerk>                     Perks;                                             // 0x2D8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B3E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        ActorsToIgnore;                                    // 0x2F0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B3F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCrabDamageInfo                       ProximityDamageInfo;                               // 0x308(0x38)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B40[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCrabDamageInfo                       AuraDamageInfo;                                    // 0x348(0x38)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B41[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCrabDamageInfo                       ExplosionDamageInfo;                               // 0x390(0x38)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B42[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACrabProjectile* GetDefaultObj();

};

// 0x130 (0x1D0 - 0xA0)
// Class CrabChampions.CrabWeaponDA
class UCrabWeaponDA : public UCrabPickupDA
{
public:
	class UStaticMesh*                           Mesh;                                              // 0xA0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDualWield;                                        // 0xA8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B43[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCrabProjectileDA*                     ProjectileDA;                                      // 0xB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCrabWeaponMod                        StartingWeaponMod;                                 // 0xB8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        AimingFOVMultiplier;                               // 0xE0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AimingSpringArmOffset;                             // 0xE4(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrabCrosshairType                CrosshairType;                                     // 0xF0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrabHitmarkerType                HitmarkerType;                                     // 0xF1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrabFireMode                     FireMode;                                          // 0xF2(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrabFormationType                FormationType;                                     // 0xF3(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FormationSpacing;                                  // 0xF4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FormationExpansionDampening;                       // 0xF8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAdditiveFormations;                               // 0xFC(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B45[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ShotsPerBurst;                                     // 0x100(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeBetweenBurstShots;                             // 0x104(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseFireRate;                                      // 0x108(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponModTriggerRollMultiplier;                    // 0x10C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseSpread;                                        // 0x110(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FiringSpreadIncrement;                             // 0x114(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSpread;                                         // 0x118(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpreadRecovery;                                    // 0x11C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimingSpreadMultiplier;                            // 0x120(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VerticalRecoil;                                    // 0x124(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HorizontalRecoil;                                  // 0x128(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilInterpSpeed;                                 // 0x12C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoilRecoveryInterpSpeed;                         // 0x130(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SelfKnockbackStrength;                             // 0x134(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseClipSize;                                      // 0x138(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInfiniteClipSize;                                 // 0x13C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B47[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReloadDuration;                                    // 0x140(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B48[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          EquipMontage;                                      // 0x148(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             EquipSound;                                        // 0x150(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Tint;                                              // 0x158(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        CosmeticFX;                                        // 0x168(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          FireMontage;                                       // 0x170(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          DualWieldFireMontage;                              // 0x178(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        MuzzleFlashFX;                                     // 0x180(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             GunshotSound;                                      // 0x188(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PostFireClearChamberDelay;                         // 0x190(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          PostFireClearChamberMontage;                       // 0x198(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             PostFireClearChamberSound;                         // 0x1A0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             EmptyClipSound;                                    // 0x1A8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          ReloadMontage;                                     // 0x1B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          DualWieldReloadMontage;                            // 0x1B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             MagOutSound;                                       // 0x1C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             MagInSound;                                        // 0x1C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCrabWeaponDA* GetDefaultObj();

};

// 0xC8 (0xF8 - 0x30)
// Class CrabChampions.CrabProjectileDA
class UCrabProjectileDA : public UDataAsset
{
public:
	float                                        LifeTime;                                          // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionRadius;                                   // 0x34(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartDelay;                                        // 0x38(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed;                                             // 0x3C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSpeed;                                          // 0x40(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccelerationScale;                                 // 0x44(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ZigZagScale;                                       // 0x48(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpiralScale;                                       // 0x4C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnakeScale;                                        // 0x50(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChaoticScale;                                      // 0x54(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoomerangScale;                                    // 0x58(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OrbitingScale;                                     // 0x5C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityScale;                                      // 0x60(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HomingScale;                                       // 0x64(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GrapplingScale;                                    // 0x68(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPiercings;                                      // 0x6C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxBounces;                                        // 0x70(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BounceVelocityScale;                               // 0x74(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGlueToHitCharacters;                              // 0x78(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B51[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ProximityDamageRadius;                             // 0x7C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProximityDamageMultiplier;                         // 0x80(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExplodeAfterLifetime;                             // 0x84(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B52[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ExplosionDelay;                                    // 0x88(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExplosionRadius;                                   // 0x8C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExplosionDamage;                                   // 0x90(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExplosionKnockbackStrength;                        // 0x94(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDestructible>         ExplosionDestructibleToSpawn;                      // 0x98(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExplosionDestructiblePhysicsImpulse;               // 0xA0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExplosionDamageAreaSpawnChance;                    // 0xA4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDamageArea>           ExplosionDamageAreaToSpawn;                        // 0xA8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        ProjectileFX;                                      // 0xB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        ProjectileTrailFX;                                 // 0xB8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             ProjectileSound;                                   // 0xC0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRandomizeTint;                                    // 0xC8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B54[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        ExplosionFX;                                       // 0xD0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             ExplosionSound;                                    // 0xD8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShakeBase>          ExplosionCameraShake;                              // 0xE0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    ExplosionDecalMat;                                 // 0xE8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExplosionDecalSize;                                // 0xF0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B55[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrabProjectileDA* GetDefaultObj();

};

// 0x140 (0x168 - 0x28)
// Class CrabChampions.CrabSettingsSG
class UCrabSettingsSG : public USaveGame
{
public:
	class FString                                DisplayMode;                                       // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Resolution;                                        // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ResolutionQuality;                                 // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FPSLimit;                                          // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VSync;                                             // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldOfView;                                       // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GraphicsQuality;                                   // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WeaponEffects;                                     // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AntiAliasingType;                                  // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Sharpening;                                        // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MotionBlur;                                        // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CameraShake;                                       // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Hitmarkers;                                        // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DamageNumbers;                                     // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TextChatVisibility;                                // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ShowFPS;                                           // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PauseWhenLosingFocus;                              // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MasterVolume;                                      // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GameplayVolume;                                    // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MusicVolume;                                       // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LookSensitivity;                                   // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimingSensitivityMultiplier;                       // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVerticalLookInversion;                            // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B57[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimAssistStrength;                                 // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B58[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCrabKeyBind>                  CrabKeyBinds;                                      // 0x158(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCrabSettingsSG* GetDefaultObj();

};

// 0x40 (0x260 - 0x220)
// Class CrabChampions.CrabShopPedestal
class ACrabShopPedestal : public AActor
{
public:
	class UStaticMeshComponent*                  PedestalMesh;                                      // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetComponent*                      PedestalWC;                                        // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMesh*                           PedestalMeshToSpawn;                               // 0x230(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabShopPedestalUI>       ShopPedestalUIToSpawn;                             // 0x238(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabLootPool                     LootPool;                                          // 0x240(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        MaxPickups;                                        // 0x241(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabCurrencyType                 CurrencyType;                                      // 0x242(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B60[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCrabPickupDA*                         PickupToSpawn;                                     // 0x248(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FCrabPedestalInfo                     PedestalInfo;                                      // 0x250(0xC)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B63[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACrabShopPedestal* GetDefaultObj();

	void MulticastInitPedestalInfo(struct FCrabPedestalInfo& NewPedestalInfo);
	void MulticastHidePedestalWC();
};

// 0x20 (0x2A0 - 0x280)
// Class CrabChampions.CrabSpectatorC
class ACrabSpectatorC : public APawn
{
public:
	class USpringArmComponent*                   CameraSpringArm;                                   // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCameraComponent*                      SpectatorCamera;                                   // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B6C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACrabPlayerC*                          SpectatingPlayer;                                  // 0x298(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ACrabSpectatorC* GetDefaultObj();

	void ClientInitSpectatorC(class ACrabPlayerC* EliminatedPlayerToSpectate);
};

// 0x18 (0x238 - 0x220)
// Class CrabChampions.CrabSpawnPoint
class ACrabSpawnPoint : public AActor
{
public:
	class USceneComponent*                       SpawnPointRoot;                                    // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabSpawnPointType               SpawnPointType;                                    // 0x228(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B6E[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACrabSpawnPoint* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CrabChampions.CrabStatics
class UCrabStatics : public UObject
{
public:

	static class UClass* StaticClass();
	static class UCrabStatics* GetDefaultObj();

};

// 0x80 (0x2A0 - 0x220)
// Class CrabChampions.CrabStatsPedestal
class ACrabStatsPedestal : public AActor
{
public:
	class UStaticMeshComponent*                  PedestalMesh;                                      // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetComponent*                      StatsWC;                                           // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMesh*                           PedestalMeshToSpawn;                               // 0x230(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabStatsUI>              StatsUIToSpawn;                                    // 0x238(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FCrabLobbyStats                       LobbyStats;                                        // 0x240(0x58)(Net, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B72[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACrabStatsPedestal* GetDefaultObj();

	void OnRep_LobbyStats();
};

// 0x50 (0x270 - 0x220)
// Class CrabChampions.CrabStrike
class ACrabStrike : public AActor
{
public:
	class ACrabC*                                OwningC;                                           // 0x220(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B73[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        FX;                                                // 0x230(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             SpawnSound;                                        // 0x238(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Radius;                                            // 0x240(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ExplosionDelay;                                    // 0x244(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Damage;                                            // 0x248(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabDamageType                   DamageType;                                        // 0x24C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B75[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCrabDebuff                           Debuff;                                            // 0x250(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class ACrabDamageArea>           DamageAreaToSpawn;                                 // 0x258(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             ExplosionSound;                                    // 0x260(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCameraShakeBase>          ExplosionCameraShake;                              // 0x268(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ACrabStrike* GetDefaultObj();

};

// 0x10 (0x2C8 - 0x2B8)
// Class CrabChampions.CrabChatEntryRowUI
class UCrabChatEntryRowUI : public UCrabUI
{
public:
	class UTextBlock*                            PlayerNameText;                                    // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ChatMessageText;                                   // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabChatEntryRowUI* GetDefaultObj();

};

// 0x118 (0x338 - 0x220)
// Class CrabChampions.CrabTurret
class ACrabTurret : public AActor
{
public:
	uint8                                        Pad_B77[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  BaseMesh;                                          // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  TurretMesh;                                        // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     TurretNC;                                          // 0x238(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabHC*                               HC;                                                // 0x240(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetComponent*                      HealthBarWC;                                       // 0x248(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  MuzzleSocketName;                                  // 0x250(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     MuzzleFlashNC;                                     // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioComponent*                       GunshotAC;                                         // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          Tint;                                              // 0x268(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMesh*                           BaseMeshToSpawn;                                   // 0x278(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMesh*                           TurretMeshToSpawn;                                 // 0x280(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        FX;                                                // 0x288(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabC*                                OwningC;                                           // 0x290(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SearchFrequency;                                   // 0x298(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FireRate;                                          // 0x29C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B7A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCrabHealthBarUI>          HealthBarUIToSpawn;                                // 0x2A8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HealthBarHeightOffset;                             // 0x2B0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B7B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TurretName;                                        // 0x2B8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        MuzzleFlashFX;                                     // 0x2C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             GunshotSound;                                      // 0x2D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TurretRotationSpeed;                               // 0x2D8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B7C[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACrabC*                                BestEnemyC;                                        // 0x2E8(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SearchRange;                                       // 0x2F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B7D[0x14];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCrabProjectileDA*                     ProjectileDA;                                      // 0x308(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FCrabDebuff                           Debuff;                                            // 0x310(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsExploded;                                       // 0x318(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B7E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        ExplosionFX;                                       // 0x320(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             ExplosionSound;                                    // 0x328(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCameraShakeBase>          ExplosionCameraShake;                              // 0x330(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ACrabTurret* GetDefaultObj();

	void OnRep_OwningC();
	void OnRep_IsExploded();
};

// 0x78 (0x330 - 0x2B8)
// Class CrabChampions.CrabCosmeticSlotUI
class UCrabCosmeticSlotUI : public UCrabUI
{
public:
	struct FCrabChallenge                        ChallengeToUnlock;                                 // 0x2B8(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	class UCrabCosmeticsMenuUI*                  OwningCosmeticsMenuUI;                             // 0x308(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               SlotButton;                                        // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                SlotIconImage;                                     // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              SlotLockedOverlay;                                 // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               SlotSelectedBorder;                                // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabCosmeticSlotUI* GetDefaultObj();

	void OnPressedSlotButton();
	void OnHoveredSlotButton();
};

// 0x60 (0x318 - 0x2B8)
// Class CrabChampions.CrabControlsMenuUI
class UCrabControlsMenuUI : public UCrabUI
{
public:
	TArray<class UWidget*>                       ControlsMenuFocusableWidgetArray;                  // 0x2B8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UCrabSliderUI*                         LookSensitivitySlider;                             // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabSliderUI*                         AimingSensitivityMultiplierSlider;                 // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabArrowSelectionUI*                 VerticalLookInversionAS;                           // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabArrowSelectionUI*                 AimAssistStrengthAS;                               // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabKeyBindRowUI>         KeyBindRowUIToSpawn;                               // 0x2E8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          ControlsVerticalBox;                               // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCrabKeyBind>                  CurrentKeyBinds;                                   // 0x2F8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UCrabKeyBindRowUI*>             KeyBindRows;                                       // 0x308(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabControlsMenuUI* GetDefaultObj();

};

// 0x58 (0x310 - 0x2B8)
// Class CrabChampions.CrabCrosshairUI
class UCrabCrosshairUI : public UCrabUI
{
public:
	class ACrabPlayerC*                          OwningC;                                           // 0x2B8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabWeapon*                           EquippedWeapon;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                CrosshairImage;                                    // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              CrosshairMI;                                       // 0x2D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B83[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      FireAnim;                                          // 0x2E8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                HitmarkerImage;                                    // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      GenericHitmarkerAnim;                              // 0x2F8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      ArmorBreakHitmarkerAnim;                           // 0x300(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      EliminationHitmarkerAnim;                          // 0x308(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabCrosshairUI* GetDefaultObj();

};

// 0x40 (0x2F8 - 0x2B8)
// Class CrabChampions.CrabDifficultyModifierUI
class UCrabDifficultyModifierUI : public UCrabUI
{
public:
	class UCrabDifficultyMenuUI*                 OwningDifficultyMenuUI;                            // 0x2B8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B86[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlay*                              DifficultyModifierOverlay;                         // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               DifficultyModifierButton;                          // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            DifficultyModifierNameText;                        // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            DifficultyModifierDescriptionText;                 // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              ChallengeLevelOverlay;                             // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ChallengeLevelText;                                // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabDifficultyModifierUI* GetDefaultObj();

	void OnPressedDifficultyModifierButton();
	void OnHoveredDifficultyModifierButton();
};

// 0x118 (0x3D0 - 0x2B8)
// Class CrabChampions.CrabFocusMenuUI
class UCrabFocusMenuUI : public UCrabUI
{
public:
	class UWidgetSwitcher*                       MenuWidgetSwitcher;                                // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UWidget*>                       FocusableWidgetArray;                              // 0x2C0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class ACrabPC*                               OwningPC;                                          // 0x2D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B8B[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               PreviouslyFocusedWidget;                           // 0x348(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          MenuCanvasPanel;                                   // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               ResetFocusButton;                                  // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             HoverSound;                                        // 0x360(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             PressSound;                                        // 0x368(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            MenuActionKeyText;                                 // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                MenuActionControllerIcon;                          // 0x378(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            MenuBackKeyText;                                   // 0x380(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                MenuBackControllerIcon;                            // 0x388(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            NextSubmenuKeyText;                                // 0x390(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                NextSubmenuIcon;                                   // 0x398(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            PreviousSubmenuKeyText;                            // 0x3A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                PreviousSubmenuIcon;                               // 0x3A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        SubmenuHorizontalBox;                              // 0x3B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B8E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UButton*                               ActionButton;                                      // 0x3C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               BackButton;                                        // 0x3C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabFocusMenuUI* GetDefaultObj();

	void OnPressedResetFocusButton();
	void OnPressedBackButton();
	void OnPressedActionButton();
};

// 0x30 (0x400 - 0x3D0)
// Class CrabChampions.CrabConfirmationPromptUI
class UCrabConfirmationPromptUI : public UCrabFocusMenuUI
{
public:
	class UTextBlock*                            ConfirmationPromptMessageText;                     // 0x3D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               YesButton;                                         // 0x3D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               NoButton;                                          // 0x3E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B93[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrabConfirmationPromptUI* GetDefaultObj();

	void OnPressedYesButton();
	void OnPressedNoButton();
	void OnHoveredYesButton();
	void OnHoveredNoButton();
};

// 0xA8 (0x478 - 0x3D0)
// Class CrabChampions.CrabGameOverUI
class UCrabGameOverUI : public UCrabFocusMenuUI
{
public:
	class UTextBlock*                            RunResultText;                                     // 0x3D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            DifficultyText;                                    // 0x3D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ScoreText;                                         // 0x3E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            HighScoreText;                                     // 0x3E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            AttemptsText;                                      // 0x3F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            WinsText;                                          // 0x3F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            WinStreakText;                                     // 0x400(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            IslandsSurvivedText;                               // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            HighestIslandReachedText;                          // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            TotalTimeTakenText;                                // 0x418(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          GameOverRowUIVerticalBox;                          // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabGameOverRowUI>        GameOverRowUIToSpawn;                              // 0x428(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCrabChallenge>                CompletedChallenges;                               // 0x430(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B97[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCrabUnlockedCosmeticUI>   UnlockedCosmeticUIToSpawn;                         // 0x448(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        UnlockedCosmeticsHorizontalBox;                    // 0x450(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            RankedUpWeaponText;                                // 0x458(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                RankedUpWeaponMedalIconImage;                      // 0x460(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            RankedUpWeaponRankText;                            // 0x468(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      RankedUpWeaponAnim;                                // 0x470(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabGameOverUI* GetDefaultObj();

};

// 0x60 (0x430 - 0x3D0)
// Class CrabChampions.CrabInGameMenuUI
class UCrabInGameMenuUI : public UCrabFocusMenuUI
{
public:
	class UCrabConfirmationPromptUI*             ConfirmationPrompt;                                // 0x3D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabSettingsMenuUI*                   SettingsMenu;                                      // 0x3D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               ResumeButton;                                      // 0x3E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               QuickRestartButton;                                // 0x3E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               SettingsButton;                                    // 0x3F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               FeedbackButton;                                    // 0x3F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               QuitToLobbyButton;                                 // 0x400(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               QuitToDesktopButton;                               // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabConfirmationPromptUI*             QuitConfirmationPromptUI;                          // 0x410(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B9D[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrabInGameMenuUI* GetDefaultObj();

	void OnPressedSettingsButton();
	void OnPressedResumeButton();
	void OnPressedQuitToLobbyButton();
	void OnPressedQuitToDesktopButton();
	void OnPressedQuickRestartButton();
	void OnPressedFeedbackButton();
	void OnHoveredSettingsButton();
	void OnHoveredResumeButton();
	void OnHoveredQuitToLobbyButton();
	void OnHoveredQuitToDesktopButton();
	void OnHoveredQuickRestartButton();
	void OnHoveredFeedbackButton();
};

// 0x30 (0x400 - 0x3D0)
// Class CrabChampions.CrabSettingsMenuUI
class UCrabSettingsMenuUI : public UCrabFocusMenuUI
{
public:
	class UCrabVideoMenuUI*                      VideoMenu;                                         // 0x3D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabSoundMenuUI*                      SoundMenu;                                         // 0x3D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabControlsMenuUI*                   ControlsMenu;                                      // 0x3E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               VideoButton;                                       // 0x3E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               SoundButton;                                       // 0x3F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               ControlsButton;                                    // 0x3F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabSettingsMenuUI* GetDefaultObj();

	void OnPressedVideoButton();
	void OnPressedSoundButton();
	void OnPressedControlsButton();
};

// 0x38 (0x2F0 - 0x2B8)
// Class CrabChampions.CrabGameOverRowUI
class UCrabGameOverRowUI : public UCrabUI
{
public:
	class UImage*                                MVPCrownImage;                                     // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            PlayerNameText;                                    // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ScoreText;                                         // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            DamageDealtText;                                   // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            EliminationsText;                                  // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            DamageTakenText;                                   // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            FlawlessIslandsText;                               // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabGameOverRowUI* GetDefaultObj();

};

// 0x670 (0x6A0 - 0x30)
// Class CrabChampions.CrabSpawnablesDA
class UCrabSpawnablesDA : public UDataAsset
{
public:
	class UNiagaraSystem*                        ShieldFX;                                          // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    IceMat;                                            // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        IceFX;                                             // 0x40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             IceSound;                                          // 0x48(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        IceThawFX;                                         // 0x50(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        FireFX;                                            // 0x58(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             FireSound;                                         // 0x60(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        LightningFX;                                       // 0x68(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             LightningSound;                                    // 0x70(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        ChainLightningFX;                                  // 0x78(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        PoisonFX;                                          // 0x80(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             PoisonSound;                                       // 0x88(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        ArcaneFX;                                          // 0x90(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             ArcaneSound;                                       // 0x98(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        GenericExplosionFX;                                // 0xA0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             GenericExplosionSound;                             // 0xA8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        IceExplosionFX;                                    // 0xB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             IceExplosionSound;                                 // 0xB8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        FireExplosionFX;                                   // 0xC0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             FireExplosionSound;                                // 0xC8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        LightningExplosionFX;                              // 0xD0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             LightningExplosionSound;                           // 0xD8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        PoisonExplosionFX;                                 // 0xE0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             PoisonExplosionSound;                              // 0xE8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UCrabWeaponDA*>                 Weapons;                                           // 0xF0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UCrabAbilityDA*>                Abilities;                                         // 0x100(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UCrabMeleeDA*>                  MeleeWeapons;                                      // 0x110(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UCrabWeaponModDA*>              WeaponMods;                                        // 0x120(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UCrabGrenadeModDA*>             GrenadeMods;                                       // 0x130(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UCrabPerkDA*>                   Perks;                                             // 0x140(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UCrabRelicDA*>                  Relics;                                            // 0x150(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UCrabConsumableDA*>             Consumables;                                       // 0x160(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabHealthPickup>         HealthPickup;                                      // 0x170(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabCrystalPickup>        CrystalPickup;                                     // 0x178(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        BananaAmbienceFX;                                  // 0x180(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        CriticalBlastFX;                                   // 0x188(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             CriticalBlastSound;                                // 0x190(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     TimeBoltDA;                                        // 0x198(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     UltraShotDA;                                       // 0x1A0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     ReloadArcDA;                                       // 0x1A8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     LinkDA;                                            // 0x1B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     DrillDA;                                           // 0x1B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     BubbleDA;                                          // 0x1C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     DaggerDA;                                          // 0x1C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     ScytheDA;                                          // 0x1D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     PiercingWaveDA;                                    // 0x1D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     ArcaneBlastDA;                                     // 0x1E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     ShotgunDA;                                         // 0x1E8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     MaceBallDA;                                        // 0x1F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     FireworkDA;                                        // 0x1F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     ThornDA;                                           // 0x200(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     SparkDA;                                           // 0x208(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     ProximityBarrageDA;                                // 0x210(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     HomingBladeDA;                                     // 0x218(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     BombDA;                                            // 0x220(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     TorpedoDA;                                         // 0x228(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     FireballDA;                                        // 0x230(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     SharpenedAxeDA;                                    // 0x238(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     TriangleDA;                                        // 0x240(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     SpinningBladeDA;                                   // 0x248(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDestructible>         Landmine;                                          // 0x250(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDestructible>         HomingBarrel;                                      // 0x258(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDestructible>         SporeMushroom;                                     // 0x260(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDestructible>         UltraMushroom;                                     // 0x268(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDamageArea>           CrimsonHazeDamageArea;                             // 0x270(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDamageArea>           GiantDrillDamageArea;                              // 0x278(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDamageArea>           ScytheVortexDamageArea;                            // 0x280(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDamageArea>           CrystalBarrageDamageArea;                          // 0x288(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDamageArea>           EnergyRingDamageArea;                              // 0x290(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDamageArea>           BlackHoleDamageArea;                               // 0x298(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDamageArea>           IceStormDamageArea;                                // 0x2A0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDamageArea>           FireStormDamageArea;                               // 0x2A8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDamageArea>           LightningStormDamageArea;                          // 0x2B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDamageArea>           PoisonStormDamageArea;                             // 0x2B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDamageArea>           IceExplosionDamageArea;                            // 0x2C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDamageArea>           FireExplosionDamageArea;                           // 0x2C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDamageArea>           LightningExplosionDamageArea;                      // 0x2D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDamageArea>           PoisonExplosionDamageArea;                         // 0x2D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabStrike>               CriticalArrow;                                     // 0x2E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabStrike>               IceStrike;                                         // 0x2E8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabStrike>               FireStrike;                                        // 0x2F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabStrike>               LightningStrike;                                   // 0x2F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabStrike>               PoisonStrike;                                      // 0x300(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabStrike>               SpikeStrike;                                       // 0x308(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabStrike>               CrystalStrike;                                     // 0x310(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabStrike>               CriticalLightning;                                 // 0x318(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        SonicBoomFX;                                       // 0x320(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             SonicBoomSound;                                    // 0x328(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        HealFX;                                            // 0x330(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             HealSound;                                         // 0x338(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        ShockwaveFX;                                       // 0x340(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             ShockwaveSound;                                    // 0x348(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        BulletproofFX;                                     // 0x350(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             BulletproofSound;                                  // 0x358(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        IceAuraFX;                                         // 0x360(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             IceAuraSound;                                      // 0x368(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        FireAuraFX;                                        // 0x370(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             FireAuraSound;                                     // 0x378(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        LightningAuraFX;                                   // 0x380(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             LightningAuraSound;                                // 0x388(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        PoisonAuraFX;                                      // 0x390(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             PoisonAuraSound;                                   // 0x398(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        RareTreasureFX;                                    // 0x3A0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             RareTreasureSound;                                 // 0x3A8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        ExplodingEnemiesFX;                                // 0x3B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             ExplodingEnemiesSound;                             // 0x3B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        PowerslideFX;                                      // 0x3C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             PowerslideSound;                                   // 0x3C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        IceDashFX;                                         // 0x3D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             IceDashSound;                                      // 0x3D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabTurret>               SentryTurret;                                      // 0x3E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabTurret>               SniperTurret;                                      // 0x3E8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabTurret>               FireTurret;                                        // 0x3F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabTurret>               PoisonTurret;                                      // 0x3F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabTurret>               MortarTurret;                                      // 0x400(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ACrabTotem>>        Totems;                                            // 0x408(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     EnemyMirroredProjectileDA;                         // 0x418(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     EnemyShrapnelProjectileDA;                         // 0x420(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     EnemyHomingThornDA;                                // 0x428(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDestructible>         EnemyHomingBarrel;                                 // 0x430(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDamageArea>           EnemyIceDamageArea;                                // 0x438(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDamageArea>           EnemyFireDamageArea;                               // 0x440(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDamageArea>           EnemyLightningDamageArea;                          // 0x448(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDamageArea>           EnemyPoisonDamageArea;                             // 0x450(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDamageArea>           EnemyEnergyRingDamageArea;                         // 0x458(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabStrike>               EnemySpikeStrike;                                  // 0x460(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ACrabHarvestArea>>  HarvestAreas;                                      // 0x468(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ACrabDestructible>> DemolitionDestructibles;                           // 0x478(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ACrabDestructible>> ParkourDestructibles;                              // 0x488(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabDestructible>         CrystalAsteroid;                                   // 0x498(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabSpawnPoint>           RewardSpawnPoint;                                  // 0x4A0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabChest>                DamageChest;                                       // 0x4A8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabChest>                CriticalChest;                                     // 0x4B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabChest>                ElementalChest;                                    // 0x4B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabChest>                SpeedChest;                                        // 0x4C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabChest>                LuckChest;                                         // 0x4C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabChest>                HealthChest;                                       // 0x4D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabChest>                EconomyChest;                                      // 0x4D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabChest>                SkillChest;                                        // 0x4E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabChest>                GreedChest;                                        // 0x4E8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabChest>                UpgradeChest;                                      // 0x4F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabChest>                RandomChest;                                       // 0x4F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabChest>                RelicChest;                                        // 0x500(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabChest>                SpikedChest;                                       // 0x508(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabChest>                EpicChest;                                         // 0x510(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabChest>                LegendaryChest;                                    // 0x518(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabChest>                HealingChest;                                      // 0x520(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabChest>                KeyChest;                                          // 0x528(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabChest>                SecretChest;                                       // 0x530(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             RarePickupSound;                                   // 0x538(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             EpicPickupSound;                                   // 0x540(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             LegendaryPickupSound;                              // 0x548(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             PurchaseSound;                                     // 0x550(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             BossMusic;                                         // 0x558(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             VictoryMusic;                                      // 0x560(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabTotem>                RerollTotem;                                       // 0x568(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabShopPedestal>         ShopPedestal;                                      // 0x570(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabEnemyC>               TargetDummy;                                       // 0x578(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnvQuery*                             FindSafeSpawnLocsEnvQuery;                         // 0x580(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnvQuery*                             FindBossLootSpawnLocsEnvQuery;                     // 0x588(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabPortal>               NewRunPortal;                                      // 0x590(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabPortal>               ContinueRunPortal;                                 // 0x598(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabPortal>               ArenaPortal;                                       // 0x5A0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabPortal>               HordePortal;                                       // 0x5A8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabPortal>               WavesPortal;                                       // 0x5B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabPortal>               HarvestPortal;                                     // 0x5B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabPortal>               DemolitionPortal;                                  // 0x5C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabPortal>               ParkourPortal;                                     // 0x5C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabPortal>               ShopPortal;                                        // 0x5D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabPortal>               ElitePortal;                                       // 0x5D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabPortal>               BossPortal;                                        // 0x5E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabPortal>               BiomePortal;                                       // 0x5E8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabPortal>               CrabIslandPortal;                                  // 0x5F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ACrabPortal>               LoopPortal;                                        // 0x5F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           DamageIcon;                                        // 0x600(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           CriticalIcon;                                      // 0x608(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           ElementalIcon;                                     // 0x610(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           SpeedIcon;                                         // 0x618(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           LuckIcon;                                          // 0x620(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           HealthIcon;                                        // 0x628(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           EconomyIcon;                                       // 0x630(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           SkillIcon;                                         // 0x638(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           GreedIcon;                                         // 0x640(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           UpgradeIcon;                                       // 0x648(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           RandomIcon;                                        // 0x650(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           RelicIcon;                                         // 0x658(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           SpikedIcon;                                        // 0x660(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            BronzeMedalIcon;                                   // 0x668(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            SilverMedalIcon;                                   // 0x670(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            GoldMedalIcon;                                     // 0x678(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            SapphireMedalIcon;                                 // 0x680(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            EmeraldMedalIcon;                                  // 0x688(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            RubyMedalIcon;                                     // 0x690(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            DiamondMedalIcon;                                  // 0x698(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCrabSpawnablesDA* GetDefaultObj();

};

// 0x160 (0x530 - 0x3D0)
// Class CrabChampions.CrabInventoryUI
class UCrabInventoryUI : public UCrabFocusMenuUI
{
public:
	class ACrabPS*                               OwningPS;                                          // 0x3D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabInventorySlotUI>      InventorySlotUIToSpawn;                            // 0x3D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabInventorySlotUI*                  HoveredInventorySlotUI;                            // 0x3E0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CrystalsText;                                      // 0x3E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            KeysText;                                          // 0x3F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUniformGridPanel*                     WeaponModUniformGridPanel;                         // 0x3F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUniformGridPanel*                     GrenadeModUniformGridPanel;                        // 0x400(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUniformGridPanel*                     PerkUniformGridPanel;                              // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUniformGridPanel*                     RelicUniformGridPanel;                             // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USizeBox*                              SelectedSlotSizeBox;                               // 0x418(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                SelectedSlotBackgroundImage;                       // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                SelectedSlotIconImage;                             // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SelectedSlotNameText;                              // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SelectedSlotLevelText;                             // 0x438(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SelectedSlotRarityText;                            // 0x440(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        SelectedSlotEnhanceableHorizontalBox;              // 0x448(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SelectedSlotLootPoolText;                          // 0x450(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SelectedSlotDescriptionText;                       // 0x458(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SelectedSlotLevelDescriptionText;                  // 0x460(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        SelectedSlotCooldownHorizontalBox;                 // 0x468(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SelectedSlotCooldownText;                          // 0x470(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        EnhancementAHorizontalBox;                         // 0x478(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            EnhancementAText;                                  // 0x480(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        EnhancementBHorizontalBox;                         // 0x488(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            EnhancementBText;                                  // 0x490(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        EnhancementCHorizontalBox;                         // 0x498(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            EnhancementCText;                                  // 0x4A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        SelectedSlotAccumulatedBuffHorizontalBox;          // 0x4A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SelectedSlotAccumulatedBuffText;                   // 0x4B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              SelectedSlotDropButtonOverlay;                     // 0x4B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SelectedSlotDropText;                              // 0x4C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            SelectedSlotLockedIcon;                            // 0x4C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        SelectedSlotCostHorizontalBox;                     // 0x4D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SelectedSlotCostText;                              // 0x4D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             SelectedSlotUnlockSound;                           // 0x4E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            WeaponDamageStatText;                              // 0x4E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            FireRateStatText;                                  // 0x4F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            AbilityDamageStatText;                             // 0x4F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            MeleeDamageStatText;                               // 0x500(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            GlobalDamageStatText;                              // 0x508(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CriticalHitChanceStatText;                         // 0x510(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CriticalHitDamageStatText;                         // 0x518(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CrystalGainStatText;                               // 0x520(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            IncomingDamageStatText;                            // 0x528(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabInventoryUI* GetDefaultObj();

};

// 0xD0 (0x388 - 0x2B8)
// Class CrabChampions.CrabHealthBarUI
class UCrabHealthBarUI : public UCrabUI
{
public:
	class ACrabC*                                OwningC;                                           // 0x2B8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            BuffText;                                          // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            OwnerNameText;                                     // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        ArmorPlatesHorizontalBox;                          // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          HealthBar;                                         // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          RecentDamageHealthBar;                             // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CurrentHealthText;                                 // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CurrentMaxHealthText;                              // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              ConfusionStackOverlay;                             // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ConfusionStackText;                                // 0x300(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              WeakStackOverlay;                                  // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            WeakStackText;                                     // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              SlowStackOverlay;                                  // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SlowStackText;                                     // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              IceStackOverlay;                                   // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            IceStackText;                                      // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              FireStackOverlay;                                  // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            FireStackText;                                     // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              LightningStackOverlay;                             // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            LightningStackText;                                // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              PoisonStackOverlay;                                // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            PoisonStackText;                                   // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              ArcaneStackOverlay;                                // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ArcaneStackText;                                   // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BE5[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrabHealthBarUI* GetDefaultObj();

};

// 0xA0 (0x358 - 0x2B8)
// Class CrabChampions.CrabInteractUI
class UCrabInteractUI : public UCrabUI
{
public:
	class UImage*                                IconImage;                                         // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            TypeText;                                          // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            NameText;                                          // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            DescriptionText;                                   // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               RarityBorder;                                      // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            LootPoolText;                                      // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            InteractKeyText;                                   // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                InteractControllerIcon;                            // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            InteractMessageText;                               // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        CostHorizontalBox;                                 // 0x300(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                CrystalIconImage;                                  // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                KeyIconImage;                                      // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                HealthIconImage;                                   // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CostText;                                          // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        SalvageHorizontalBox;                              // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SalvageKeyText;                                    // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                SalvageControllerIcon;                             // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SalvageRewardText;                                 // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          SalvageProgressBar;                                // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      SalvageAnim;                                       // 0x350(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabInteractUI* GetDefaultObj();

};

// 0x20 (0x2D8 - 0x2B8)
// Class CrabChampions.CrabMinigameGameOverRowUI
class UCrabMinigameGameOverRowUI : public UCrabUI
{
public:
	class UTextBlock*                            PlacementText;                                     // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                MVPCrownImage;                                     // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            PlayerNameText;                                    // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            EliminationsText;                                  // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabMinigameGameOverRowUI* GetDefaultObj();

};

// 0x8 (0x2C0 - 0x2B8)
// Class CrabChampions.CrabPlayerNameUI
class UCrabPlayerNameUI : public UCrabUI
{
public:
	class UTextBlock*                            PlayerNameText;                                    // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabPlayerNameUI* GetDefaultObj();

};

// 0xA8 (0x360 - 0x2B8)
// Class CrabChampions.CrabKeyBindRowUI
class UCrabKeyBindRowUI : public UCrabUI
{
public:
	class UButton*                               KeyboardButton;                                    // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               ControllerButton;                                  // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FCrabKeyBind                          CurrentKeyBind;                                    // 0x2C8(0x70)(Transient, Protected, NativeAccessSpecifierProtected)
	class UTextBlock*                            KeyBindTitleText;                                  // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputKeySelector*                     KeyboardKeySelector;                               // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputKeySelector*                     ControllerKeySelector;                             // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                ControllerIcon;                                    // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    ControllerIconMat;                                 // 0x358(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabKeyBindRowUI* GetDefaultObj();

	void OnPressedKeyboardKeySelector(const struct FInputChord& SelectedKey);
	void OnPressedControllerKeySelector(const struct FInputChord& SelectedKey);
	void OnHoveredKeyboardButton();
	void OnHoveredControllerButton();
};

// 0x8 (0x2C0 - 0x2B8)
// Class CrabChampions.CrabPingUI
class UCrabPingUI : public UCrabUI
{
public:
	class UImage*                                PingIconImage;                                     // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabPingUI* GetDefaultObj();

};

// 0x188 (0x440 - 0x2B8)
// Class CrabChampions.CrabGameStateUI
class UCrabGameStateUI : public UCrabUI
{
public:
	class UVerticalBox*                          PlayerStateUIVerticalBox;                          // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabPlayerStateUI>        PlayerStateUIToSpawn;                              // 0x2C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CurrentTimeText;                                   // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BF0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          CountdownVerticalBox;                              // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CountdownMessageText;                              // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CountdownTime;                                     // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      CountdownAnim;                                     // 0x2F0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        IslandProgressionHorizontalBox;                    // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            RandomIslandsIcon;                                 // 0x300(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CurrentIslandText;                                 // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            DifficultyText;                                    // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            GameplayMessageText;                               // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      GameplayMessageAnim;                               // 0x320(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          ChatVerticalBox;                                   // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          ChatEntriesVerticalBox;                            // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabChatEntryRowUI>       ChatEntryRowUIToSpawn;                             // 0x338(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCrabChatEntryRowUI*>           ChatEntryRows;                                     // 0x340(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UEditableTextBox*                      ChatInputEditableTextBox;                          // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BF4[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            BiomeText;                                         // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            IslandTypeText;                                    // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            IslandDescriptionText;                             // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      IslandIntroductionAnim;                            // 0x378(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             CountdownSound;                                    // 0x380(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          ObjectiveVerticalBox;                              // 0x388(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ObjectiveGoalText;                                 // 0x390(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OnUpdatedObjectiveGoalAnim;                        // 0x398(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ObjectiveText;                                     // 0x3A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          IslandRewardVerticalBox;                           // 0x3A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            IslandRewardText;                                  // 0x3B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OnUpdatedIslandRewardRarityAnim;                   // 0x3B8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ChallengeModifierTitleText;                        // 0x3C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ChallengeModifierText;                             // 0x3C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ChallengeModifierDescriptionText;                  // 0x3D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            AdditionalChallengeModifierText;                   // 0x3D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            AdditionalChallengeModifierDescriptionText;        // 0x3E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OnStartedChallengeAnim;                            // 0x3E8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OnCompletedChallengeAnim;                          // 0x3F0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      FlawlessIslandClearAnim;                           // 0x3F8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          SpectatingVerticalBox;                             // 0x400(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SpectatingPlayerNameText;                          // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        MinigameHorizontalBox;                             // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            MinigameScoreTitleText;                            // 0x418(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            MinigameScoreText;                                 // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OnUpdatedMinigameScoreAnim;                        // 0x428(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            MinigameHighScoreTitleText;                        // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            MinigameHighScoreText;                             // 0x438(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabGameStateUI* GetDefaultObj();

	void OnChatTextCommitted(class FText& Text, enum class ETextCommit CommitMethod);
};

// 0x18 (0x2D0 - 0x2B8)
// Class CrabChampions.CrabSliderUI
class UCrabSliderUI : public UCrabUI
{
public:
	class USlider*                               MainSlider;                                        // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          SliderPB;                                          // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SliderText;                                        // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabSliderUI* GetDefaultObj();

	void OnMainSliderValueChanged(float Value);
};

// 0x28 (0x2E0 - 0x2B8)
// Class CrabChampions.CrabSoundMenuUI
class UCrabSoundMenuUI : public UCrabUI
{
public:
	TArray<class UWidget*>                       SoundMenuFocusableWidgetArray;                     // 0x2B8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UCrabSliderUI*                         MasterVolumeSlider;                                // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabSliderUI*                         GameplayVolumeSlider;                              // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabSliderUI*                         MusicVolumeSlider;                                 // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabSoundMenuUI* GetDefaultObj();

};

// 0x48 (0x300 - 0x2B8)
// Class CrabChampions.CrabPlayerStateUI
class UCrabPlayerStateUI : public UCrabUI
{
public:
	class UTextBlock*                            PlayerNameText;                                    // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            PlayerPointsText;                                  // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            PlayerEliminationsText;                            // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                PlayerAccountRankImage;                            // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            PlayerAccountLevelText;                            // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          PlayerHealthBar;                                   // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      PlayerEliminatedAnim;                              // 0x2E8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabPS*                               PlayerPS;                                          // 0x2F0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabPlayerC*                          PlayerC;                                           // 0x2F8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabPlayerStateUI* GetDefaultObj();

};

// 0x30 (0x2E8 - 0x2B8)
// Class CrabChampions.CrabShopPedestalUI
class UCrabShopPedestalUI : public UCrabUI
{
public:
	class UImage*                                CrystalIconImage;                                  // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                KeyIconImage;                                      // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                HealthIconImage;                                   // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CostText;                                          // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            DiscountText;                                      // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               DiscountBorder;                                    // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabShopPedestalUI* GetDefaultObj();

};

// 0x108 (0x3C0 - 0x2B8)
// Class CrabChampions.CrabStatsUI
class UCrabStatsUI : public UCrabUI
{
public:
	class UTextBlock*                            PlayerNameText;                                    // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            DifficultyText;                                    // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            HighScoreText;                                     // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            AttemptsText;                                      // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            WinsText;                                          // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            WinStreakText;                                     // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            HighestIslandReachedText;                          // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            TotalUnlockedPercentageText;                       // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          TotalUnlockedPB;                                   // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CosmeticsUnlockedText;                             // 0x300(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            TotalCosmeticsToUnlockText;                        // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          CosmeticsUnlockedPB;                               // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            WeaponsUnlockedText;                               // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            TotalWeaponsToUnlockText;                          // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          WeaponsUnlockedPB;                                 // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            AbilitiesUnlockedText;                             // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            TotalAbilitiesToUnlockText;                        // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          AbilitiesUnlockedPB;                               // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            MeleeWeaponsUnlockedText;                          // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            TotalMeleeWeaponsToUnlockText;                     // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          MeleeWeaponsUnlockedPB;                            // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            WeaponModsUnlockedText;                            // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            TotalWeaponModsToUnlockText;                       // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          WeaponModsUnlockedPB;                              // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            GrenadeModsUnlockedText;                           // 0x378(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            TotalGrenadeModsToUnlockText;                      // 0x380(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          GrenadeModsUnlockedPB;                             // 0x388(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            PerksUnlockedText;                                 // 0x390(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            TotalPerksToUnlockText;                            // 0x398(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          PerksUnlockedPB;                                   // 0x3A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            RelicsUnlockedText;                                // 0x3A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            TotalRelicsToUnlockText;                           // 0x3B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          RelicsUnlockedPB;                                  // 0x3B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabStatsUI* GetDefaultObj();

};

// 0x150 (0x370 - 0x220)
// Class CrabChampions.CrabWeapon
class ACrabWeapon : public AActor
{
public:
	class UStaticMeshComponent*                  Mesh;                                              // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     CosmeticNC;                                        // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C18[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     MuzzleFlashNC;                                     // 0x238(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabPS*                               OwningPS;                                          // 0x240(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FCrabWeaponInfo                       WeaponInfo;                                        // 0x248(0x18)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UCrabWeaponDA*                         WeaponDA;                                          // 0x260(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabC*                                OwningC;                                           // 0x268(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabPC*                               OwningPC;                                          // 0x270(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C1B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        ActorsToIgnore;                                    // 0x280(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_C1C[0xA8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TimesFired;                                        // 0x338(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C1D[0x1C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsReloading;                                      // 0x358(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C1E[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACrabWeapon* GetDefaultObj();

	void ServerTriggerOnReloadPerks();
	void ServerSetIsReloading(bool bNewIsReloading);
	void ServerPlayStartFireFX();
	void OnRep_WeaponInfo();
	void OnRep_TimesFired();
	void OnRep_OwningPS();
	void OnRep_IsReloading();
};

// 0x1A8 (0x460 - 0x2B8)
// Class CrabChampions.CrabVideoMenuUI
class UCrabVideoMenuUI : public UCrabUI
{
public:
	TArray<class UWidget*>                       VideoMenuFocusableWidgetArray;                     // 0x2B8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_C37[0x110];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCrabArrowSelectionUI*                 DisplayModeAS;                                     // 0x3D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabArrowSelectionUI*                 ResolutionAS;                                      // 0x3E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabArrowSelectionUI*                 ResolutionQualityAS;                               // 0x3E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabArrowSelectionUI*                 FPSLimitAS;                                        // 0x3F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabArrowSelectionUI*                 VSyncAS;                                           // 0x3F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabArrowSelectionUI*                 FieldOfViewAS;                                     // 0x400(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabArrowSelectionUI*                 GraphicsQualityAS;                                 // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabArrowSelectionUI*                 WeaponEffectsAS;                                   // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabArrowSelectionUI*                 AntiAliasingTypeAS;                                // 0x418(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabArrowSelectionUI*                 SharpeningAS;                                      // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabArrowSelectionUI*                 MotionBlurAS;                                      // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabArrowSelectionUI*                 CameraShakeAS;                                     // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabArrowSelectionUI*                 HitmarkersAS;                                      // 0x438(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabArrowSelectionUI*                 DamageNumbersAS;                                   // 0x440(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabArrowSelectionUI*                 TextChatVisibilityAS;                              // 0x448(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabArrowSelectionUI*                 ShowFPSAS;                                         // 0x450(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabArrowSelectionUI*                 PauseWhenLosingFocusAS;                            // 0x458(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabVideoMenuUI* GetDefaultObj();

	void SetWeaponEffects(const class FString& NewSelection);
	void SetVSync(const class FString& NewSelection);
	void SetTextChatVisibility(const class FString& NewSelection);
	void SetShowFPS(const class FString& NewSelection);
	void SetSharpening(const class FString& NewSelection);
	void SetResolutionQuality(const class FString& NewSelection);
	void SetResolution(const class FString& NewSelection);
	void SetPauseWhenLosingFocus(const class FString& NewSelection);
	void SetMotionBlur(const class FString& NewSelection);
	void SetHitmarkers(const class FString& NewSelection);
	void SetGraphicsQuality(const class FString& NewSelection);
	void SetFPSLimit(const class FString& NewSelection);
	void SetFieldOfView(const class FString& NewSelection);
	void SetDisplayMode(const class FString& NewSelection);
	void SetDamageNumbers(const class FString& NewSelection);
	void SetCameraShake(const class FString& NewSelection);
	void SetAntiAliasingType(const class FString& NewSelection);
};

// 0x8 (0x70 - 0x68)
// Class CrabChampions.CrabFireWeaponActionDA
class UCrabFireWeaponActionDA : public UCrabActionDA
{
public:
	enum class ECrabTargetType                   TargetType;                                        // 0x68(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C44[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Spread;                                            // 0x6C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCrabFireWeaponActionDA* GetDefaultObj();

};

// 0x30 (0x98 - 0x68)
// Class CrabChampions.CrabProjectileActionDA
class UCrabProjectileActionDA : public UCrabActionDA
{
public:
	enum class ECrabTargetType                   TargetType;                                        // 0x68(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C46[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          SocketNames;                                       // 0x70(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UCrabProjectileDA*                     ProjectileDA;                                      // 0x80(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrabFormationType                FormationType;                                     // 0x88(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C47[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FormationSpacing;                                  // 0x8C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FormationExpansionDampening;                       // 0x90(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Spread;                                            // 0x94(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCrabProjectileActionDA* GetDefaultObj();

};

// 0x10 (0x2E0 - 0x2D0)
// Class CrabChampions.CrabEnemyAnimInstance
class UCrabEnemyAnimInstance : public UCrabAnimInstance
{
public:
	class ACrabEnemyC*                           OwningEnemyC;                                      // 0x2D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RandomAnimOffset;                                  // 0x2D8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C4B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrabEnemyAnimInstance* GetDefaultObj();

	void AnimNotify_Action();
};

// 0x20 (0x2F0 - 0x2D0)
// Class CrabChampions.CrabPlayerAnimInstance
class UCrabPlayerAnimInstance : public UCrabAnimInstance
{
public:
	class ACrabPlayerC*                          OwningPlayerC;                                     // 0x2D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentTurnDir;                                    // 0x2D8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             CurrentInputDir;                                   // 0x2DC(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsSliding;                                        // 0x2E4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C4E[0xB];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrabPlayerAnimInstance* GetDefaultObj();

	void AnimNotify_Melee();
};

// 0x0 (0x28 - 0x28)
// Class CrabChampions.CrabDamageInterface
class ICrabDamageInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICrabDamageInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CrabChampions.CrabOverlapInterface
class ICrabOverlapInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICrabOverlapInterface* GetDefaultObj();

};

// 0x60 (0xB50 - 0xAF0)
// Class CrabChampions.CrabCMC
class UCrabCMC : public UCharacterMovementComponent
{
public:
	uint8                                        Pad_C59[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FClientAuthoritativeMoveData          ServerLatestMoveData;                              // 0xAF8(0x50)(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C5B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrabCMC* GetDefaultObj();

};

// 0x18 (0x238 - 0x220)
// Class CrabChampions.CrabDamageTextActor
class ACrabDamageTextActor : public AActor
{
public:
	class UWidgetComponent*                      DamageTextWC;                                      // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabDamageTextUI*                     DamageTextUI;                                      // 0x228(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C5E[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACrabDamageTextActor* GetDefaultObj();

};

// 0x4F8 (0x6A0 - 0x1A8)
// Class CrabChampions.CrabGI
class UCrabGI : public UGameInstance
{
public:
	TSubclassOf<class UUserWidget>               LoadingScreenUIToSpawn;                            // 0x1A8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUserWidget*                           LoadingScreenUI;                                   // 0x1B0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C61[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCrabSG*                               SG;                                                // 0x1E8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C62[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCrabSettingsSG*                       SettingsSG;                                        // 0x200(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C63[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CrabChampionsVersion;                              // 0x20C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCrabKeyBind>                  CrabKeyBinds;                                      // 0x210(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UTexture2D*                            BackButton;                                        // 0x220(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            BumperL;                                           // 0x228(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            BumperR;                                           // 0x230(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            ButtonD;                                           // 0x238(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            ButtonL;                                           // 0x240(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            ButtonR;                                           // 0x248(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            ButtonU;                                           // 0x250(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            DPadD;                                             // 0x258(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            DPadL;                                             // 0x260(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            DPadR;                                             // 0x268(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            DPadU;                                             // 0x270(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            StartButton;                                       // 0x278(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            StickL;                                            // 0x280(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            StickLHorizontal;                                  // 0x288(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            StickLVertical;                                    // 0x290(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            StickR;                                            // 0x298(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            StickRHorizontal;                                  // 0x2A0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            StickRVertical;                                    // 0x2A8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            TriggerL;                                          // 0x2B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            TriggerR;                                          // 0x2B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundClass*                           MasterSoundClass;                                  // 0x2C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundMix*                             MasterSoundMix;                                    // 0x2C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundClass*                           GameplaySoundClass;                                // 0x2D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundMix*                             GameplaySoundMix;                                  // 0x2D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundClass*                           MusicSoundClass;                                   // 0x2E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundMix*                             MusicSoundMix;                                     // 0x2E8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabCosmeticsDA*                      CosmeticsDA;                                       // 0x2F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCrabChallenge>                Challenges;                                        // 0x2F8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bDebugUnlockAllContent;                            // 0x308(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C6E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCrabAutoSave                         DebugAutoSave;                                     // 0x310(0x130)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6F[0x260];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrabGI* GetDefaultObj();

	void OnStreamLevelUnloaded();
	void OnStreamLevelLoaded();
};

// 0xB0 (0x370 - 0x2C0)
// Class CrabChampions.CrabGM
class ACrabGM : public AGameModeBase
{
public:
	TSubclassOf<class ACrabPC>                   PCToSpawn;                                         // 0x2C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabLM*                               LM;                                                // 0x2C8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C79[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WaitingForMorePlayersDelay;                        // 0x2E8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PreStartDelay;                                     // 0x2EC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class ACrabC>                    CharacterToSpawn;                                  // 0x2F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        DebugCurrentIsland;                                // 0x2F8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabIslandType                   DebugIslandType;                                   // 0x2FC(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabChallengeModifier            DebugChallengeModifier;                            // 0x2FD(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabBlessing                     DebugBlessing;                                     // 0x2FE(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C7A[0x9];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class ACrabPortal*, int32>              CurrentPortals;                                    // 0x308(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	class ACrabPortal*                           ChosenPortal;                                      // 0x358(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C7B[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACrabGM* GetDefaultObj();

	void OnNavigationGenerationFinished(class ANavigationData* NavData);
	void DebugGoToNextIsland();
	void DebugGoToNextBiome();
	void DebugGoToIsland(int32 IslandToGoTo);
	void DebugEndRun();
	void DebugCompleteIsland();
};

// 0x100 (0x370 - 0x270)
// Class CrabChampions.CrabGS
class ACrabGS : public AGameStateBase
{
public:
	class ACrabLM*                               LM;                                                // 0x270(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabMatchState                   MatchState;                                        // 0x278(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C87[0x1F];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsTimePaused;                                     // 0x298(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C89[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentTime;                                       // 0x29C(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentCountdown;                                  // 0x2A0(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabDifficulty                   Difficulty;                                        // 0x2A4(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C8C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ECrabDifficultyModifier>   DifficultyModifiers;                               // 0x2A8(0x10)(Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	enum class ECrabBiome                        Biome;                                             // 0x2B8(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C8E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentIsland;                                     // 0x2BC(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabIslandType                   CurrentIslandType;                                 // 0x2C0(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C8F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentIslandStartTime;                            // 0x2C4(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C90[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentIslandTimeRemaining;                        // 0x2CC(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C91[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ECrabChallengeModifier>    ChallengeModifiers;                                // 0x2D8(0x10)(Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	enum class ECrabBlessing                     Blessing;                                          // 0x2E8(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabLootPool                     RewardLootPool;                                    // 0x2E9(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C93[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinigameScore;                                     // 0x2EC(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C94[0x80];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACrabGS* GetDefaultObj();

	void OnRep_RewardLootPool();
	void OnRep_MinigameScore();
	void OnRep_MatchState();
	void OnRep_DifficultyModifiers();
	void OnRep_Difficulty();
	void OnRep_CurrentTime();
	void OnRep_CurrentIslandType();
	void OnRep_CurrentIslandTimeRemaining();
	void OnRep_CurrentCountdown();
	void OnRep_ChallengeModifiers();
	void OnRep_Blessing();
};

// 0x80 (0x130 - 0xB0)
// Class CrabChampions.CrabHC
class UCrabHC : public UActorComponent
{
public:
	class ACrabC*                                OwningC;                                           // 0xB0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BaseArmorPlates;                                   // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C9A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseMaxHealth;                                     // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C9B[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bShouldRegenerateHealth;                           // 0xD0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C9C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HealthRegenAmount;                                 // 0xD4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C9E[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bCanBeEliminated;                                  // 0xF8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasOneShotProtection;                             // 0xF9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CA0[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCrabHealthInfo                       HealthInfo;                                        // 0xFC(0x1C)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_CA2[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrabHC* GetDefaultObj();

	void OnRep_HealthInfo();
};

// 0x328 (0x548 - 0x220)
// Class CrabChampions.CrabLM
class ACrabLM : public AActor
{
public:
	class USceneComponent*                       LMRoot;                                            // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  Skydome;                                           // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDirectionalLightComponent*            DL;                                                // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkyLightComponent*                    SL;                                                // 0x238(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPostProcessComponent*                 PP;                                                // 0x240(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UExponentialHeightFogComponent*        HF;                                                // 0x248(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  Ocean;                                             // 0x250(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBoxComponent*                         UnderwaterBounds;                                  // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPostProcessComponent*                 UnderwaterPP;                                      // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  IslandBounds;                                      // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioComponent*                       AmbienceAC;                                        // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioComponent*                       MusicAC;                                           // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMesh*                           SkydomeMesh;                                       // 0x280(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMesh*                           OceanMesh;                                         // 0x288(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMesh*                           IslandBoundsMesh;                                  // 0x290(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    BananaPPDistortionMat;                             // 0x298(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    UnderwaterPPDistortionMat;                         // 0x2A0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialParameterCollection*          GlobalMPC;                                         // 0x2A8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialParameterCollectionInstance*  GlobalMPCInstance;                                 // 0x2B0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseRandomLightingPreset;                          // 0x2B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CB5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LightingPresetIndex;                               // 0x2BC(0x4)(Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCrabLightingPreset>           LightingPresets;                                   // 0x2C0(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FCrabLightingPreset                   CurrentLightingPreset;                             // 0x2D0(0xA0)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                               GlobalSaturation;                                  // 0x370(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GlobalContrast;                                    // 0x37C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumProjectilesToPool;                              // 0x380(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CBA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ACrabProjectile*>               PooledProjectiles;                                 // 0x388(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UCrabSpawnablesDA*                     SpawnablesDA;                                      // 0x398(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabPlayerC*                          LocalC;                                            // 0x3A0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ACrabC*>                        CharactersAffectingRippleSim;                      // 0x3A8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	float                                        RippleSimUpdateRate;                               // 0x3B8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RippleViewDistance;                                // 0x3BC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        RippleRTResolution;                                // 0x3C0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CC0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                RippleHeightSimRTA;                                // 0x3C8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                RippleHeightSimRTB;                                // 0x3D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                RippleHeightSimRTC;                                // 0x3D8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                RippleNormalRT;                                    // 0x3E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    RippleDrawMat;                                     // 0x3E8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              RippleDrawDMI;                                     // 0x3F0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    RippleHeightSimMat;                                // 0x3F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              RippleHeightSimDMI;                                // 0x400(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    RippleNormalSimMat;                                // 0x408(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              RippleNormalSimDMI;                                // 0x410(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RippleRadius;                                      // 0x418(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RippleIntensity;                                   // 0x41C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CC5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCrabPickupDA*>                 AllUnlockedPickups;                                // 0x428(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_CC6[0x78];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class ACrabEnemyC>>       EnemyTypesToSpawn;                                 // 0x4B0(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class ACrabEnemyC>>       EnemiesToSpawn;                                    // 0x4C0(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class ACrabSpawnPoint*>               SpawnPoints;                                       // 0x4D0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_CC7[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           SpawnBudgetCurve;                                  // 0x4F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CC9[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACrabLM* GetDefaultObj();

	void OnRep_LightingPresetIndex();
	void MulticastSpawnCosmeticProjectile(struct FCrabProjectileInfo& ProjectileInfo, class AActor* ProjectileOwner, struct FVector_NetQuantize& StartLoc, bool bExplodeInstantly);
	void MulticastPlayOneShotFX(class UNiagaraSystem* FXToPlay, class USoundCue* SoundToPlay, struct FVector& SpawnLoc);
};

// 0x350 (0x8C0 - 0x570)
// Class CrabChampions.CrabPC
class ACrabPC : public APlayerController
{
public:
	class USoundCue*                             ArmorHitmarkerSound;                               // 0x570(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             ArmorBreakHitmarkerSound;                          // 0x578(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             QuietHitmarkerSound;                               // 0x580(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             NormalHitmarkerSound;                              // 0x588(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             LoudHitmarkerSound;                                // 0x590(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             QuietCritHitmarkerSound;                           // 0x598(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             NormalCritHitmarkerSound;                          // 0x5A0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             LoudCritHitmarkerSound;                            // 0x5A8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             KnockbackDamageHitmarkerSound;                     // 0x5B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                             EliminationHitmarkerSound;                         // 0x5B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CE3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimeline                             SlomoRampTimeline;                                 // 0x5C8(0x98)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UCurveFloat*                           SlomoRampCurve;                                    // 0x660(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                   LSActor;                                           // 0x668(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CE5[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USubmixEffectFilterPreset*             LowPassSubmixEffect;                               // 0x6B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULevelSequence*                        PortalTransitionLS;                                // 0x6C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FCrabAutoSave                         PendingAutoSave;                                   // 0x6C8(0x130)(Transient, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabDamageTextUI>         DamageTextUIToSpawn;                               // 0x7F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ACrabDamageTextActor*>          PooledDamageTextActors;                            // 0x800(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCrabChallenge>                CompletedChallenges;                               // 0x810(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class ACrabPlayerC*                          ClientOwnedC;                                      // 0x820(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabGameStateUI>          GameStateUIToSpawn;                                // 0x828(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabGameStateUI*                      GameStateUI;                                       // 0x830(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabGameplayUI>           GameplayUIToSpawn;                                 // 0x838(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabGameplayUI*                       GameplayUI;                                        // 0x840(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabInventoryUI>          InventoryUIToSpawn;                                // 0x848(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabInventoryUI*                      InventoryUI;                                       // 0x850(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabInGameMenuUI>         InGameMenuToSpawn;                                 // 0x858(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabInGameMenuUI*                     InGameMenuUI;                                      // 0x860(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabCosmeticsMenuUI>      CosmeticsMenuUIToSpawn;                            // 0x868(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabCosmeticsMenuUI*                  CosmeticsMenuUI;                                   // 0x870(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabDifficultyMenuUI>     DifficultyMenuUIToSpawn;                           // 0x878(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabDifficultyMenuUI*                 DifficultyMenuUI;                                  // 0x880(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabMultiplayerMenuUI>    MultiplayerMenuUIToSpawn;                          // 0x888(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabMultiplayerMenuUI*                MultiplayerMenuUI;                                 // 0x890(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabGameOverUI>           GameOverUIToSpawn;                                 // 0x898(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabGameOverUI*                       GameOverUI;                                        // 0x8A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabMinigameGameOverUI>   MinigameGameOverUIToSpawn;                         // 0x8A8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabMinigameGameOverUI*               MinigameGameOverUI;                                // 0x8B0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabFocusMenuUI*                      ActiveFocusMenuUI;                                 // 0x8B8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ACrabPC* GetDefaultObj();

	void ServerUploadLobbyStats(struct FCrabLobbyStats& LobbyStats);
	void ServerSpectateNextPlayer();
	void ServerSpawnKeyTotemPickup(class ACrabTotem* KeyTotem, class UCrabPickupDA* PickupToSpawn);
	void ServerSendChatMessage(const class FString& ChatMessage);
	void ServerRestoreAutoSave(struct FCrabAutoSave& AutoSave);
	void OnSlomoRampTimelineUpdated(float Value);
	void ClientUploadLobbyStats();
	void ClientStartSlomoRamp();
	void ClientShowLoadingScreenUI();
	void ClientShowCosmeticsMenuUI();
	void ClientSetIsCharacterInputEnabled(bool bNewIsCharacterInputEnabled);
	void ClientRefreshPSUI();
	void ClientPlayerLeftGame();
	void ClientOnTookDamage(enum class ECrabDamageHitType DamageHitType);
	void ClientOnReceivedChatMessage(const class FString& PlayerName, const class FString& ChatMessage);
	void ClientOnPickedUpPickup(class UCrabPickupDA* PickupDA, uint8 Level);
	void ClientOnInteractedWithKeyTotem(class ACrabTotem* KeyTotem);
	void ClientOnEnteredPortal(struct FCrabNextIslandInfo& NextIslandInfo);
	void ClientOnEliminated(const class FString& EliminatedByPlayerName);
	void ClientOnClearedIsland(bool bWasFlawlessClear);
	void ClientNotifyDamageDealt(struct FCrabDamageInfo& DamageInfo, enum class ECrabDamageHitType DamageHitType);
	void ClientLeaveGame();
	void ClientInventoryEvent(const class FString& InventoryEventMessage);
	void ClientClearAutoSave();
};

// 0xC8 (0x1B8 - 0xF0)
// Class CrabChampions.CrabPMC
class UCrabPMC : public UMovementComponent
{
public:
	uint8                                        Pad_CEA[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACrabC*                                HomingTarget;                                      // 0x128(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CEB[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCrabProjectileDA*                     ProjectileDA;                                      // 0x140(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACrabC*                                OwningC;                                           // 0x148(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACrabProjectile*                       OwningProjectile;                                  // 0x150(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CEC[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrabPMC* GetDefaultObj();

};

// 0x240 (0x560 - 0x320)
// Class CrabChampions.CrabPS
class ACrabPS : public APlayerState
{
public:
	uint8                                        Pad_CFD[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCrabInventoryCooldown>        InventoryCooldowns;                                // 0x328(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        PlayerColorIndex;                                  // 0x338(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CFE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCrabPickupDA*>                 PSPickups;                                         // 0x340(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	int32                                        Points;                                            // 0x350(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ComboCounter;                                      // 0x354(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Combo;                                             // 0x358(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Eliminations;                                      // 0x35C(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CFF[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       DamageDealt;                                       // 0x36C(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32                                       HighestDamageDealt;                                // 0x370(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        DamageTaken;                                       // 0x374(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        DamageTakenOnThisIsland;                           // 0x378(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumFlawlessIslands;                                // 0x37C(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FCrabHealthInfo                       HealthInfo;                                        // 0x380(0x1C)(Net, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        MaxHealthMultiplier;                               // 0x39C(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DamageMultiplier;                                  // 0x3A0(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ScaleMultiplier;                                   // 0x3A4(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrabRank                         AccountRank;                                       // 0x3A8(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D03[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AccountLevel;                                      // 0x3AC(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Keys;                                              // 0x3B0(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D04[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    CrabSkin;                                          // 0x3B8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabWeaponDA*                         WeaponDA;                                          // 0x3C0(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabAbilityDA*                        AbilityDA;                                         // 0x3C8(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabMeleeDA*                          MeleeDA;                                           // 0x3D0(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        NumWeaponModSlots;                                 // 0x3D8(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D05[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCrabWeaponMod>                WeaponMods;                                        // 0x3E0(0x10)(Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        NumGrenadeModSlots;                                // 0x3F0(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D06[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCrabGrenadeMod>               GrenadeMods;                                       // 0x3F8(0x10)(Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        NumPerkSlots;                                      // 0x408(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D08[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCrabPerk>                     Perks;                                             // 0x410(0x10)(Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCrabRelic>                    Relics;                                            // 0x420(0x10)(Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_D09[0x1C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumTimesSalvaged;                                  // 0x44C(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumShopPurchases;                                  // 0x450(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumShopRerolls;                                    // 0x454(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumTotemsDestroyed;                                // 0x458(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32                                       Crystals;                                          // 0x45C(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D0B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECrabRarity                       IslandRewardRarity;                                // 0x464(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D0C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACrabCheckpoint*                       ParkourCheckpoint;                                 // 0x468(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACrabPortal*                           ChosenPortal;                                      // 0x470(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        TotalTimeTaken;                                    // 0x478(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D0D[0xE4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACrabPS* GetDefaultObj();

	void ServerSetWeaponDA(class UCrabWeaponDA* NewWeaponDA);
	void ServerSetMeleeDA(class UCrabMeleeDA* NewMeleeDA);
	void ServerSetAbilityDA(class UCrabAbilityDA* NewAbilityDA);
	void ServerRemoveWeaponMod(enum class ECrabWeaponModType WeaponModType);
	void ServerRemoveRelic(enum class ECrabRelicType RelicType);
	void ServerRemovePerk(enum class ECrabPerkType PerkType);
	void ServerRemoveGrenadeMod(enum class ECrabGrenadeModType GrenadeModType);
	void ServerRefreshAccount(enum class ECrabRank NewAccountRank, int32 NewAccountLevel, int32 NewKeys);
	void ServerIncrementNumInventorySlots(enum class ECrabPickupType PickupType, int32 Cost);
	void ServerEquipInventory(class UCrabWeaponDA* NewWeaponDA, class UCrabAbilityDA* NewAbilityDA, class UCrabMeleeDA* NewMeleeDA);
	void ServerEquipCosmetics(class UMaterialInterface* NewCrabSkin);
	void OnRep_WeaponDA();
	void OnRep_ScaleMultiplier();
	void OnRep_Points();
	void OnRep_MeleeDA();
	void OnRep_Keys();
	void OnRep_IslandRewardRarity();
	void OnRep_Inventory();
	void OnRep_Eliminations();
	void OnRep_Crystals();
	void OnRep_Combo();
	void OnRep_AccountRank();
	void OnRep_AccountLevel();
	void OnRep_AbilityDA();
};

// 0x268 (0x290 - 0x28)
// Class CrabChampions.CrabSG
class UCrabSG : public USaveGame
{
public:
	int32                                        CrabChampionsVersion;                              // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLastSavedBackupA;                                 // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D11[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        XPToNextLevelUp;                                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D12[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCrabRankedWeapon>             RankedWeapons;                                     // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        AccountLevel;                                      // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Keys;                                              // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrabDifficulty                   Difficulty;                                        // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D13[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ECrabDifficultyModifier>   DifficultyModifiers;                               // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    CrabSkin;                                          // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabWeaponDA*                         WeaponDA;                                          // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabAbilityDA*                        AbilityDA;                                         // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabMeleeDA*                          MeleeDA;                                           // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCrabChallenge>                Challenges;                                        // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UCrabPickupDA*>                 UnlockedWeapons;                                   // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UCrabPickupDA*>                 UnlockedAbilities;                                 // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UCrabPickupDA*>                 UnlockedMeleeWeapons;                              // 0xB8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UCrabPickupDA*>                 UnlockedWeaponMods;                                // 0xC8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UCrabPickupDA*>                 UnlockedGrenadeMods;                               // 0xD8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UCrabPickupDA*>                 UnlockedPerks;                                     // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UCrabPickupDA*>                 UnlockedRelics;                                    // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        EasyHighScore;                                     // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EasyAttempts;                                      // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EasyWins;                                          // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EasyWinStreak;                                     // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EasyHighestIslandReached;                          // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NormalHighScore;                                   // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NormalAttempts;                                    // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NormalWins;                                        // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NormalWinStreak;                                   // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NormalHighestIslandReached;                        // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NightmareHighScore;                                // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NightmareAttempts;                                 // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NightmareWins;                                     // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NightmareWinStreak;                                // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NightmareHighestIslandReached;                     // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UltraChaosHighScore;                               // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UltraChaosAttempts;                                // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UltraChaosWins;                                    // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UltraChaosWinStreak;                               // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UltraChaosHighestIslandReached;                    // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCrabAutoSave                         AutoSave;                                          // 0x158(0x130)(NativeAccessSpecifierPublic)
	int32                                        ArcadeHighScore;                                   // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HoldoutHighScore;                                  // 0x28C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCrabSG* GetDefaultObj();

};

// 0x50 (0x308 - 0x2B8)
// Class CrabChampions.CrabArrowSelectionUI
class UCrabArrowSelectionUI : public UCrabUI
{
public:
	uint8                                        Pad_D19[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            CurrentSelectionText;                              // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               NextButton;                                        // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               PreviousButton;                                    // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D1A[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrabArrowSelectionUI* GetDefaultObj();

	void OnPressedPreviousButton();
	void OnPressedNextButton();
	void OnHoveredPreviousButton();
	void OnHoveredNextButton();
};

// 0x58 (0x428 - 0x3D0)
// Class CrabChampions.CrabCosmeticsMenuUI
class UCrabCosmeticsMenuUI : public UCrabFocusMenuUI
{
public:
	class ACrabCosmeticC*                        CosmeticC;                                         // 0x3D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabCosmeticSlotUI>       CosmeticSlotUIToSpawn;                             // 0x3D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUniformGridPanel*                     CosmeticsUniformGridPanel;                         // 0x3E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               CrabSkinsButton;                                   // 0x3E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               WeaponSkinsButton;                                 // 0x3F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabCosmeticSlotUI*                   SelectedCosmeticSlotUI;                            // 0x3F8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CosmeticNameText;                                  // 0x400(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ChallengeDescriptionText;                          // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ChallengeProgressText;                             // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ChallengeGoalText;                                 // 0x418(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          ChallengePB;                                       // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabCosmeticsMenuUI* GetDefaultObj();

	void OnPressedWeaponSkinsButton();
	void OnPressedCrabSkinsButton();
};

// 0x80 (0x450 - 0x3D0)
// Class CrabChampions.CrabDifficultyMenuUI
class UCrabDifficultyMenuUI : public UCrabFocusMenuUI
{
public:
	class UOverlay*                              EasyButtonOverlay;                                 // 0x3D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               EasyButton;                                        // 0x3D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              EasyChallengeLevelOverlay;                         // 0x3E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              NormalButtonOverlay;                               // 0x3E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               NormalButton;                                      // 0x3F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              NormalChallengeLevelOverlay;                       // 0x3F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              NightmareButtonOverlay;                            // 0x400(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               NightmareButton;                                   // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              NightmareChallengeLevelOverlay;                    // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        UltraChaosHorizontalBox;                           // 0x418(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              UltraChaosButtonOverlay;                           // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               UltraChaosButton;                                  // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              UltraChaosChallengeLevelOverlay;                   // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ChallengeLevelText;                                // 0x438(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          DifficultyModifiersVerticalBox;                    // 0x440(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabDifficultyModifierUI> DifficultyModifierUIToSpawn;                       // 0x448(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabDifficultyMenuUI* GetDefaultObj();

	void OnPressedUltraChaosButton();
	void OnPressedNormalButton();
	void OnPressedNightmareButton();
	void OnPressedEasyButton();
	void OnHoveredUltraChaosButton();
	void OnHoveredNormalButton();
	void OnHoveredNightmareButton();
	void OnHoveredEasyButton();
};

// 0x30 (0x400 - 0x3D0)
// Class CrabChampions.CrabMinigameGameOverUI
class UCrabMinigameGameOverUI : public UCrabFocusMenuUI
{
public:
	class UTextBlock*                            MinigameNameText;                                  // 0x3D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetSwitcher*                       MinigameGameOverWidgetSwitcher;                    // 0x3D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ScoreText;                                         // 0x3E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            HighScoreText;                                     // 0x3E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          MinigameGameOverRowUIVerticalBox;                  // 0x3F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabMinigameGameOverRowUI> MinigameGameOverRowUIToSpawn;                      // 0x3F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabMinigameGameOverUI* GetDefaultObj();

};

// 0x38 (0x408 - 0x3D0)
// Class CrabChampions.CrabMultiplayerMenuUI
class UCrabMultiplayerMenuUI : public UCrabFocusMenuUI
{
public:
	class UCrabArrowSelectionUI*                 QuickplayDifficultyAS;                             // 0x3D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               QuickplayButton;                                   // 0x3D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            QuickplayButtonText;                               // 0x3E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UScrollBox*                            FriendsScrollBox;                                  // 0x3E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabInviteFriendRowUI>    InviteFriendRowUIToSpawn;                          // 0x3F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          JoinedPlayersVerticalBox;                          // 0x3F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCrabJoinedPlayerRowUI>    JoinedPlayerRowUIToSpawn;                          // 0x400(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabMultiplayerMenuUI* GetDefaultObj();

	void OnPressedQuickplayButton();
	void OnHoveredQuickplayButton();
};

// 0x68 (0x3C0 - 0x358)
// Class CrabChampions.CrabPortalInteractUI
class UCrabPortalInteractUI : public UCrabInteractUI
{
public:
	class UBorder*                               ChallengeBorder;                                   // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ChallengeNameText;                                 // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ChallengeDescriptionText;                          // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               AdditionalChallengeBorder;                         // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            AdditionalChallengeNameText;                       // 0x378(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            AdditionalChallengeDescriptionText;                // 0x380(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               BlessingBorder;                                    // 0x388(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            BlessingNameText;                                  // 0x390(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            BlessingDescriptionText;                           // 0x398(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               RewardBorder;                                      // 0x3A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            DoubleRewardText;                                  // 0x3A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            RewardNameText;                                    // 0x3B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            RewardDescriptionText;                             // 0x3B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabPortalInteractUI* GetDefaultObj();

};

// 0x10 (0x2C8 - 0x2B8)
// Class CrabChampions.CrabInventoryEventUI
class UCrabInventoryEventUI : public UCrabUI
{
public:
	class UTextBlock*                            InventoryEventMessageText;                         // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      InventoryEventAnim;                                // 0x2C0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabInventoryEventUI* GetDefaultObj();

};

// 0x68 (0x320 - 0x2B8)
// Class CrabChampions.CrabInventorySlotUI
class UCrabInventorySlotUI : public UCrabUI
{
public:
	class UCrabInventoryUI*                      OwningInventoryUI;                                 // 0x2B8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrabInventoryDA*                      InventoryDA;                                       // 0x2C0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FCrabInventoryInfo                    InventoryInfo;                                     // 0x2C8(0x20)(Transient, Protected, NativeAccessSpecifierProtected)
	class UBorder*                               SlotBorder;                                        // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               SlotButton;                                        // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                SlotLockedImage;                                   // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D33[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                SlotIconImage;                                     // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SlotLevelText;                                     // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                SlotEnhanceableIconImage;                          // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabInventorySlotUI* GetDefaultObj();

	void OnHoveredSlotButton();
};

// 0x30 (0x2E8 - 0x2B8)
// Class CrabChampions.CrabInviteFriendRowUI
class UCrabInviteFriendRowUI : public UCrabUI
{
public:
	class UTextBlock*                            FriendNameText;                                    // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D3A[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UButton*                               InviteButton;                                      // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            InviteButtonText;                                  // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D3B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrabInviteFriendRowUI* GetDefaultObj();

	void OnPressedInviteButton();
	void OnHoveredInviteButton();
};

// 0x10 (0x2C8 - 0x2B8)
// Class CrabChampions.CrabJoinedPlayerRowUI
class UCrabJoinedPlayerRowUI : public UCrabUI
{
public:
	class UTextBlock*                            PlayerNameText;                                    // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            PlayerPingText;                                    // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabJoinedPlayerRowUI* GetDefaultObj();

};

// 0x28 (0x2E0 - 0x2B8)
// Class CrabChampions.CrabUnlockedCosmeticUI
class UCrabUnlockedCosmeticUI : public UCrabUI
{
public:
	class UTextBlock*                            ChallengeDescriptionText;                          // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CosmeticTypeText;                                  // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CosmeticNameText;                                  // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                CosmeticIconImage;                                 // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      UnlockedAnim;                                      // 0x2D8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrabUnlockedCosmeticUI* GetDefaultObj();

};

}


