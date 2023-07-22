#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "HasInteractiveCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UHasInteractiveCondition : public UCondition {
    GENERATED_BODY()
public:
    UHasInteractiveCondition();
};

