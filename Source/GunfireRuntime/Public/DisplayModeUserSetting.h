#pragma once
#include "CoreMinimal.h"
#include "EnumUserSettingBase.h"
#include "DisplayModeUserSetting.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UDisplayModeUserSetting : public UEnumUserSettingBase {
    GENERATED_BODY()
public:
    UDisplayModeUserSetting();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowResolutionChanges() const;
    
};

