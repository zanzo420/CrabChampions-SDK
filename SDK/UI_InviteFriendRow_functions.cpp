#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_InviteFriendRow.UI_InviteFriendRow_C
// (None)

class UClass* UUI_InviteFriendRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_InviteFriendRow_C");

	return Clss;
}


// UI_InviteFriendRow_C UI_InviteFriendRow.Default__UI_InviteFriendRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_InviteFriendRow_C* UUI_InviteFriendRow_C::GetDefaultObj()
{
	static class UUI_InviteFriendRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_InviteFriendRow_C*>(UUI_InviteFriendRow_C::StaticClass()->DefaultObject);

	return Default;
}

}


