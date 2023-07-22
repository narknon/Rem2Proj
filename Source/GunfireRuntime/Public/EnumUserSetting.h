#pragma once
#include "CoreMinimal.h"
#include "EnumUserSettingBase.h"
#include "EnumUserSettingEntry.h"
#include "EnumUserSetting.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UEnumUserSetting : public UEnumUserSettingBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnumUserSettingEntry> Entries;
    
    UEnumUserSetting();
};

