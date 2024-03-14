#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECrabBossPhase : uint8
{
	PhaseOne                       = 0,
	PhaseTwo                       = 1,
	PhaseThree                     = 2,
	ECrabBossPhase_MAX             = 3,
};

enum class ECrabDamageAreaType : uint8
{
	None                           = 0,
	Damage                         = 1,
	Health                         = 2,
	MaxHealth                      = 3,
	EnergyRing                     = 4,
	BlackHole                      = 5,
	ECrabDamageAreaType_MAX        = 6,
};

enum class ECrabEQCType : uint8
{
	None                           = 0,
	BestEnemyC                     = 1,
	BestEnemyCoreLoc               = 2,
	BestFriendlyC                  = 3,
	ECrabEQCType_MAX               = 4,
};

enum class ECrabInputDir : uint8
{
	None                           = 0,
	Forward                        = 1,
	Backward                       = 2,
	Right                          = 3,
	Left                           = 4,
	ECrabInputDir_MAX              = 5,
};

enum class ECrabTargetType : uint8
{
	None                           = 0,
	CurrentLoc                     = 1,
	PredictedLoc                   = 2,
	TelegraphedLoc                 = 3,
	ECrabTargetType_MAX            = 4,
};

enum class ECrabEnemyBuff : uint8
{
	None                           = 0,
	Angered                        = 1,
	Frenzied                       = 2,
	Healthy                        = 3,
	Speedy                         = 4,
	Shielded                       = 5,
	Last                           = 6,
	ECrabEnemyBuff_MAX             = 7,
};

enum class ECrabEnemyMovementType : uint8
{
	None                           = 0,
	MoveDirectlyToEnemy            = 1,
	MoveToPredictedEnemyLoc        = 2,
	MoveToRangedActionLoc          = 3,
	ECrabEnemyMovementType_MAX     = 4,
};

enum class ECrabEnemyCategory : uint8
{
	None                           = 0,
	Easy                           = 1,
	Medium                         = 2,
	Hard                           = 3,
	Elite                          = 4,
	Boss                           = 5,
	ECrabEnemyCategory_MAX         = 6,
};

enum class ECrabBlessing : uint8
{
	None                           = 0,
	Flawless                       = 1,
	Rush                           = 2,
	Last                           = 3,
	ECrabBlessing_MAX              = 4,
};

enum class ECrabChallengeModifier : uint8
{
	None                           = 0,
	OneHit                         = 1,
	MirroredProjectiles            = 2,
	Shrapnel                       = 3,
	HomingThorns                   = 4,
	HomingBarrels                  = 5,
	ElementalExplosions            = 6,
	EnergyRings                    = 7,
	SpikeStrikes                   = 8,
	ArmoredEnemies                 = 9,
	SpeedyEnemies                  = 10,
	ExplosiveEnemies               = 11,
	XL                             = 12,
	BarrelRain                     = 13,
	Last                           = 14,
	ECrabChallengeModifier_MAX     = 15,
};

enum class ECrabIslandType : uint8
{
	None                           = 0,
	Lobby                          = 1,
	NewRun                         = 2,
	ContinueRun                    = 3,
	Arena                          = 4,
	Horde                          = 5,
	Waves                          = 6,
	Harvest                        = 7,
	Demolition                     = 8,
	Parkour                        = 9,
	Shop                           = 10,
	Elite                          = 11,
	Boss                           = 12,
	Biome                          = 13,
	CrabIsland                     = 14,
	Loop                           = 15,
	Arcade                         = 16,
	Holdout                        = 17,
	Duel                           = 18,
	ECrabIslandType_MAX            = 19,
};

enum class ECrabRank : uint8
{
	None                           = 0,
	Bronze                         = 1,
	Silver                         = 2,
	Gold                           = 3,
	Sapphire                       = 4,
	Emerald                        = 5,
	Ruby                           = 6,
	Diamond                        = 7,
	ECrabRank_MAX                  = 8,
};

enum class ECrabDifficultyModifier : uint8
{
	StrategicEnemies               = 0,
	RegeneratingEnemies            = 1,
	LockedSlots                    = 2,
	BuffedEnemies                  = 3,
	ResurrectingEnemies            = 4,
	ExpensiveShops                 = 5,
	DoubleChallenge                = 6,
	EvolvedEnemies                 = 7,
	UnfairBosses                   = 8,
	EternalPunishment              = 9,
	LimitedHeals                   = 10,
	NoSafetyNet                    = 11,
	Last                           = 12,
	ECrabDifficultyModifier_MAX    = 13,
};

enum class ECrabDifficulty : uint8
{
	Easy                           = 0,
	Normal                         = 1,
	Nightmare                      = 2,
	UltraChaos                     = 3,
	ECrabDifficulty_MAX            = 4,
};

