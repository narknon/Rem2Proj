#pragma once
#include "CoreMinimal.h"
#include "ConditionalAnimNotify.h"
#include "AnimNotify_AnimatedCameraCut.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class GUNFIRERUNTIME_API UAnimNotify_AnimatedCameraCut : public UConditionalAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraFOV;
    
public:
    UAnimNotify_AnimatedCameraCut();
};

