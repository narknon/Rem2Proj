#include "UserSetting.h"

void UUserSetting::ResetToDefault() {
}

FText UUserSetting::GetDisplayValue() const {
    return FText::GetEmpty();
}

void UUserSetting::Apply_Implementation() {
}

UUserSetting::UUserSetting() {
    this->Platforms = 255;
    this->Settings = NULL;
}

