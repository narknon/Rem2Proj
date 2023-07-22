#pragma once
#include "CoreMinimal.h"
#include "GunfireAudioStopParams.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FGunfireAudioStopParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumeFadeDuration;
    
    FGunfireAudioStopParams();
};

