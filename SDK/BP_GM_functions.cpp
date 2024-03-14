#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GM.BP_GM_C
// (Actor)

class UClass* ABP_GM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GM_C");

	return Clss;
}


// BP_GM_C BP_GM.Default__BP_GM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GM_C* ABP_GM_C::GetDefaultObj()
{
	static class ABP_GM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GM_C*>(ABP_GM_C::StaticClass()->DefaultObject);

	return Default;
}

}


