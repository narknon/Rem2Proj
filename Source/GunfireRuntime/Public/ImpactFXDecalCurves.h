#pragma once
#include "CoreMinimal.h"
#include "ImpactFXDecalCurves.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FImpactFXDecalCurves {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DecalEmissiveCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DecalOpacityCurve;
    
    GUNFIRERUNTIME_API FImpactFXDecalCurves();
};

