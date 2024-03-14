#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA30 (0xD10 - 0x2E0)
// AnimBlueprintGeneratedClass SK_Crab_AnimBP_Enemy.SK_Crab_AnimBP_Enemy_C
class USK_Crab_AnimBP_Enemy_C : public UCrabEnemyAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2E8(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x318(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x340(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x368(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x390(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x3B8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x3E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x408(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x430(0x28)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x458(0xE8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x540(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x570(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x5F0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x620(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x6A0(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x6D0(0xE8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x7B8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x7E8(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x868(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x898(0xB0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x948(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xAA0(0x28)(None)
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization;                     // 0xAC8(0x70)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0xB38(0x190)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0xCC8(0x48)(None)

	static class UClass* StaticClass();
	static class USK_Crab_AnimBP_Enemy_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_BlendSpacePlayer_F3EF04094EB895D6B20F42A20A3AE705();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_DD6C5B45424C4923F0B97B97F2DC0A48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_1F263FEE4CD1ACA6F8D1929A772145F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_6384B838415B210E76C0E29D0CDA5515();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_6738C0EE4CEC17D99C5117869B7001BE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_DD8F65FF423482C538A43999A4629F14();
	void ExecuteUbergraph_SK_Crab_AnimBP_Enemy(int32 EntryPoint, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetRelevantAnimTime_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue);
};

}


