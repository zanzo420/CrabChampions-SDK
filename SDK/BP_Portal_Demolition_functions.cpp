#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Portal_Demolition.BP_Portal_Demolition_C
// (Actor)

class UClass* ABP_Portal_Demolition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Portal_Demolition_C");

	return Clss;
}


// BP_Portal_Demolition_C BP_Portal_Demolition.Default__BP_Portal_Demolition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Portal_Demolition_C* ABP_Portal_Demolition_C::GetDefaultObj()
{
	static class ABP_Portal_Demolition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Portal_Demolition_C*>(ABP_Portal_Demolition_C::StaticClass()->DefaultObject);

	return Default;
}

}


