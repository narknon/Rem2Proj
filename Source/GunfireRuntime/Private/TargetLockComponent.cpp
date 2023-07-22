#include "TargetLockComponent.h"
#include "Net/UnrealNetwork.h"

bool UTargetLockComponent::IsTargetLockEnabled() const {
    return false;
}

AActor* UTargetLockComponent::GetSoftTarget() const {
    return NULL;
}

AActor* UTargetLockComponent::GetLockTarget() const {
    return NULL;
}

AActor* UTargetLockComponent::GetCameraTarget() const {
    return NULL;
}

void UTargetLockComponent::EnableTargetLock(bool Enable) {
}

void UTargetLockComponent::CycleLockTarget(bool bCycleLeftward) {
}

void UTargetLockComponent::ClearLockTarget() {
}

void UTargetLockComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTargetLockComponent, LockedTarget);
    DOREPLIFETIME(UTargetLockComponent, SoftTarget);
}

UTargetLockComponent::UTargetLockComponent() {
    this->LockInput = TEXT("Strafe");
    this->LockToggleInput = TEXT("StrafeToggle");
    this->TargetRange = 1000.00f;
    this->TargetLostRange = 1500.00f;
    this->TargetArc = 360.00f;
    this->TargetPitch = 90.00f;
    this->bDoRedundantInputCheck = false;
    this->SoftTargetEnabled = true;
    this->SoftTargetCameraDirByDefault = false;
    this->SoftTargetHeadingArc = 180.00f;
    this->SoftTargetRange = 1000.00f;
    this->SoftTargetArc = 180.00f;
    this->SoftTargetPitch = 90.00f;
    this->LockedTarget = NULL;
    this->SoftTarget = NULL;
    this->CameraTarget = NULL;
}

