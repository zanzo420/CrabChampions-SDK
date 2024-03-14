#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Enemy_PoisonSlug.BP_Enemy_PoisonSlug_C
// (Actor, Pawn)

class UClass* ABP_Enemy_PoisonSlug_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Enemy_PoisonSlug_C");

	return Clss;
}


// BP_Enemy_PoisonSlug_C BP_Enemy_PoisonSlug.Default__BP_Enemy_PoisonSlug_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Enemy_PoisonSlug_C* ABP_Enemy_PoisonSlug_C::GetDefaultObj()
{
	static class ABP_Enemy_PoisonSlug_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Enemy_PoisonSlug_C*>(ABP_Enemy_PoisonSlug_C::StaticClass()->DefaultObject);

	return Default;
}

}


