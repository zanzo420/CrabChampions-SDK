#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AnimBP_SK_Skull.AnimBP_SK_Skull_C
// (None)

class UClass* UAnimBP_SK_Skull_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBP_SK_Skull_C");

	return Clss;
}


// AnimBP_SK_Skull_C AnimBP_SK_Skull.Default__AnimBP_SK_Skull_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimBP_SK_Skull_C* UAnimBP_SK_Skull_C::GetDefaultObj()
{
	static class UAnimBP_SK_Skull_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBP_SK_Skull_C*>(UAnimBP_SK_Skull_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimBP_SK_Skull.AnimBP_SK_Skull_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAnimBP_SK_Skull_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_SK_Skull_C", "AnimGraph");

	Params::UAnimBP_SK_Skull_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AnimBP_SK_Skull.AnimBP_SK_Skull_C.ExecuteUbergraph_AnimBP_SK_Skull
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_SK_Skull_C::ExecuteUbergraph_AnimBP_SK_Skull(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_SK_Skull_C", "ExecuteUbergraph_AnimBP_SK_Skull");

	Params::UAnimBP_SK_Skull_C_ExecuteUbergraph_AnimBP_SK_Skull_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


