#pragma once
#include "CoreMinimal.h"
#include "AnimationSetBlendParameter.h"
#include "AnimationSetBlendspace.generated.h"

class UBlendSpace;

USTRUCT(BlueprintType)
struct FAnimationSetBlendspace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* BlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationSetBlendParameter ParameterX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationSetBlendParameter ParameterY;
    
    GUNFIRERUNTIME_API FAnimationSetBlendspace();
};

