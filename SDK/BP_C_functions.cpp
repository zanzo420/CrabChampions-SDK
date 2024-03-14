#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_C.BP_C_C
// (Actor, Pawn)

class UClass* ABP_C_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_C_C");

	return Clss;
}


// BP_C_C BP_C.Default__BP_C_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_C_C* ABP_C_C::GetDefaultObj()
{
	static class ABP_C_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_C_C*>(ABP_C_C::StaticClass()->DefaultObject);

	return Default;
}

}


