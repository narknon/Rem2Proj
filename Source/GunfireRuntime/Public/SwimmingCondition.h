#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "ESwimmingStateMethod.h"
#include "ESwimmingType.h"
#include "SwimmingCondition.generated.h"

class UStateMachineComponent;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API USwimmingCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwimmingType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwimmingStateMethod Method;
    
public:
    USwimmingCondition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESwimmingType GetSwimmingState(UStateMachineComponent* StateMachine);
    
};

