#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TraversalCondition.h"
#include "LandingPredictionCondition.generated.h"

class ULandingPredictionConditionParams;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API ULandingPredictionCondition : public UTraversalCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULandingPredictionConditionParams> Params;
    
    ULandingPredictionCondition();
};

