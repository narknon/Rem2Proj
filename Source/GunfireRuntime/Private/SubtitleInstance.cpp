#include "SubtitleInstance.h"

void USubtitleInstance::OnSourceActorDestroyed(AActor* DestroyedActor) {
}

void USubtitleInstance::OnAudioComponentFinished(FGunfireAudioPlayingID PlayingID, int32 ErrorCode) {
}

void USubtitleInstance::CompleteAndRemove() {
}

USubtitleInstance::USubtitleInstance() {
    this->Component = NULL;
    this->ID = 0;
    this->Source = NULL;
    this->SourceComponent = NULL;
    this->AutoRemoveSubtitle = false;
    this->AutoRemoveEmote = false;
    this->Added = false;
    this->Completed = false;
}

