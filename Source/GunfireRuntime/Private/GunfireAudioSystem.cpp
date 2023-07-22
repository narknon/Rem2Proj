#include "GunfireAudioSystem.h"
#include "Templates/SubclassOf.h"

bool UGunfireAudioSystem::UseSound() {
    return false;
}

void UGunfireAudioSystem::StopSound(UObject* WorldContextObject, const FGunfireAudioPlayingID& PlayingID, const FGunfireAudioStopParams& StopParams) {
}

FAudioComponentGunfire UGunfireAudioSystem::SpawnSoundAttached(const FSoundGunfire& Sound, USceneComponent* AttachToComponent, const FGunfireAudioPlayParams& PlayParams, const FGunfireAudioAttachParams& AttachParams) {
    return FAudioComponentGunfire{};
}

FAudioComponentGunfire UGunfireAudioSystem::SpawnSoundAtLocation(UObject* WorldContextObject, const FSoundGunfire& Sound, FVector Location, const FGunfireAudioPlayParams& PlayParams) {
    return FAudioComponentGunfire{};
}

FAudioComponentGunfire UGunfireAudioSystem::SpawnSound2D(UObject* WorldContextObject, const FSoundGunfire& Sound, const FGunfireAudioPlayParams& PlayParams) {
    return FAudioComponentGunfire{};
}

bool UGunfireAudioSystem::Sound_IsValid(const FSoundGunfire& Sound) {
    return false;
}

bool UGunfireAudioSystem::Sound_IsPlaying(const FSoundGunfire& Sound) {
    return false;
}

bool UGunfireAudioSystem::Sound_IsLooping(const FSoundGunfire& Sound) {
    return false;
}

float UGunfireAudioSystem::Sound_GetSampleRate(const FSoundGunfire& Sound) {
    return 0.0f;
}

float UGunfireAudioSystem::Sound_GetDuration(const FSoundGunfire& Sound) {
    return 0.0f;
}

float UGunfireAudioSystem::Sound_GetAttenuation(const FSoundGunfire& Sound) {
    return 0.0f;
}

void UGunfireAudioSystem::SetTransientMasterVolume(float Value) {
}

FGunfireAudioPlayingID UGunfireAudioSystem::PlaySoundAtLocation(UObject* WorldContextObject, const FSoundGunfire& Sound, FVector Location, const FGunfireAudioPlayParams& PlayParams) {
    return FGunfireAudioPlayingID{};
}

FGunfireAudioPlayingID UGunfireAudioSystem::PlaySound2D(UObject* WorldContextObject, const FSoundGunfire& Sound, const FGunfireAudioPlayParams& PlayParams) {
    return FGunfireAudioPlayingID{};
}

bool UGunfireAudioSystem::IsCompatibleSound(UObject* Object) {
    return false;
}

bool UGunfireAudioSystem::IsCompatibleAudioVolume(AVolume* Volume) {
    return false;
}

bool UGunfireAudioSystem::IsCompatibleAudioComponent(USceneComponent* Component) {
    return false;
}

TSubclassOf<USceneComponent> UGunfireAudioSystem::GetSubtitleComponentClass() {
    return NULL;
}

UClass* UGunfireAudioSystem::GetSoundClass() {
    return NULL;
}

TSubclassOf<AVolume> UGunfireAudioSystem::GetAudioVolumeClass() {
    return NULL;
}

UObject* UGunfireAudioSystem::GetAudioInterface() {
    return NULL;
}

TSubclassOf<USceneComponent> UGunfireAudioSystem::GetAudioComponentClass() {
    return NULL;
}

void UGunfireAudioSystem::AudioComponent_Stop(FAudioComponentGunfire& AudioComponent, const FGunfireAudioStopParams& StopParams, FGunfireAudioPlayingID PlayingID) {
}

void UGunfireAudioSystem::AudioComponent_SetVolumeMultiplier(FAudioComponentGunfire& AudioComponent, float Value) {
}

void UGunfireAudioSystem::AudioComponent_SetSound(FAudioComponentGunfire& AudioComponent, const FSoundGunfire& NewSound) {
}

void UGunfireAudioSystem::AudioComponent_SetPitchMultiplier(FAudioComponentGunfire& AudioComponent, float Value) {
}

void UGunfireAudioSystem::AudioComponent_SetParameter(FAudioComponentGunfire& AudioComponent, const FName& Name, float Value) {
}

void UGunfireAudioSystem::AudioComponent_SetAutoDestroy(FAudioComponentGunfire& AudioComponent, bool bAutoDestroy) {
}

FGunfireAudioPlayingID UGunfireAudioSystem::AudioComponent_PlaySound(FAudioComponentGunfire& AudioComponent, const FSoundGunfire& Sound, const FGunfireAudioPlayParams& PlayParams) {
    return FGunfireAudioPlayingID{};
}

FGunfireAudioPlayingID UGunfireAudioSystem::AudioComponent_Play(FAudioComponentGunfire& AudioComponent, const FGunfireAudioPlayParams& PlayParams) {
    return FGunfireAudioPlayingID{};
}

void UGunfireAudioSystem::AudioComponent_OnFinished_Unbind(const FAudioComponentGunfire& AudioComponent, UObject* Object) {
}

void UGunfireAudioSystem::AudioComponent_OnFinished_Bind(const FAudioComponentGunfire& AudioComponent, const FOnGunfireAudioFinished& Callback) {
}

bool UGunfireAudioSystem::AudioComponent_IsValid(const FAudioComponentGunfire& AudioComponent) {
    return false;
}

bool UGunfireAudioSystem::AudioComponent_IsPlaying(const FAudioComponentGunfire& AudioComponent) {
    return false;
}

float UGunfireAudioSystem::AudioComponent_GetVolumeMultiplier(const FAudioComponentGunfire& AudioComponent) {
    return 0.0f;
}

FSoundGunfire UGunfireAudioSystem::AudioComponent_GetSound(const FAudioComponentGunfire& AudioComponent) {
    return FSoundGunfire{};
}

float UGunfireAudioSystem::AudioComponent_GetPitchMultiplier(const FAudioComponentGunfire& AudioComponent) {
    return 0.0f;
}

FGunfireAudioPlayingID UGunfireAudioSystem::AudioComponent_GetLastPlayingId(const FAudioComponentGunfire& AudioComponent) {
    return FGunfireAudioPlayingID{};
}

void UGunfireAudioSystem::AudioComponent_ForceInternalTransformUpdate(FAudioComponentGunfire& AudioComponent) {
}

void UGunfireAudioSystem::AudioComponent_AdjustVolume(FAudioComponentGunfire& AudioComponent, float AdjustVolumeDuration, float AdjustVolumeLevel) {
}

UGunfireAudioSystem::UGunfireAudioSystem() {
    this->PImpl = NULL;
}

