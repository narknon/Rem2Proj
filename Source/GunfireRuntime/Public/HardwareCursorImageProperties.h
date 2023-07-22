#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HardwareCursorImageProperties.generated.h"

USTRUCT(BlueprintType)
struct FHardwareCursorImageProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CursorImagePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CursorImagePathHighRes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CursorHotSpot;
    
    GUNFIRERUNTIME_API FHardwareCursorImageProperties();
};

