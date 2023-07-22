#include "ToggleUserSetting.h"

void UToggleUserSetting::SetValue(bool Value) {
}

bool UToggleUserSetting::GetValue() {
    return false;
}

UToggleUserSetting::UToggleUserSetting() {
    this->OffValue = 0;
    this->OnValue = 10;
    this->DefaultValue = false;
}

