#pragma once
#include "CoreMinimal.h"
#include "AnimationSetBlendParameter.generated.h"

USTRUCT(BlueprintType)
struct FAnimationSetBlendParameter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParameterIndex;
    
public:
    GUNFIRERUNTIME_API FAnimationSetBlendParameter();
};

