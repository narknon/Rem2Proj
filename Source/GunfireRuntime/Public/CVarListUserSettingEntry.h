#pragma once
#include "CoreMinimal.h"
#include "CVarListValue.h"
#include "EnumUserSettingEntry.h"
#include "CVarListUserSettingEntry.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FCVarListUserSettingEntry : public FEnumUserSettingEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCVarListValue> Values;
    
    FCVarListUserSettingEntry();
};

