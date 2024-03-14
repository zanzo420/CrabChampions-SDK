#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_MinigameGameOverRow.UI_MinigameGameOverRow_C
// (None)

class UClass* UUI_MinigameGameOverRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_MinigameGameOverRow_C");

	return Clss;
}


// UI_MinigameGameOverRow_C UI_MinigameGameOverRow.Default__UI_MinigameGameOverRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_MinigameGameOverRow_C* UUI_MinigameGameOverRow_C::GetDefaultObj()
{
	static class UUI_MinigameGameOverRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_MinigameGameOverRow_C*>(UUI_MinigameGameOverRow_C::StaticClass()->DefaultObject);

	return Default;
}

}


