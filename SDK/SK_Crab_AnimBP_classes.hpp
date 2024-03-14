#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD20 (0x1010 - 0x2F0)
// AnimBlueprintGeneratedClass SK_Crab_AnimBP.SK_Crab_AnimBP_C
class USK_Crab_AnimBP_C : public UCrabPlayerAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2F8(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x328(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x350(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x378(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x3A0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x3C8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x3F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x418(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x440(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x4C0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x4F0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x570(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x5A0(0xE8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x688(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x6B8(0xE8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x7A0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x7D0(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x850(0xA0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x8F0(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x990(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xA10(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0xA90(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0xAC0(0xB0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0xB70(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xCC8(0x28)(None)
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization;                     // 0xCF0(0x70)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0xD60(0x190)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3;                              // 0xEF0(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0xF38(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0xF80(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0xFC8(0x48)(None)

	static class UClass* StaticClass();
	static class USK_Crab_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_SequencePlayer_E4338ECD4DFB460BBB483D90B945E216();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_BlendListByBool_F9EDB7FF4B9502F7D00508A4D74B9E17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_BlendListByBool_215BFAB940BF59D898CE37A086737F2C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_SequencePlayer_8A3305B64CED6F9D8144E2810FB6882B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_BlendSpacePlayer_E8712BEA4EC181C68A67D982FE6AFF10();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_TransitionResult_8E73A0074ECF2D7C189700A6EE5C4073();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_TransitionResult_0C5BFD424317F869BA9BA6952183128F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_TransitionResult_C7DA0A2F42AA72E8164827BDEF0F70EC();
	void ExecuteUbergraph_SK_Crab_AnimBP(int32 EntryPoint, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_GetRelevantAnimTime_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
};

}


