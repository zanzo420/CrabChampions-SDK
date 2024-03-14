#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_UnlockedCosmetic.UI_UnlockedCosmetic_C
// (None)

class UClass* UUI_UnlockedCosmetic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_UnlockedCosmetic_C");

	return Clss;
}


// UI_UnlockedCosmetic_C UI_UnlockedCosmetic.Default__UI_UnlockedCosmetic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_UnlockedCosmetic_C* UUI_UnlockedCosmetic_C::GetDefaultObj()
{
	static class UUI_UnlockedCosmetic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_UnlockedCosmetic_C*>(UUI_UnlockedCosmetic_C::StaticClass()->DefaultObject);

	return Default;
}

}


