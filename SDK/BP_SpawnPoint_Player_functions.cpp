#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpawnPoint_Player.BP_SpawnPoint_Player_C
// (Actor)

class UClass* ABP_SpawnPoint_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpawnPoint_Player_C");

	return Clss;
}


// BP_SpawnPoint_Player_C BP_SpawnPoint_Player.Default__BP_SpawnPoint_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SpawnPoint_Player_C* ABP_SpawnPoint_Player_C::GetDefaultObj()
{
	static class ABP_SpawnPoint_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SpawnPoint_Player_C*>(ABP_SpawnPoint_Player_C::StaticClass()->DefaultObject);

	return Default;
}

}


