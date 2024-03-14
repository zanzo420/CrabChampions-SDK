#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpawnPoint_Portal.BP_SpawnPoint_Portal_C
// (Actor)

class UClass* ABP_SpawnPoint_Portal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpawnPoint_Portal_C");

	return Clss;
}


// BP_SpawnPoint_Portal_C BP_SpawnPoint_Portal.Default__BP_SpawnPoint_Portal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SpawnPoint_Portal_C* ABP_SpawnPoint_Portal_C::GetDefaultObj()
{
	static class ABP_SpawnPoint_Portal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SpawnPoint_Portal_C*>(ABP_SpawnPoint_Portal_C::StaticClass()->DefaultObject);

	return Default;
}

}


