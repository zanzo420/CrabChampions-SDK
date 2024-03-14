#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CrabChampions.CrabActionDA
// (None)

class UClass* UCrabActionDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabActionDA");

	return Clss;
}


// CrabActionDA CrabChampions.Default__CrabActionDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabActionDA* UCrabActionDA::GetDefaultObj()
{
	static class UCrabActionDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabActionDA*>(UCrabActionDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabAOEActionDA
// (None)

class UClass* UCrabAOEActionDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabAOEActionDA");

	return Clss;
}


// CrabAOEActionDA CrabChampions.Default__CrabAOEActionDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabAOEActionDA* UCrabAOEActionDA::GetDefaultObj()
{
	static class UCrabAOEActionDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabAOEActionDA*>(UCrabAOEActionDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabLaunchActionDA
// (None)

class UClass* UCrabLaunchActionDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabLaunchActionDA");

	return Clss;
}


// CrabLaunchActionDA CrabChampions.Default__CrabLaunchActionDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabLaunchActionDA* UCrabLaunchActionDA::GetDefaultObj()
{
	static class UCrabLaunchActionDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabLaunchActionDA*>(UCrabLaunchActionDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabSpawnActionDA
// (None)

class UClass* UCrabSpawnActionDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabSpawnActionDA");

	return Clss;
}


// CrabSpawnActionDA CrabChampions.Default__CrabSpawnActionDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabSpawnActionDA* UCrabSpawnActionDA::GetDefaultObj()
{
	static class UCrabSpawnActionDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabSpawnActionDA*>(UCrabSpawnActionDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabProximityExplodeActionDA
// (None)

class UClass* UCrabProximityExplodeActionDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabProximityExplodeActionDA");

	return Clss;
}


// CrabProximityExplodeActionDA CrabChampions.Default__CrabProximityExplodeActionDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabProximityExplodeActionDA* UCrabProximityExplodeActionDA::GetDefaultObj()
{
	static class UCrabProximityExplodeActionDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabProximityExplodeActionDA*>(UCrabProximityExplodeActionDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabStrikeActionDA
// (None)

class UClass* UCrabStrikeActionDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabStrikeActionDA");

	return Clss;
}


// CrabStrikeActionDA CrabChampions.Default__CrabStrikeActionDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabStrikeActionDA* UCrabStrikeActionDA::GetDefaultObj()
{
	static class UCrabStrikeActionDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabStrikeActionDA*>(UCrabStrikeActionDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabAnimInstance
// (None)

class UClass* UCrabAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabAnimInstance");

	return Clss;
}


// CrabAnimInstance CrabChampions.Default__CrabAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabAnimInstance* UCrabAnimInstance::GetDefaultObj()
{
	static class UCrabAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabAnimInstance*>(UCrabAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabAOEDA
// (None)

class UClass* UCrabAOEDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabAOEDA");

	return Clss;
}


// CrabAOEDA CrabChampions.Default__CrabAOEDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabAOEDA* UCrabAOEDA::GetDefaultObj()
{
	static class UCrabAOEDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabAOEDA*>(UCrabAOEDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabBiomeDA
// (None)

class UClass* UCrabBiomeDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabBiomeDA");

	return Clss;
}


// CrabBiomeDA CrabChampions.Default__CrabBiomeDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabBiomeDA* UCrabBiomeDA::GetDefaultObj()
{
	static class UCrabBiomeDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabBiomeDA*>(UCrabBiomeDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabC
// (Actor, Pawn)

class UClass* ACrabC::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabC");

	return Clss;
}


// CrabC CrabChampions.Default__CrabC
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabC* ACrabC::GetDefaultObj()
{
	static class ACrabC* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabC*>(ACrabC::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabC.ServerSpawnCosmeticProjectile
// (Net, Native, Event, Public, NetServer)
// Parameters:
// struct FCrabProjectileInfo         ProjectileInfo                                                   (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class AActor*                      ProjectileOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize         StartLoc                                                         (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bExplodeInstantly                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabC::ServerSpawnCosmeticProjectile(struct FCrabProjectileInfo& ProjectileInfo, class AActor* ProjectileOwner, struct FVector_NetQuantize& StartLoc, bool bExplodeInstantly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabC", "ServerSpawnCosmeticProjectile");

	Params::ACrabC_ServerSpawnCosmeticProjectile_Params Parms{};

	Parms.ProjectileInfo = ProjectileInfo;
	Parms.ProjectileOwner = ProjectileOwner;
	Parms.StartLoc = StartLoc;
	Parms.bExplodeInstantly = bExplodeInstantly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabC.ServerOnOutOfBounds
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void ACrabC::ServerOnOutOfBounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabC", "ServerOnOutOfBounds");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabC.ServerDealDamage
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// TArray<struct FCrabDamageInfo>     DamageInfoArray                                                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ACrabC::ServerDealDamage(TArray<struct FCrabDamageInfo>& DamageInfoArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabC", "ServerDealDamage");

	Params::ACrabC_ServerDealDamage_Params Parms{};

	Parms.DamageInfoArray = DamageInfoArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabC.ServerClientAuthoritativeMove
// (Net, Native, Event, Public, NetServer)
// Parameters:
// struct FClientAuthoritativeMoveDataMoveData                                                         (ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ACrabC::ServerClientAuthoritativeMove(struct FClientAuthoritativeMoveData& MoveData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabC", "ServerClientAuthoritativeMove");

	Params::ACrabC_ServerClientAuthoritativeMove_Params Parms{};

	Parms.MoveData = MoveData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabC.OnRep_IsInvulnerable
// (Final, Native, Protected)
// Parameters:

void ACrabC::OnRep_IsInvulnerable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabC", "OnRep_IsInvulnerable");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabC.OnRep_IsEliminated
// (Final, Native, Protected)
// Parameters:

void ACrabC::OnRep_IsEliminated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabC", "OnRep_IsEliminated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabC.OnRep_DebuffState
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FCrabDebuffState            PreviousDebuffState                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ACrabC::OnRep_DebuffState(struct FCrabDebuffState& PreviousDebuffState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabC", "OnRep_DebuffState");

	Params::ACrabC_OnRep_DebuffState_Params Parms{};

	Parms.PreviousDebuffState = PreviousDebuffState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabC.OnRep_ChainedToC
// (Final, Native, Protected)
// Parameters:

void ACrabC::OnRep_ChainedToC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabC", "OnRep_ChainedToC");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabC.ClientKnockback
// (Net, Native, Event, Public, NetClient)
// Parameters:
// struct FVector_NetQuantizeNormal   Dir                                                              (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Strength                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabC::ClientKnockback(struct FVector_NetQuantizeNormal& Dir, float Strength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabC", "ClientKnockback");

	Params::ACrabC_ClientKnockback_Params Parms{};

	Parms.Dir = Dir;
	Parms.Strength = Strength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabEnemyC
// (Actor, Pawn)

class UClass* ACrabEnemyC::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabEnemyC");

	return Clss;
}


// CrabEnemyC CrabChampions.Default__CrabEnemyC
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabEnemyC* ACrabEnemyC::GetDefaultObj()
{
	static class ACrabEnemyC* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabEnemyC*>(ACrabEnemyC::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabEnemyC.OnRep_IsShielded
// (Final, Native, Protected)
// Parameters:

void ACrabEnemyC::OnRep_IsShielded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabEnemyC", "OnRep_IsShielded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabEnemyC.OnRep_EnemyBuff
// (Final, Native, Protected)
// Parameters:

void ACrabEnemyC::OnRep_EnemyBuff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabEnemyC", "OnRep_EnemyBuff");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabEnemyC.OnRep_CurrentActionIndex
// (Final, Native, Protected)
// Parameters:

void ACrabEnemyC::OnRep_CurrentActionIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabEnemyC", "OnRep_CurrentActionIndex");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabEnemyC.MulticastSpawnShrapnelProjectiles
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:

void ACrabEnemyC::MulticastSpawnShrapnelProjectiles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabEnemyC", "MulticastSpawnShrapnelProjectiles");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabEnemyC.MulticastSpawnMirroredProjectile
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// class ACrabC*                      DamagingC                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabEnemyC::MulticastSpawnMirroredProjectile(class ACrabC* DamagingC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabEnemyC", "MulticastSpawnMirroredProjectile");

	Params::ACrabEnemyC_MulticastSpawnMirroredProjectile_Params Parms{};

	Parms.DamagingC = DamagingC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabEnemyC.MulticastSpawnHomingThornProjectiles
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:

void ACrabEnemyC::MulticastSpawnHomingThornProjectiles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabEnemyC", "MulticastSpawnHomingThornProjectiles");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabEnemyC.MulticastShowHealthBar
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:

void ACrabEnemyC::MulticastShowHealthBar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabEnemyC", "MulticastShowHealthBar");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabBossC
// (Actor, Pawn)

class UClass* ACrabBossC::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabBossC");

	return Clss;
}


// CrabBossC CrabChampions.Default__CrabBossC
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabBossC* ACrabBossC::GetDefaultObj()
{
	static class ACrabBossC* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabBossC*>(ACrabBossC::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabTargetDummyC
// (Actor, Pawn)

class UClass* ACrabTargetDummyC::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabTargetDummyC");

	return Clss;
}


// CrabTargetDummyC CrabChampions.Default__CrabTargetDummyC
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabTargetDummyC* ACrabTargetDummyC::GetDefaultObj()
{
	static class ACrabTargetDummyC* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabTargetDummyC*>(ACrabTargetDummyC::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabTargetDummyC.OnRep_DPS
// (Final, Native, Protected)
// Parameters:

void ACrabTargetDummyC::OnRep_DPS()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabTargetDummyC", "OnRep_DPS");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabCheckpoint
// (Actor)

class UClass* ACrabCheckpoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabCheckpoint");

	return Clss;
}


// CrabCheckpoint CrabChampions.Default__CrabCheckpoint
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabCheckpoint* ACrabCheckpoint::GetDefaultObj()
{
	static class ACrabCheckpoint* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabCheckpoint*>(ACrabCheckpoint::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabCosmeticC
// (Actor)

class UClass* ACrabCosmeticC::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabCosmeticC");

	return Clss;
}


// CrabCosmeticC CrabChampions.Default__CrabCosmeticC
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabCosmeticC* ACrabCosmeticC::GetDefaultObj()
{
	static class ACrabCosmeticC* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabCosmeticC*>(ACrabCosmeticC::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabCosmeticsDA
// (None)

class UClass* UCrabCosmeticsDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabCosmeticsDA");

	return Clss;
}


// CrabCosmeticsDA CrabChampions.Default__CrabCosmeticsDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabCosmeticsDA* UCrabCosmeticsDA::GetDefaultObj()
{
	static class UCrabCosmeticsDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabCosmeticsDA*>(UCrabCosmeticsDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabDamageTextUI
// (None)

class UClass* UCrabDamageTextUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabDamageTextUI");

	return Clss;
}


// CrabDamageTextUI CrabChampions.Default__CrabDamageTextUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabDamageTextUI* UCrabDamageTextUI::GetDefaultObj()
{
	static class UCrabDamageTextUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabDamageTextUI*>(UCrabDamageTextUI::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabEnemyAIC
// (Actor)

class UClass* ACrabEnemyAIC::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabEnemyAIC");

	return Clss;
}


// CrabEnemyAIC CrabChampions.Default__CrabEnemyAIC
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabEnemyAIC* ACrabEnemyAIC::GetDefaultObj()
{
	static class ACrabEnemyAIC* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabEnemyAIC*>(ACrabEnemyAIC::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabEnemyAIC.OnReceiveMoveCompleted
// (Final, Native, Protected)
// Parameters:
// struct FAIRequestID                RequestID                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPathFollowingResult    Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabEnemyAIC::OnReceiveMoveCompleted(const struct FAIRequestID& RequestID, enum class EPathFollowingResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabEnemyAIC", "OnReceiveMoveCompleted");

	Params::ACrabEnemyAIC_OnReceiveMoveCompleted_Params Parms{};

	Parms.RequestID = RequestID;
	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabDamageArea
// (Actor)

class UClass* ACrabDamageArea::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabDamageArea");

	return Clss;
}


// CrabDamageArea CrabChampions.Default__CrabDamageArea
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabDamageArea* ACrabDamageArea::GetDefaultObj()
{
	static class ACrabDamageArea* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabDamageArea*>(ACrabDamageArea::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabDamageArea.OnRep_Radius
// (Final, Native, Protected)
// Parameters:

void ACrabDamageArea::OnRep_Radius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabDamageArea", "OnRep_Radius");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabEnemyEQC
// (None)

class UClass* UCrabEnemyEQC::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabEnemyEQC");

	return Clss;
}


// CrabEnemyEQC CrabChampions.Default__CrabEnemyEQC
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabEnemyEQC* UCrabEnemyEQC::GetDefaultObj()
{
	static class UCrabEnemyEQC* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabEnemyEQC*>(UCrabEnemyEQC::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabPlayerC
// (Actor, Pawn)

class UClass* ACrabPlayerC::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabPlayerC");

	return Clss;
}


// CrabPlayerC CrabChampions.Default__CrabPlayerC
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabPlayerC* ACrabPlayerC::GetDefaultObj()
{
	static class ACrabPlayerC* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabPlayerC*>(ACrabPlayerC::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabPlayerC.ServerThrowGrenade
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:

void ACrabPlayerC::ServerThrowGrenade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "ServerThrowGrenade");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.ServerStopSlide
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:

void ACrabPlayerC::ServerStopSlide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "ServerStopSlide");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.ServerStopAim
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:

void ACrabPlayerC::ServerStopAim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "ServerStopAim");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.ServerStartSlide
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:

void ACrabPlayerC::ServerStartSlide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "ServerStartSlide");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.ServerStartAim
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:

void ACrabPlayerC::ServerStartAim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "ServerStartAim");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.ServerSalvage
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// class ACrabInteractPickup*         PickupToSalvage                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPlayerC::ServerSalvage(class ACrabInteractPickup* PickupToSalvage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "ServerSalvage");

	Params::ACrabPlayerC_ServerSalvage_Params Parms{};

	Parms.PickupToSalvage = PickupToSalvage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.ServerPing
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// struct FVector_NetQuantize         InPingLoc                                                        (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPlayerC::ServerPing(struct FVector_NetQuantize& InPingLoc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "ServerPing");

	Params::ACrabPlayerC_ServerPing_Params Parms{};

	Parms.InPingLoc = InPingLoc;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.ServerMelee
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:

void ACrabPlayerC::ServerMelee()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "ServerMelee");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.ServerInteract
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// class ACrabInteractable*           ActorToInteractWith                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPlayerC::ServerInteract(class ACrabInteractable* ActorToInteractWith)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "ServerInteract");

	Params::ACrabPlayerC_ServerInteract_Params Parms{};

	Parms.ActorToInteractWith = ActorToInteractWith;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.ServerFlip
// (Net, Native, Event, Protected, NetServer)
// Parameters:
// enum class ECrabInputDir           FlipDir                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPlayerC::ServerFlip(enum class ECrabInputDir FlipDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "ServerFlip");

	Params::ACrabPlayerC_ServerFlip_Params Parms{};

	Parms.FlipDir = FlipDir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.ServerDropPickup
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UCrabPickupDA*               PickupDA                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCrabInventoryInfo          InventoryInfo                                                    (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void ACrabPlayerC::ServerDropPickup(class UCrabPickupDA* PickupDA, struct FCrabInventoryInfo& InventoryInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "ServerDropPickup");

	Params::ACrabPlayerC_ServerDropPickup_Params Parms{};

	Parms.PickupDA = PickupDA;
	Parms.InventoryInfo = InventoryInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.ServerDealFallDamage
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:

void ACrabPlayerC::ServerDealFallDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "ServerDealFallDamage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.ServerDash
// (Net, Native, Event, Protected, NetServer)
// Parameters:
// enum class ECrabInputDir           DashDir                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPlayerC::ServerDash(enum class ECrabInputDir DashDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "ServerDash");

	Params::ACrabPlayerC_ServerDash_Params Parms{};

	Parms.DashDir = DashDir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.ServerAutoLoot
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:

void ACrabPlayerC::ServerAutoLoot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "ServerAutoLoot");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.OnRep_SlideDamageIteration
// (Final, Native, Protected)
// Parameters:

void ACrabPlayerC::OnRep_SlideDamageIteration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "OnRep_SlideDamageIteration");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.OnRep_PingLoc
// (Final, Native, Protected)
// Parameters:
// struct FVector_NetQuantize         PreviousPingLoc                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPlayerC::OnRep_PingLoc(const struct FVector_NetQuantize& PreviousPingLoc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "OnRep_PingLoc");

	Params::ACrabPlayerC_OnRep_PingLoc_Params Parms{};

	Parms.PreviousPingLoc = PreviousPingLoc;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.OnRep_MeleeDA
// (Final, Native, Protected)
// Parameters:

void ACrabPlayerC::OnRep_MeleeDA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "OnRep_MeleeDA");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.OnRep_IsSliding
// (Final, Native, Protected)
// Parameters:

void ACrabPlayerC::OnRep_IsSliding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "OnRep_IsSliding");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.OnRep_IsBananaActive
// (Final, Native, Protected)
// Parameters:

void ACrabPlayerC::OnRep_IsBananaActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "OnRep_IsBananaActive");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.OnRep_IsAiming
// (Final, Native, Protected)
// Parameters:

void ACrabPlayerC::OnRep_IsAiming()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "OnRep_IsAiming");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.OnRep_CurrentTriggeredPerk
// (Final, Native, Protected)
// Parameters:

void ACrabPlayerC::OnRep_CurrentTriggeredPerk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "OnRep_CurrentTriggeredPerk");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.OnRep_CrabSkin
// (Final, Native, Protected)
// Parameters:

void ACrabPlayerC::OnRep_CrabSkin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "OnRep_CrabSkin");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.OnRep_AbilityDA
// (Final, Native, Protected)
// Parameters:

void ACrabPlayerC::OnRep_AbilityDA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "OnRep_AbilityDA");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.MulticastThrowGrenade
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:

void ACrabPlayerC::MulticastThrowGrenade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "MulticastThrowGrenade");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.MulticastMelee
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:

void ACrabPlayerC::MulticastMelee()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "MulticastMelee");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.MulticastInteract
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:

void ACrabPlayerC::MulticastInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "MulticastInteract");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.MulticastHideStalePing
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:

void ACrabPlayerC::MulticastHideStalePing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "MulticastHideStalePing");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.MulticastFlip
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// enum class ECrabInputDir           FlipDir                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPlayerC::MulticastFlip(enum class ECrabInputDir FlipDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "MulticastFlip");

	Params::ACrabPlayerC_MulticastFlip_Params Parms{};

	Parms.FlipDir = FlipDir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.MulticastDash
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// enum class ECrabInputDir           DashDir                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPlayerC::MulticastDash(enum class ECrabInputDir DashDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "MulticastDash");

	Params::ACrabPlayerC_MulticastDash_Params Parms{};

	Parms.DashDir = DashDir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.ClientTeleport
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FVector_NetQuantize         Loc                                                              (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Yaw                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPlayerC::ClientTeleport(struct FVector_NetQuantize& Loc, float Yaw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "ClientTeleport");

	Params::ACrabPlayerC_ClientTeleport_Params Parms{};

	Parms.Loc = Loc;
	Parms.Yaw = Yaw;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.ClientPrePortal
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// class ACrabPortal*                 Portal                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPlayerC::ClientPrePortal(class ACrabPortal* Portal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "ClientPrePortal");

	Params::ACrabPlayerC_ClientPrePortal_Params Parms{};

	Parms.Portal = Portal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.ClientPostPortal
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:

void ACrabPlayerC::ClientPostPortal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "ClientPostPortal");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.ClientOnTriggeredRingOfDestruction
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void ACrabPlayerC::ClientOnTriggeredRingOfDestruction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "ClientOnTriggeredRingOfDestruction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPlayerC.ClientDashBlockedDamage
// (Net, Native, Event, Protected, NetClient)
// Parameters:

void ACrabPlayerC::ClientDashBlockedDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerC", "ClientDashBlockedDamage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabDestructible
// (Actor)

class UClass* ACrabDestructible::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabDestructible");

	return Clss;
}


// CrabDestructible CrabChampions.Default__CrabDestructible
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabDestructible* ACrabDestructible::GetDefaultObj()
{
	static class ACrabDestructible* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabDestructible*>(ACrabDestructible::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabDestructible.OnRep_ScaleMultiplier
// (Final, Native, Protected)
// Parameters:

void ACrabDestructible::OnRep_ScaleMultiplier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabDestructible", "OnRep_ScaleMultiplier");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabDestructible.OnRep_IsProximityExplosionTriggered
// (Final, Native, Protected)
// Parameters:

void ACrabDestructible::OnRep_IsProximityExplosionTriggered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabDestructible", "OnRep_IsProximityExplosionTriggered");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabDestructible.MulticastExplode
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// class ACrabC*                      ExplodingC                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabDestructible::MulticastExplode(class ACrabC* ExplodingC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabDestructible", "MulticastExplode");

	Params::ACrabDestructible_MulticastExplode_Params Parms{};

	Parms.ExplodingC = ExplodingC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabDestructible.MulticastAddLeak
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FVector_NetQuantize         DamageLoc                                                        (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabDestructible::MulticastAddLeak(struct FVector_NetQuantize& DamageLoc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabDestructible", "MulticastAddLeak");

	Params::ACrabDestructible_MulticastAddLeak_Params Parms{};

	Parms.DamageLoc = DamageLoc;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabHarvestArea
// (Actor)

class UClass* ACrabHarvestArea::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabHarvestArea");

	return Clss;
}


// CrabHarvestArea CrabChampions.Default__CrabHarvestArea
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabHarvestArea* ACrabHarvestArea::GetDefaultObj()
{
	static class ACrabHarvestArea* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabHarvestArea*>(ACrabHarvestArea::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabHarvestArea.MulticastOnHarvestAreaCleared
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:

void ACrabHarvestArea::MulticastOnHarvestAreaCleared()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabHarvestArea", "MulticastOnHarvestAreaCleared");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabHarvestArea.MulticastOnCountdownDecremented
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:

void ACrabHarvestArea::MulticastOnCountdownDecremented()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabHarvestArea", "MulticastOnCountdownDecremented");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabInteractable
// (Actor)

class UClass* ACrabInteractable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabInteractable");

	return Clss;
}


// CrabInteractable CrabChampions.Default__CrabInteractable
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabInteractable* ACrabInteractable::GetDefaultObj()
{
	static class ACrabInteractable* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabInteractable*>(ACrabInteractable::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabCrown
// (Actor)

class UClass* ACrabCrown::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabCrown");

	return Clss;
}


// CrabCrown CrabChampions.Default__CrabCrown
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabCrown* ACrabCrown::GetDefaultObj()
{
	static class ACrabCrown* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabCrown*>(ACrabCrown::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabInteractPickup
// (Actor)

class UClass* ACrabInteractPickup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabInteractPickup");

	return Clss;
}


// CrabInteractPickup CrabChampions.Default__CrabInteractPickup
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabInteractPickup* ACrabInteractPickup::GetDefaultObj()
{
	static class ACrabInteractPickup* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabInteractPickup*>(ACrabInteractPickup::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabInteractPickup.OnRep_PickupInfo
// (Final, Native, Protected)
// Parameters:

void ACrabInteractPickup::OnRep_PickupInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabInteractPickup", "OnRep_PickupInfo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabInteractPickup.OnRep_NumTimesPickedUp
// (Final, Native, Protected)
// Parameters:

void ACrabInteractPickup::OnRep_NumTimesPickedUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabInteractPickup", "OnRep_NumTimesPickedUp");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabInteractPickup.OnRep_IsPickupDeactivated
// (Final, Native, Protected)
// Parameters:

void ACrabInteractPickup::OnRep_IsPickupDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabInteractPickup", "OnRep_IsPickupDeactivated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabPortal
// (Actor)

class UClass* ACrabPortal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabPortal");

	return Clss;
}


// CrabPortal CrabChampions.Default__CrabPortal
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabPortal* ACrabPortal::GetDefaultObj()
{
	static class ACrabPortal* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabPortal*>(ACrabPortal::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabPortal.OnRep_PortalInfo
// (Final, Native, Protected)
// Parameters:

void ACrabPortal::OnRep_PortalInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPortal", "OnRep_PortalInfo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabChest
// (Actor)

class UClass* ACrabChest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabChest");

	return Clss;
}


// CrabChest CrabChampions.Default__CrabChest
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabChest* ACrabChest::GetDefaultObj()
{
	static class ACrabChest* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabChest*>(ACrabChest::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabChest.OnRep_OwningPS
// (Final, Native, Protected)
// Parameters:

void ACrabChest::OnRep_OwningPS()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabChest", "OnRep_OwningPS");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabChest.OnRep_IsChestOpened
// (Final, Native, Protected)
// Parameters:

void ACrabChest::OnRep_IsChestOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabChest", "OnRep_IsChestOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabLaunchPad
// (Actor)

class UClass* ACrabLaunchPad::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabLaunchPad");

	return Clss;
}


// CrabLaunchPad CrabChampions.Default__CrabLaunchPad
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabLaunchPad* ACrabLaunchPad::GetDefaultObj()
{
	static class ACrabLaunchPad* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabLaunchPad*>(ACrabLaunchPad::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabTotem
// (Actor)

class UClass* ACrabTotem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabTotem");

	return Clss;
}


// CrabTotem CrabChampions.Default__CrabTotem
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabTotem* ACrabTotem::GetDefaultObj()
{
	static class ACrabTotem* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabTotem*>(ACrabTotem::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabTotem.OnRep_NumDebuffs
// (Final, Native, Protected)
// Parameters:

void ACrabTotem::OnRep_NumDebuffs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabTotem", "OnRep_NumDebuffs");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabTotem.OnRep_NumBuffs
// (Final, Native, Protected)
// Parameters:

void ACrabTotem::OnRep_NumBuffs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabTotem", "OnRep_NumBuffs");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabTotem.OnRep_IsExploded
// (Final, Native, Protected)
// Parameters:

void ACrabTotem::OnRep_IsExploded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabTotem", "OnRep_IsExploded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabTotem.OnRep_Cost
// (Final, Native, Protected)
// Parameters:

void ACrabTotem::OnRep_Cost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabTotem", "OnRep_Cost");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabOverlapPickup
// (Actor)

class UClass* ACrabOverlapPickup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabOverlapPickup");

	return Clss;
}


// CrabOverlapPickup CrabChampions.Default__CrabOverlapPickup
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabOverlapPickup* ACrabOverlapPickup::GetDefaultObj()
{
	static class ACrabOverlapPickup* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabOverlapPickup*>(ACrabOverlapPickup::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabOverlapPickup.OnRep_PickedUpByC
// (Final, Native, Protected)
// Parameters:

void ACrabOverlapPickup::OnRep_PickedUpByC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabOverlapPickup", "OnRep_PickedUpByC");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabBananaPickup
// (Actor)

class UClass* ACrabBananaPickup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabBananaPickup");

	return Clss;
}


// CrabBananaPickup CrabChampions.Default__CrabBananaPickup
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabBananaPickup* ACrabBananaPickup::GetDefaultObj()
{
	static class ACrabBananaPickup* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabBananaPickup*>(ACrabBananaPickup::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabCrystalPickup
// (Actor)

class UClass* ACrabCrystalPickup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabCrystalPickup");

	return Clss;
}


// CrabCrystalPickup CrabChampions.Default__CrabCrystalPickup
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabCrystalPickup* ACrabCrystalPickup::GetDefaultObj()
{
	static class ACrabCrystalPickup* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabCrystalPickup*>(ACrabCrystalPickup::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabCrystalPickup.OnRep_CrystalsMultiplier
// (Final, Native, Protected)
// Parameters:

void ACrabCrystalPickup::OnRep_CrystalsMultiplier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabCrystalPickup", "OnRep_CrystalsMultiplier");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabHealthPickup
// (Actor)

class UClass* ACrabHealthPickup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabHealthPickup");

	return Clss;
}


// CrabHealthPickup CrabChampions.Default__CrabHealthPickup
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabHealthPickup* ACrabHealthPickup::GetDefaultObj()
{
	static class ACrabHealthPickup* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabHealthPickup*>(ACrabHealthPickup::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabHealthPickup.OnRep_HealthToGive
// (Final, Native, Protected)
// Parameters:

void ACrabHealthPickup::OnRep_HealthToGive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabHealthPickup", "OnRep_HealthToGive");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabPhysicsActor
// (Actor)

class UClass* ACrabPhysicsActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabPhysicsActor");

	return Clss;
}


// CrabPhysicsActor CrabChampions.Default__CrabPhysicsActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabPhysicsActor* ACrabPhysicsActor::GetDefaultObj()
{
	static class ACrabPhysicsActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabPhysicsActor*>(ACrabPhysicsActor::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabPhysicsActor.OnRep_IsExploded
// (Final, Native, Protected)
// Parameters:

void ACrabPhysicsActor::OnRep_IsExploded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPhysicsActor", "OnRep_IsExploded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabPickupDA
// (None)

class UClass* UCrabPickupDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabPickupDA");

	return Clss;
}


// CrabPickupDA CrabChampions.Default__CrabPickupDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabPickupDA* UCrabPickupDA::GetDefaultObj()
{
	static class UCrabPickupDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabPickupDA*>(UCrabPickupDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabUI
// (None)

class UClass* UCrabUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabUI");

	return Clss;
}


// CrabUI CrabChampions.Default__CrabUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabUI* UCrabUI::GetDefaultObj()
{
	static class UCrabUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabUI*>(UCrabUI::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabGameplayUI
// (None)

class UClass* UCrabGameplayUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabGameplayUI");

	return Clss;
}


// CrabGameplayUI CrabChampions.Default__CrabGameplayUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabGameplayUI* UCrabGameplayUI::GetDefaultObj()
{
	static class UCrabGameplayUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabGameplayUI*>(UCrabGameplayUI::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabAbilityDA
// (None)

class UClass* UCrabAbilityDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabAbilityDA");

	return Clss;
}


// CrabAbilityDA CrabChampions.Default__CrabAbilityDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabAbilityDA* UCrabAbilityDA::GetDefaultObj()
{
	static class UCrabAbilityDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabAbilityDA*>(UCrabAbilityDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabConsumableDA
// (None)

class UClass* UCrabConsumableDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabConsumableDA");

	return Clss;
}


// CrabConsumableDA CrabChampions.Default__CrabConsumableDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabConsumableDA* UCrabConsumableDA::GetDefaultObj()
{
	static class UCrabConsumableDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabConsumableDA*>(UCrabConsumableDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabInventoryDA
// (None)

class UClass* UCrabInventoryDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabInventoryDA");

	return Clss;
}


// CrabInventoryDA CrabChampions.Default__CrabInventoryDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabInventoryDA* UCrabInventoryDA::GetDefaultObj()
{
	static class UCrabInventoryDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabInventoryDA*>(UCrabInventoryDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabGrenadeModDA
// (None)

class UClass* UCrabGrenadeModDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabGrenadeModDA");

	return Clss;
}


// CrabGrenadeModDA CrabChampions.Default__CrabGrenadeModDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabGrenadeModDA* UCrabGrenadeModDA::GetDefaultObj()
{
	static class UCrabGrenadeModDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabGrenadeModDA*>(UCrabGrenadeModDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabPerkDA
// (None)

class UClass* UCrabPerkDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabPerkDA");

	return Clss;
}


// CrabPerkDA CrabChampions.Default__CrabPerkDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabPerkDA* UCrabPerkDA::GetDefaultObj()
{
	static class UCrabPerkDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabPerkDA*>(UCrabPerkDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabRelicDA
// (None)

class UClass* UCrabRelicDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabRelicDA");

	return Clss;
}


// CrabRelicDA CrabChampions.Default__CrabRelicDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabRelicDA* UCrabRelicDA::GetDefaultObj()
{
	static class UCrabRelicDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabRelicDA*>(UCrabRelicDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabWeaponModDA
// (None)

class UClass* UCrabWeaponModDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabWeaponModDA");

	return Clss;
}


// CrabWeaponModDA CrabChampions.Default__CrabWeaponModDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabWeaponModDA* UCrabWeaponModDA::GetDefaultObj()
{
	static class UCrabWeaponModDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabWeaponModDA*>(UCrabWeaponModDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabMeleeDA
// (None)

class UClass* UCrabMeleeDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabMeleeDA");

	return Clss;
}


// CrabMeleeDA CrabChampions.Default__CrabMeleeDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabMeleeDA* UCrabMeleeDA::GetDefaultObj()
{
	static class UCrabMeleeDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabMeleeDA*>(UCrabMeleeDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabProjectile
// (Actor)

class UClass* ACrabProjectile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabProjectile");

	return Clss;
}


// CrabProjectile CrabChampions.Default__CrabProjectile
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabProjectile* ACrabProjectile::GetDefaultObj()
{
	static class ACrabProjectile* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabProjectile*>(ACrabProjectile::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabWeaponDA
// (None)

class UClass* UCrabWeaponDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabWeaponDA");

	return Clss;
}


// CrabWeaponDA CrabChampions.Default__CrabWeaponDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabWeaponDA* UCrabWeaponDA::GetDefaultObj()
{
	static class UCrabWeaponDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabWeaponDA*>(UCrabWeaponDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabProjectileDA
// (None)

class UClass* UCrabProjectileDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabProjectileDA");

	return Clss;
}


// CrabProjectileDA CrabChampions.Default__CrabProjectileDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabProjectileDA* UCrabProjectileDA::GetDefaultObj()
{
	static class UCrabProjectileDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabProjectileDA*>(UCrabProjectileDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabSettingsSG
// (None)

class UClass* UCrabSettingsSG::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabSettingsSG");

	return Clss;
}


// CrabSettingsSG CrabChampions.Default__CrabSettingsSG
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabSettingsSG* UCrabSettingsSG::GetDefaultObj()
{
	static class UCrabSettingsSG* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabSettingsSG*>(UCrabSettingsSG::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabShopPedestal
// (Actor)

class UClass* ACrabShopPedestal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabShopPedestal");

	return Clss;
}


// CrabShopPedestal CrabChampions.Default__CrabShopPedestal
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabShopPedestal* ACrabShopPedestal::GetDefaultObj()
{
	static class ACrabShopPedestal* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabShopPedestal*>(ACrabShopPedestal::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabShopPedestal.MulticastInitPedestalInfo
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FCrabPedestalInfo           NewPedestalInfo                                                  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ACrabShopPedestal::MulticastInitPedestalInfo(struct FCrabPedestalInfo& NewPedestalInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabShopPedestal", "MulticastInitPedestalInfo");

	Params::ACrabShopPedestal_MulticastInitPedestalInfo_Params Parms{};

	Parms.NewPedestalInfo = NewPedestalInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabShopPedestal.MulticastHidePedestalWC
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:

void ACrabShopPedestal::MulticastHidePedestalWC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabShopPedestal", "MulticastHidePedestalWC");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabSpectatorC
// (Actor, Pawn)

class UClass* ACrabSpectatorC::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabSpectatorC");

	return Clss;
}


// CrabSpectatorC CrabChampions.Default__CrabSpectatorC
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabSpectatorC* ACrabSpectatorC::GetDefaultObj()
{
	static class ACrabSpectatorC* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabSpectatorC*>(ACrabSpectatorC::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabSpectatorC.ClientInitSpectatorC
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class ACrabPlayerC*                EliminatedPlayerToSpectate                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabSpectatorC::ClientInitSpectatorC(class ACrabPlayerC* EliminatedPlayerToSpectate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabSpectatorC", "ClientInitSpectatorC");

	Params::ACrabSpectatorC_ClientInitSpectatorC_Params Parms{};

	Parms.EliminatedPlayerToSpectate = EliminatedPlayerToSpectate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabSpawnPoint
// (Actor)

class UClass* ACrabSpawnPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabSpawnPoint");

	return Clss;
}


// CrabSpawnPoint CrabChampions.Default__CrabSpawnPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabSpawnPoint* ACrabSpawnPoint::GetDefaultObj()
{
	static class ACrabSpawnPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabSpawnPoint*>(ACrabSpawnPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabStatics
// (None)

class UClass* UCrabStatics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabStatics");

	return Clss;
}


// CrabStatics CrabChampions.Default__CrabStatics
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabStatics* UCrabStatics::GetDefaultObj()
{
	static class UCrabStatics* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabStatics*>(UCrabStatics::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabStatsPedestal
// (Actor)

class UClass* ACrabStatsPedestal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabStatsPedestal");

	return Clss;
}


// CrabStatsPedestal CrabChampions.Default__CrabStatsPedestal
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabStatsPedestal* ACrabStatsPedestal::GetDefaultObj()
{
	static class ACrabStatsPedestal* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabStatsPedestal*>(ACrabStatsPedestal::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabStatsPedestal.OnRep_LobbyStats
// (Final, Native, Protected)
// Parameters:

void ACrabStatsPedestal::OnRep_LobbyStats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabStatsPedestal", "OnRep_LobbyStats");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabStrike
// (Actor)

class UClass* ACrabStrike::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabStrike");

	return Clss;
}


// CrabStrike CrabChampions.Default__CrabStrike
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabStrike* ACrabStrike::GetDefaultObj()
{
	static class ACrabStrike* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabStrike*>(ACrabStrike::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabChatEntryRowUI
// (None)

class UClass* UCrabChatEntryRowUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabChatEntryRowUI");

	return Clss;
}


// CrabChatEntryRowUI CrabChampions.Default__CrabChatEntryRowUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabChatEntryRowUI* UCrabChatEntryRowUI::GetDefaultObj()
{
	static class UCrabChatEntryRowUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabChatEntryRowUI*>(UCrabChatEntryRowUI::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabTurret
// (Actor)

class UClass* ACrabTurret::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabTurret");

	return Clss;
}


// CrabTurret CrabChampions.Default__CrabTurret
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabTurret* ACrabTurret::GetDefaultObj()
{
	static class ACrabTurret* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabTurret*>(ACrabTurret::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabTurret.OnRep_OwningC
// (Final, Native, Protected)
// Parameters:

void ACrabTurret::OnRep_OwningC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabTurret", "OnRep_OwningC");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabTurret.OnRep_IsExploded
// (Final, Native, Protected)
// Parameters:

void ACrabTurret::OnRep_IsExploded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabTurret", "OnRep_IsExploded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabCosmeticSlotUI
// (None)

class UClass* UCrabCosmeticSlotUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabCosmeticSlotUI");

	return Clss;
}


// CrabCosmeticSlotUI CrabChampions.Default__CrabCosmeticSlotUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabCosmeticSlotUI* UCrabCosmeticSlotUI::GetDefaultObj()
{
	static class UCrabCosmeticSlotUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabCosmeticSlotUI*>(UCrabCosmeticSlotUI::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabCosmeticSlotUI.OnPressedSlotButton
// (Final, Native, Protected)
// Parameters:

void UCrabCosmeticSlotUI::OnPressedSlotButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabCosmeticSlotUI", "OnPressedSlotButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabCosmeticSlotUI.OnHoveredSlotButton
// (Final, Native, Protected)
// Parameters:

void UCrabCosmeticSlotUI::OnHoveredSlotButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabCosmeticSlotUI", "OnHoveredSlotButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabControlsMenuUI
// (None)

class UClass* UCrabControlsMenuUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabControlsMenuUI");

	return Clss;
}


// CrabControlsMenuUI CrabChampions.Default__CrabControlsMenuUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabControlsMenuUI* UCrabControlsMenuUI::GetDefaultObj()
{
	static class UCrabControlsMenuUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabControlsMenuUI*>(UCrabControlsMenuUI::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabCrosshairUI
// (None)

class UClass* UCrabCrosshairUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabCrosshairUI");

	return Clss;
}


// CrabCrosshairUI CrabChampions.Default__CrabCrosshairUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabCrosshairUI* UCrabCrosshairUI::GetDefaultObj()
{
	static class UCrabCrosshairUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabCrosshairUI*>(UCrabCrosshairUI::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabDifficultyModifierUI
// (None)

class UClass* UCrabDifficultyModifierUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabDifficultyModifierUI");

	return Clss;
}


// CrabDifficultyModifierUI CrabChampions.Default__CrabDifficultyModifierUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabDifficultyModifierUI* UCrabDifficultyModifierUI::GetDefaultObj()
{
	static class UCrabDifficultyModifierUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabDifficultyModifierUI*>(UCrabDifficultyModifierUI::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabDifficultyModifierUI.OnPressedDifficultyModifierButton
// (Final, Native, Protected)
// Parameters:

void UCrabDifficultyModifierUI::OnPressedDifficultyModifierButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabDifficultyModifierUI", "OnPressedDifficultyModifierButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabDifficultyModifierUI.OnHoveredDifficultyModifierButton
// (Final, Native, Protected)
// Parameters:

void UCrabDifficultyModifierUI::OnHoveredDifficultyModifierButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabDifficultyModifierUI", "OnHoveredDifficultyModifierButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabFocusMenuUI
// (None)

class UClass* UCrabFocusMenuUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabFocusMenuUI");

	return Clss;
}


// CrabFocusMenuUI CrabChampions.Default__CrabFocusMenuUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabFocusMenuUI* UCrabFocusMenuUI::GetDefaultObj()
{
	static class UCrabFocusMenuUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabFocusMenuUI*>(UCrabFocusMenuUI::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabFocusMenuUI.OnPressedResetFocusButton
// (Final, Native, Protected)
// Parameters:

void UCrabFocusMenuUI::OnPressedResetFocusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabFocusMenuUI", "OnPressedResetFocusButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabFocusMenuUI.OnPressedBackButton
// (Final, Native, Protected)
// Parameters:

void UCrabFocusMenuUI::OnPressedBackButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabFocusMenuUI", "OnPressedBackButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabFocusMenuUI.OnPressedActionButton
// (Final, Native, Protected)
// Parameters:

void UCrabFocusMenuUI::OnPressedActionButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabFocusMenuUI", "OnPressedActionButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabConfirmationPromptUI
// (None)

class UClass* UCrabConfirmationPromptUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabConfirmationPromptUI");

	return Clss;
}


// CrabConfirmationPromptUI CrabChampions.Default__CrabConfirmationPromptUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabConfirmationPromptUI* UCrabConfirmationPromptUI::GetDefaultObj()
{
	static class UCrabConfirmationPromptUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabConfirmationPromptUI*>(UCrabConfirmationPromptUI::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabConfirmationPromptUI.OnPressedYesButton
// (Final, Native, Protected)
// Parameters:

void UCrabConfirmationPromptUI::OnPressedYesButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabConfirmationPromptUI", "OnPressedYesButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabConfirmationPromptUI.OnPressedNoButton
// (Final, Native, Protected)
// Parameters:

void UCrabConfirmationPromptUI::OnPressedNoButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabConfirmationPromptUI", "OnPressedNoButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabConfirmationPromptUI.OnHoveredYesButton
// (Final, Native, Protected)
// Parameters:

void UCrabConfirmationPromptUI::OnHoveredYesButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabConfirmationPromptUI", "OnHoveredYesButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabConfirmationPromptUI.OnHoveredNoButton
// (Final, Native, Protected)
// Parameters:

void UCrabConfirmationPromptUI::OnHoveredNoButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabConfirmationPromptUI", "OnHoveredNoButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabGameOverUI
// (None)

class UClass* UCrabGameOverUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabGameOverUI");

	return Clss;
}


// CrabGameOverUI CrabChampions.Default__CrabGameOverUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabGameOverUI* UCrabGameOverUI::GetDefaultObj()
{
	static class UCrabGameOverUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabGameOverUI*>(UCrabGameOverUI::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabInGameMenuUI
// (None)

class UClass* UCrabInGameMenuUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabInGameMenuUI");

	return Clss;
}


// CrabInGameMenuUI CrabChampions.Default__CrabInGameMenuUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabInGameMenuUI* UCrabInGameMenuUI::GetDefaultObj()
{
	static class UCrabInGameMenuUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabInGameMenuUI*>(UCrabInGameMenuUI::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabInGameMenuUI.OnPressedSettingsButton
// (Final, Native, Protected)
// Parameters:

void UCrabInGameMenuUI::OnPressedSettingsButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabInGameMenuUI", "OnPressedSettingsButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabInGameMenuUI.OnPressedResumeButton
// (Final, Native, Protected)
// Parameters:

void UCrabInGameMenuUI::OnPressedResumeButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabInGameMenuUI", "OnPressedResumeButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabInGameMenuUI.OnPressedQuitToLobbyButton
// (Final, Native, Protected)
// Parameters:

void UCrabInGameMenuUI::OnPressedQuitToLobbyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabInGameMenuUI", "OnPressedQuitToLobbyButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabInGameMenuUI.OnPressedQuitToDesktopButton
// (Final, Native, Protected)
// Parameters:

void UCrabInGameMenuUI::OnPressedQuitToDesktopButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabInGameMenuUI", "OnPressedQuitToDesktopButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabInGameMenuUI.OnPressedQuickRestartButton
// (Final, Native, Protected)
// Parameters:

void UCrabInGameMenuUI::OnPressedQuickRestartButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabInGameMenuUI", "OnPressedQuickRestartButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabInGameMenuUI.OnPressedFeedbackButton
// (Final, Native, Protected)
// Parameters:

void UCrabInGameMenuUI::OnPressedFeedbackButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabInGameMenuUI", "OnPressedFeedbackButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabInGameMenuUI.OnHoveredSettingsButton
// (Final, Native, Protected)
// Parameters:

void UCrabInGameMenuUI::OnHoveredSettingsButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabInGameMenuUI", "OnHoveredSettingsButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabInGameMenuUI.OnHoveredResumeButton
// (Final, Native, Protected)
// Parameters:

void UCrabInGameMenuUI::OnHoveredResumeButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabInGameMenuUI", "OnHoveredResumeButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabInGameMenuUI.OnHoveredQuitToLobbyButton
// (Final, Native, Protected)
// Parameters:

void UCrabInGameMenuUI::OnHoveredQuitToLobbyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabInGameMenuUI", "OnHoveredQuitToLobbyButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabInGameMenuUI.OnHoveredQuitToDesktopButton
// (Final, Native, Protected)
// Parameters:

void UCrabInGameMenuUI::OnHoveredQuitToDesktopButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabInGameMenuUI", "OnHoveredQuitToDesktopButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabInGameMenuUI.OnHoveredQuickRestartButton
// (Final, Native, Protected)
// Parameters:

void UCrabInGameMenuUI::OnHoveredQuickRestartButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabInGameMenuUI", "OnHoveredQuickRestartButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabInGameMenuUI.OnHoveredFeedbackButton
// (Final, Native, Protected)
// Parameters:

void UCrabInGameMenuUI::OnHoveredFeedbackButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabInGameMenuUI", "OnHoveredFeedbackButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabSettingsMenuUI
// (None)

class UClass* UCrabSettingsMenuUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabSettingsMenuUI");

	return Clss;
}


// CrabSettingsMenuUI CrabChampions.Default__CrabSettingsMenuUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabSettingsMenuUI* UCrabSettingsMenuUI::GetDefaultObj()
{
	static class UCrabSettingsMenuUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabSettingsMenuUI*>(UCrabSettingsMenuUI::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabSettingsMenuUI.OnPressedVideoButton
// (Final, Native, Protected)
// Parameters:

void UCrabSettingsMenuUI::OnPressedVideoButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabSettingsMenuUI", "OnPressedVideoButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabSettingsMenuUI.OnPressedSoundButton
// (Final, Native, Protected)
// Parameters:

void UCrabSettingsMenuUI::OnPressedSoundButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabSettingsMenuUI", "OnPressedSoundButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabSettingsMenuUI.OnPressedControlsButton
// (Final, Native, Protected)
// Parameters:

void UCrabSettingsMenuUI::OnPressedControlsButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabSettingsMenuUI", "OnPressedControlsButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabGameOverRowUI
// (None)

class UClass* UCrabGameOverRowUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabGameOverRowUI");

	return Clss;
}


// CrabGameOverRowUI CrabChampions.Default__CrabGameOverRowUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabGameOverRowUI* UCrabGameOverRowUI::GetDefaultObj()
{
	static class UCrabGameOverRowUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabGameOverRowUI*>(UCrabGameOverRowUI::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabSpawnablesDA
// (None)

class UClass* UCrabSpawnablesDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabSpawnablesDA");

	return Clss;
}


// CrabSpawnablesDA CrabChampions.Default__CrabSpawnablesDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabSpawnablesDA* UCrabSpawnablesDA::GetDefaultObj()
{
	static class UCrabSpawnablesDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabSpawnablesDA*>(UCrabSpawnablesDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabInventoryUI
// (None)

class UClass* UCrabInventoryUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabInventoryUI");

	return Clss;
}


// CrabInventoryUI CrabChampions.Default__CrabInventoryUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabInventoryUI* UCrabInventoryUI::GetDefaultObj()
{
	static class UCrabInventoryUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabInventoryUI*>(UCrabInventoryUI::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabHealthBarUI
// (None)

class UClass* UCrabHealthBarUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabHealthBarUI");

	return Clss;
}


// CrabHealthBarUI CrabChampions.Default__CrabHealthBarUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabHealthBarUI* UCrabHealthBarUI::GetDefaultObj()
{
	static class UCrabHealthBarUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabHealthBarUI*>(UCrabHealthBarUI::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabInteractUI
// (None)

class UClass* UCrabInteractUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabInteractUI");

	return Clss;
}


// CrabInteractUI CrabChampions.Default__CrabInteractUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabInteractUI* UCrabInteractUI::GetDefaultObj()
{
	static class UCrabInteractUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabInteractUI*>(UCrabInteractUI::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabMinigameGameOverRowUI
// (None)

class UClass* UCrabMinigameGameOverRowUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabMinigameGameOverRowUI");

	return Clss;
}


// CrabMinigameGameOverRowUI CrabChampions.Default__CrabMinigameGameOverRowUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabMinigameGameOverRowUI* UCrabMinigameGameOverRowUI::GetDefaultObj()
{
	static class UCrabMinigameGameOverRowUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabMinigameGameOverRowUI*>(UCrabMinigameGameOverRowUI::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabPlayerNameUI
// (None)

class UClass* UCrabPlayerNameUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabPlayerNameUI");

	return Clss;
}


// CrabPlayerNameUI CrabChampions.Default__CrabPlayerNameUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabPlayerNameUI* UCrabPlayerNameUI::GetDefaultObj()
{
	static class UCrabPlayerNameUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabPlayerNameUI*>(UCrabPlayerNameUI::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabKeyBindRowUI
// (None)

class UClass* UCrabKeyBindRowUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabKeyBindRowUI");

	return Clss;
}


// CrabKeyBindRowUI CrabChampions.Default__CrabKeyBindRowUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabKeyBindRowUI* UCrabKeyBindRowUI::GetDefaultObj()
{
	static class UCrabKeyBindRowUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabKeyBindRowUI*>(UCrabKeyBindRowUI::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabKeyBindRowUI.OnPressedKeyboardKeySelector
// (Final, Native, Protected)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrabKeyBindRowUI::OnPressedKeyboardKeySelector(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabKeyBindRowUI", "OnPressedKeyboardKeySelector");

	Params::UCrabKeyBindRowUI_OnPressedKeyboardKeySelector_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabKeyBindRowUI.OnPressedControllerKeySelector
// (Final, Native, Protected)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrabKeyBindRowUI::OnPressedControllerKeySelector(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabKeyBindRowUI", "OnPressedControllerKeySelector");

	Params::UCrabKeyBindRowUI_OnPressedControllerKeySelector_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabKeyBindRowUI.OnHoveredKeyboardButton
// (Final, Native, Protected)
// Parameters:

void UCrabKeyBindRowUI::OnHoveredKeyboardButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabKeyBindRowUI", "OnHoveredKeyboardButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabKeyBindRowUI.OnHoveredControllerButton
// (Final, Native, Protected)
// Parameters:

void UCrabKeyBindRowUI::OnHoveredControllerButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabKeyBindRowUI", "OnHoveredControllerButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabPingUI
// (None)

class UClass* UCrabPingUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabPingUI");

	return Clss;
}


// CrabPingUI CrabChampions.Default__CrabPingUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabPingUI* UCrabPingUI::GetDefaultObj()
{
	static class UCrabPingUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabPingUI*>(UCrabPingUI::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabGameStateUI
// (None)

class UClass* UCrabGameStateUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabGameStateUI");

	return Clss;
}


// CrabGameStateUI CrabChampions.Default__CrabGameStateUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabGameStateUI* UCrabGameStateUI::GetDefaultObj()
{
	static class UCrabGameStateUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabGameStateUI*>(UCrabGameStateUI::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabGameStateUI.OnChatTextCommitted
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETextCommit             CommitMethod                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrabGameStateUI::OnChatTextCommitted(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabGameStateUI", "OnChatTextCommitted");

	Params::UCrabGameStateUI_OnChatTextCommitted_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabSliderUI
// (None)

class UClass* UCrabSliderUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabSliderUI");

	return Clss;
}


// CrabSliderUI CrabChampions.Default__CrabSliderUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabSliderUI* UCrabSliderUI::GetDefaultObj()
{
	static class UCrabSliderUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabSliderUI*>(UCrabSliderUI::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabSliderUI.OnMainSliderValueChanged
// (Final, Native, Protected)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrabSliderUI::OnMainSliderValueChanged(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabSliderUI", "OnMainSliderValueChanged");

	Params::UCrabSliderUI_OnMainSliderValueChanged_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabSoundMenuUI
// (None)

class UClass* UCrabSoundMenuUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabSoundMenuUI");

	return Clss;
}


// CrabSoundMenuUI CrabChampions.Default__CrabSoundMenuUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabSoundMenuUI* UCrabSoundMenuUI::GetDefaultObj()
{
	static class UCrabSoundMenuUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabSoundMenuUI*>(UCrabSoundMenuUI::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabPlayerStateUI
// (None)

class UClass* UCrabPlayerStateUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabPlayerStateUI");

	return Clss;
}


// CrabPlayerStateUI CrabChampions.Default__CrabPlayerStateUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabPlayerStateUI* UCrabPlayerStateUI::GetDefaultObj()
{
	static class UCrabPlayerStateUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabPlayerStateUI*>(UCrabPlayerStateUI::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabShopPedestalUI
// (None)

class UClass* UCrabShopPedestalUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabShopPedestalUI");

	return Clss;
}


// CrabShopPedestalUI CrabChampions.Default__CrabShopPedestalUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabShopPedestalUI* UCrabShopPedestalUI::GetDefaultObj()
{
	static class UCrabShopPedestalUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabShopPedestalUI*>(UCrabShopPedestalUI::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabStatsUI
// (None)

class UClass* UCrabStatsUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabStatsUI");

	return Clss;
}


// CrabStatsUI CrabChampions.Default__CrabStatsUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabStatsUI* UCrabStatsUI::GetDefaultObj()
{
	static class UCrabStatsUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabStatsUI*>(UCrabStatsUI::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabWeapon
// (Actor)

class UClass* ACrabWeapon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabWeapon");

	return Clss;
}


// CrabWeapon CrabChampions.Default__CrabWeapon
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabWeapon* ACrabWeapon::GetDefaultObj()
{
	static class ACrabWeapon* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabWeapon*>(ACrabWeapon::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabWeapon.ServerTriggerOnReloadPerks
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:

void ACrabWeapon::ServerTriggerOnReloadPerks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabWeapon", "ServerTriggerOnReloadPerks");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabWeapon.ServerSetIsReloading
// (Net, Native, Event, Protected, NetServer)
// Parameters:
// bool                               bNewIsReloading                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabWeapon::ServerSetIsReloading(bool bNewIsReloading)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabWeapon", "ServerSetIsReloading");

	Params::ACrabWeapon_ServerSetIsReloading_Params Parms{};

	Parms.bNewIsReloading = bNewIsReloading;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabWeapon.ServerPlayStartFireFX
// (Net, Native, Event, Protected, NetServer)
// Parameters:

void ACrabWeapon::ServerPlayStartFireFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabWeapon", "ServerPlayStartFireFX");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabWeapon.OnRep_WeaponInfo
// (Final, Native, Protected)
// Parameters:

void ACrabWeapon::OnRep_WeaponInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabWeapon", "OnRep_WeaponInfo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabWeapon.OnRep_TimesFired
// (Final, Native, Protected)
// Parameters:

void ACrabWeapon::OnRep_TimesFired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabWeapon", "OnRep_TimesFired");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabWeapon.OnRep_OwningPS
// (Final, Native, Protected)
// Parameters:

void ACrabWeapon::OnRep_OwningPS()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabWeapon", "OnRep_OwningPS");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabWeapon.OnRep_IsReloading
// (Final, Native, Protected)
// Parameters:

void ACrabWeapon::OnRep_IsReloading()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabWeapon", "OnRep_IsReloading");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabVideoMenuUI
// (None)

class UClass* UCrabVideoMenuUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabVideoMenuUI");

	return Clss;
}


// CrabVideoMenuUI CrabChampions.Default__CrabVideoMenuUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabVideoMenuUI* UCrabVideoMenuUI::GetDefaultObj()
{
	static class UCrabVideoMenuUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabVideoMenuUI*>(UCrabVideoMenuUI::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabVideoMenuUI.SetWeaponEffects
// (Final, Native, Protected)
// Parameters:
// class FString                      NewSelection                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrabVideoMenuUI::SetWeaponEffects(const class FString& NewSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabVideoMenuUI", "SetWeaponEffects");

	Params::UCrabVideoMenuUI_SetWeaponEffects_Params Parms{};

	Parms.NewSelection = NewSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabVideoMenuUI.SetVSync
// (Final, Native, Protected)
// Parameters:
// class FString                      NewSelection                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrabVideoMenuUI::SetVSync(const class FString& NewSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabVideoMenuUI", "SetVSync");

	Params::UCrabVideoMenuUI_SetVSync_Params Parms{};

	Parms.NewSelection = NewSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabVideoMenuUI.SetTextChatVisibility
// (Final, Native, Protected)
// Parameters:
// class FString                      NewSelection                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrabVideoMenuUI::SetTextChatVisibility(const class FString& NewSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabVideoMenuUI", "SetTextChatVisibility");

	Params::UCrabVideoMenuUI_SetTextChatVisibility_Params Parms{};

	Parms.NewSelection = NewSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabVideoMenuUI.SetShowFPS
// (Final, Native, Protected)
// Parameters:
// class FString                      NewSelection                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrabVideoMenuUI::SetShowFPS(const class FString& NewSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabVideoMenuUI", "SetShowFPS");

	Params::UCrabVideoMenuUI_SetShowFPS_Params Parms{};

	Parms.NewSelection = NewSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabVideoMenuUI.SetSharpening
// (Final, Native, Protected)
// Parameters:
// class FString                      NewSelection                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrabVideoMenuUI::SetSharpening(const class FString& NewSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabVideoMenuUI", "SetSharpening");

	Params::UCrabVideoMenuUI_SetSharpening_Params Parms{};

	Parms.NewSelection = NewSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabVideoMenuUI.SetResolutionQuality
// (Final, Native, Protected)
// Parameters:
// class FString                      NewSelection                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrabVideoMenuUI::SetResolutionQuality(const class FString& NewSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabVideoMenuUI", "SetResolutionQuality");

	Params::UCrabVideoMenuUI_SetResolutionQuality_Params Parms{};

	Parms.NewSelection = NewSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabVideoMenuUI.SetResolution
// (Final, Native, Protected)
// Parameters:
// class FString                      NewSelection                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrabVideoMenuUI::SetResolution(const class FString& NewSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabVideoMenuUI", "SetResolution");

	Params::UCrabVideoMenuUI_SetResolution_Params Parms{};

	Parms.NewSelection = NewSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabVideoMenuUI.SetPauseWhenLosingFocus
// (Final, Native, Protected)
// Parameters:
// class FString                      NewSelection                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrabVideoMenuUI::SetPauseWhenLosingFocus(const class FString& NewSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabVideoMenuUI", "SetPauseWhenLosingFocus");

	Params::UCrabVideoMenuUI_SetPauseWhenLosingFocus_Params Parms{};

	Parms.NewSelection = NewSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabVideoMenuUI.SetMotionBlur
// (Final, Native, Protected)
// Parameters:
// class FString                      NewSelection                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrabVideoMenuUI::SetMotionBlur(const class FString& NewSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabVideoMenuUI", "SetMotionBlur");

	Params::UCrabVideoMenuUI_SetMotionBlur_Params Parms{};

	Parms.NewSelection = NewSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabVideoMenuUI.SetHitmarkers
// (Final, Native, Protected)
// Parameters:
// class FString                      NewSelection                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrabVideoMenuUI::SetHitmarkers(const class FString& NewSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabVideoMenuUI", "SetHitmarkers");

	Params::UCrabVideoMenuUI_SetHitmarkers_Params Parms{};

	Parms.NewSelection = NewSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabVideoMenuUI.SetGraphicsQuality
// (Final, Native, Protected)
// Parameters:
// class FString                      NewSelection                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrabVideoMenuUI::SetGraphicsQuality(const class FString& NewSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabVideoMenuUI", "SetGraphicsQuality");

	Params::UCrabVideoMenuUI_SetGraphicsQuality_Params Parms{};

	Parms.NewSelection = NewSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabVideoMenuUI.SetFPSLimit
// (Final, Native, Protected)
// Parameters:
// class FString                      NewSelection                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrabVideoMenuUI::SetFPSLimit(const class FString& NewSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabVideoMenuUI", "SetFPSLimit");

	Params::UCrabVideoMenuUI_SetFPSLimit_Params Parms{};

	Parms.NewSelection = NewSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabVideoMenuUI.SetFieldOfView
// (Final, Native, Protected)
// Parameters:
// class FString                      NewSelection                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrabVideoMenuUI::SetFieldOfView(const class FString& NewSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabVideoMenuUI", "SetFieldOfView");

	Params::UCrabVideoMenuUI_SetFieldOfView_Params Parms{};

	Parms.NewSelection = NewSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabVideoMenuUI.SetDisplayMode
// (Final, Native, Protected)
// Parameters:
// class FString                      NewSelection                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrabVideoMenuUI::SetDisplayMode(const class FString& NewSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabVideoMenuUI", "SetDisplayMode");

	Params::UCrabVideoMenuUI_SetDisplayMode_Params Parms{};

	Parms.NewSelection = NewSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabVideoMenuUI.SetDamageNumbers
// (Final, Native, Protected)
// Parameters:
// class FString                      NewSelection                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrabVideoMenuUI::SetDamageNumbers(const class FString& NewSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabVideoMenuUI", "SetDamageNumbers");

	Params::UCrabVideoMenuUI_SetDamageNumbers_Params Parms{};

	Parms.NewSelection = NewSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabVideoMenuUI.SetCameraShake
// (Final, Native, Protected)
// Parameters:
// class FString                      NewSelection                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrabVideoMenuUI::SetCameraShake(const class FString& NewSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabVideoMenuUI", "SetCameraShake");

	Params::UCrabVideoMenuUI_SetCameraShake_Params Parms{};

	Parms.NewSelection = NewSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabVideoMenuUI.SetAntiAliasingType
// (Final, Native, Protected)
// Parameters:
// class FString                      NewSelection                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrabVideoMenuUI::SetAntiAliasingType(const class FString& NewSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabVideoMenuUI", "SetAntiAliasingType");

	Params::UCrabVideoMenuUI_SetAntiAliasingType_Params Parms{};

	Parms.NewSelection = NewSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabFireWeaponActionDA
// (None)

class UClass* UCrabFireWeaponActionDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabFireWeaponActionDA");

	return Clss;
}


// CrabFireWeaponActionDA CrabChampions.Default__CrabFireWeaponActionDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabFireWeaponActionDA* UCrabFireWeaponActionDA::GetDefaultObj()
{
	static class UCrabFireWeaponActionDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabFireWeaponActionDA*>(UCrabFireWeaponActionDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabProjectileActionDA
// (None)

class UClass* UCrabProjectileActionDA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabProjectileActionDA");

	return Clss;
}


// CrabProjectileActionDA CrabChampions.Default__CrabProjectileActionDA
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabProjectileActionDA* UCrabProjectileActionDA::GetDefaultObj()
{
	static class UCrabProjectileActionDA* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabProjectileActionDA*>(UCrabProjectileActionDA::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabEnemyAnimInstance
// (None)

class UClass* UCrabEnemyAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabEnemyAnimInstance");

	return Clss;
}


// CrabEnemyAnimInstance CrabChampions.Default__CrabEnemyAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabEnemyAnimInstance* UCrabEnemyAnimInstance::GetDefaultObj()
{
	static class UCrabEnemyAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabEnemyAnimInstance*>(UCrabEnemyAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabEnemyAnimInstance.AnimNotify_Action
// (Final, Native, Public)
// Parameters:

void UCrabEnemyAnimInstance::AnimNotify_Action()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabEnemyAnimInstance", "AnimNotify_Action");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabPlayerAnimInstance
// (None)

class UClass* UCrabPlayerAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabPlayerAnimInstance");

	return Clss;
}


// CrabPlayerAnimInstance CrabChampions.Default__CrabPlayerAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabPlayerAnimInstance* UCrabPlayerAnimInstance::GetDefaultObj()
{
	static class UCrabPlayerAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabPlayerAnimInstance*>(UCrabPlayerAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabPlayerAnimInstance.AnimNotify_Melee
// (Final, Native, Public)
// Parameters:

void UCrabPlayerAnimInstance::AnimNotify_Melee()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPlayerAnimInstance", "AnimNotify_Melee");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabDamageInterface
// (None)

class UClass* ICrabDamageInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabDamageInterface");

	return Clss;
}


// CrabDamageInterface CrabChampions.Default__CrabDamageInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ICrabDamageInterface* ICrabDamageInterface::GetDefaultObj()
{
	static class ICrabDamageInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ICrabDamageInterface*>(ICrabDamageInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabOverlapInterface
// (None)

class UClass* ICrabOverlapInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabOverlapInterface");

	return Clss;
}


// CrabOverlapInterface CrabChampions.Default__CrabOverlapInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ICrabOverlapInterface* ICrabOverlapInterface::GetDefaultObj()
{
	static class ICrabOverlapInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ICrabOverlapInterface*>(ICrabOverlapInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabCMC
// (None)

class UClass* UCrabCMC::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabCMC");

	return Clss;
}


// CrabCMC CrabChampions.Default__CrabCMC
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabCMC* UCrabCMC::GetDefaultObj()
{
	static class UCrabCMC* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabCMC*>(UCrabCMC::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabDamageTextActor
// (Actor)

class UClass* ACrabDamageTextActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabDamageTextActor");

	return Clss;
}


// CrabDamageTextActor CrabChampions.Default__CrabDamageTextActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabDamageTextActor* ACrabDamageTextActor::GetDefaultObj()
{
	static class ACrabDamageTextActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabDamageTextActor*>(ACrabDamageTextActor::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabGI
// (None)

class UClass* UCrabGI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabGI");

	return Clss;
}


// CrabGI CrabChampions.Default__CrabGI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabGI* UCrabGI::GetDefaultObj()
{
	static class UCrabGI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabGI*>(UCrabGI::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabGI.OnStreamLevelUnloaded
// (Final, Native, Protected)
// Parameters:

void UCrabGI::OnStreamLevelUnloaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabGI", "OnStreamLevelUnloaded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabGI.OnStreamLevelLoaded
// (Final, Native, Protected)
// Parameters:

void UCrabGI::OnStreamLevelLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabGI", "OnStreamLevelLoaded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabGM
// (Actor)

class UClass* ACrabGM::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabGM");

	return Clss;
}


// CrabGM CrabChampions.Default__CrabGM
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabGM* ACrabGM::GetDefaultObj()
{
	static class ACrabGM* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabGM*>(ACrabGM::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabGM.OnNavigationGenerationFinished
// (Final, Native, Protected)
// Parameters:
// class ANavigationData*             NavData                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabGM::OnNavigationGenerationFinished(class ANavigationData* NavData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabGM", "OnNavigationGenerationFinished");

	Params::ACrabGM_OnNavigationGenerationFinished_Params Parms{};

	Parms.NavData = NavData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabGM.DebugGoToNextIsland
// (Final, Exec, Native, Public)
// Parameters:

void ACrabGM::DebugGoToNextIsland()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabGM", "DebugGoToNextIsland");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabGM.DebugGoToNextBiome
// (Final, Exec, Native, Public)
// Parameters:

void ACrabGM::DebugGoToNextBiome()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabGM", "DebugGoToNextBiome");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabGM.DebugGoToIsland
// (Final, Exec, Native, Public)
// Parameters:
// int32                              IslandToGoTo                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabGM::DebugGoToIsland(int32 IslandToGoTo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabGM", "DebugGoToIsland");

	Params::ACrabGM_DebugGoToIsland_Params Parms{};

	Parms.IslandToGoTo = IslandToGoTo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabGM.DebugEndRun
// (Final, Exec, Native, Public)
// Parameters:

void ACrabGM::DebugEndRun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabGM", "DebugEndRun");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabGM.DebugCompleteIsland
// (Final, Exec, Native, Public)
// Parameters:

void ACrabGM::DebugCompleteIsland()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabGM", "DebugCompleteIsland");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabGS
// (Actor)

class UClass* ACrabGS::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabGS");

	return Clss;
}


// CrabGS CrabChampions.Default__CrabGS
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabGS* ACrabGS::GetDefaultObj()
{
	static class ACrabGS* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabGS*>(ACrabGS::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabGS.OnRep_RewardLootPool
// (Final, Native, Protected)
// Parameters:

void ACrabGS::OnRep_RewardLootPool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabGS", "OnRep_RewardLootPool");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabGS.OnRep_MinigameScore
// (Final, Native, Protected)
// Parameters:

void ACrabGS::OnRep_MinigameScore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabGS", "OnRep_MinigameScore");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabGS.OnRep_MatchState
// (Final, Native, Protected)
// Parameters:

void ACrabGS::OnRep_MatchState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabGS", "OnRep_MatchState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabGS.OnRep_DifficultyModifiers
// (Final, Native, Protected)
// Parameters:

void ACrabGS::OnRep_DifficultyModifiers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabGS", "OnRep_DifficultyModifiers");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabGS.OnRep_Difficulty
// (Final, Native, Protected)
// Parameters:

void ACrabGS::OnRep_Difficulty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabGS", "OnRep_Difficulty");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabGS.OnRep_CurrentTime
// (Final, Native, Protected)
// Parameters:

void ACrabGS::OnRep_CurrentTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabGS", "OnRep_CurrentTime");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabGS.OnRep_CurrentIslandType
// (Final, Native, Protected)
// Parameters:

void ACrabGS::OnRep_CurrentIslandType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabGS", "OnRep_CurrentIslandType");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabGS.OnRep_CurrentIslandTimeRemaining
// (Final, Native, Protected)
// Parameters:

void ACrabGS::OnRep_CurrentIslandTimeRemaining()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabGS", "OnRep_CurrentIslandTimeRemaining");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabGS.OnRep_CurrentCountdown
// (Final, Native, Protected)
// Parameters:

void ACrabGS::OnRep_CurrentCountdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabGS", "OnRep_CurrentCountdown");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabGS.OnRep_ChallengeModifiers
// (Final, Native, Protected)
// Parameters:

void ACrabGS::OnRep_ChallengeModifiers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabGS", "OnRep_ChallengeModifiers");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabGS.OnRep_Blessing
// (Final, Native, Protected)
// Parameters:

void ACrabGS::OnRep_Blessing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabGS", "OnRep_Blessing");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabHC
// (None)

class UClass* UCrabHC::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabHC");

	return Clss;
}


// CrabHC CrabChampions.Default__CrabHC
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabHC* UCrabHC::GetDefaultObj()
{
	static class UCrabHC* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabHC*>(UCrabHC::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabHC.OnRep_HealthInfo
// (Final, Native, Protected)
// Parameters:

void UCrabHC::OnRep_HealthInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabHC", "OnRep_HealthInfo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabLM
// (Actor)

class UClass* ACrabLM::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabLM");

	return Clss;
}


// CrabLM CrabChampions.Default__CrabLM
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabLM* ACrabLM::GetDefaultObj()
{
	static class ACrabLM* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabLM*>(ACrabLM::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabLM.OnRep_LightingPresetIndex
// (Final, Native, Protected)
// Parameters:

void ACrabLM::OnRep_LightingPresetIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabLM", "OnRep_LightingPresetIndex");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabLM.MulticastSpawnCosmeticProjectile
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FCrabProjectileInfo         ProjectileInfo                                                   (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class AActor*                      ProjectileOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize         StartLoc                                                         (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bExplodeInstantly                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabLM::MulticastSpawnCosmeticProjectile(struct FCrabProjectileInfo& ProjectileInfo, class AActor* ProjectileOwner, struct FVector_NetQuantize& StartLoc, bool bExplodeInstantly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabLM", "MulticastSpawnCosmeticProjectile");

	Params::ACrabLM_MulticastSpawnCosmeticProjectile_Params Parms{};

	Parms.ProjectileInfo = ProjectileInfo;
	Parms.ProjectileOwner = ProjectileOwner;
	Parms.StartLoc = StartLoc;
	Parms.bExplodeInstantly = bExplodeInstantly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabLM.MulticastPlayOneShotFX
// (Net, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// class UNiagaraSystem*              FXToPlay                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundCue*                   SoundToPlay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SpawnLoc                                                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabLM::MulticastPlayOneShotFX(class UNiagaraSystem* FXToPlay, class USoundCue* SoundToPlay, struct FVector& SpawnLoc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabLM", "MulticastPlayOneShotFX");

	Params::ACrabLM_MulticastPlayOneShotFX_Params Parms{};

	Parms.FXToPlay = FXToPlay;
	Parms.SoundToPlay = SoundToPlay;
	Parms.SpawnLoc = SpawnLoc;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabPC
// (Actor, PlayerController)

class UClass* ACrabPC::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabPC");

	return Clss;
}


// CrabPC CrabChampions.Default__CrabPC
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabPC* ACrabPC::GetDefaultObj()
{
	static class ACrabPC* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabPC*>(ACrabPC::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabPC.ServerUploadLobbyStats
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// struct FCrabLobbyStats             LobbyStats                                                       (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void ACrabPC::ServerUploadLobbyStats(struct FCrabLobbyStats& LobbyStats)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ServerUploadLobbyStats");

	Params::ACrabPC_ServerUploadLobbyStats_Params Parms{};

	Parms.LobbyStats = LobbyStats;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.ServerSpectateNextPlayer
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:

void ACrabPC::ServerSpectateNextPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ServerSpectateNextPlayer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.ServerSpawnKeyTotemPickup
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class ACrabTotem*                  KeyTotem                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCrabPickupDA*               PickupToSpawn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPC::ServerSpawnKeyTotemPickup(class ACrabTotem* KeyTotem, class UCrabPickupDA* PickupToSpawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ServerSpawnKeyTotemPickup");

	Params::ACrabPC_ServerSpawnKeyTotemPickup_Params Parms{};

	Parms.KeyTotem = KeyTotem;
	Parms.PickupToSpawn = PickupToSpawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.ServerSendChatMessage
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// class FString                      ChatMessage                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPC::ServerSendChatMessage(const class FString& ChatMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ServerSendChatMessage");

	Params::ACrabPC_ServerSendChatMessage_Params Parms{};

	Parms.ChatMessage = ChatMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.ServerRestoreAutoSave
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// struct FCrabAutoSave               AutoSave                                                         (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void ACrabPC::ServerRestoreAutoSave(struct FCrabAutoSave& AutoSave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ServerRestoreAutoSave");

	Params::ACrabPC_ServerRestoreAutoSave_Params Parms{};

	Parms.AutoSave = AutoSave;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.OnSlomoRampTimelineUpdated
// (Final, Native, Protected)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPC::OnSlomoRampTimelineUpdated(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "OnSlomoRampTimelineUpdated");

	Params::ACrabPC_OnSlomoRampTimelineUpdated_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.ClientUploadLobbyStats
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void ACrabPC::ClientUploadLobbyStats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ClientUploadLobbyStats");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.ClientStartSlomoRamp
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void ACrabPC::ClientStartSlomoRamp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ClientStartSlomoRamp");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.ClientShowLoadingScreenUI
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void ACrabPC::ClientShowLoadingScreenUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ClientShowLoadingScreenUI");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.ClientShowCosmeticsMenuUI
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void ACrabPC::ClientShowCosmeticsMenuUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ClientShowCosmeticsMenuUI");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.ClientSetIsCharacterInputEnabled
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                               bNewIsCharacterInputEnabled                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPC::ClientSetIsCharacterInputEnabled(bool bNewIsCharacterInputEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ClientSetIsCharacterInputEnabled");

	Params::ACrabPC_ClientSetIsCharacterInputEnabled_Params Parms{};

	Parms.bNewIsCharacterInputEnabled = bNewIsCharacterInputEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.ClientRefreshPSUI
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void ACrabPC::ClientRefreshPSUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ClientRefreshPSUI");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.ClientPlayerLeftGame
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void ACrabPC::ClientPlayerLeftGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ClientPlayerLeftGame");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.ClientOnTookDamage
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// enum class ECrabDamageHitType      DamageHitType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPC::ClientOnTookDamage(enum class ECrabDamageHitType DamageHitType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ClientOnTookDamage");

	Params::ACrabPC_ClientOnTookDamage_Params Parms{};

	Parms.DamageHitType = DamageHitType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.ClientOnReceivedChatMessage
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class FString                      PlayerName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ChatMessage                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPC::ClientOnReceivedChatMessage(const class FString& PlayerName, const class FString& ChatMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ClientOnReceivedChatMessage");

	Params::ACrabPC_ClientOnReceivedChatMessage_Params Parms{};

	Parms.PlayerName = PlayerName;
	Parms.ChatMessage = ChatMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.ClientOnPickedUpPickup
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UCrabPickupDA*               PickupDA                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPC::ClientOnPickedUpPickup(class UCrabPickupDA* PickupDA, uint8 Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ClientOnPickedUpPickup");

	Params::ACrabPC_ClientOnPickedUpPickup_Params Parms{};

	Parms.PickupDA = PickupDA;
	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.ClientOnInteractedWithKeyTotem
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class ACrabTotem*                  KeyTotem                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPC::ClientOnInteractedWithKeyTotem(class ACrabTotem* KeyTotem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ClientOnInteractedWithKeyTotem");

	Params::ACrabPC_ClientOnInteractedWithKeyTotem_Params Parms{};

	Parms.KeyTotem = KeyTotem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.ClientOnEnteredPortal
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FCrabNextIslandInfo         NextIslandInfo                                                   (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void ACrabPC::ClientOnEnteredPortal(struct FCrabNextIslandInfo& NextIslandInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ClientOnEnteredPortal");

	Params::ACrabPC_ClientOnEnteredPortal_Params Parms{};

	Parms.NextIslandInfo = NextIslandInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.ClientOnEliminated
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class FString                      EliminatedByPlayerName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPC::ClientOnEliminated(const class FString& EliminatedByPlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ClientOnEliminated");

	Params::ACrabPC_ClientOnEliminated_Params Parms{};

	Parms.EliminatedByPlayerName = EliminatedByPlayerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.ClientOnClearedIsland
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                               bWasFlawlessClear                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPC::ClientOnClearedIsland(bool bWasFlawlessClear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ClientOnClearedIsland");

	Params::ACrabPC_ClientOnClearedIsland_Params Parms{};

	Parms.bWasFlawlessClear = bWasFlawlessClear;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.ClientNotifyDamageDealt
// (Net, Native, Event, Public, NetClient)
// Parameters:
// struct FCrabDamageInfo             DamageInfo                                                       (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ECrabDamageHitType      DamageHitType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPC::ClientNotifyDamageDealt(struct FCrabDamageInfo& DamageInfo, enum class ECrabDamageHitType DamageHitType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ClientNotifyDamageDealt");

	Params::ACrabPC_ClientNotifyDamageDealt_Params Parms{};

	Parms.DamageInfo = DamageInfo;
	Parms.DamageHitType = DamageHitType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.ClientLeaveGame
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void ACrabPC::ClientLeaveGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ClientLeaveGame");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.ClientInventoryEvent
// (Net, Native, Event, Public, NetClient)
// Parameters:
// class FString                      InventoryEventMessage                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPC::ClientInventoryEvent(const class FString& InventoryEventMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ClientInventoryEvent");

	Params::ACrabPC_ClientInventoryEvent_Params Parms{};

	Parms.InventoryEventMessage = InventoryEventMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPC.ClientClearAutoSave
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void ACrabPC::ClientClearAutoSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPC", "ClientClearAutoSave");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabPMC
// (None)

class UClass* UCrabPMC::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabPMC");

	return Clss;
}


// CrabPMC CrabChampions.Default__CrabPMC
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabPMC* UCrabPMC::GetDefaultObj()
{
	static class UCrabPMC* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabPMC*>(UCrabPMC::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabPS
// (Actor)

class UClass* ACrabPS::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabPS");

	return Clss;
}


// CrabPS CrabChampions.Default__CrabPS
// (Public, ClassDefaultObject, ArchetypeObject)

class ACrabPS* ACrabPS::GetDefaultObj()
{
	static class ACrabPS* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrabPS*>(ACrabPS::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabPS.ServerSetWeaponDA
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UCrabWeaponDA*               NewWeaponDA                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPS::ServerSetWeaponDA(class UCrabWeaponDA* NewWeaponDA)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "ServerSetWeaponDA");

	Params::ACrabPS_ServerSetWeaponDA_Params Parms{};

	Parms.NewWeaponDA = NewWeaponDA;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.ServerSetMeleeDA
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UCrabMeleeDA*                NewMeleeDA                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPS::ServerSetMeleeDA(class UCrabMeleeDA* NewMeleeDA)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "ServerSetMeleeDA");

	Params::ACrabPS_ServerSetMeleeDA_Params Parms{};

	Parms.NewMeleeDA = NewMeleeDA;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.ServerSetAbilityDA
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UCrabAbilityDA*              NewAbilityDA                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPS::ServerSetAbilityDA(class UCrabAbilityDA* NewAbilityDA)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "ServerSetAbilityDA");

	Params::ACrabPS_ServerSetAbilityDA_Params Parms{};

	Parms.NewAbilityDA = NewAbilityDA;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.ServerRemoveWeaponMod
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// enum class ECrabWeaponModType      WeaponModType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPS::ServerRemoveWeaponMod(enum class ECrabWeaponModType WeaponModType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "ServerRemoveWeaponMod");

	Params::ACrabPS_ServerRemoveWeaponMod_Params Parms{};

	Parms.WeaponModType = WeaponModType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.ServerRemoveRelic
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// enum class ECrabRelicType          RelicType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPS::ServerRemoveRelic(enum class ECrabRelicType RelicType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "ServerRemoveRelic");

	Params::ACrabPS_ServerRemoveRelic_Params Parms{};

	Parms.RelicType = RelicType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.ServerRemovePerk
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// enum class ECrabPerkType           PerkType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPS::ServerRemovePerk(enum class ECrabPerkType PerkType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "ServerRemovePerk");

	Params::ACrabPS_ServerRemovePerk_Params Parms{};

	Parms.PerkType = PerkType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.ServerRemoveGrenadeMod
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// enum class ECrabGrenadeModType     GrenadeModType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPS::ServerRemoveGrenadeMod(enum class ECrabGrenadeModType GrenadeModType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "ServerRemoveGrenadeMod");

	Params::ACrabPS_ServerRemoveGrenadeMod_Params Parms{};

	Parms.GrenadeModType = GrenadeModType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.ServerRefreshAccount
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// enum class ECrabRank               NewAccountRank                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewAccountLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewKeys                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPS::ServerRefreshAccount(enum class ECrabRank NewAccountRank, int32 NewAccountLevel, int32 NewKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "ServerRefreshAccount");

	Params::ACrabPS_ServerRefreshAccount_Params Parms{};

	Parms.NewAccountRank = NewAccountRank;
	Parms.NewAccountLevel = NewAccountLevel;
	Parms.NewKeys = NewKeys;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.ServerIncrementNumInventorySlots
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// enum class ECrabPickupType         PickupType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Cost                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPS::ServerIncrementNumInventorySlots(enum class ECrabPickupType PickupType, int32 Cost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "ServerIncrementNumInventorySlots");

	Params::ACrabPS_ServerIncrementNumInventorySlots_Params Parms{};

	Parms.PickupType = PickupType;
	Parms.Cost = Cost;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.ServerEquipInventory
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// class UCrabWeaponDA*               NewWeaponDA                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCrabAbilityDA*              NewAbilityDA                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCrabMeleeDA*                NewMeleeDA                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPS::ServerEquipInventory(class UCrabWeaponDA* NewWeaponDA, class UCrabAbilityDA* NewAbilityDA, class UCrabMeleeDA* NewMeleeDA)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "ServerEquipInventory");

	Params::ACrabPS_ServerEquipInventory_Params Parms{};

	Parms.NewWeaponDA = NewWeaponDA;
	Parms.NewAbilityDA = NewAbilityDA;
	Parms.NewMeleeDA = NewMeleeDA;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.ServerEquipCosmetics
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// class UMaterialInterface*          NewCrabSkin                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACrabPS::ServerEquipCosmetics(class UMaterialInterface* NewCrabSkin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "ServerEquipCosmetics");

	Params::ACrabPS_ServerEquipCosmetics_Params Parms{};

	Parms.NewCrabSkin = NewCrabSkin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.OnRep_WeaponDA
// (Final, Native, Protected)
// Parameters:

void ACrabPS::OnRep_WeaponDA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "OnRep_WeaponDA");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.OnRep_ScaleMultiplier
// (Final, Native, Protected)
// Parameters:

void ACrabPS::OnRep_ScaleMultiplier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "OnRep_ScaleMultiplier");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.OnRep_Points
// (Final, Native, Protected)
// Parameters:

void ACrabPS::OnRep_Points()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "OnRep_Points");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.OnRep_MeleeDA
// (Final, Native, Protected)
// Parameters:

void ACrabPS::OnRep_MeleeDA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "OnRep_MeleeDA");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.OnRep_Keys
// (Final, Native, Protected)
// Parameters:

void ACrabPS::OnRep_Keys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "OnRep_Keys");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.OnRep_IslandRewardRarity
// (Final, Native, Protected)
// Parameters:

void ACrabPS::OnRep_IslandRewardRarity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "OnRep_IslandRewardRarity");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.OnRep_Inventory
// (Final, Native, Protected)
// Parameters:

void ACrabPS::OnRep_Inventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "OnRep_Inventory");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.OnRep_Eliminations
// (Final, Native, Protected)
// Parameters:

void ACrabPS::OnRep_Eliminations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "OnRep_Eliminations");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.OnRep_Crystals
// (Final, Native, Protected)
// Parameters:

void ACrabPS::OnRep_Crystals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "OnRep_Crystals");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.OnRep_Combo
// (Final, Native, Protected)
// Parameters:

void ACrabPS::OnRep_Combo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "OnRep_Combo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.OnRep_AccountRank
// (Final, Native, Protected)
// Parameters:

void ACrabPS::OnRep_AccountRank()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "OnRep_AccountRank");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.OnRep_AccountLevel
// (Final, Native, Protected)
// Parameters:

void ACrabPS::OnRep_AccountLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "OnRep_AccountLevel");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabPS.OnRep_AbilityDA
// (Final, Native, Protected)
// Parameters:

void ACrabPS::OnRep_AbilityDA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabPS", "OnRep_AbilityDA");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabSG
// (None)

class UClass* UCrabSG::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabSG");

	return Clss;
}


// CrabSG CrabChampions.Default__CrabSG
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabSG* UCrabSG::GetDefaultObj()
{
	static class UCrabSG* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabSG*>(UCrabSG::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabArrowSelectionUI
// (None)

class UClass* UCrabArrowSelectionUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabArrowSelectionUI");

	return Clss;
}


// CrabArrowSelectionUI CrabChampions.Default__CrabArrowSelectionUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabArrowSelectionUI* UCrabArrowSelectionUI::GetDefaultObj()
{
	static class UCrabArrowSelectionUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabArrowSelectionUI*>(UCrabArrowSelectionUI::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabArrowSelectionUI.OnPressedPreviousButton
// (Final, Native, Protected)
// Parameters:

void UCrabArrowSelectionUI::OnPressedPreviousButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabArrowSelectionUI", "OnPressedPreviousButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabArrowSelectionUI.OnPressedNextButton
// (Final, Native, Protected)
// Parameters:

void UCrabArrowSelectionUI::OnPressedNextButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabArrowSelectionUI", "OnPressedNextButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabArrowSelectionUI.OnHoveredPreviousButton
// (Final, Native, Protected)
// Parameters:

void UCrabArrowSelectionUI::OnHoveredPreviousButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabArrowSelectionUI", "OnHoveredPreviousButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabArrowSelectionUI.OnHoveredNextButton
// (Final, Native, Protected)
// Parameters:

void UCrabArrowSelectionUI::OnHoveredNextButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabArrowSelectionUI", "OnHoveredNextButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabCosmeticsMenuUI
// (None)

class UClass* UCrabCosmeticsMenuUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabCosmeticsMenuUI");

	return Clss;
}


// CrabCosmeticsMenuUI CrabChampions.Default__CrabCosmeticsMenuUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabCosmeticsMenuUI* UCrabCosmeticsMenuUI::GetDefaultObj()
{
	static class UCrabCosmeticsMenuUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabCosmeticsMenuUI*>(UCrabCosmeticsMenuUI::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabCosmeticsMenuUI.OnPressedWeaponSkinsButton
// (Final, Native, Protected)
// Parameters:

void UCrabCosmeticsMenuUI::OnPressedWeaponSkinsButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabCosmeticsMenuUI", "OnPressedWeaponSkinsButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabCosmeticsMenuUI.OnPressedCrabSkinsButton
// (Final, Native, Protected)
// Parameters:

void UCrabCosmeticsMenuUI::OnPressedCrabSkinsButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabCosmeticsMenuUI", "OnPressedCrabSkinsButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabDifficultyMenuUI
// (None)

class UClass* UCrabDifficultyMenuUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabDifficultyMenuUI");

	return Clss;
}


// CrabDifficultyMenuUI CrabChampions.Default__CrabDifficultyMenuUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabDifficultyMenuUI* UCrabDifficultyMenuUI::GetDefaultObj()
{
	static class UCrabDifficultyMenuUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabDifficultyMenuUI*>(UCrabDifficultyMenuUI::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabDifficultyMenuUI.OnPressedUltraChaosButton
// (Final, Native, Protected)
// Parameters:

void UCrabDifficultyMenuUI::OnPressedUltraChaosButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabDifficultyMenuUI", "OnPressedUltraChaosButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabDifficultyMenuUI.OnPressedNormalButton
// (Final, Native, Protected)
// Parameters:

void UCrabDifficultyMenuUI::OnPressedNormalButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabDifficultyMenuUI", "OnPressedNormalButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabDifficultyMenuUI.OnPressedNightmareButton
// (Final, Native, Protected)
// Parameters:

void UCrabDifficultyMenuUI::OnPressedNightmareButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabDifficultyMenuUI", "OnPressedNightmareButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabDifficultyMenuUI.OnPressedEasyButton
// (Final, Native, Protected)
// Parameters:

void UCrabDifficultyMenuUI::OnPressedEasyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabDifficultyMenuUI", "OnPressedEasyButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabDifficultyMenuUI.OnHoveredUltraChaosButton
// (Final, Native, Protected)
// Parameters:

void UCrabDifficultyMenuUI::OnHoveredUltraChaosButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabDifficultyMenuUI", "OnHoveredUltraChaosButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabDifficultyMenuUI.OnHoveredNormalButton
// (Final, Native, Protected)
// Parameters:

void UCrabDifficultyMenuUI::OnHoveredNormalButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabDifficultyMenuUI", "OnHoveredNormalButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabDifficultyMenuUI.OnHoveredNightmareButton
// (Final, Native, Protected)
// Parameters:

void UCrabDifficultyMenuUI::OnHoveredNightmareButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabDifficultyMenuUI", "OnHoveredNightmareButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabDifficultyMenuUI.OnHoveredEasyButton
// (Final, Native, Protected)
// Parameters:

void UCrabDifficultyMenuUI::OnHoveredEasyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabDifficultyMenuUI", "OnHoveredEasyButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabMinigameGameOverUI
// (None)

class UClass* UCrabMinigameGameOverUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabMinigameGameOverUI");

	return Clss;
}


// CrabMinigameGameOverUI CrabChampions.Default__CrabMinigameGameOverUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabMinigameGameOverUI* UCrabMinigameGameOverUI::GetDefaultObj()
{
	static class UCrabMinigameGameOverUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabMinigameGameOverUI*>(UCrabMinigameGameOverUI::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabMultiplayerMenuUI
// (None)

class UClass* UCrabMultiplayerMenuUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabMultiplayerMenuUI");

	return Clss;
}


// CrabMultiplayerMenuUI CrabChampions.Default__CrabMultiplayerMenuUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabMultiplayerMenuUI* UCrabMultiplayerMenuUI::GetDefaultObj()
{
	static class UCrabMultiplayerMenuUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabMultiplayerMenuUI*>(UCrabMultiplayerMenuUI::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabMultiplayerMenuUI.OnPressedQuickplayButton
// (Final, Native, Protected)
// Parameters:

void UCrabMultiplayerMenuUI::OnPressedQuickplayButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabMultiplayerMenuUI", "OnPressedQuickplayButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabMultiplayerMenuUI.OnHoveredQuickplayButton
// (Final, Native, Protected)
// Parameters:

void UCrabMultiplayerMenuUI::OnHoveredQuickplayButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabMultiplayerMenuUI", "OnHoveredQuickplayButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabPortalInteractUI
// (None)

class UClass* UCrabPortalInteractUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabPortalInteractUI");

	return Clss;
}


// CrabPortalInteractUI CrabChampions.Default__CrabPortalInteractUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabPortalInteractUI* UCrabPortalInteractUI::GetDefaultObj()
{
	static class UCrabPortalInteractUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabPortalInteractUI*>(UCrabPortalInteractUI::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabInventoryEventUI
// (None)

class UClass* UCrabInventoryEventUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabInventoryEventUI");

	return Clss;
}


// CrabInventoryEventUI CrabChampions.Default__CrabInventoryEventUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabInventoryEventUI* UCrabInventoryEventUI::GetDefaultObj()
{
	static class UCrabInventoryEventUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabInventoryEventUI*>(UCrabInventoryEventUI::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabInventorySlotUI
// (None)

class UClass* UCrabInventorySlotUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabInventorySlotUI");

	return Clss;
}


// CrabInventorySlotUI CrabChampions.Default__CrabInventorySlotUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabInventorySlotUI* UCrabInventorySlotUI::GetDefaultObj()
{
	static class UCrabInventorySlotUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabInventorySlotUI*>(UCrabInventorySlotUI::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabInventorySlotUI.OnHoveredSlotButton
// (Final, Native, Protected)
// Parameters:

void UCrabInventorySlotUI::OnHoveredSlotButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabInventorySlotUI", "OnHoveredSlotButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabInviteFriendRowUI
// (None)

class UClass* UCrabInviteFriendRowUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabInviteFriendRowUI");

	return Clss;
}


// CrabInviteFriendRowUI CrabChampions.Default__CrabInviteFriendRowUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabInviteFriendRowUI* UCrabInviteFriendRowUI::GetDefaultObj()
{
	static class UCrabInviteFriendRowUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabInviteFriendRowUI*>(UCrabInviteFriendRowUI::StaticClass()->DefaultObject);

	return Default;
}


// Function CrabChampions.CrabInviteFriendRowUI.OnPressedInviteButton
// (Final, Native, Protected)
// Parameters:

void UCrabInviteFriendRowUI::OnPressedInviteButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabInviteFriendRowUI", "OnPressedInviteButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CrabChampions.CrabInviteFriendRowUI.OnHoveredInviteButton
// (Final, Native, Protected)
// Parameters:

void UCrabInviteFriendRowUI::OnHoveredInviteButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrabInviteFriendRowUI", "OnHoveredInviteButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CrabChampions.CrabJoinedPlayerRowUI
// (None)

class UClass* UCrabJoinedPlayerRowUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabJoinedPlayerRowUI");

	return Clss;
}


// CrabJoinedPlayerRowUI CrabChampions.Default__CrabJoinedPlayerRowUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabJoinedPlayerRowUI* UCrabJoinedPlayerRowUI::GetDefaultObj()
{
	static class UCrabJoinedPlayerRowUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabJoinedPlayerRowUI*>(UCrabJoinedPlayerRowUI::StaticClass()->DefaultObject);

	return Default;
}


// Class CrabChampions.CrabUnlockedCosmeticUI
// (None)

class UClass* UCrabUnlockedCosmeticUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrabUnlockedCosmeticUI");

	return Clss;
}


// CrabUnlockedCosmeticUI CrabChampions.Default__CrabUnlockedCosmeticUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrabUnlockedCosmeticUI* UCrabUnlockedCosmeticUI::GetDefaultObj()
{
	static class UCrabUnlockedCosmeticUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrabUnlockedCosmeticUI*>(UCrabUnlockedCosmeticUI::StaticClass()->DefaultObject);

	return Default;
}

}


