#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Pickup_Lobby.BP_Pickup_Lobby_C
// (Actor)

class UClass* ABP_Pickup_Lobby_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Pickup_Lobby_C");

	return Clss;
}


// BP_Pickup_Lobby_C BP_Pickup_Lobby.Default__BP_Pickup_Lobby_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Pickup_Lobby_C* ABP_Pickup_Lobby_C::GetDefaultObj()
{
	static class ABP_Pickup_Lobby_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Pickup_Lobby_C*>(ABP_Pickup_Lobby_C::StaticClass()->DefaultObject);

	return Default;
}

}


