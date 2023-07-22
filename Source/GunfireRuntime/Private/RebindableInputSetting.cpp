#include "RebindableInputSetting.h"

void URebindableInputSetting::SetValue(FGenericInput NewKey) {
}

bool URebindableInputSetting::HasConflictGroup(EInputConflictGroup InputGroup) const {
    return false;
}

FGenericInput URebindableInputSetting::GetValue() {
    return FGenericInput{};
}

URebindableInputSetting::URebindableInputSetting() {
    this->InputAction = NULL;
    this->bIsInputAction = true;
    this->AxisScale = 1.00f;
    this->ConflictGroup = 1;
}

