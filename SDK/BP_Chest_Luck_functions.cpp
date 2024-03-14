#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Chest_Luck.BP_Chest_Luck_C
// (Actor)

class UClass* ABP_Chest_Luck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Chest_Luck_C");

	return Clss;
}


// BP_Chest_Luck_C BP_Chest_Luck.Default__BP_Chest_Luck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Chest_Luck_C* ABP_Chest_Luck_C::GetDefaultObj()
{
	static class ABP_Chest_Luck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Chest_Luck_C*>(ABP_Chest_Luck_C::StaticClass()->DefaultObject);

	return Default;
}

}


