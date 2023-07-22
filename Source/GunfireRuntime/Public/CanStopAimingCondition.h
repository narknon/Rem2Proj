#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "CanStopAimingCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UCanStopAimingCondition : public UCondition {
    GENERATED_BODY()
public:
    UCanStopAimingCondition();
};

