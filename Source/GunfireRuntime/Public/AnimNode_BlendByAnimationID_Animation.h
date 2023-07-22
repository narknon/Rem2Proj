#pragma once
#include "CoreMinimal.h"
#include "AnimNode_BlendByAnimationID_Animation.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FAnimNode_BlendByAnimationID_Animation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    FAnimNode_BlendByAnimationID_Animation();
};