enum class ECrabTotemType : uint8
{
	None                           = 0,
	Cosmetics                      = 1,
	Difficulty                     = 2,
	Key                            = 3,
	Multiplayer                    = 4,
	Reroll                         = 5,
	Health                         = 6,
	Crystal                        = 7,
	Loot                           = 8,
	Gold                           = 9,
	Glass                          = 10,
	Fuse                           = 11,
	Greed                          = 12,
	Chance                         = 13,
	Gamble                         = 14,
	Enhancement                    = 15,
	Random                         = 16,
	Contract                       = 17,
	ECrabTotemType_MAX             = 18,
};

enum class ECrabConsumableType : uint8
{
	None                           = 0,
	Armor                          = 1,
	Health                         = 2,
	MaxHealth                      = 3,
	Crystal                        = 4,
	Key                            = 5,
	ECrabConsumableType_MAX        = 6,
};

enum class ECrabRelicType : uint8
{
	None                           = 0,
	RingOfHealing                  = 1,
	RingOfArmor                    = 2,
	RingOfParrying                 = 3,
	RingOfDestruction              = 4,
	AncientBlade                   = 5,
	PortalRing                     = 6,
	RingOfRevolution               = 7,
	RingOfReloading                = 8,
	WisdomRing                     = 9,
	CoralAmulet                    = 10,
	RubyDice                       = 11,
	TonysRing                      = 12,
	ComboRing                      = 13,
	TonysAmulet                    = 14,
	RingOfValue                    = 15,
	EtherealArmor                  = 16,
	RingOfDefense                  = 17,
	RingOfDeflection               = 18,
	RingOfRepulsion                = 19,
	RingOfPower                    = 20,
	RingOfPrecision                = 21,
	IceRing                        = 22,
	FireRing                       = 23,
	LightningRing                  = 24,
	PoisonRing                     = 25,
	ChaoticRing                    = 26,
	ElementalRing                  = 27,
	AmmoRing                       = 28,
	RingOfGravity                  = 29,
	RingOfRocketJumping            = 30,
	SkillRing                      = 31,
	DuplicationRing                = 32,
	RingOfProtection               = 33,
	RingOfSwiftness                = 34,
	RingOfLuck                     = 35,
	RecursiveRing                  = 36,
	GoldenArc                      = 37,
	PortalAmulet                   = 38,
	AbilityRing                    = 39,
	GoldRing                       = 40,
	TonysCrown                     = 41,
	CursedRing                     = 42,
	RushedRing                     = 43,
	ECrabRelicType_MAX             = 44,
};

