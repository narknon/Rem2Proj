#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "CounterCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UCounterCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Counter;
    
public:
    UCounterCondition();
};

