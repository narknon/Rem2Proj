#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ImpactFX.h"
#include "ImpactEffectOverlayData.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FImpactEffectOverlayData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactFX OverlayImpact;
    
    FImpactEffectOverlayData();
};

