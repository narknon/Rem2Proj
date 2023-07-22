#include "InspectableComponent.h"
#include "Net/UnrealNetwork.h"

void UInspectableComponent::StartInspect(APlayerController* PlayerController) {
}

void UInspectableComponent::OnRep_IsOccupied() {
}

void UInspectableComponent::OnRep_IsActivePlayer() {
}

bool UInspectableComponent::IsOccupied() const {
    return false;
}

bool UInspectableComponent::IsInTransition() const {
    return false;
}

bool UInspectableComponent::IsInteractingActorLocal() const {
    return false;
}

bool UInspectableComponent::IsInteracting() const {
    return false;
}

APlayerController* UInspectableComponent::GetActivePlayerController() {
    return NULL;
}

void UInspectableComponent::EndInspect() {
}

void UInspectableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInspectableComponent, bIsOccupied);
    DOREPLIFETIME(UInspectableComponent, bInTransition);
    DOREPLIFETIME(UInspectableComponent, ActivePlayer);
}

UInspectableComponent::UInspectableComponent() {
    this->bEnabled = true;
    this->TransitionTimeIn = 0.00f;
    this->BlendIn = VTBlend_Linear;
    this->ZoomInBlendExponent = 3.00f;
    this->TransitionTimeOut = 0.00f;
    this->BlendOut = VTBlend_Linear;
    this->ZoomOutBlendExponent = 1.00f;
    this->bConsumeInput = false;
    this->HidePawn = true;
    this->bIsOccupied = false;
    this->bInTransition = false;
    this->ActivePlayer = NULL;
}

