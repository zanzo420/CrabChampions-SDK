#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamageArea_IceBlast.BP_DamageArea_IceBlast_C
// (Actor)

class UClass* ABP_DamageArea_IceBlast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamageArea_IceBlast_C");

	return Clss;
}


// BP_DamageArea_IceBlast_C BP_DamageArea_IceBlast.Default__BP_DamageArea_IceBlast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamageArea_IceBlast_C* ABP_DamageArea_IceBlast_C::GetDefaultObj()
{
	static class ABP_DamageArea_IceBlast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamageArea_IceBlast_C*>(ABP_DamageArea_IceBlast_C::StaticClass()->DefaultObject);

	return Default;
}

}


