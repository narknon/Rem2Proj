#pragma once
#include "CoreMinimal.h"
#include "EnumUserSetting.h"
#include "VoiceInputDeviceSetting.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UVoiceInputDeviceSetting : public UEnumUserSetting {
    GENERATED_BODY()
public:
    UVoiceInputDeviceSetting();
};

