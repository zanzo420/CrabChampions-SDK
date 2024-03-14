#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AnimBP_SK_Ant.AnimBP_SK_Ant_C
// (None)

class UClass* UAnimBP_SK_Ant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBP_SK_Ant_C");

	return Clss;
}


// AnimBP_SK_Ant_C AnimBP_SK_Ant.Default__AnimBP_SK_Ant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimBP_SK_Ant_C* UAnimBP_SK_Ant_C::GetDefaultObj()
{
	static class UAnimBP_SK_Ant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBP_SK_Ant_C*>(UAnimBP_SK_Ant_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimBP_SK_Ant.AnimBP_SK_Ant_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAnimBP_SK_Ant_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_SK_Ant_C", "AnimGraph");

	Params::UAnimBP_SK_Ant_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AnimBP_SK_Ant.AnimBP_SK_Ant_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SK_Ant_AnimGraphNode_SequencePlayer_D2AABB1245CF5D4315EE3682432C4FC1
// (BlueprintEvent)
// Parameters:

void UAnimBP_SK_Ant_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SK_Ant_AnimGraphNode_SequencePlayer_D2AABB1245CF5D4315EE3682432C4FC1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_SK_Ant_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SK_Ant_AnimGraphNode_SequencePlayer_D2AABB1245CF5D4315EE3682432C4FC1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_SK_Ant.AnimBP_SK_Ant_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SK_Ant_AnimGraphNode_TransitionResult_EFD531AF4CCCF35426237183F9A8C589
// (BlueprintEvent)
// Parameters:

void UAnimBP_SK_Ant_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SK_Ant_AnimGraphNode_TransitionResult_EFD531AF4CCCF35426237183F9A8C589()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_SK_Ant_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SK_Ant_AnimGraphNode_TransitionResult_EFD531AF4CCCF35426237183F9A8C589");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_SK_Ant.AnimBP_SK_Ant_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SK_Ant_AnimGraphNode_TransitionResult_7D0F405F45D240C59EC504B10106FE14
// (BlueprintEvent)
// Parameters:

void UAnimBP_SK_Ant_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SK_Ant_AnimGraphNode_TransitionResult_7D0F405F45D240C59EC504B10106FE14()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_SK_Ant_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SK_Ant_AnimGraphNode_TransitionResult_7D0F405F45D240C59EC504B10106FE14");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_SK_Ant.AnimBP_SK_Ant_C.ExecuteUbergraph_AnimBP_SK_Ant
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_SK_Ant_C::ExecuteUbergraph_AnimBP_SK_Ant(int32 EntryPoint, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_SK_Ant_C", "ExecuteUbergraph_AnimBP_SK_Ant");

	Params::UAnimBP_SK_Ant_C_ExecuteUbergraph_AnimBP_SK_Ant_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


