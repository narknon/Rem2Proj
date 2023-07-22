#include "PushComponent.h"
#include "Net/UnrealNetwork.h"

void UPushComponent::ServerStreamClientInput_Implementation(const FVector_NetQuantizeNormal& Input, const FVector_NetQuantizeNormal& Facing, bool bMovementMode) {
}
bool UPushComponent::ServerStreamClientInput_Validate(const FVector_NetQuantizeNormal& Input, const FVector_NetQuantizeNormal& Facing, bool bMovementMode) {
    return true;
}

void UPushComponent::ServerCancelPushInput_Implementation() {
}
bool UPushComponent::ServerCancelPushInput_Validate() {
    return true;
}

void UPushComponent::OnCancelPushInput(const FName& ButtonName, ButtonEvent Event) {
}

void UPushComponent::OnAlternateMovementModeInput(const FName& ButtonName, ButtonEvent Event) {
}

bool UPushComponent::IsPushingActor() const {
    return false;
}

bool UPushComponent::IsInAlternateMovementMode() const {
    return false;
}

bool UPushComponent::HasPendingCancelPush() const {
    return false;
}

AActor* UPushComponent::GetActorBeingPushed() const {
    return NULL;
}

void UPushComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPushComponent, ActorBeingPushed);
    DOREPLIFETIME(UPushComponent, PlayerFacing);
}

UPushComponent::UPushComponent() {
    this->bAlternateMovementModeRequiresHold = true;
    this->ClientDistanceTolerance = 30.00f;
    this->ClientRotationTolerance = 5.00f;
    this->ClientRotationSpeed = 180.00f;
    this->ExitSmoothTime = 0.30f;
    this->ActorBeingPushed = NULL;
    this->CurrentPushState = NULL;
}

