#pragma once
#include "CoreMinimal.h"
#include "AnimNode_BlendByAnimationID_Parameter.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FAnimNode_BlendByAnimationID_Parameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoBindToProperty;
    
    FAnimNode_BlendByAnimationID_Parameter();
};

