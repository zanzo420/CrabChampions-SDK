#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PhysicsActor_Crown.BP_PhysicsActor_Crown_C
// (Actor)

class UClass* ABP_PhysicsActor_Crown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PhysicsActor_Crown_C");

	return Clss;
}


// BP_PhysicsActor_Crown_C BP_PhysicsActor_Crown.Default__BP_PhysicsActor_Crown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PhysicsActor_Crown_C* ABP_PhysicsActor_Crown_C::GetDefaultObj()
{
	static class ABP_PhysicsActor_Crown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PhysicsActor_Crown_C*>(ABP_PhysicsActor_Crown_C::StaticClass()->DefaultObject);

	return Default;
}

}


