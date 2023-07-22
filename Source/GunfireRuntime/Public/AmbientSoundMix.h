#pragma once
#include "CoreMinimal.h"
#include "AmbientSoundMix.generated.h"

class UInterpolatedSoundMix;

USTRUCT(BlueprintType)
struct FAmbientSoundMix {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterpolatedSoundMix* InterpolatedMix;
    
    GUNFIRERUNTIME_API FAmbientSoundMix();
};

