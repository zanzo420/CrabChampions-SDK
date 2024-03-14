#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x3E0 - 0x2E0)
// AnimBlueprintGeneratedClass AnimBP_SK_Pumpkin.AnimBP_SK_Pumpkin_C
class UAnimBP_SK_Pumpkin_C : public UCrabEnemyAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2E8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x318(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x398(0x48)(None)

	static class UClass* StaticClass();
	static class UAnimBP_SK_Pumpkin_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AnimBP_SK_Pumpkin(int32 EntryPoint);
};

}


