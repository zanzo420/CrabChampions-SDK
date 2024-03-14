#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Enemy_Skull.BP_Enemy_Skull_C
// (Actor, Pawn)

class UClass* ABP_Enemy_Skull_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Enemy_Skull_C");

	return Clss;
}


// BP_Enemy_Skull_C BP_Enemy_Skull.Default__BP_Enemy_Skull_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Enemy_Skull_C* ABP_Enemy_Skull_C::GetDefaultObj()
{
	static class ABP_Enemy_Skull_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Enemy_Skull_C*>(ABP_Enemy_Skull_C::StaticClass()->DefaultObject);

	return Default;
}

}


