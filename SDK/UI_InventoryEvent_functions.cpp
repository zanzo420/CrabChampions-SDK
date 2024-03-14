#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_InventoryEvent.UI_InventoryEvent_C
// (None)

class UClass* UUI_InventoryEvent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_InventoryEvent_C");

	return Clss;
}


// UI_InventoryEvent_C UI_InventoryEvent.Default__UI_InventoryEvent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_InventoryEvent_C* UUI_InventoryEvent_C::GetDefaultObj()
{
	static class UUI_InventoryEvent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_InventoryEvent_C*>(UUI_InventoryEvent_C::StaticClass()->DefaultObject);

	return Default;
}

}


