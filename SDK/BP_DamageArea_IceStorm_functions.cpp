#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamageArea_IceStorm.BP_DamageArea_IceStorm_C
// (Actor)

class UClass* ABP_DamageArea_IceStorm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamageArea_IceStorm_C");

	return Clss;
}


// BP_DamageArea_IceStorm_C BP_DamageArea_IceStorm.Default__BP_DamageArea_IceStorm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamageArea_IceStorm_C* ABP_DamageArea_IceStorm_C::GetDefaultObj()
{
	static class ABP_DamageArea_IceStorm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamageArea_IceStorm_C*>(ABP_DamageArea_IceStorm_C::StaticClass()->DefaultObject);

	return Default;
}

}


