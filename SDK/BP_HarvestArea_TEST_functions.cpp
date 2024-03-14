#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HarvestArea_TEST.BP_HarvestArea_TEST_C
// (Actor)

class UClass* ABP_HarvestArea_TEST_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HarvestArea_TEST_C");

	return Clss;
}


// BP_HarvestArea_TEST_C BP_HarvestArea_TEST.Default__BP_HarvestArea_TEST_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HarvestArea_TEST_C* ABP_HarvestArea_TEST_C::GetDefaultObj()
{
	static class ABP_HarvestArea_TEST_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HarvestArea_TEST_C*>(ABP_HarvestArea_TEST_C::StaticClass()->DefaultObject);

	return Default;
}

}


