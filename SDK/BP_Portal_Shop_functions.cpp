#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Portal_Shop.BP_Portal_Shop_C
// (Actor)

class UClass* ABP_Portal_Shop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Portal_Shop_C");

	return Clss;
}


// BP_Portal_Shop_C BP_Portal_Shop.Default__BP_Portal_Shop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Portal_Shop_C* ABP_Portal_Shop_C::GetDefaultObj()
{
	static class ABP_Portal_Shop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Portal_Shop_C*>(ABP_Portal_Shop_C::StaticClass()->DefaultObject);

	return Default;
}

}


