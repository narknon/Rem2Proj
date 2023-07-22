#pragma once
#include "CoreMinimal.h"
#include "ImpactEffectSelector.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FImpactEffectSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ImpactEffectName;
    
    FImpactEffectSelector();
};

