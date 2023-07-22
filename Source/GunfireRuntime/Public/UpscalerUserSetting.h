#pragma once
#include "CoreMinimal.h"
#include "EnumUserSettingBase.h"
#include "UpscalerUserSetting.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UUpscalerUserSetting : public UEnumUserSettingBase {
    GENERATED_BODY()
public:
    UUpscalerUserSetting();
};

