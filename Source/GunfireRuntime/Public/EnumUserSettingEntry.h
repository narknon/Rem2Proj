#pragma once
#include "CoreMinimal.h"
#include "EnumUserSettingEntry.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FEnumUserSettingEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FEnumUserSettingEntry();
};

