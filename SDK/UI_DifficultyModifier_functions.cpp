#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_DifficultyModifier.UI_DifficultyModifier_C
// (None)

class UClass* UUI_DifficultyModifier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_DifficultyModifier_C");

	return Clss;
}


// UI_DifficultyModifier_C UI_DifficultyModifier.Default__UI_DifficultyModifier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_DifficultyModifier_C* UUI_DifficultyModifier_C::GetDefaultObj()
{
	static class UUI_DifficultyModifier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_DifficultyModifier_C*>(UUI_DifficultyModifier_C::StaticClass()->DefaultObject);

	return Default;
}

}


