#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Chest_Upgrade.BP_Chest_Upgrade_C
// (Actor)

class UClass* ABP_Chest_Upgrade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Chest_Upgrade_C");

	return Clss;
}


// BP_Chest_Upgrade_C BP_Chest_Upgrade.Default__BP_Chest_Upgrade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Chest_Upgrade_C* ABP_Chest_Upgrade_C::GetDefaultObj()
{
	static class ABP_Chest_Upgrade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Chest_Upgrade_C*>(ABP_Chest_Upgrade_C::StaticClass()->DefaultObject);

	return Default;
}

}


