#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Strike_FirePumpkin.BP_Strike_FirePumpkin_C
// (Actor)

class UClass* ABP_Strike_FirePumpkin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Strike_FirePumpkin_C");

	return Clss;
}


// BP_Strike_FirePumpkin_C BP_Strike_FirePumpkin.Default__BP_Strike_FirePumpkin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Strike_FirePumpkin_C* ABP_Strike_FirePumpkin_C::GetDefaultObj()
{
	static class ABP_Strike_FirePumpkin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Strike_FirePumpkin_C*>(ABP_Strike_FirePumpkin_C::StaticClass()->DefaultObject);

	return Default;
}

}


