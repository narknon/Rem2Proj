#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "CustomCameraBlend.h"
#include "Templates/SubclassOf.h"
#include "CameraStateDecorator.generated.h"

class UCameraState;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UCameraStateDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraState> Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomCameraBlend> CustomBlends;
    
public:
    UCameraStateDecorator();
};

