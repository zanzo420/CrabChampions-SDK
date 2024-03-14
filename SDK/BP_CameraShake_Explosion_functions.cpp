#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CameraShake_Explosion.BP_CameraShake_Explosion_C
// (None)

class UClass* UBP_CameraShake_Explosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CameraShake_Explosion_C");

	return Clss;
}


// BP_CameraShake_Explosion_C BP_CameraShake_Explosion.Default__BP_CameraShake_Explosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CameraShake_Explosion_C* UBP_CameraShake_Explosion_C::GetDefaultObj()
{
	static class UBP_CameraShake_Explosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CameraShake_Explosion_C*>(UBP_CameraShake_Explosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


