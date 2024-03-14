#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_VideoMenu.UI_VideoMenu_C
// (None)

class UClass* UUI_VideoMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_VideoMenu_C");

	return Clss;
}


// UI_VideoMenu_C UI_VideoMenu.Default__UI_VideoMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_VideoMenu_C* UUI_VideoMenu_C::GetDefaultObj()
{
	static class UUI_VideoMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_VideoMenu_C*>(UUI_VideoMenu_C::StaticClass()->DefaultObject);

	return Default;
}

}


