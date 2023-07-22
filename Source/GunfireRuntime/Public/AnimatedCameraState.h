#pragma once
#include "CoreMinimal.h"
#include "CameraState.h"
#include "AnimatedCameraState.generated.h"

class AActor;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAnimatedCameraState : public UCameraState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* RefActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraBone;
    
    UAnimatedCameraState();
};

