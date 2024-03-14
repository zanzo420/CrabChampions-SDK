#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_GameOverRow.UI_GameOverRow_C
// (None)

class UClass* UUI_GameOverRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_GameOverRow_C");

	return Clss;
}


// UI_GameOverRow_C UI_GameOverRow.Default__UI_GameOverRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_GameOverRow_C* UUI_GameOverRow_C::GetDefaultObj()
{
	static class UUI_GameOverRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_GameOverRow_C*>(UUI_GameOverRow_C::StaticClass()->DefaultObject);

	return Default;
}

}


