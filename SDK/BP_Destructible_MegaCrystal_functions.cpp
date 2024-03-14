#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Destructible_MegaCrystal.BP_Destructible_MegaCrystal_C
// (Actor)

class UClass* ABP_Destructible_MegaCrystal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Destructible_MegaCrystal_C");

	return Clss;
}


// BP_Destructible_MegaCrystal_C BP_Destructible_MegaCrystal.Default__BP_Destructible_MegaCrystal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Destructible_MegaCrystal_C* ABP_Destructible_MegaCrystal_C::GetDefaultObj()
{
	static class ABP_Destructible_MegaCrystal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Destructible_MegaCrystal_C*>(ABP_Destructible_MegaCrystal_C::StaticClass()->DefaultObject);

	return Default;
}

}


