#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2E0 (0x5C0 - 0x2E0)
// AnimBlueprintGeneratedClass AnimBP_SK_Ant.AnimBP_SK_Ant_C
class UAnimBP_SK_Ant_C : public UCrabEnemyAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2E8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x318(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x360(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x388(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x3B0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x430(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x460(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x4E0(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x510(0xB0)(None)

	static class UClass* StaticClass();
	static class UAnimBP_SK_Ant_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SK_Ant_AnimGraphNode_SequencePlayer_D2AABB1245CF5D4315EE3682432C4FC1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SK_Ant_AnimGraphNode_TransitionResult_EFD531AF4CCCF35426237183F9A8C589();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SK_Ant_AnimGraphNode_TransitionResult_7D0F405F45D240C59EC504B10106FE14();
	void ExecuteUbergraph_AnimBP_SK_Ant(int32 EntryPoint, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


