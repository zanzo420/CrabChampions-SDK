#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Destructible_UltraMushroom.BP_Destructible_UltraMushroom_C
// (Actor)

class UClass* ABP_Destructible_UltraMushroom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Destructible_UltraMushroom_C");

	return Clss;
}


// BP_Destructible_UltraMushroom_C BP_Destructible_UltraMushroom.Default__BP_Destructible_UltraMushroom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Destructible_UltraMushroom_C* ABP_Destructible_UltraMushroom_C::GetDefaultObj()
{
	static class ABP_Destructible_UltraMushroom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Destructible_UltraMushroom_C*>(ABP_Destructible_UltraMushroom_C::StaticClass()->DefaultObject);

	return Default;
}

}


