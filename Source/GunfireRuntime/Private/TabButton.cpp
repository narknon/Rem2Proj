#include "TabButton.h"

void UTabButton::SetTexture(UTexture2D* Texture) {
}

void UTabButton::SetTabPanel(UWidget* Widget) {
}

void UTabButton::SetColorAndOpacity(FLinearColor InColorAndOpacity) {
}

void UTabButton::SetBackgroundColor(FLinearColor InBackgroundColor) {
}

bool UTabButton::IsPressed() const {
    return false;
}

UWidget* UTabButton::GetTabPanel() {
    return NULL;
}

void UTabButton::FocusTab() {
}

UTabButton::UTabButton() {
    this->TabPanelCached = NULL;
    this->CachedFocusManager = NULL;
    this->UserFocusWidget = NULL;
}

