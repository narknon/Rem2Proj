#pragma once
#include "CoreMinimal.h"
#include "AudioVolumeSelector.generated.h"

class AVolume;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FAudioVolumeSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AVolume> AudioVolumeClass;
    
    FAudioVolumeSelector();
};

