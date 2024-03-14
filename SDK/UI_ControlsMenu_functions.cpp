#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ControlsMenu.UI_ControlsMenu_C
// (None)

class UClass* UUI_ControlsMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ControlsMenu_C");

	return Clss;
}


// UI_ControlsMenu_C UI_ControlsMenu.Default__UI_ControlsMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ControlsMenu_C* UUI_ControlsMenu_C::GetDefaultObj()
{
	static class UUI_ControlsMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ControlsMenu_C*>(UUI_ControlsMenu_C::StaticClass()->DefaultObject);

	return Default;
}

}


