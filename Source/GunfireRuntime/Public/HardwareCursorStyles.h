#pragma once
#include "CoreMinimal.h"
#include "EHardwareCursorStyle.h"
#include "HardwareCursorImageProperties.h"
#include "HardwareCursorStyles.generated.h"

USTRUCT(BlueprintType)
struct FHardwareCursorStyles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHardwareCursorStyle, FHardwareCursorImageProperties> HardwareCursorStyles;
    
    GUNFIRERUNTIME_API FHardwareCursorStyles();
};

