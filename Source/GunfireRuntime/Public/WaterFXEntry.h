#pragma once
#include "CoreMinimal.h"
#include "SoundGunfire.h"
#include "WaterFXEntry.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FWaterFXEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubmergeDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundGunfire SFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* VFX;
    
    GUNFIRERUNTIME_API FWaterFXEntry();
};

