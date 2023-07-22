#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "InCombatCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UInCombatCondition : public UCondition {
    GENERATED_BODY()
public:
    UInCombatCondition();
};

