#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_DamageText_OLD.UI_DamageText_OLD_C
// (None)

class UClass* UUI_DamageText_OLD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_DamageText_OLD_C");

	return Clss;
}


// UI_DamageText_OLD_C UI_DamageText_OLD.Default__UI_DamageText_OLD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_DamageText_OLD_C* UUI_DamageText_OLD_C::GetDefaultObj()
{
	static class UUI_DamageText_OLD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_DamageText_OLD_C*>(UUI_DamageText_OLD_C::StaticClass()->DefaultObject);

	return Default;
}

}


