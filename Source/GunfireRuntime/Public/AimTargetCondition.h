#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "AimTargetCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAimTargetCondition : public UCondition {
    GENERATED_BODY()
public:
    UAimTargetCondition();
};

