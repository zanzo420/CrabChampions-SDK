#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GI.BP_GI_C
// (None)

class UClass* UBP_GI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GI_C");

	return Clss;
}


// BP_GI_C BP_GI.Default__BP_GI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GI_C* UBP_GI_C::GetDefaultObj()
{
	static class UBP_GI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GI_C*>(UBP_GI_C::StaticClass()->DefaultObject);

	return Default;
}

}


