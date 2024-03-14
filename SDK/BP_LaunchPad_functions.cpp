#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LaunchPad.BP_LaunchPad_C
// (Actor)

class UClass* ABP_LaunchPad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LaunchPad_C");

	return Clss;
}


// BP_LaunchPad_C BP_LaunchPad.Default__BP_LaunchPad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LaunchPad_C* ABP_LaunchPad_C::GetDefaultObj()
{
	static class ABP_LaunchPad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LaunchPad_C*>(ABP_LaunchPad_C::StaticClass()->DefaultObject);

	return Default;
}

}


