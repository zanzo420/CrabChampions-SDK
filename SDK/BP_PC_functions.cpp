#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PC.BP_PC_C
// (Actor, PlayerController)

class UClass* ABP_PC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PC_C");

	return Clss;
}


// BP_PC_C BP_PC.Default__BP_PC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PC_C* ABP_PC_C::GetDefaultObj()
{
	static class ABP_PC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PC_C*>(ABP_PC_C::StaticClass()->DefaultObject);

	return Default;
}

}


