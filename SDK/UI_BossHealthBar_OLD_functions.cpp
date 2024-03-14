#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_BossHealthBar_OLD.UI_BossHealthBar_OLD_C
// (None)

class UClass* UUI_BossHealthBar_OLD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_BossHealthBar_OLD_C");

	return Clss;
}


// UI_BossHealthBar_OLD_C UI_BossHealthBar_OLD.Default__UI_BossHealthBar_OLD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_BossHealthBar_OLD_C* UUI_BossHealthBar_OLD_C::GetDefaultObj()
{
	static class UUI_BossHealthBar_OLD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_BossHealthBar_OLD_C*>(UUI_BossHealthBar_OLD_C::StaticClass()->DefaultObject);

	return Default;
}

}


