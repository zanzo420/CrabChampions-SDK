#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_Crab_AnimBP.SK_Crab_AnimBP_C
// (None)

class UClass* USK_Crab_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_Crab_AnimBP_C");

	return Clss;
}


// SK_Crab_AnimBP_C SK_Crab_AnimBP.Default__SK_Crab_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_Crab_AnimBP_C* USK_Crab_AnimBP_C::GetDefaultObj()
{
	static class USK_Crab_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_Crab_AnimBP_C*>(USK_Crab_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_Crab_AnimBP.SK_Crab_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_Crab_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Crab_AnimBP_C", "AnimGraph");

	Params::USK_Crab_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_Crab_AnimBP.SK_Crab_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_SequencePlayer_E4338ECD4DFB460BBB483D90B945E216
// (BlueprintEvent)
// Parameters:

void USK_Crab_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_SequencePlayer_E4338ECD4DFB460BBB483D90B945E216()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Crab_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_SequencePlayer_E4338ECD4DFB460BBB483D90B945E216");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Crab_AnimBP.SK_Crab_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_BlendListByBool_F9EDB7FF4B9502F7D00508A4D74B9E17
// (BlueprintEvent)
// Parameters:

void USK_Crab_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_BlendListByBool_F9EDB7FF4B9502F7D00508A4D74B9E17()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Crab_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_BlendListByBool_F9EDB7FF4B9502F7D00508A4D74B9E17");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Crab_AnimBP.SK_Crab_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_BlendListByBool_215BFAB940BF59D898CE37A086737F2C
// (BlueprintEvent)
// Parameters:

void USK_Crab_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_BlendListByBool_215BFAB940BF59D898CE37A086737F2C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Crab_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_BlendListByBool_215BFAB940BF59D898CE37A086737F2C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Crab_AnimBP.SK_Crab_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_SequencePlayer_8A3305B64CED6F9D8144E2810FB6882B
// (BlueprintEvent)
// Parameters:

void USK_Crab_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_SequencePlayer_8A3305B64CED6F9D8144E2810FB6882B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Crab_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_SequencePlayer_8A3305B64CED6F9D8144E2810FB6882B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Crab_AnimBP.SK_Crab_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_BlendSpacePlayer_E8712BEA4EC181C68A67D982FE6AFF10
// (BlueprintEvent)
// Parameters:

void USK_Crab_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_BlendSpacePlayer_E8712BEA4EC181C68A67D982FE6AFF10()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Crab_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_BlendSpacePlayer_E8712BEA4EC181C68A67D982FE6AFF10");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Crab_AnimBP.SK_Crab_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_TransitionResult_8E73A0074ECF2D7C189700A6EE5C4073
// (BlueprintEvent)
// Parameters:

void USK_Crab_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_TransitionResult_8E73A0074ECF2D7C189700A6EE5C4073()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Crab_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_TransitionResult_8E73A0074ECF2D7C189700A6EE5C4073");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Crab_AnimBP.SK_Crab_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_TransitionResult_0C5BFD424317F869BA9BA6952183128F
// (BlueprintEvent)
// Parameters:

void USK_Crab_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_TransitionResult_0C5BFD424317F869BA9BA6952183128F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Crab_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_TransitionResult_0C5BFD424317F869BA9BA6952183128F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Crab_AnimBP.SK_Crab_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_TransitionResult_C7DA0A2F42AA72E8164827BDEF0F70EC
// (BlueprintEvent)
// Parameters:

void USK_Crab_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_TransitionResult_C7DA0A2F42AA72E8164827BDEF0F70EC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Crab_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_TransitionResult_C7DA0A2F42AA72E8164827BDEF0F70EC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Crab_AnimBP.SK_Crab_AnimBP_C.ExecuteUbergraph_SK_Crab_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRelevantAnimTime_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void USK_Crab_AnimBP_C::ExecuteUbergraph_SK_Crab_AnimBP(int32 EntryPoint, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_GetRelevantAnimTime_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Crab_AnimBP_C", "ExecuteUbergraph_SK_Crab_AnimBP");

	Params::USK_Crab_AnimBP_C_ExecuteUbergraph_SK_Crab_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetRelevantAnimTime_ReturnValue = CallFunc_GetRelevantAnimTime_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


