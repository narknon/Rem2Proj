#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_BlendListBase.h"
#include "AnimNode_BlendListByTime.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FAnimNode_BlendListByTime : public FAnimNode_BlendListBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReinitializeOnBecomingRelevant;
    
    FAnimNode_BlendListByTime();
};

