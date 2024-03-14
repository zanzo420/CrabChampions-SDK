#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ConfirmationPrompt.UI_ConfirmationPrompt_C
// (None)

class UClass* UUI_ConfirmationPrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ConfirmationPrompt_C");

	return Clss;
}


// UI_ConfirmationPrompt_C UI_ConfirmationPrompt.Default__UI_ConfirmationPrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ConfirmationPrompt_C* UUI_ConfirmationPrompt_C::GetDefaultObj()
{
	static class UUI_ConfirmationPrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ConfirmationPrompt_C*>(UUI_ConfirmationPrompt_C::StaticClass()->DefaultObject);

	return Default;
}

}


