#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamageArea_AbilityBlackHole.BP_DamageArea_AbilityBlackHole_C
// (Actor)

class UClass* ABP_DamageArea_AbilityBlackHole_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamageArea_AbilityBlackHole_C");

	return Clss;
}


// BP_DamageArea_AbilityBlackHole_C BP_DamageArea_AbilityBlackHole.Default__BP_DamageArea_AbilityBlackHole_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamageArea_AbilityBlackHole_C* ABP_DamageArea_AbilityBlackHole_C::GetDefaultObj()
{
	static class ABP_DamageArea_AbilityBlackHole_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamageArea_AbilityBlackHole_C*>(ABP_DamageArea_AbilityBlackHole_C::StaticClass()->DefaultObject);

	return Default;
}

}


