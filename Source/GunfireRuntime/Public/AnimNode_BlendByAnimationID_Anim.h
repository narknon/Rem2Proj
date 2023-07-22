#pragma once
#include "CoreMinimal.h"
#include "AnimNode_PlayAnimSetAnim.h"
#include "AnimNode_BlendByAnimationID_Anim.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FAnimNode_BlendByAnimationID_Anim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimNode_PlayAnimSetAnim AssetPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    FAnimNode_BlendByAnimationID_Anim();
};

