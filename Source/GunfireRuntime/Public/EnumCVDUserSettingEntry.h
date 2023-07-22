#pragma once
#include "CoreMinimal.h"
#include "Rendering/RenderingCommon.h"
#include "EnumCVDUserSettingEntry.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FEnumCVDUserSettingEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EColorVisionDeficiency Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    FEnumCVDUserSettingEntry();
};

