#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "KeyImage.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FKeyImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    GUNFIRERUNTIME_API FKeyImage();
};

