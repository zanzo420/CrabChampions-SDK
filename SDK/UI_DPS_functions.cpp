#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_DPS.UI_DPS_C
// (None)

class UClass* UUI_DPS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_DPS_C");

	return Clss;
}


// UI_DPS_C UI_DPS.Default__UI_DPS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_DPS_C* UUI_DPS_C::GetDefaultObj()
{
	static class UUI_DPS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_DPS_C*>(UUI_DPS_C::StaticClass()->DefaultObject);

	return Default;
}

}


