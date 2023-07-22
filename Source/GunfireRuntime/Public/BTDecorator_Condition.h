#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "Conditions.h"
#include "BTDecorator_Condition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UBTDecorator_Condition : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConditions Conditions;
    
public:
    UBTDecorator_Condition();
};

