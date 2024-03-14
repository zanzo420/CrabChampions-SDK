#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_HealthBar.UI_HealthBar_C
// (None)

class UClass* UUI_HealthBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_HealthBar_C");

	return Clss;
}


// UI_HealthBar_C UI_HealthBar.Default__UI_HealthBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_HealthBar_C* UUI_HealthBar_C::GetDefaultObj()
{
	static class UUI_HealthBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_HealthBar_C*>(UUI_HealthBar_C::StaticClass()->DefaultObject);

	return Default;
}

}


