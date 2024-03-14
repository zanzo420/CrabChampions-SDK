#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Interact_Minimal.UI_Interact_Minimal_C
// (None)

class UClass* UUI_Interact_Minimal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Interact_Minimal_C");

	return Clss;
}


// UI_Interact_Minimal_C UI_Interact_Minimal.Default__UI_Interact_Minimal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Interact_Minimal_C* UUI_Interact_Minimal_C::GetDefaultObj()
{
	static class UUI_Interact_Minimal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Interact_Minimal_C*>(UUI_Interact_Minimal_C::StaticClass()->DefaultObject);

	return Default;
}

}