enum class ECrabPerkType : uint8
{
	None                           = 0,
	Fortitude                      = 1,
	ValuedCustomer                 = 2,
	PersonalSpace                  = 3,
	Bullseye                       = 4,
	BigHearts                      = 5,
	Endurance                      = 6,
	HealthyCombo                   = 7,
	Vampire                        = 8,
	NourishingSalvage              = 9,
	Regenerator                    = 10,
	AmberResin                     = 11,
	HardTarget                     = 12,
	Scavenger                      = 13,
	Vitality                       = 14,
	SecondWind                     = 15,
	DamageCombo                    = 16,
	FMJ                            = 17,
	IceCube                        = 18,
	OilCan                         = 19,
	MetalRod                       = 20,
	PoisonVial                     = 21,
	Sharpshooter                   = 22,
	HotShot                        = 23,
	PowerPunch                     = 24,
	CriticalThinking               = 25,
	CriticalArrow                  = 26,
	ChainReaction                  = 27,
	Efficiency                     = 28,
	Autoloader                     = 29,
	RiggedTotems                   = 30,
	SturdyTotems                   = 31,
	SonicBoom                      = 32,
	RedFury                        = 33,
	Adrenaline                     = 34,
	SpecialDelivery                = 35,
	TonysBlackCard                 = 36,
	BigClaws                       = 37,
	SharpClaws                     = 38,
	IronClaws                      = 39,
	Blender                        = 40,
	DangerClose                    = 41,
	EagleEye                       = 42,
	PowerArmor                     = 43,
	Equalizer                      = 44,
	SpeedDemon                     = 45,
	Stamina                        = 46,
	Slugger                        = 47,
	ExplosiveArmor                 = 48,
	FlammableArmor                 = 49,
	CrystalCombo                   = 50,
	Snatcher                       = 51,
	FinishingMove                  = 52,
	GoldCoating                    = 53,
	Paycheck                       = 54,
	CrystalDividends               = 55,
	Frostbite                      = 56,
	BubblingAcid                   = 57,
	Icebreaker                     = 58,
	HotSteam                       = 59,
	IceCold                        = 60,
	Firestarter                    = 61,
	HighVoltage                    = 62,
	Toxic                          = 63,
	PotentMagic                    = 64,
	CrystalFertilizer              = 65,
	Driller                        = 66,
	EnhancedTurrets                = 67,
	TurboTurrets                   = 68,
	TurretFriendship               = 69,
	DamageAura                     = 70,
	IceAura                        = 71,
	FireAura                       = 72,
	LightningAura                  = 73,
	PoisonAura                     = 74,
	OrbitingScythes                = 75,
	CrimsonHaze                    = 76,
	IceClaws                       = 77,
	FireClaws                      = 78,
	Shockwave                      = 79,
	GrimReaper                     = 80,
	GraveDodger                    = 81,
	Bulletproof                    = 82,
	TastyOrange                    = 83,
	Checklist                      = 84,
	Assassin                       = 85,
	Gemstone                       = 86,
	Collector                      = 87,
	MoneyIsPower                   = 88,
	MegaCrit                       = 89,
	CriticalBlast                  = 90,
	AllYouCanEat                   = 91,
	StreamerLoot                   = 92,
	BigChests                      = 93,
	PerformanceBonus               = 94,
	DoubleVision                   = 95,
	BonusCrystals                  = 96,
	Reinforced                     = 97,
	SentryTurret                   = 98,
	SniperTurret                   = 99,
	RareTreasure                   = 100,
	ExplodingEnemies               = 101,
	FreezingEnemies                = 102,
	FlammableEnemies               = 103,
	ElectricEnemies                = 104,
	PoisonousEnemies               = 105,
	GoldDice                       = 106,
	FaultyChests                   = 107,
	CrystalAsteroids               = 108,
	BonusChests                    = 109,
	CarePackage                    = 110,
	LevelUp                        = 111,
	RegeneratingArmor              = 112,
	DivineBlessing                 = 113,
	CriticalLightning              = 114,
	IceDash                        = 115,
	DaggerDash                     = 116,
	Powerslide                     = 117,
	StormCloud                     = 118,
	FireTurret                     = 119,
	PoisonTurret                   = 120,
	MortarTurret                   = 121,
	LeapOfFaith                    = 122,
	Bribe                          = 123,
	DoubleTrouble                  = 124,
	HeavyArmor                     = 125,
	Juggernaut                     = 126,
	BigBones                       = 127,
	GlassCannon                    = 128,
	DamageSeeker                   = 129,
	BruteForce                     = 130,
	ThinkFast                      = 131,
	MetalClaw                      = 132,
	UpTheAnte                      = 133,
	Brawler                        = 134,
	Untouchable                    = 135,
	CursedLottery                  = 136,
	SlipperySlope                  = 137,
	DoubleEdgedSword               = 138,
	Workaholic                     = 139,
	RisingStar                     = 140,
	LimitedLoot                    = 141,
	FlashSale                      = 142,
	HighRoller                     = 143,
	Hoarder                        = 144,
	ECrabPerkType_MAX              = 145,
};

enum class ECrabGrenadeModType : uint8
{
	None                           = 0,
	BouncingGrenade                = 1,
	SpiralGrenade                  = 2,
	SnakeGrenade                   = 3,
	LightGrenade                   = 4,
	GlueGrenade                    = 5,
	ChaoticGrenade                 = 6,
	HeavyGrenade                   = 7,
	BigGrenade                     = 8,
	ImplodingGrenade               = 9,
	IronGrenade                    = 10,
	TimeGrenade                    = 11,
	BiggerBoom                     = 12,
	EarthquakeGrenade              = 13,
	ConfusionExplosion             = 14,
	WeakExplosion                  = 15,
	SlowExplosion                  = 16,
	DamageGrenade                  = 17,
	RapidGrenade                   = 18,
	StackedGrenade                 = 19,
	CloneGrenade                   = 20,
	TripleGrenade                  = 21,
	LayeredGrenade                 = 22,
	SplitGrenade                   = 23,
	ScatterGrenade                 = 24,
	AuraGrenade                    = 25,
	BubbleBlast                    = 26,
	DaggerBlast                    = 27,
	FireworkExplosion              = 28,
	ThornExplosion                 = 29,
	SparkExplosion                 = 30,
	ShrapnelExplosion              = 31,
	BarrelExplosion                = 32,
	ElementalExplosion             = 33,
	GiantDrill                     = 34,
	ArtilleryStrike                = 35,
	Grenadier                      = 36,
	HomingGrenade                  = 37,
	CloneExplosion                 = 38,
	BombExplosion                  = 39,
	SpinningBlade                  = 40,
	SporeExplosion                 = 41,
	UltraMushroom                  = 42,
	ScytheVortex                   = 43,
	CrystalBarrage                 = 44,
	EnergyRing                     = 45,
	BlackHole                      = 46,
	IceExplosion                   = 47,
	FireExplosion                  = 48,
	LightningExplosion             = 49,
	PoisonExplosion                = 50,
	SpikeStrike                    = 51,
	CrystalStrike                  = 52,
	ECrabGrenadeModType_MAX        = 53,
};

