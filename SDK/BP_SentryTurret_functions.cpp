#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SentryTurret.BP_SentryTurret_C
// (Actor)

class UClass* ABP_SentryTurret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SentryTurret_C");

	return Clss;
}


// BP_SentryTurret_C BP_SentryTurret.Default__BP_SentryTurret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SentryTurret_C* ABP_SentryTurret_C::GetDefaultObj()
{
	static class ABP_SentryTurret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SentryTurret_C*>(ABP_SentryTurret_C::StaticClass()->DefaultObject);

	return Default;
}

}


