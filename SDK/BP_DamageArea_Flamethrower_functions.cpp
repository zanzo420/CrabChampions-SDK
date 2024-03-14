#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamageArea_Flamethrower.BP_DamageArea_Flamethrower_C
// (Actor)

class UClass* ABP_DamageArea_Flamethrower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamageArea_Flamethrower_C");

	return Clss;
}


// BP_DamageArea_Flamethrower_C BP_DamageArea_Flamethrower.Default__BP_DamageArea_Flamethrower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamageArea_Flamethrower_C* ABP_DamageArea_Flamethrower_C::GetDefaultObj()
{
	static class ABP_DamageArea_Flamethrower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamageArea_Flamethrower_C*>(ABP_DamageArea_Flamethrower_C::StaticClass()->DefaultObject);

	return Default;
}

}