enum class ECrabWeaponModType : uint8
{
	None                           = 0,
	BouncingShot                   = 1,
	AcceleratingShot               = 2,
	ZigZagShot                     = 3,
	SpiralShot                     = 4,
	SnakeShot                      = 5,
	ChaoticShot                    = 6,
	BoomerangShot                  = 7,
	OrbitingShot                   = 8,
	RecoilShot                     = 9,
	FastShot                       = 10,
	HealthShot                     = 11,
	BigMag                         = 12,
	HighCaliber                    = 13,
	WindUp                         = 14,
	SteadyShot                     = 15,
	TrickShot                      = 16,
	AerialShot                     = 17,
	GripTape                       = 18,
	BlindFire                      = 19,
	MoneyShot                      = 20,
	TimeShot                       = 21,
	TimeBolt                       = 22,
	UltraShot                      = 23,
	SharpShot                      = 24,
	GlueShot                       = 25,
	BigShot                        = 26,
	StreakShot                     = 27,
	MagShot                        = 28,
	Uppercut                       = 29,
	HeavyShot                      = 30,
	HeavyHitter                    = 31,
	RapidFire                      = 32,
	LightShot                      = 33,
	EscalatingShot                 = 34,
	IceShot                        = 35,
	FireShot                       = 36,
	LightningShot                  = 37,
	PoisonShot                     = 38,
	ArcaneShot                     = 39,
	RandomShot                     = 40,
	ReloadArc                      = 41,
	TripleShot                     = 42,
	ArcShot                        = 43,
	SplitShot                      = 44,
	ScatterShot                    = 45,
	TargetingShot                  = 46,
	LinkShot                       = 47,
	DrillShot                      = 48,
	DamageShot                     = 49,
	Supercharged                   = 50,
	Juiced                         = 51,
	AuraShot                       = 52,
	PiercingShot                   = 53,
	BubbleShot                     = 54,
	DaggerArc                      = 55,
	PiercingWave                   = 56,
	ArcaneBlast                    = 57,
	ShotgunBlast                   = 58,
	MaceShot                       = 59,
	FireworkShot                   = 60,
	ThornShot                      = 61,
	SparkShot                      = 62,
	Firepower                      = 63,
	XShot                          = 64,
	SquareShot                     = 65,
	HomingShot                     = 66,
	DoubleTap                      = 67,
	SplashDamage                   = 68,
	ProximityBarrage               = 69,
	HomingBlades                   = 70,
	BombShot                       = 71,
	LandmineShot                   = 72,
	TorpedoShot                    = 73,
	FireballShot                   = 74,
	SharpenedAxe                   = 75,
	TriangleShot                   = 76,
	SporeShot                      = 77,
	IceStorm                       = 78,
	FireStorm                      = 79,
	LightningStorm                 = 80,
	PoisonStorm                    = 81,
	IceStrike                      = 82,
	FireStrike                     = 83,
	LightningStrike                = 84,
	PoisonStrike                   = 85,
	SpikeStrike                    = 86,
	ECrabWeaponModType_MAX         = 87,
};

enum class ECrabCurrencyType : uint8
{
	Crystal                        = 0,
	Key                            = 1,
	Health                         = 2,
	ECrabCurrencyType_MAX          = 3,
};

enum class ECrabEnhancementType : uint8
{
	None                           = 0,
	Spiraling                      = 1,
	Snaking                        = 2,
	Chaotic                        = 3,
	Sticky                         = 4,
	Freezing                       = 5,
	Flaming                        = 6,
	Electrifying                   = 7,
	Toxifying                      = 8,
	Damaging                       = 9,
	Splitting                      = 10,
	Scattering                     = 11,
	Homing                         = 12,
	Last                           = 13,
	ECrabEnhancementType_MAX       = 14,
};

enum class ECrabPickupTag : uint8
{
	None                           = 0,
	Critical                       = 1,
	Bounce                         = 2,
	Ice                            = 3,
	Fire                           = 4,
	Lightning                      = 5,
	Poison                         = 6,
	Arcane                         = 7,
	Turret                         = 8,
	ECrabPickupTag_MAX             = 9,
};

enum class ECrabRarity : uint8
{
	None                           = 0,
	Rare                           = 1,
	Epic                           = 2,
	Legendary                      = 3,
	Greed                          = 4,
	ECrabRarity_MAX                = 5,
};

