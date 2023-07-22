#pragma once
#include "CoreMinimal.h"
#include "InterpolatedSoundClassAdjuster.generated.h"

class USoundClass;

USTRUCT(BlueprintType)
struct FInterpolatedSoundClassAdjuster {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundClass* SoundClassObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumeAdjusterBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumeAdjusterEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchAdjusterBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchAdjusterEnd;
    
    GUNFIRERUNTIME_API FInterpolatedSoundClassAdjuster();
};

