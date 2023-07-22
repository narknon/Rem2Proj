#pragma once
#include "CoreMinimal.h"
#include "ImpactEffectSelector.h"
#include "ImpactEffectDescriptor.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FImpactEffectDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactEffectSelector Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactEffectSelector Overlay;
    
    FImpactEffectDescriptor();
};

