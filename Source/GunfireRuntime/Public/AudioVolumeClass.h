#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AudioVolumeClass.generated.h"

class AVolume;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FAudioVolumeClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVolume> AudioVolumeClass;
    
    FAudioVolumeClass();
};

