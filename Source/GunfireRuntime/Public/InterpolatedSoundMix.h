#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundMix.h"
#include "Sound/SoundMix.h"
#include "InterpolatedSoundClassAdjuster.h"
#include "InterpolatedSoundMix.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UInterpolatedSoundMix : public USoundMix {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioEQEffect BeginEQ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioEQEffect EndEQ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInterpolatedSoundClassAdjuster> InterpolatedSoundClassEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* EQCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialInterpolatePos;
    
public:
    UInterpolatedSoundMix();
    UFUNCTION(BlueprintCallable)
    void SetInterpolatePos(float Pos);
    
};

