#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PoisonTurret.BP_PoisonTurret_C
// (Actor)

class UClass* ABP_PoisonTurret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PoisonTurret_C");

	return Clss;
}


// BP_PoisonTurret_C BP_PoisonTurret.Default__BP_PoisonTurret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PoisonTurret_C* ABP_PoisonTurret_C::GetDefaultObj()
{
	static class ABP_PoisonTurret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PoisonTurret_C*>(ABP_PoisonTurret_C::StaticClass()->DefaultObject);

	return Default;
}

}


