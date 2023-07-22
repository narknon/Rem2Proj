#include "GameInstanceGunfire.h"

void UGameInstanceGunfire::QuitToMainMenu() {
}

void UGameInstanceGunfire::OnShutdown() {
}


bool UGameInstanceGunfire::IsSaving() const {
    return false;
}

bool UGameInstanceGunfire::IsInMainMenuLevel() const {
    return false;
}

bool UGameInstanceGunfire::IsInGameplay() const {
    return false;
}

bool UGameInstanceGunfire::ImmediatelyFadeScreen(bool bIsFaded, FLinearColor FadeColor, bool bFadeAudio) {
    return false;
}

APawn* UGameInstanceGunfire::GetLocalPlayerPawn(UObject* WorldContextObject) {
    return NULL;
}

UGameInstanceGunfire* UGameInstanceGunfire::GetInstance(const UObject* pWorldContextObject) {
    return NULL;
}

UAssetCache* UGameInstanceGunfire::GetAssetCache() {
    return NULL;
}

bool UGameInstanceGunfire::FadeScreen(EFadeDirection FadeDirection, float FadeTime, FLinearColor FadeColor, bool bFadeAudio, bool bReset) {
    return false;
}

bool UGameInstanceGunfire::CanSave() const {
    return false;
}

UGameInstanceGunfire::UGameInstanceGunfire() {
    this->AssetCacheClass = NULL;
    this->NotificationOkDialog = NULL;
    this->LocalPlayerPawn = NULL;
    this->AmbientAudioManager = NULL;
    this->PathSharingManager = NULL;
}

