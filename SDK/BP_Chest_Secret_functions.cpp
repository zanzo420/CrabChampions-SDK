#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Chest_Secret.BP_Chest_Secret_C
// (Actor)

class UClass* ABP_Chest_Secret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Chest_Secret_C");

	return Clss;
}


// BP_Chest_Secret_C BP_Chest_Secret.Default__BP_Chest_Secret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Chest_Secret_C* ABP_Chest_Secret_C::GetDefaultObj()
{
	static class ABP_Chest_Secret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Chest_Secret_C*>(ABP_Chest_Secret_C::StaticClass()->DefaultObject);

	return Default;
}

}


