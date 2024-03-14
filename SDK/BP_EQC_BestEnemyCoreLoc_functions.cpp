#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EQC_BestEnemyCoreLoc.BP_EQC_BestEnemyCoreLoc_C
// (None)

class UClass* UBP_EQC_BestEnemyCoreLoc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EQC_BestEnemyCoreLoc_C");

	return Clss;
}


// BP_EQC_BestEnemyCoreLoc_C BP_EQC_BestEnemyCoreLoc.Default__BP_EQC_BestEnemyCoreLoc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_EQC_BestEnemyCoreLoc_C* UBP_EQC_BestEnemyCoreLoc_C::GetDefaultObj()
{
	static class UBP_EQC_BestEnemyCoreLoc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_EQC_BestEnemyCoreLoc_C*>(UBP_EQC_BestEnemyCoreLoc_C::StaticClass()->DefaultObject);

	return Default;
}

}


