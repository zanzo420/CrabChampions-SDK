#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EliteBarrelSkull_Barrel.BP_EliteBarrelSkull_Barrel_C
// (Actor)

class UClass* ABP_EliteBarrelSkull_Barrel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EliteBarrelSkull_Barrel_C");

	return Clss;
}


// BP_EliteBarrelSkull_Barrel_C BP_EliteBarrelSkull_Barrel.Default__BP_EliteBarrelSkull_Barrel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EliteBarrelSkull_Barrel_C* ABP_EliteBarrelSkull_Barrel_C::GetDefaultObj()
{
	static class ABP_EliteBarrelSkull_Barrel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EliteBarrelSkull_Barrel_C*>(ABP_EliteBarrelSkull_Barrel_C::StaticClass()->DefaultObject);

	return Default;
}

}


