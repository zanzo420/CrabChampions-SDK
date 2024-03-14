#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Portal_Horde.BP_Portal_Horde_C
// (Actor)

class UClass* ABP_Portal_Horde_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Portal_Horde_C");

	return Clss;
}


// BP_Portal_Horde_C BP_Portal_Horde.Default__BP_Portal_Horde_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Portal_Horde_C* ABP_Portal_Horde_C::GetDefaultObj()
{
	static class ABP_Portal_Horde_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Portal_Horde_C*>(ABP_Portal_Horde_C::StaticClass()->DefaultObject);

	return Default;
}

}


