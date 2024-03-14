#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AnimBP_SK_Pufferfish.AnimBP_SK_Pufferfish_C
// (None)

class UClass* UAnimBP_SK_Pufferfish_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBP_SK_Pufferfish_C");

	return Clss;
}


// AnimBP_SK_Pufferfish_C AnimBP_SK_Pufferfish.Default__AnimBP_SK_Pufferfish_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimBP_SK_Pufferfish_C* UAnimBP_SK_Pufferfish_C::GetDefaultObj()
{
	static class UAnimBP_SK_Pufferfish_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBP_SK_Pufferfish_C*>(UAnimBP_SK_Pufferfish_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimBP_SK_Pufferfish.AnimBP_SK_Pufferfish_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAnimBP_SK_Pufferfish_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_SK_Pufferfish_C", "AnimGraph");

	Params::UAnimBP_SK_Pufferfish_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AnimBP_SK_Pufferfish.AnimBP_SK_Pufferfish_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SK_Pufferfish_AnimGraphNode_SequencePlayer_869AA08746C9DE95EEAE2895CB29DEC6
// (BlueprintEvent)
// Parameters:

void UAnimBP_SK_Pufferfish_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SK_Pufferfish_AnimGraphNode_SequencePlayer_869AA08746C9DE95EEAE2895CB29DEC6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_SK_Pufferfish_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SK_Pufferfish_AnimGraphNode_SequencePlayer_869AA08746C9DE95EEAE2895CB29DEC6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_SK_Pufferfish.AnimBP_SK_Pufferfish_C.ExecuteUbergraph_AnimBP_SK_Pufferfish
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_SK_Pufferfish_C::ExecuteUbergraph_AnimBP_SK_Pufferfish(int32 EntryPoint, float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_SK_Pufferfish_C", "ExecuteUbergraph_AnimBP_SK_Pufferfish");

	Params::UAnimBP_SK_Pufferfish_C_ExecuteUbergraph_AnimBP_SK_Pufferfish_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


