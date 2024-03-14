#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2E0 (0x5C0 - 0x2E0)
// AnimBlueprintGeneratedClass SK_Starfish_AnimBP.SK_Starfish_AnimBP_C
class USK_Starfish_AnimBP_C : public UCrabEnemyAnimInstance
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
	static class USK_Starfish_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Starfish_AnimBP_AnimGraphNode_TransitionResult_0D1288F74DF5C631444C0D9DA20C6FFF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Starfish_AnimBP_AnimGraphNode_TransitionResult_6C42ACC84FB936481F855782FC9BA024();
	void ExecuteUbergraph_SK_Starfish_AnimBP(int32 EntryPoint, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}


