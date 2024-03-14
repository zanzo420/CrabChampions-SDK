#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Portal_Arcade.BP_Portal_Arcade_C
// (Actor)

class UClass* ABP_Portal_Arcade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Portal_Arcade_C");

	return Clss;
}


// BP_Portal_Arcade_C BP_Portal_Arcade.Default__BP_Portal_Arcade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Portal_Arcade_C* ABP_Portal_Arcade_C::GetDefaultObj()
{
	static class ABP_Portal_Arcade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Portal_Arcade_C*>(ABP_Portal_Arcade_C::StaticClass()->DefaultObject);

	return Default;
}

}


