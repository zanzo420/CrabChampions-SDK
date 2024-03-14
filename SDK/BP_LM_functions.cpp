#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LM.BP_LM_C
// (Actor)

class UClass* ABP_LM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LM_C");

	return Clss;
}


// BP_LM_C BP_LM.Default__BP_LM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LM_C* ABP_LM_C::GetDefaultObj()
{
	static class ABP_LM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LM_C*>(ABP_LM_C::StaticClass()->DefaultObject);

	return Default;
}

}


