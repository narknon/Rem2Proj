#pragma once
#include "CoreMinimal.h"
#include "CustomCameraBlend.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FCustomCameraBlend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreviousState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    FCustomCameraBlend();
};

