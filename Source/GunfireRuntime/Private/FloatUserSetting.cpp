#include "FloatUserSetting.h"

void UFloatUserSetting::SetValue(float Value) {
}

float UFloatUserSetting::IncrementValue() {
    return 0.0f;
}

float UFloatUserSetting::GetValue() const {
    return 0.0f;
}

float UFloatUserSetting::GetNormalizedValue() const {
    return 0.0f;
}

float UFloatUserSetting::GetMinValue() const {
    return 0.0f;
}

float UFloatUserSetting::GetMaxValue() const {
    return 0.0f;
}

float UFloatUserSetting::GetIncrement() const {
    return 0.0f;
}

float UFloatUserSetting::DecrementValue() {
    return 0.0f;
}

UFloatUserSetting::UFloatUserSetting() {
    this->DefaultValue = 1.00f;
    this->MinValue = 0.00f;
    this->MaxValue = 1.00f;
    this->Increment = 0.10f;
    this->ShowAsPercent = true;
    this->NumDecimals = 0;
}

