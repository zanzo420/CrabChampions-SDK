#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Enemy_GrenadeCrab.BP_Enemy_GrenadeCrab_C
// (Actor, Pawn)

class UClass* ABP_Enemy_GrenadeCrab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Enemy_GrenadeCrab_C");

	return Clss;
}


// BP_Enemy_GrenadeCrab_C BP_Enemy_GrenadeCrab.Default__BP_Enemy_GrenadeCrab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Enemy_GrenadeCrab_C* ABP_Enemy_GrenadeCrab_C::GetDefaultObj()
{
	static class ABP_Enemy_GrenadeCrab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Enemy_GrenadeCrab_C*>(ABP_Enemy_GrenadeCrab_C::StaticClass()->DefaultObject);

	return Default;
}

}


