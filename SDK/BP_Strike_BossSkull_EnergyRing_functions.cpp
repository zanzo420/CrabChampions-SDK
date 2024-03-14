#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Strike_BossSkull_EnergyRing.BP_Strike_BossSkull_EnergyRing_C
// (Actor)

class UClass* ABP_Strike_BossSkull_EnergyRing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Strike_BossSkull_EnergyRing_C");

	return Clss;
}


// BP_Strike_BossSkull_EnergyRing_C BP_Strike_BossSkull_EnergyRing.Default__BP_Strike_BossSkull_EnergyRing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Strike_BossSkull_EnergyRing_C* ABP_Strike_BossSkull_EnergyRing_C::GetDefaultObj()
{
	static class ABP_Strike_BossSkull_EnergyRing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Strike_BossSkull_EnergyRing_C*>(ABP_Strike_BossSkull_EnergyRing_C::StaticClass()->DefaultObject);

	return Default;
}

}


