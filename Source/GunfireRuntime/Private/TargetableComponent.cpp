#include "TargetableComponent.h"

void UTargetableComponent::SetCanBeTargeted(bool bNewCanBeTargeted) {
}

void UTargetableComponent::SetAllowSoftTarget(bool bNewAllowSoftTarget) {
}

void UTargetableComponent::OnUnTarget_Implementation(AActor* UnTargetedBy) {
}

void UTargetableComponent::OnTarget_Implementation(AActor* TargetedBy) {
}

void UTargetableComponent::OnOwnerDied(uint8 Reason, ACharacterGunfire* Character, AActor* Cause) {
}

TArray<AActor*> UTargetableComponent::GetTargetingActors() const {
    return TArray<AActor*>();
}

bool UTargetableComponent::CanBeTargeted() const {
    return false;
}

UTargetableComponent::UTargetableComponent() {
    this->Priority = 1;
    this->MaximumTargetDistance = 0.00f;
    this->MinimumTargetDistance = 0.00f;
    this->SnapRadiusScale = 1.00f;
    this->TargetPitch = 0.00f;
    this->TargetType = ETargetType::Any;
    this->RangeTolerance = 0.00f;
    this->bCanBeTargeted = true;
    this->AllowSoftTarget = true;
    this->AllowLockTarget = true;
    this->bAllowSnaping = true;
}

