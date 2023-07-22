#include "CutsceneTransientActor.h"

void ACutsceneTransientActor::OnEventCinematic(bool Start, const TArray<FName>& CinematicTags) {
}

void ACutsceneTransientActor::OnCinematic_Implementation(bool IsPlaying, const TArray<FName>& CinematicTags) {
}

void ACutsceneTransientActor::ForceCutscene(const TArray<FName>& CinematicTags, bool bIsPlaying) {
}

ACutsceneTransientActor::ACutsceneTransientActor() {
    this->bIsInCutscene = false;
}

