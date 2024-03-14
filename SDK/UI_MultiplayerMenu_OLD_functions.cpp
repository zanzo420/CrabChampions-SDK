#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_MultiplayerMenu_OLD.UI_MultiplayerMenu_OLD_C
// (None)

class UClass* UUI_MultiplayerMenu_OLD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_MultiplayerMenu_OLD_C");

	return Clss;
}


// UI_MultiplayerMenu_OLD_C UI_MultiplayerMenu_OLD.Default__UI_MultiplayerMenu_OLD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_MultiplayerMenu_OLD_C* UUI_MultiplayerMenu_OLD_C::GetDefaultObj()
{
	static class UUI_MultiplayerMenu_OLD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_MultiplayerMenu_OLD_C*>(UUI_MultiplayerMenu_OLD_C::StaticClass()->DefaultObject);

	return Default;
}

}


