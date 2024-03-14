#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_SoundMenu.UI_SoundMenu_C
// (None)

class UClass* UUI_SoundMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_SoundMenu_C");

	return Clss;
}


// UI_SoundMenu_C UI_SoundMenu.Default__UI_SoundMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SoundMenu_C* UUI_SoundMenu_C::GetDefaultObj()
{
	static class UUI_SoundMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SoundMenu_C*>(UUI_SoundMenu_C::StaticClass()->DefaultObject);

	return Default;
}

}


