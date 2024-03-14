#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_Scorpion_AnimBP.SK_Scorpion_AnimBP_C
// (None)

class UClass* USK_Scorpion_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_Scorpion_AnimBP_C");

	return Clss;
}


// SK_Scorpion_AnimBP_C SK_Scorpion_AnimBP.Default__SK_Scorpion_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_Scorpion_AnimBP_C* USK_Scorpion_AnimBP_C::GetDefaultObj()
{
	static class USK_Scorpion_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_Scorpion_AnimBP_C*>(USK_Scorpion_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_Scorpion_AnimBP.SK_Scorpion_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_Scorpion_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Scorpion_AnimBP_C", "AnimGraph");

	Params::USK_Scorpion_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_Scorpion_AnimBP.SK_Scorpion_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Scorpion_AnimBP_AnimGraphNode_SequencePlayer_81B11FE0473C7E04DDCD4B928EC21D15
// (BlueprintEvent)
// Parameters:

void USK_Scorpion_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Scorpion_AnimBP_AnimGraphNode_SequencePlayer_81B11FE0473C7E04DDCD4B928EC21D15()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Scorpion_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Scorpion_AnimBP_AnimGraphNode_SequencePlayer_81B11FE0473C7E04DDCD4B928EC21D15");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Scorpion_AnimBP.SK_Scorpion_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Scorpion_AnimBP_AnimGraphNode_TransitionResult_9A6A4C6043634A4C16C73B9CFE25A885
// (BlueprintEvent)
// Parameters:

void USK_Scorpion_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Scorpion_AnimBP_AnimGraphNode_TransitionResult_9A6A4C6043634A4C16C73B9CFE25A885()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Scorpion_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Scorpion_AnimBP_AnimGraphNode_TransitionResult_9A6A4C6043634A4C16C73B9CFE25A885");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Scorpion_AnimBP.SK_Scorpion_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Scorpion_AnimBP_AnimGraphNode_TransitionResult_D0D877C7403DFA7C45B163A28761A69D
// (BlueprintEvent)
// Parameters:

void USK_Scorpion_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Scorpion_AnimBP_AnimGraphNode_TransitionResult_D0D877C7403DFA7C45B163A28761A69D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Scorpion_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Scorpion_AnimBP_AnimGraphNode_TransitionResult_D0D877C7403DFA7C45B163A28761A69D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Scorpion_AnimBP.SK_Scorpion_AnimBP_C.ExecuteUbergraph_SK_Scorpion_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_Scorpion_AnimBP_C::ExecuteUbergraph_SK_Scorpion_AnimBP(int32 EntryPoint, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Scorpion_AnimBP_C", "ExecuteUbergraph_SK_Scorpion_AnimBP");

	Params::USK_Scorpion_AnimBP_C_ExecuteUbergraph_SK_Scorpion_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


