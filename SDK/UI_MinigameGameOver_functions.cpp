#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_MinigameGameOver.UI_MinigameGameOver_C
// (None)

class UClass* UUI_MinigameGameOver_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_MinigameGameOver_C");

	return Clss;
}


// UI_MinigameGameOver_C UI_MinigameGameOver.Default__UI_MinigameGameOver_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_MinigameGameOver_C* UUI_MinigameGameOver_C::GetDefaultObj()
{
	static class UUI_MinigameGameOver_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_MinigameGameOver_C*>(UUI_MinigameGameOver_C::StaticClass()->DefaultObject);

	return Default;
}

}


