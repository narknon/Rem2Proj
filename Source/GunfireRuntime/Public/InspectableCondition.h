#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "EInspectableConditionCheck.h"
#include "InspectableCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UInspectableCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInspectableConditionCheck CheckBy;
    
public:
    UInspectableCondition();
};

