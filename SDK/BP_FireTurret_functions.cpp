#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FireTurret.BP_FireTurret_C
// (Actor)

class UClass* ABP_FireTurret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FireTurret_C");

	return Clss;
}


// BP_FireTurret_C BP_FireTurret.Default__BP_FireTurret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FireTurret_C* ABP_FireTurret_C::GetDefaultObj()
{
	static class ABP_FireTurret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FireTurret_C*>(ABP_FireTurret_C::StaticClass()->DefaultObject);

	return Default;
}

}


