#pragma once
#include "CoreMinimal.h"
#include "UserSettingBuiltEventDelegate.generated.h"

class UGameUserSettingsGunfire;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUserSettingBuiltEvent, UGameUserSettingsGunfire*, UserSettings);

