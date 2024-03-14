#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Chest_Elemental.BP_Chest_Elemental_C
// (Actor)

class UClass* ABP_Chest_Elemental_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Chest_Elemental_C");

	return Clss;
}


// BP_Chest_Elemental_C BP_Chest_Elemental.Default__BP_Chest_Elemental_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Chest_Elemental_C* ABP_Chest_Elemental_C::GetDefaultObj()
{
	static class ABP_Chest_Elemental_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Chest_Elemental_C*>(ABP_Chest_Elemental_C::StaticClass()->DefaultObject);

	return Default;
}

}


