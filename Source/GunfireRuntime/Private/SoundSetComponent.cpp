#include "SoundSetComponent.h"

void USoundSetComponent::RemoveSoundTag(FName SoundTag) {
}

FGunfireAudioPlayingID USoundSetComponent::PlaySound2D(FName SoundIDName, const FGunfireAudioPlayParams& PlayParams) {
    return FGunfireAudioPlayingID{};
}

FGunfireAudioPlayingID USoundSetComponent::PlaySound(FName SoundIDName, const FGunfireAudioPlayParams& PlayParams, const FGunfireAudioAttachParams& AttachParams) {
    return FGunfireAudioPlayingID{};
}

bool USoundSetComponent::HasSoundTag(FName SoundTag) const {
    return false;
}

TArray<FName> USoundSetComponent::GetSoundTags() {
    return TArray<FName>();
}

FSoftSoundGunfire USoundSetComponent::GetSoundSoft(FName SoundIDName) {
    return FSoftSoundGunfire{};
}

FSoundGunfire USoundSetComponent::GetSound(FName SoundIDName) {
    return FSoundGunfire{};
}

void USoundSetComponent::AddUniqueSoundTag(FName SoundTag) {
}

USoundSetComponent::USoundSetComponent() {
    this->SoundSet = NULL;
    this->MeshComp = NULL;
}

