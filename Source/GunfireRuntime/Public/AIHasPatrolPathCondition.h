#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "AIHasPatrolPathCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAIHasPatrolPathCondition : public UCondition {
    GENERATED_BODY()
public:
    UAIHasPatrolPathCondition();
};

