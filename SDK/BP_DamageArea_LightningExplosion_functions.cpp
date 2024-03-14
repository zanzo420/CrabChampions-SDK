#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamageArea_LightningExplosion.BP_DamageArea_LightningExplosion_C
// (Actor)

class UClass* ABP_DamageArea_LightningExplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamageArea_LightningExplosion_C");

	return Clss;
}


// BP_DamageArea_LightningExplosion_C BP_DamageArea_LightningExplosion.Default__BP_DamageArea_LightningExplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamageArea_LightningExplosion_C* ABP_DamageArea_LightningExplosion_C::GetDefaultObj()
{
	static class ABP_DamageArea_LightningExplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamageArea_LightningExplosion_C*>(ABP_DamageArea_LightningExplosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


