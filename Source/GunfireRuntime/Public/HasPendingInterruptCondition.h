#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "HasPendingInterruptCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UHasPendingInterruptCondition : public UCondition {
    GENERATED_BODY()
public:
    UHasPendingInterruptCondition();
};

