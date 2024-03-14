#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Totem_Multiplayer.BP_Totem_Multiplayer_C
// (Actor)

class UClass* ABP_Totem_Multiplayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Totem_Multiplayer_C");

	return Clss;
}


// BP_Totem_Multiplayer_C BP_Totem_Multiplayer.Default__BP_Totem_Multiplayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Totem_Multiplayer_C* ABP_Totem_Multiplayer_C::GetDefaultObj()
{
	static class ABP_Totem_Multiplayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Totem_Multiplayer_C*>(ABP_Totem_Multiplayer_C::StaticClass()->DefaultObject);

	return Default;
}

}


