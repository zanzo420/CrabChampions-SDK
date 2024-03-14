#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Totem_Difficulty.BP_Totem_Difficulty_C
// (Actor)

class UClass* ABP_Totem_Difficulty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Totem_Difficulty_C");

	return Clss;
}


// BP_Totem_Difficulty_C BP_Totem_Difficulty.Default__BP_Totem_Difficulty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Totem_Difficulty_C* ABP_Totem_Difficulty_C::GetDefaultObj()
{
	static class ABP_Totem_Difficulty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Totem_Difficulty_C*>(ABP_Totem_Difficulty_C::StaticClass()->DefaultObject);

	return Default;
}

}


