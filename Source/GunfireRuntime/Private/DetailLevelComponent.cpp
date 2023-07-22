#include "DetailLevelComponent.h"

void UDetailLevelComponent::UpdateDetailLevel(UUserSetting* AppliedSetting, UGameUserSettingsGunfire* UserSettings) {
}

void UDetailLevelComponent::SettingsRebuilt(UGameUserSettingsGunfire* UserSettings) {
}

UDetailLevelComponent::UDetailLevelComponent() {
    this->Priority = EDetailPriority::Normal;
}

