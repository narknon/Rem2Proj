#pragma once
#include "CoreMinimal.h"
#include "AnimationLayerInputs.generated.h"

class UAnimationNamed;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FAnimationLayerInputs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentAnimationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimationNamed* Animation;
    
    FAnimationLayerInputs();
};

