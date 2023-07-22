#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "AnimationLayer.h"
#include "GunfireAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FGunfireAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAnimationLayer> AnimationLayers;
    
    FGunfireAnimInstanceProxy();
};

