#include "UIHudInteractComponent.h"

void UUIHudInteractComponent::OnInteractCancel() {
}

bool UUIHudInteractComponent::OnInteract() {
    return false;
}

void UUIHudInteractComponent::Interact() {
}

bool UUIHudInteractComponent::HasFocusedInteractive() const {
    return false;
}

float UUIHudInteractComponent::GetMashPercentage() const {
    return 0.0f;
}

UObject* UUIHudInteractComponent::GetMashInteractImage() const {
    return NULL;
}

AActor* UUIHudInteractComponent::GetFocusedInteractiveActor() const {
    return NULL;
}

FVector UUIHudInteractComponent::GetFocusedIconScreenPosition() const {
    return FVector{};
}

UUIHudInteractComponent::UUIHudInteractComponent() {
    this->InteractAction = NULL;
    this->InteractActionHoldTime = 0.00f;
    this->InteractiveStateQueryRange = 500.00f;
    this->InteractiveStateQueryHeight = 300.00f;
    this->MaxInteractiveStateResults = 10;
    this->InteractiveStateUnfocusedScaleMax = 0.50f;
    this->InteractiveStateUnfocusedAlphaMax = 0.75f;
    this->ItemQueryRange = 200.00f;
    this->ItemQueryHeight = 150.00f;
    this->ItemShowWhenNotFocused = false;
    this->RevivableQueryRange = 600.00f;
    this->RevivableQueryHeight = 300.00f;
    this->ForceDrawWhenNotFocused = false;
    this->IconSize = 64;
    this->ItemIconScale = 1.00f;
    this->ArrowSize = 16;
    this->ItemIconBorder = NULL;
    this->Arrow = NULL;
    this->GenericInteractionIcon = NULL;
    this->GenericItemIcon = NULL;
    this->ReviveIcon = NULL;
    this->MashProgressDialogClass = NULL;
    this->MashProgressDialog = NULL;
}

