#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CosmeticSlot.UI_CosmeticSlot_C
// (None)

class UClass* UUI_CosmeticSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CosmeticSlot_C");

	return Clss;
}


// UI_CosmeticSlot_C UI_CosmeticSlot.Default__UI_CosmeticSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CosmeticSlot_C* UUI_CosmeticSlot_C::GetDefaultObj()
{
	static class UUI_CosmeticSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CosmeticSlot_C*>(UUI_CosmeticSlot_C::StaticClass()->DefaultObject);

	return Default;
}

}


