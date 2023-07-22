#pragma once
#include "CoreMinimal.h"
#include "ESplineEaseType.h"
#include "SplineEaseParameters.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FSplineEaseParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESplineEaseType::Type> EaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLinearEase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EaseOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* NormalizedSpeedOverTimeCurve;
    
    FSplineEaseParameters();
};

