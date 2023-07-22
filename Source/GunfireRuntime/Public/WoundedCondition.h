#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "EWoundedState.h"
#include "WoundedCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UWoundedCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWoundedState WoundedState;
    
public:
    UWoundedCondition();
};

