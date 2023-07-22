#pragma once
#include "CoreMinimal.h"
#include "AudioEffect.h"
#include "InterpolatedSoundClassAdjuster.h"
#include "InterpolatedSoundMix.generated.h"


UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UInterpolatedSoundMix : public USoundMix {
    GENERATED_BODY()
public:
protected:
    /*UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioEQEffect BeginEQ;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioEQEffect EndEQ;*/
    
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

    //~ Begin UObject Interface.
    virtual FString GetDesc( void ) override;
#if WITH_EDITOR
    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif // WITH_EDITOR
    virtual void BeginDestroy() override;
    //~ End UObject Interface.
    
};

