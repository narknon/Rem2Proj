#include "BinaryUserSetting.h"

void UBinaryUserSetting::SetValue(bool Value) {
}

bool UBinaryUserSetting::GetValue() {
    return false;
}

UBinaryUserSetting::UBinaryUserSetting() {
    this->DefaultValue = false;
    this->bInvertConsoleVariable = false;
}

