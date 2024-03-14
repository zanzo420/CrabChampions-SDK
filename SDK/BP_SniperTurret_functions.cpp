#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SniperTurret.BP_SniperTurret_C
// (Actor)

class UClass* ABP_SniperTurret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SniperTurret_C");

	return Clss;
}


// BP_SniperTurret_C BP_SniperTurret.Default__BP_SniperTurret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SniperTurret_C* ABP_SniperTurret_C::GetDefaultObj()
{
	static class ABP_SniperTurret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SniperTurret_C*>(ABP_SniperTurret_C::StaticClass()->DefaultObject);

	return Default;
}

}


