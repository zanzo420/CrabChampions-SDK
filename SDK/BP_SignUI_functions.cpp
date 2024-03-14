#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SignUI.BP_SignUI_C
// (Actor)

class UClass* ABP_SignUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SignUI_C");

	return Clss;
}


// BP_SignUI_C BP_SignUI.Default__BP_SignUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SignUI_C* ABP_SignUI_C::GetDefaultObj()
{
	static class ABP_SignUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SignUI_C*>(ABP_SignUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SignUI.BP_SignUI_C.RefreshSignUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UUI_Sign_C*                  K2Node_DynamicCast_AsUI_Sign                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SignUI_C::RefreshSignUI(class UUserWidget* CallFunc_GetWidget_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UUI_Sign_C* K2Node_DynamicCast_AsUI_Sign, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SignUI_C", "RefreshSignUI");

	Params::ABP_SignUI_C_RefreshSignUI_Params Parms{};

	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Sign = K2Node_DynamicCast_AsUI_Sign;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SignUI.BP_SignUI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SignUI_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SignUI_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SignUI.BP_SignUI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SignUI_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SignUI_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SignUI.BP_SignUI_C.ExecuteUbergraph_BP_SignUI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SignUI_C::ExecuteUbergraph_BP_SignUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SignUI_C", "ExecuteUbergraph_BP_SignUI");

	Params::ABP_SignUI_C_ExecuteUbergraph_BP_SignUI_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


