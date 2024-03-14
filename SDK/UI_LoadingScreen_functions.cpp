#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_LoadingScreen.UI_LoadingScreen_C
// (None)

class UClass* UUI_LoadingScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_LoadingScreen_C");

	return Clss;
}


// UI_LoadingScreen_C UI_LoadingScreen.Default__UI_LoadingScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_LoadingScreen_C* UUI_LoadingScreen_C::GetDefaultObj()
{
	static class UUI_LoadingScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_LoadingScreen_C*>(UUI_LoadingScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


