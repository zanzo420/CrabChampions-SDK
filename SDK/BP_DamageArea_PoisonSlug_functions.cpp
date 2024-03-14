#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamageArea_PoisonSlug.BP_DamageArea_PoisonSlug_C
// (Actor)

class UClass* ABP_DamageArea_PoisonSlug_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamageArea_PoisonSlug_C");

	return Clss;
}


// BP_DamageArea_PoisonSlug_C BP_DamageArea_PoisonSlug.Default__BP_DamageArea_PoisonSlug_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamageArea_PoisonSlug_C* ABP_DamageArea_PoisonSlug_C::GetDefaultObj()
{
	static class ABP_DamageArea_PoisonSlug_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamageArea_PoisonSlug_C*>(ABP_DamageArea_PoisonSlug_C::StaticClass()->DefaultObject);

	return Default;
}

}


