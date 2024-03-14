#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_PlayerState.UI_PlayerState_C
// (None)

class UClass* UUI_PlayerState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_PlayerState_C");

	return Clss;
}


// UI_PlayerState_C UI_PlayerState.Default__UI_PlayerState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_PlayerState_C* UUI_PlayerState_C::GetDefaultObj()
{
	static class UUI_PlayerState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_PlayerState_C*>(UUI_PlayerState_C::StaticClass()->DefaultObject);

	return Default;
}

}


