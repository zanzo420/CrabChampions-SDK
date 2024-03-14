#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_JoinedPlayerRow.UI_JoinedPlayerRow_C
// (None)

class UClass* UUI_JoinedPlayerRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_JoinedPlayerRow_C");

	return Clss;
}


// UI_JoinedPlayerRow_C UI_JoinedPlayerRow.Default__UI_JoinedPlayerRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_JoinedPlayerRow_C* UUI_JoinedPlayerRow_C::GetDefaultObj()
{
	static class UUI_JoinedPlayerRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_JoinedPlayerRow_C*>(UUI_JoinedPlayerRow_C::StaticClass()->DefaultObject);

	return Default;
}

}


