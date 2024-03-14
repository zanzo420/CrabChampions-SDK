#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ArrowSelection.UI_ArrowSelection_C
// (None)

class UClass* UUI_ArrowSelection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ArrowSelection_C");

	return Clss;
}


// UI_ArrowSelection_C UI_ArrowSelection.Default__UI_ArrowSelection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ArrowSelection_C* UUI_ArrowSelection_C::GetDefaultObj()
{
	static class UUI_ArrowSelection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ArrowSelection_C*>(UUI_ArrowSelection_C::StaticClass()->DefaultObject);

	return Default;
}

}


