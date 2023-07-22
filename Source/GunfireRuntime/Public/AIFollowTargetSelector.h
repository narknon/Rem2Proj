#pragma once
#include "CoreMinimal.h"
#include "AITargetSelector.h"
#include "AIFollowTargetSelector.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAIFollowTargetSelector : public UAITargetSelector {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTargetWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HostWeightScalar;
    
public:
    UAIFollowTargetSelector();
};

