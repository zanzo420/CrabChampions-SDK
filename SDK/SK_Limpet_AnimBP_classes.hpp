#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x3E0 - 0x2E0)
// AnimBlueprintGeneratedClass SK_Limpet_AnimBP.SK_Limpet_AnimBP_C
class USK_Limpet_AnimBP_C : public UCrabEnemyAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2E8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x318(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x398(0x48)(None)

	static class UClass* StaticClass();
	static class USK_Limpet_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_SK_Limpet_AnimBP(int32 EntryPoint);
};

}


