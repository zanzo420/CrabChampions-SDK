#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Crosshair.UI_Crosshair_C
// (None)

class UClass* UUI_Crosshair_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Crosshair_C");

	return Clss;
}


// UI_Crosshair_C UI_Crosshair.Default__UI_Crosshair_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Crosshair_C* UUI_Crosshair_C::GetDefaultObj()
{
	static class UUI_Crosshair_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Crosshair_C*>(UUI_Crosshair_C::StaticClass()->DefaultObject);

	return Default;
}

}


