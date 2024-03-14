#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpawnPoint_Reward.BP_SpawnPoint_Reward_C
// (Actor)

class UClass* ABP_SpawnPoint_Reward_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpawnPoint_Reward_C");

	return Clss;
}


// BP_SpawnPoint_Reward_C BP_SpawnPoint_Reward.Default__BP_SpawnPoint_Reward_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SpawnPoint_Reward_C* ABP_SpawnPoint_Reward_C::GetDefaultObj()
{
	static class ABP_SpawnPoint_Reward_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SpawnPoint_Reward_C*>(ABP_SpawnPoint_Reward_C::StaticClass()->DefaultObject);

	return Default;
}

}


