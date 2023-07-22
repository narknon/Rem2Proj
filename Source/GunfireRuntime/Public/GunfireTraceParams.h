#pragma once
#include "CoreMinimal.h"
#include "GunfireTraceParams.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FGunfireTraceParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Pierce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Victims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxVictims;
    
    FGunfireTraceParams();
};

