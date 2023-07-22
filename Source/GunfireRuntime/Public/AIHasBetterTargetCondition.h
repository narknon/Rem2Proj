#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "AIHasBetterTargetCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAIHasBetterTargetCondition : public UCondition {
    GENERATED_BODY()
public:
    UAIHasBetterTargetCondition();
};

