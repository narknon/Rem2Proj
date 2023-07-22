#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "StateEventCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UStateEventCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Event;
    
public:
    UStateEventCondition();
};

