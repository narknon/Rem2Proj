#pragma once
#include "CoreMinimal.h"
#include "CameraState.h"
#include "DamageInfo.h"
#include "CinematicTransitionCameraState.generated.h"

class APlayerControllerGunfire;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UCinematicTransitionCameraState : public UCameraState {
    GENERATED_BODY()
public:
    UCinematicTransitionCameraState();
protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageEvent(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnCinematicEvent(APlayerControllerGunfire* Player, bool bIsInCinematic);
    
};

