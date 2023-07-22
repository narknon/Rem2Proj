#pragma once
#include "CoreMinimal.h"
#include "CameraState.h"
#include "StationarySpectatorCameraState.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UStationarySpectatorCameraState : public UCameraState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LockRoll;
    
    UStationarySpectatorCameraState();
};

