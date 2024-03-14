#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MortarTurret.BP_MortarTurret_C
// (Actor)

class UClass* ABP_MortarTurret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MortarTurret_C");

	return Clss;
}


// BP_MortarTurret_C BP_MortarTurret.Default__BP_MortarTurret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MortarTurret_C* ABP_MortarTurret_C::GetDefaultObj()
{
	static class ABP_MortarTurret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MortarTurret_C*>(ABP_MortarTurret_C::StaticClass()->DefaultObject);

	return Default;
}

}


