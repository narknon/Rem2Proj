#include "PlayerCameraManagerGunfire.h"

void APlayerCameraManagerGunfire::SettingsRebuilt(UGameUserSettingsGunfire* UserSettings) {
}

void APlayerCameraManagerGunfire::RemoveCameraEffect(int32 HandleID) {
}

void APlayerCameraManagerGunfire::ModifyCameraEffectIntensity(int32 HandleID, FName ParticleIntensityParam, float ParticleIntensity, bool ResetSystem) {
}

bool APlayerCameraManagerGunfire::GetCameraEffectForHandleID(int32 HandleID, FCameraEffect& OutEffect) {
    return false;
}

int32 APlayerCameraManagerGunfire::AddCameraEffect(FCameraEffect Effect, AActor* EffectViewTarget) {
    return 0;
}

APlayerCameraManagerGunfire::APlayerCameraManagerGunfire() {
    this->CurrentEffectID = 0;
}

