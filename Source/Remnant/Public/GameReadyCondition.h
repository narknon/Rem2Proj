#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "GameReadyCondition.generated.h"

UCLASS(Blueprintable)
class REMNANT_API UGameReadyCondition : public UCondition {
    GENERATED_BODY()
public:
    UGameReadyCondition();
};

