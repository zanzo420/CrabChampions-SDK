#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_Starfish_AnimBP.SK_Starfish_AnimBP_C
// (None)

class UClass* USK_Starfish_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_Starfish_AnimBP_C");

	return Clss;
}


// SK_Starfish_AnimBP_C SK_Starfish_AnimBP.Default__SK_Starfish_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_Starfish_AnimBP_C* USK_Starfish_AnimBP_C::GetDefaultObj()
{
	static class USK_Starfish_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_Starfish_AnimBP_C*>(USK_Starfish_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_Starfish_AnimBP.SK_Starfish_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_Starfish_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Starfish_AnimBP_C", "AnimGraph");

	Params::USK_Starfish_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_Starfish_AnimBP.SK_Starfish_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Starfish_AnimBP_AnimGraphNode_TransitionResult_0D1288F74DF5C631444C0D9DA20C6FFF
// (BlueprintEvent)
// Parameters:

void USK_Starfish_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Starfish_AnimBP_AnimGraphNode_TransitionResult_0D1288F74DF5C631444C0D9DA20C6FFF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Starfish_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Starfish_AnimBP_AnimGraphNode_TransitionResult_0D1288F74DF5C631444C0D9DA20C6FFF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Starfish_AnimBP.SK_Starfish_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Starfish_AnimBP_AnimGraphNode_TransitionResult_6C42ACC84FB936481F855782FC9BA024
// (BlueprintEvent)
// Parameters:

void USK_Starfish_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Starfish_AnimBP_AnimGraphNode_TransitionResult_6C42ACC84FB936481F855782FC9BA024()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Starfish_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Starfish_AnimBP_AnimGraphNode_TransitionResult_6C42ACC84FB936481F855782FC9BA024");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Starfish_AnimBP.SK_Starfish_AnimBP_C.ExecuteUbergraph_SK_Starfish_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void USK_Starfish_AnimBP_C::ExecuteUbergraph_SK_Starfish_AnimBP(int32 EntryPoint, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Starfish_AnimBP_C", "ExecuteUbergraph_SK_Starfish_AnimBP");

	Params::USK_Starfish_AnimBP_C_ExecuteUbergraph_SK_Starfish_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


