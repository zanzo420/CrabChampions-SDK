#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_DifficultyMenu_OLD.UI_DifficultyMenu_OLD_C
// (None)

class UClass* UUI_DifficultyMenu_OLD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_DifficultyMenu_OLD_C");

	return Clss;
}


// UI_DifficultyMenu_OLD_C UI_DifficultyMenu_OLD.Default__UI_DifficultyMenu_OLD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_DifficultyMenu_OLD_C* UUI_DifficultyMenu_OLD_C::GetDefaultObj()
{
	static class UUI_DifficultyMenu_OLD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_DifficultyMenu_OLD_C*>(UUI_DifficultyMenu_OLD_C::StaticClass()->DefaultObject);

	return Default;
}

}


