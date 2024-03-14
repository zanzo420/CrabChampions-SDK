#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ShopPedestal.BP_ShopPedestal_C
// (Actor)

class UClass* ABP_ShopPedestal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ShopPedestal_C");

	return Clss;
}


// BP_ShopPedestal_C BP_ShopPedestal.Default__BP_ShopPedestal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ShopPedestal_C* ABP_ShopPedestal_C::GetDefaultObj()
{
	static class ABP_ShopPedestal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ShopPedestal_C*>(ABP_ShopPedestal_C::StaticClass()->DefaultObject);

	return Default;
}

}


