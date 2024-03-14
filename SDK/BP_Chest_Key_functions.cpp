#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Chest_Key.BP_Chest_Key_C
// (Actor)

class UClass* ABP_Chest_Key_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Chest_Key_C");

	return Clss;
}


// BP_Chest_Key_C BP_Chest_Key.Default__BP_Chest_Key_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Chest_Key_C* ABP_Chest_Key_C::GetDefaultObj()
{
	static class ABP_Chest_Key_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Chest_Key_C*>(ABP_Chest_Key_C::StaticClass()->DefaultObject);

	return Default;
}

}


