#pragma once
#include "CoreMinimal.h"
#include "CompareOp.h"
#include "Condition.h"
#include "WaterCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UWaterCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubmergeDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    CompareOp SubmergeDepthCompare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaterDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    CompareOp WaterDepthCompare;
    
public:
    UWaterCondition();
};

