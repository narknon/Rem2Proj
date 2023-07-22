#include "NPCHeadTrackingComponent.h"

void UNPCHeadTrackingComponent::SetTrackingMode(ETrackingMode NewMode) {
}

void UNPCHeadTrackingComponent::ResetLookTargets() {
}

void UNPCHeadTrackingComponent::ResetLookRotation() {
}

void UNPCHeadTrackingComponent::RemoveLookTarget(AActor* LookTarget) {
}

void UNPCHeadTrackingComponent::RemoveActorLookTarget(AActor* Actor, AActor* LookTarget) {
}

void UNPCHeadTrackingComponent::AddLookTarget(AActor* LookTarget, int32 Priority, FName Node, ELookTargetType Type) {
}

void UNPCHeadTrackingComponent::AddActorLookTarget(AActor* Actor, AActor* LookTarget, int32 Priority, FName Node, ELookTargetType Type) {
}

UNPCHeadTrackingComponent::UNPCHeadTrackingComponent() {
    this->TrackingMode = ETrackingMode::LookTargets;
    this->bUseNodeRotation = true;
    this->MinYaw = -50.00f;
    this->MaxYaw = 50.00f;
    this->MinPitch = -20.00f;
    this->MaxPitch = 40.00f;
    this->InterpSpeed = 3.00f;
    this->bConsiderCharacterTarget = true;
    this->CharacterTargetPriority = -1;
    this->bIgnoreViewpointYaw = false;
    this->bIgnoreViewpointPitch = false;
}

