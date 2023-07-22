#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ImpactFX.h"
#include "ImpactEffectData.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FImpactEffectData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactFX Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FImpactFX> ImpactFX;
    
    FImpactEffectData();
};

