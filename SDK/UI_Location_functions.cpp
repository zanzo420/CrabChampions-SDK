#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Location.UI_Location_C
// (None)

class UClass* UUI_Location_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Location_C");

	return Clss;
}


// UI_Location_C UI_Location.Default__UI_Location_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Location_C* UUI_Location_C::GetDefaultObj()
{
	static class UUI_Location_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Location_C*>(UUI_Location_C::StaticClass()->DefaultObject);

	return Default;
}

}


