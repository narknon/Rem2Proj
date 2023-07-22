#include "FocusManager.h"

bool UFocusManager::RestorePanelFocus(APlayerController* Controller, UWidget* Widget) {
    return false;
}

void UFocusManager::RestoreFocus() {
}

void UFocusManager::ReleaseFocus() {
}

UWidget* UFocusManager::GetWidgetByName(UWidget* Widget, const FName& WidgetName) {
    return NULL;
}

UWidget* UFocusManager::GetRoot(UWidget* Widget) {
    return NULL;
}

UWidget* UFocusManager::GetParent(UWidget* Widget) {
    return NULL;
}

UFocusManager* UFocusManager::GetInstance(APlayerController* Controller) {
    return NULL;
}

bool UFocusManager::FocusFirstAvailable(APlayerController* Controller, UWidget* Widget, int32 UserIndex, UWidget* OriginalWidget) {
    return false;
}

UWidget* UFocusManager::FindWidgetByName(UWidget* Widget, const FName& WidgetName) {
    return NULL;
}

void UFocusManager::EnableInput(APlayerController* InPlayerController) {
}

void UFocusManager::DisableInput(APlayerController* InPlayerController) {
}

bool UFocusManager::AttemptSetButtonFocus(APlayerController* Controller, UFocusButtonWidget* Widget) {
    return false;
}

UFocusManager::UFocusManager() {
    this->InputComponent = NULL;
    this->PlayerController = NULL;
    this->GivenSoleFocus = false;
}

