#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Enemy_MinigunCrab.BP_Enemy_MinigunCrab_C
// (Actor, Pawn)

class UClass* ABP_Enemy_MinigunCrab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Enemy_MinigunCrab_C");

	return Clss;
}


// BP_Enemy_MinigunCrab_C BP_Enemy_MinigunCrab.Default__BP_Enemy_MinigunCrab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Enemy_MinigunCrab_C* ABP_Enemy_MinigunCrab_C::GetDefaultObj()
{
	static class ABP_Enemy_MinigunCrab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Enemy_MinigunCrab_C*>(ABP_Enemy_MinigunCrab_C::StaticClass()->DefaultObject);

	return Default;
}

}


