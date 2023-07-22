#pragma once
#include "CoreMinimal.h"
#include "AITargetSelector.h"
#include "AIDefaultTargetSelector.generated.h"

class UConditionList;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAIDefaultTargetSelector : public UAITargetSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CullNotVisibleTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WoundedAwarenessScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAwarenessScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScoreUnknownTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConditionList* TargetingConditions;
    
    UAIDefaultTargetSelector();
};

