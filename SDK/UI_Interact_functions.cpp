#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Interact.UI_Interact_C
// (None)

class UClass* UUI_Interact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Interact_C");

	return Clss;
}


// UI_Interact_C UI_Interact.Default__UI_Interact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Interact_C* UUI_Interact_C::GetDefaultObj()
{
	static class UUI_Interact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Interact_C*>(UUI_Interact_C::StaticClass()->DefaultObject);

	return Default;
}

}


