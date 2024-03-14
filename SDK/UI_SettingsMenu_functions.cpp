#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_SettingsMenu.UI_SettingsMenu_C
// (None)

class UClass* UUI_SettingsMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_SettingsMenu_C");

	return Clss;
}


// UI_SettingsMenu_C UI_SettingsMenu.Default__UI_SettingsMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SettingsMenu_C* UUI_SettingsMenu_C::GetDefaultObj()
{
	static class UUI_SettingsMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SettingsMenu_C*>(UUI_SettingsMenu_C::StaticClass()->DefaultObject);

	return Default;
}

}


