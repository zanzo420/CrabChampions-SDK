#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Enemy_HomingGrub.BP_Enemy_HomingGrub_C
// (Actor, Pawn)

class UClass* ABP_Enemy_HomingGrub_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Enemy_HomingGrub_C");

	return Clss;
}


// BP_Enemy_HomingGrub_C BP_Enemy_HomingGrub.Default__BP_Enemy_HomingGrub_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Enemy_HomingGrub_C* ABP_Enemy_HomingGrub_C::GetDefaultObj()
{
	static class ABP_Enemy_HomingGrub_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Enemy_HomingGrub_C*>(ABP_Enemy_HomingGrub_C::StaticClass()->DefaultObject);

	return Default;
}

}


