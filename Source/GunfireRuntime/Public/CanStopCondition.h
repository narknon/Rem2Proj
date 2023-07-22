#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "CanStopCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UCanStopCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopOnPendingInterrupt;
    
public:
    UCanStopCondition();
};

