#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Sign.UI_Sign_C
// (None)

class UClass* UUI_Sign_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Sign_C");

	return Clss;
}


// UI_Sign_C UI_Sign.Default__UI_Sign_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Sign_C* UUI_Sign_C::GetDefaultObj()
{
	static class UUI_Sign_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Sign_C*>(UUI_Sign_C::StaticClass()->DefaultObject);

	return Default;
}

}


