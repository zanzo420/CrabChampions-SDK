#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_Crab_AnimBP_Enemy.SK_Crab_AnimBP_Enemy_C
// (None)

class UClass* USK_Crab_AnimBP_Enemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_Crab_AnimBP_Enemy_C");

	return Clss;
}


// SK_Crab_AnimBP_Enemy_C SK_Crab_AnimBP_Enemy.Default__SK_Crab_AnimBP_Enemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_Crab_AnimBP_Enemy_C* USK_Crab_AnimBP_Enemy_C::GetDefaultObj()
{
	static class USK_Crab_AnimBP_Enemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_Crab_AnimBP_Enemy_C*>(USK_Crab_AnimBP_Enemy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_Crab_AnimBP_Enemy.SK_Crab_AnimBP_Enemy_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_Crab_AnimBP_Enemy_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Crab_AnimBP_Enemy_C", "AnimGraph");

	Params::USK_Crab_AnimBP_Enemy_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_Crab_AnimBP_Enemy.SK_Crab_AnimBP_Enemy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_BlendSpacePlayer_F3EF04094EB895D6B20F42A20A3AE705
// (BlueprintEvent)
// Parameters:

void USK_Crab_AnimBP_Enemy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_BlendSpacePlayer_F3EF04094EB895D6B20F42A20A3AE705()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Crab_AnimBP_Enemy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_BlendSpacePlayer_F3EF04094EB895D6B20F42A20A3AE705");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Crab_AnimBP_Enemy.SK_Crab_AnimBP_Enemy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_DD6C5B45424C4923F0B97B97F2DC0A48
// (BlueprintEvent)
// Parameters:

void USK_Crab_AnimBP_Enemy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_DD6C5B45424C4923F0B97B97F2DC0A48()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Crab_AnimBP_Enemy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_DD6C5B45424C4923F0B97B97F2DC0A48");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Crab_AnimBP_Enemy.SK_Crab_AnimBP_Enemy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_1F263FEE4CD1ACA6F8D1929A772145F9
// (BlueprintEvent)
// Parameters:

void USK_Crab_AnimBP_Enemy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_1F263FEE4CD1ACA6F8D1929A772145F9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Crab_AnimBP_Enemy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_1F263FEE4CD1ACA6F8D1929A772145F9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Crab_AnimBP_Enemy.SK_Crab_AnimBP_Enemy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_6384B838415B210E76C0E29D0CDA5515
// (BlueprintEvent)
// Parameters:

void USK_Crab_AnimBP_Enemy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_6384B838415B210E76C0E29D0CDA5515()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Crab_AnimBP_Enemy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_6384B838415B210E76C0E29D0CDA5515");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Crab_AnimBP_Enemy.SK_Crab_AnimBP_Enemy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_6738C0EE4CEC17D99C5117869B7001BE
// (BlueprintEvent)
// Parameters:

void USK_Crab_AnimBP_Enemy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_6738C0EE4CEC17D99C5117869B7001BE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Crab_AnimBP_Enemy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_6738C0EE4CEC17D99C5117869B7001BE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Crab_AnimBP_Enemy.SK_Crab_AnimBP_Enemy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_DD8F65FF423482C538A43999A4629F14
// (BlueprintEvent)
// Parameters:

void USK_Crab_AnimBP_Enemy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_DD8F65FF423482C538A43999A4629F14()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Crab_AnimBP_Enemy_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_DD8F65FF423482C538A43999A4629F14");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Crab_AnimBP_Enemy.SK_Crab_AnimBP_Enemy_C.ExecuteUbergraph_SK_Crab_AnimBP_Enemy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRelevantAnimTime_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_Crab_AnimBP_Enemy_C::ExecuteUbergraph_SK_Crab_AnimBP_Enemy(int32 EntryPoint, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetRelevantAnimTime_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Crab_AnimBP_Enemy_C", "ExecuteUbergraph_SK_Crab_AnimBP_Enemy");

	Params::USK_Crab_AnimBP_Enemy_C_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetRelevantAnimTime_ReturnValue = CallFunc_GetRelevantAnimTime_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