enum class ECrabLootPool : uint8
{
	None                           = 0,
	Damage                         = 1,
	Critical                       = 2,
	Elemental                      = 3,
	Speed                          = 4,
	Luck                           = 5,
	Health                         = 6,
	Economy                        = 7,
	Skill                          = 8,
	Greed                          = 9,
	Upgrade                        = 10,
	Random                         = 11,
	RelicChest                     = 12,
	SpikedChest                    = 13,
	EpicChest                      = 14,
	LegendaryChest                 = 15,
	HealingChest                   = 16,
	KeyChest                       = 17,
	Lesser                         = 18,
	ECrabLootPool_MAX              = 19,
};

enum class ECrabPickupType : uint8
{
	None                           = 0,
	Weapon                         = 1,
	Ability                        = 2,
	Melee                          = 3,
	WeaponMod                      = 4,
	GrenadeMod                     = 5,
	Perk                           = 6,
	Relic                          = 7,
	Consumable                     = 8,
	Random                         = 9,
	ECrabPickupType_MAX            = 10,
};

enum class ECrabLesserProjectileType : uint8
{
	None                           = 0,
	Generic                        = 1,
	Duplicate                      = 2,
	TimeBolt                       = 3,
	UltraShot                      = 4,
	ReloadArc                      = 5,
	LinkShot                       = 6,
	DrillShot                      = 7,
	BubbleShot                     = 8,
	DaggerArc                      = 9,
	PiercingWave                   = 10,
	ArcaneBlast                    = 11,
	ShotgunBlast                   = 12,
	MaceShot                       = 13,
	FireworkShot                   = 14,
	ThornShot                      = 15,
	SparkShot                      = 16,
	ProximityBarrage               = 17,
	HomingBlade                    = 18,
	BombShot                       = 19,
	TorpedoShot                    = 20,
	FireballShot                   = 21,
	SharpenedAxe                   = 22,
	TriangleShot                   = 23,
	BubbleBlast                    = 24,
	DaggerBlast                    = 25,
	FireworkExplosion              = 26,
	ThornExplosion                 = 27,
	SparkExplosion                 = 28,
	CloneExplosion                 = 29,
	BombExplosion                  = 30,
	SpinningBlade                  = 31,
	OrbitingScythe                 = 32,
	DaggerDash                     = 33,
	ECrabLesserProjectileType_MAX  = 34,
};

enum class ECrabFormationType : uint8
{
	Single                         = 0,
	Double                         = 1,
	Triple                         = 2,
	Quad                           = 3,
	SmallCluster                   = 4,
	MediumCluster                  = 5,
	LargeCluster                   = 6,
	SmallArc                       = 7,
	LargeArc                       = 8,
	LargeArcTightSpread            = 9,
	TripleArc                      = 10,
	Box                            = 11,
	Triangle                       = 12,
	X                              = 13,
	Square                         = 14,
	LargeSquare                    = 15,
	Circle                         = 16,
	LargeCircle                    = 17,
	Line                           = 18,
	Cross                          = 19,
	Ring                           = 20,
	MediumRing                     = 21,
	LargeRing                      = 22,
	Random                         = 23,
	ECrabFormationType_MAX         = 24,
};

enum class ECrabHitmarkerType : uint8
{
	Quiet                          = 0,
	Normal                         = 1,
	Loud                           = 2,
	ECrabHitmarkerType_MAX         = 3,
};

enum class ECrabCrosshairType : uint8
{
	None                           = 0,
	Cross                          = 1,
	HalfCross                      = 2,
	Circle                         = 3,
	SniperScope                    = 4,
	ECrabCrosshairType_MAX         = 5,
};

enum class ECrabDamageHitType : uint8
{
	None                           = 0,
	Armor                          = 1,
	ArmorBreak                     = 2,
	Health                         = 3,
	Crit                           = 4,
	Elimination                    = 5,
	ECrabDamageHitType_MAX         = 6,
};

enum class ECrabDebuffType : uint8
{
	None                           = 0,
	Confusion                      = 1,
	Weak                           = 2,
	Slow                           = 3,
	Ice                            = 4,
	Fire                           = 5,
	Lightning                      = 6,
	Poison                         = 7,
	Arcane                         = 8,
	Last                           = 9,
	ECrabDebuffType_MAX            = 10,
};

enum class ECrabDamageType : uint8
{
	None                           = 0,
	Radial                         = 1,
	Ability                        = 2,
	Melee                          = 3,
	Lesser                         = 4,
	Knockback                      = 5,
	DOT                            = 6,
	Fire                           = 7,
	Lightning                      = 8,
	Arcane                         = 9,
	Hazard                         = 10,
	Unblockable                    = 11,
	ECrabDamageType_MAX            = 12,
};

enum class ECrabSpawnPointType : uint8
{
	Player                         = 0,
	Turret                         = 1,
	Destructible                   = 2,
	Totem                          = 3,
	Secret                         = 4,
	Enemy                          = 5,
	Reward                         = 6,
	Portal                         = 7,
	Shop                           = 8,
	ECrabSpawnPointType_MAX        = 9,
};

