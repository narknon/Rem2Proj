#include "GameUserSettingsGunfire.h"



TArray<UUserSetting*> UGameUserSettingsGunfire::GetSettingsForCategory(const FName& Category) const {
    return TArray<UUserSetting*>();
}

void UGameUserSettingsGunfire::GetInputConflicts(URebindableInputSetting* Setting, FGenericInput Key, const TArray<FName>& Categories, TArray<URebindableInputSetting*>& Conflicts) {
}

UUserSetting* UGameUserSettingsGunfire::FindUserSetting(const FName& NameID) const {
    return NULL;
}

bool UGameUserSettingsGunfire::AllowsInputRebindings() const {
    return false;
}

UGameUserSettingsGunfire::UGameUserSettingsGunfire() {
}

