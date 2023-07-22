#include "ColorblindUserSetting.h"

bool UColorblindUserSetting::GetValueEnumCVD(FEnumCVDUserSettingEntry& OutEntry) {
    return false;
}

int32 UColorblindUserSetting::GetNumEntries() const {
    return 0;
}

int32 UColorblindUserSetting::GetNextEntry(int32 CurrentValue, FEnumCVDUserSettingEntry& OutNext, bool bForwards) {
    return 0;
}

bool UColorblindUserSetting::GetEnumCVDEntryByIndex(int32 Index, FEnumCVDUserSettingEntry& OutEntry) {
    return false;
}

UColorblindUserSetting::UColorblindUserSetting() {
    this->Entries.AddDefaulted(1);
    this->bWraps = true;
}