enum class ECrabBiome : uint8
{
	None                           = 0,
	Tropical                       = 1,
	Arctic                         = 2,
	Desert                         = 3,
	Volcanic                       = 4,
	ECrabBiome_MAX                 = 5,
};

enum class ECrabMatchState : uint8
{
	None                           = 0,
	WaitingToStart                 = 1,
	PortalCountdown                = 2,
	StartedIsland                  = 3,
	ClearedIsland                  = 4,
	AllPlayersEliminated           = 5,
	GameOver                       = 6,
	Restarting                     = 7,
	ECrabMatchState_MAX            = 8,
};

enum class ECrabCosmeticType : uint8
{
	CrabSkin                       = 0,
	WeaponSkin                     = 1,
	ECrabCosmeticType_MAX          = 2,
};

enum class ECrabProjectileState : uint8
{
	None                           = 0,
	Pooled                         = 1,
	Active                         = 2,
	Exploded                       = 3,
	ECrabProjectileState_MAX       = 4,
};

enum class ECrabFireMode : uint8
{
	Automatic                      = 0,
	Burst                          = 1,
	ECrabFireMode_MAX              = 2,
};

enum class ECrabConfirmationPromptType : uint8
{
	None                           = 0,
	QuitToLobby                    = 1,
	BringPartyMembersToLobby       = 2,
	QuitToDesktop                  = 3,
	ECrabConfirmationPromptType_MAX = 4,
};

