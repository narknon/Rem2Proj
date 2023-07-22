#include "EnumUserSettingBase.h"

void UEnumUserSettingBase::SetValueEnum(const FEnumUserSettingEntry& Entry) {
}

bool UEnumUserSettingBase::GetValueEnum(FEnumUserSettingEntry& OutEntry) {
    return false;
}

int32 UEnumUserSettingBase::GetNumEntries() const {
    return 0;
}

bool UEnumUserSettingBase::GetNextEntry(int32 CurrentValue, FEnumUserSettingEntry& OutNext, bool bForwards) {
    return false;
}

bool UEnumUserSettingBase::GetEnumEntryByValue(int32 Value, FEnumUserSettingEntry& OutEntry) {
    return false;
}

bool UEnumUserSettingBase::GetEnumEntryByIndex(int32 Index, FEnumUserSettingEntry& OutEntry) {
    return false;
}

void UEnumUserSettingBase::EnableValue(int32 InValue) {
}

void UEnumUserSettingBase::DisableValue(int32 InValue) {
}

UEnumUserSettingBase::UEnumUserSettingBase() {
    this->bWraps = true;
}

