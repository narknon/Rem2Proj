#include "AIAwarenessComponent.h"
#include "CharacterGunfire.h"

void UAIAwarenessComponent::RelevantActorRemoved_Implementation(const FRelevantActor& RelevantActor) {
}

void UAIAwarenessComponent::RelevantActorAdded_Implementation(const FRelevantActor& RelevantActor) {
}

int32 UAIAwarenessComponent::GetNumRelevantActors() {
    return 0;
}

void UAIAwarenessComponent::AwarenessSignal_Implementation(EAwarenessSignal Type, AActor* Source, const FVector& Position, float Radius) {
}

UAIAwarenessComponent::UAIAwarenessComponent() {
    this->EvaluateAwareness = true;
    this->SightRange = 500.00f;
    this->LostSightRange = 1000.00f;
    this->HearingScalar = 1.00f;
    this->RelevantActorClass = ACharacterGunfire::StaticClass();
    this->AwarenessType = 0;
    this->TypeToBeAwareOf = 0;
}

