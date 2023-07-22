#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "EFallConditionCheck.h"
#include "FallCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UFallCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFallConditionCheck CheckBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumFallDistance;
    
public:
    UFallCondition();
};

