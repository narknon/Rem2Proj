#include "PlayStateEffect.h"

bool UPlayStateEffect::TickTransition_Implementation(UPlayStateComponent* Component, float DeltaSeconds) const {
    return false;
}

FString UPlayStateEffect::GetEditorLabel_Implementation() const {
    return TEXT("");
}

void UPlayStateEffect::Apply_Implementation(UPlayStateComponent* Component, const UPlayStateEffect* Previous) const {
}

UPlayStateEffect::UPlayStateEffect() {
}

