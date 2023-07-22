#pragma once
#include "CoreMinimal.h"
#include "UserSettingAppliedEventDelegate.generated.h"

class UGameUserSettingsGunfire;
class UUserSetting;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUserSettingAppliedEvent, UUserSetting*, AppliedSetting, UGameUserSettingsGunfire*, UserSettings);

