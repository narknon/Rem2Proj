#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "TraversalCondition.generated.h"

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API UTraversalCondition : public UCondition {
    GENERATED_BODY()
public:
    UTraversalCondition();
};

