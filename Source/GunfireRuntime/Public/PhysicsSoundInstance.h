#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AudioComponentGunfire.h"
#include "GunfireAudioPlayingID.h"
#include "PhysicsSoundInstance.generated.h"

UCLASS(Blueprintable)
class UPhysicsSoundInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioComponentGunfire CurrentComponent;
    
    UPhysicsSoundInstance();
    UFUNCTION(BlueprintCallable)
    void OnImpactTimerExpired();
    
    UFUNCTION(BlueprintCallable)
    void AudioComponentFinished(FGunfireAudioPlayingID PlayingID, int32 ErrorCode);
    
};

