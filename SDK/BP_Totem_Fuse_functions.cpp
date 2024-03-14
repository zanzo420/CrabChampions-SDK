#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Totem_Fuse.BP_Totem_Fuse_C
// (Actor)

class UClass* ABP_Totem_Fuse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Totem_Fuse_C");

	return Clss;
}


// BP_Totem_Fuse_C BP_Totem_Fuse.Default__BP_Totem_Fuse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Totem_Fuse_C* ABP_Totem_Fuse_C::GetDefaultObj()
{
	static class ABP_Totem_Fuse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Totem_Fuse_C*>(ABP_Totem_Fuse_C::StaticClass()->DefaultObject);

	return Default;
}

}


