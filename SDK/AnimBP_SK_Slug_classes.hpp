#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x398 - 0x2E0)
// AnimBlueprintGeneratedClass AnimBP_SK_Slug.AnimBP_SK_Slug_C
class UAnimBP_SK_Slug_C : public UCrabEnemyAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2E8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x318(0x80)(None)

	static class UClass* StaticClass();
	static class UAnimBP_SK_Slug_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SK_Slug_AnimGraphNode_SequencePlayer_63435F634EF556FA04B0199D01672758();
	void ExecuteUbergraph_AnimBP_SK_Slug(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


