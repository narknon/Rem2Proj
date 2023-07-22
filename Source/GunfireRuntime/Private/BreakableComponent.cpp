#include "BreakableComponent.h"

void UBreakableComponent::Reset(bool bForceResetClientState) {
}

void UBreakableComponent::OnSetBroken() {
}

bool UBreakableComponent::IsUnbroken() const {
    return false;
}

bool UBreakableComponent::IsBroken() const {
    return false;
}

bool UBreakableComponent::IsBreaking() const {
    return false;
}

void UBreakableComponent::HidePieces() {
}

void UBreakableComponent::Break() {
}

UBreakableComponent::UBreakableComponent() {
    this->bHidePiecesOnBroken = true;
    this->BreakDuration = 10.00f;
    this->BrokenDuration = 3.00f;
    this->RandomImpulse = 50.00f;
    this->RandomTorque = 45.00f;
    this->bDestroyOnHidden = true;
    this->HideDuration = 2.00f;
    this->bManageUnbrokenMeshCollision = true;
    this->bUnbrokenMeshSupportsCollisionQueries = true;
    this->bPiecesSupportsCollisionQueries = false;
    this->PiecesCollisionProfileName = TEXT("Breakable");
}

