#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Chest_Relic.BP_Chest_Relic_C
// (Actor)

class UClass* ABP_Chest_Relic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Chest_Relic_C");

	return Clss;
}


// BP_Chest_Relic_C BP_Chest_Relic.Default__BP_Chest_Relic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Chest_Relic_C* ABP_Chest_Relic_C::GetDefaultObj()
{
	static class ABP_Chest_Relic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Chest_Relic_C*>(ABP_Chest_Relic_C::StaticClass()->DefaultObject);

	return Default;
}

}


