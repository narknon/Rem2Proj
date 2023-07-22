#include "UIHudComponent.h"

void UUIHudComponent::SetVisibility(bool Visible) {
}

void UUIHudComponent::OnParentSetVisibility_Implementation(bool Visible) {
}

bool UUIHudComponent::IsVisible() const {
    return false;
}

APawn* UUIHudComponent::GetControllingPawn() const {
    return NULL;
}

UUIHudComponent::UUIHudComponent() {
    this->bVisible = true;
}

