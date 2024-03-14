#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AnimBP_SK_Slug.AnimBP_SK_Slug_C
// (None)

class UClass* UAnimBP_SK_Slug_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBP_SK_Slug_C");

	return Clss;
}


// AnimBP_SK_Slug_C AnimBP_SK_Slug.Default__AnimBP_SK_Slug_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimBP_SK_Slug_C* UAnimBP_SK_Slug_C::GetDefaultObj()
{
	static class UAnimBP_SK_Slug_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBP_SK_Slug_C*>(UAnimBP_SK_Slug_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimBP_SK_Slug.AnimBP_SK_Slug_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAnimBP_SK_Slug_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_SK_Slug_C", "AnimGraph");

	Params::UAnimBP_SK_Slug_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AnimBP_SK_Slug.AnimBP_SK_Slug_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SK_Slug_AnimGraphNode_SequencePlayer_63435F634EF556FA04B0199D01672758
// (BlueprintEvent)
// Parameters:

void UAnimBP_SK_Slug_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SK_Slug_AnimGraphNode_SequencePlayer_63435F634EF556FA04B0199D01672758()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_SK_Slug_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SK_Slug_AnimGraphNode_SequencePlayer_63435F634EF556FA04B0199D01672758");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_SK_Slug.AnimBP_SK_Slug_C.ExecuteUbergraph_AnimBP_SK_Slug
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_SK_Slug_C::ExecuteUbergraph_AnimBP_SK_Slug(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_SK_Slug_C", "ExecuteUbergraph_AnimBP_SK_Slug");

	Params::UAnimBP_SK_Slug_C_ExecuteUbergraph_AnimBP_SK_Slug_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


