#pragma once
#include "CoreMinimal.h"
#include "ConditionalAnimNotify.h"
#include "Templates/SubclassOf.h"
#include "AnimNotify_AnimatedCameraAbort.generated.h"

class UCameraState;

UCLASS(Blueprintable, CollapseCategories)
class GUNFIRERUNTIME_API UAnimNotify_AnimatedCameraAbort : public UConditionalAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraState> NextCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
public:
    UAnimNotify_AnimatedCameraAbort();
};

