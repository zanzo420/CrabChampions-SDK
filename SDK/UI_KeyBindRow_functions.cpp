#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_KeyBindRow.UI_KeyBindRow_C
// (None)

class UClass* UUI_KeyBindRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_KeyBindRow_C");

	return Clss;
}


// UI_KeyBindRow_C UI_KeyBindRow.Default__UI_KeyBindRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_KeyBindRow_C* UUI_KeyBindRow_C::GetDefaultObj()
{
	static class UUI_KeyBindRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_KeyBindRow_C*>(UUI_KeyBindRow_C::StaticClass()->DefaultObject);

	return Default;
}

}


