#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Enemy_LightningAnt.BP_Enemy_LightningAnt_C
// (Actor, Pawn)

class UClass* ABP_Enemy_LightningAnt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Enemy_LightningAnt_C");

	return Clss;
}


// BP_Enemy_LightningAnt_C BP_Enemy_LightningAnt.Default__BP_Enemy_LightningAnt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Enemy_LightningAnt_C* ABP_Enemy_LightningAnt_C::GetDefaultObj()
{
	static class ABP_Enemy_LightningAnt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Enemy_LightningAnt_C*>(ABP_Enemy_LightningAnt_C::StaticClass()->DefaultObject);

	return Default;
}

}


