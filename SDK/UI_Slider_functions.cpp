#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Slider.UI_Slider_C
// (None)

class UClass* UUI_Slider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Slider_C");

	return Clss;
}


// UI_Slider_C UI_Slider.Default__UI_Slider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Slider_C* UUI_Slider_C::GetDefaultObj()
{
	static class UUI_Slider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Slider_C*>(UUI_Slider_C::StaticClass()->DefaultObject);

	return Default;
}

}


