#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StatsPedestal.BP_StatsPedestal_C
// (Actor)

class UClass* ABP_StatsPedestal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StatsPedestal_C");

	return Clss;
}


// BP_StatsPedestal_C BP_StatsPedestal.Default__BP_StatsPedestal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StatsPedestal_C* ABP_StatsPedestal_C::GetDefaultObj()
{
	static class ABP_StatsPedestal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StatsPedestal_C*>(ABP_StatsPedestal_C::StaticClass()->DefaultObject);

	return Default;
}

}


