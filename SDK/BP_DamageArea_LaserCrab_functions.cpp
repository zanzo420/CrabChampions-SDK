#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamageArea_LaserCrab.BP_DamageArea_LaserCrab_C
// (Actor)

class UClass* ABP_DamageArea_LaserCrab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamageArea_LaserCrab_C");

	return Clss;
}


// BP_DamageArea_LaserCrab_C BP_DamageArea_LaserCrab.Default__BP_DamageArea_LaserCrab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamageArea_LaserCrab_C* ABP_DamageArea_LaserCrab_C::GetDefaultObj()
{
	static class ABP_DamageArea_LaserCrab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamageArea_LaserCrab_C*>(ABP_DamageArea_LaserCrab_C::StaticClass()->DefaultObject);

	return Default;
}

}