enum class ECrabBlockingHitState : uint8
{
	Deflected                      = 0,
	Aborted                        = 1,
	ECrabBlockingHitState_MAX      = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// ScriptStruct CrabChampions.ClientAuthoritativeMoveData
struct FClientAuthoritativeMoveData
{
public:
	struct FVector_NetQuantize10                 Location;                                          // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                 Velocity;                                          // 0x18(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ControlRotation;                                   // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        MovementMode;                                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DEE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   BasedMovementBase;                                 // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BasedMovementBaseBoneName;                         // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBasedHasRelativeRotation;                         // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DEF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct CrabChampions.CrabEnemySpawnSettings
struct FCrabEnemySpawnSettings
{
public:
	int32                                        IslandToStartSpawningAt;                           // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlySpawnIfLooping;                               // 0x4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ECrabIslandType>           BannedIslandTypes;                                 // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bIsEvolvedEnemy;                                   // 0x18(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsExplosiveEnemy;                                 // 0x19(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF2[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SpawnCost;                                         // 0x1C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnWeight;                                       // 0x20(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpawnLimit;                                        // 0x24(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CrabChampions.CrabPickupsSpawnInfo
struct FCrabPickupsSpawnInfo
{
public:
	TArray<class UCrabPickupDA*>                 PickupsToSpawn;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       SpawnLocs;                                         // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct CrabChampions.CrabLobbyStats
struct FCrabLobbyStats
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Difficulty;                                        // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HighScore;                                         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Attempts;                                          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Wins;                                              // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WinStreak;                                         // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HighestIslandReached;                              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCompletedChallenges;                            // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumUnlockedWeapons;                                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumUnlockedAbilities;                              // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumUnlockedMeleeWeapons;                           // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumUnlockedWeaponMods;                             // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumUnlockedGrenadeMods;                            // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumUnlockedPerks;                                  // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumUnlockedRelics;                                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct CrabChampions.CrabHealthInfo
struct FCrabHealthInfo
{
public:
	int32                                        CurrentArmorPlates;                                // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentArmorPlateHealth;                           // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviousArmorPlateHealth;                          // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentHealth;                                     // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentMaxHealth;                                  // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviousHealth;                                    // 0x14(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviousMaxHealth;                                 // 0x18(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CrabChampions.CrabInventoryInfo
struct FCrabInventoryInfo
{
public:
	uint8                                        Level;                                             // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ECrabEnhancementType>      Enhancements;                                      // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        AccumulatedBuff;                                   // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct CrabChampions.CrabWeaponMod
struct FCrabWeaponMod
{
public:
	class UCrabWeaponModDA*                      WeaponModDA;                                       // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCrabInventoryInfo                    InventoryInfo;                                     // 0x8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct CrabChampions.CrabCosmetic
struct FCrabCosmetic
{
public:
	enum class ECrabCosmeticType                 CosmeticType;                                      // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CosmeticName;                                      // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            CosmeticIcon;                                      // 0x18(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               CosmeticObject;                                    // 0x20(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct CrabChampions.CrabChallenge
struct FCrabChallenge
{
public:
	class FName                                  ChallengeID;                                       // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ChallengeDescription;                              // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChallengeProgress;                                 // 0x18(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChallengeGoal;                                     // 0x1C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChallengeCompleted;                               // 0x20(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCrabCosmetic                         CosmeticReward;                                    // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CrabChampions.CrabNextIslandInfo
struct FCrabNextIslandInfo
{
public:
	enum class ECrabBiome                        Biome;                                             // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentIsland;                                     // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IslandName;                                        // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrabIslandType                   IslandType;                                        // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DFA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ECrabChallengeModifier>    ChallengeModifiers;                                // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class ECrabBlessing                     Blessing;                                          // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrabLootPool                     RewardLootPool;                                    // 0x29(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DFB[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct CrabChampions.CrabGrenadeMod
struct FCrabGrenadeMod
{
public:
	class UCrabGrenadeModDA*                     GrenadeModDA;                                      // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCrabInventoryInfo                    InventoryInfo;                                     // 0x8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct CrabChampions.CrabPerk
struct FCrabPerk
{
public:
	class UCrabPerkDA*                           PerkDA;                                            // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCrabInventoryInfo                    InventoryInfo;                                     // 0x8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct CrabChampions.CrabRelic
struct FCrabRelic
{
public:
	class UCrabRelicDA*                          RelicDA;                                           // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCrabInventoryInfo                    InventoryInfo;                                     // 0x8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct CrabChampions.CrabAutoSave
struct FCrabAutoSave
{
public:
	int32                                        CurrentTime;                                       // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrabDifficulty                   Difficulty;                                        // 0x4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DFD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ECrabDifficultyModifier>   DifficultyModifiers;                               // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FCrabNextIslandInfo                   NextIslandInfo;                                    // 0x18(0x30)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                        Points;                                            // 0x48(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ComboCounter;                                      // 0x4C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Combo;                                             // 0x50(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Eliminations;                                      // 0x54(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShotsFired;                                        // 0x58(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       DamageDealt;                                       // 0x5C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       HighestDamageDealt;                                // 0x60(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DamageTaken;                                       // 0x64(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumFlawlessIslands;                                // 0x68(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCrabHealthInfo                       HealthInfo;                                        // 0x6C(0x1C)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MaxHealthMultiplier;                               // 0x88(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageMultiplier;                                  // 0x8C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleMultiplier;                                   // 0x90(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DFE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCrabWeaponDA*                         WeaponDA;                                          // 0x98(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabAbilityDA*                        AbilityDA;                                         // 0xA0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabMeleeDA*                          MeleeDA;                                           // 0xA8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NumWeaponModSlots;                                 // 0xB0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DFF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCrabWeaponMod>                WeaponMods;                                        // 0xB8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        NumGrenadeModSlots;                                // 0xC8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E00[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCrabGrenadeMod>               GrenadeMods;                                       // 0xD0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        NumPerkSlots;                                      // 0xE0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E01[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCrabPerk>                     Perks;                                             // 0xE8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCrabRelic>                    Relics;                                            // 0xF8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                        NumTimesSalvaged;                                  // 0x108(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumShopPurchases;                                  // 0x10C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumShopRerolls;                                    // 0x110(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumTotemsDestroyed;                                // 0x114(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Crystals;                                          // 0x118(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalTimeTaken;                                    // 0x11C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCrabChallenge>                CompletedChallenges;                               // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CrabChampions.CrabEnemyStats
struct FCrabEnemyStats
{
public:
	float                                        HealthMultiplier;                                  // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovementSpeedMultiplier;                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActionSpeedMultiplier;                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageMultiplier;                                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct CrabChampions.CrabAISettings
struct FCrabAISettings
{
public:
	enum class ECrabEnemyMovementType            MovementType;                                      // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E03[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeBetweenMoves;                                  // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        JumpProbability;                                   // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DashProbability;                                   // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeBetweenActionsMin;                             // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeBetweenActionsMax;                             // 0x14(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UEnvQuery*>                     RangedActionEnvQueries;                            // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CrabChampions.CrabPortalInfo
struct FCrabPortalInfo
{
public:
	bool                                         bIsInited;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E04[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ECrabChallengeModifier>    ChallengeModifiers;                                // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ECrabBlessing                     Blessing;                                          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrabLootPool                     RewardLootPool;                                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E05[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct CrabChampions.CrabIsland
struct FCrabIsland
{
public:
	class FName                                  IslandName;                                        // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnWeight;                                       // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CrabChampions.CrabRankedWeapon
struct FCrabRankedWeapon
{
public:
	class UCrabPickupDA*                         Weapon;                                            // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrabRank                         Rank;                                              // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E06[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CrabChampions.CrabInventoryCooldown
struct FCrabInventoryCooldown
{
public:
	class UCrabInventoryDA*                      InventoryDA;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CurrentCooldown;                                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E07[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct CrabChampions.CrabPedestalInfo
struct FCrabPedestalInfo
{
public:
	enum class ECrabCurrencyType                 CurrencyType;                                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E08[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Cost;                                              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DiscountPercentage;                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct CrabChampions.CrabPickupInfo
struct FCrabPickupInfo
{
public:
	struct FVector_NetQuantize                   CosmeticSpawnLoc;                                  // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E09[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCrabPickupDA*                         PickupDA;                                          // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCrabInventoryInfo                    InventoryInfo;                                     // 0x18(0x20)(Edit, NativeAccessSpecifierPublic)
	uint8                                        MaxPickups;                                        // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrabCurrencyType                 CurrencyType;                                      // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E0A[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Cost;                                              // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SalvageReward;                                     // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E0B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACrabPS*                               OwningPS;                                          // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowLocationUI;                                   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAutoLootPickup;                                 // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E0D[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CrabChampions.CrabProjectileInfo
struct FCrabProjectileInfo
{
public:
	class UCrabProjectileDA*                     ProjectileDA;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                Dir;                                               // 0x8(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E0E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACrabC*                                OwningC;                                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrabLesserProjectileType         LesserProjectileType;                              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E0F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ActorToMoveIgnore;                                 // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CrabChampions.CrabDebuffState
struct FCrabDebuffState
{
public:
	int32                                        ConfusionStack;                                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WeakStack;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlowStack;                                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IceStack;                                          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FireStack;                                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LightningStack;                                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PoisonStack;                                       // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArcaneStack;                                       // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CrabChampions.CrabDebuff
struct FCrabDebuff
{
public:
	enum class ECrabDebuffType                   DebuffType;                                        // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E10[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DebuffStack;                                       // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct CrabChampions.CrabDamageInfo
struct FCrabDamageInfo
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCrit;                                             // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDOT;                                              // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECrabDamageType                   CrabDamageType;                                    // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E11[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCrabDebuff>                   Debuffs;                                           // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   DamageLoc;                                         // 0x20(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        KnockbackStrength;                                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACrabC*                                DamagingC;                                         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct CrabChampions.CrabExplosionFX
struct FCrabExplosionFX
{
public:
	struct FVector                               Loc;                                               // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ImpactNormal;                                      // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E13[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        FX;                                                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Tint;                                              // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             Sound;                                             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShakeBase>          CameraShake;                                       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct CrabChampions.CrabVideoSettings
struct FCrabVideoSettings
{
public:
	class FString                                DisplayMode;                                       // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Resolution;                                        // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ResolutionQuality;                                 // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FPSLimit;                                          // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VSync;                                             // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldOfView;                                       // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GraphicsQuality;                                   // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WeaponEffects;                                     // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AntiAliasingType;                                  // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Sharpening;                                        // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MotionBlur;                                        // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CameraShake;                                       // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Hitmarkers;                                        // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DamageNumbers;                                     // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TextChatVisibility;                                // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ShowFPS;                                           // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PauseWhenLosingFocus;                              // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct CrabChampions.CrabKeyBind
struct FCrabKeyBind
{
public:
	class FName                                  MappingName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KeyBindTitle;                                      // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAxisMapping;                                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E15[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  KeyboardKey;                                       // 0x20(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KeyboardKeyFriendlyName;                           // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  ControllerKey;                                     // 0x48(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            ControllerIcon;                                    // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeRemapped;                                    // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E16[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// ScriptStruct CrabChampions.CrabProjectileModInfo
struct FCrabProjectileModInfo
{
public:
	float                                        DamageMultiplier;                                  // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlatDamageBonus;                                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LifetimeMultiplier;                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SizeMultiplier;                                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedMultiplier;                                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccelerationBonus;                                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityMultiplier;                                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HomingMultiplier;                                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumBounces;                                        // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CrabChampions.CrabWeaponInfo
struct FCrabWeaponInfo
{
public:
	class UCrabWeaponDA*                         WeaponDA;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACrabC*                                OwningC;                                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDualWieldWeapon;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E17[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct CrabChampions.CrabLightingPreset
struct FCrabLightingPreset
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E18[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    SkydomeMI;                                         // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkydomeRotation;                                   // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DLHeight;                                          // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DLRotation;                                        // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DLIntensity;                                       // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DLTint;                                            // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SLIntensity;                                       // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SLTint;                                            // 0x34(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SLHemisphereTint;                                  // 0x44(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SLMinOcclusion;                                    // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                SLOcclusionTint;                                   // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PPTemperature;                                     // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HFDensity;                                         // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HFHeightFalloff;                                   // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          HFTint;                                            // 0x68(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HFStartDistance;                                   // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E19[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    OceanMI;                                           // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          UnderwaterPPTint;                                  // 0x88(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCrabBiomeDA*                          BiomeDA;                                           // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


