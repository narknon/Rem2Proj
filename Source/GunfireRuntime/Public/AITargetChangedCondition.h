#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "AITargetChangedCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAITargetChangedCondition : public UCondition {
    GENERATED_BODY()
public:
    UAITargetChangedCondition();
};

