#pragma once
#include "CoreMinimal.h"
#include "AnimationLayerOutputs.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FAnimationLayerOutputs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimationAssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationTimeFraction;
    
    FAnimationLayerOutputs();
};

