#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Destructible_FireRock.BP_Destructible_FireRock_C
// (Actor)

class UClass* ABP_Destructible_FireRock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Destructible_FireRock_C");

	return Clss;
}


// BP_Destructible_FireRock_C BP_Destructible_FireRock.Default__BP_Destructible_FireRock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Destructible_FireRock_C* ABP_Destructible_FireRock_C::GetDefaultObj()
{
	static class ABP_Destructible_FireRock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Destructible_FireRock_C*>(ABP_Destructible_FireRock_C::StaticClass()->DefaultObject);

	return Default;
}

}


