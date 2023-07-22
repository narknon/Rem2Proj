#include "RemnantAnalogCursorManager.h"

void URemnantAnalogCursorManager::UpdateCachedCursorLockMode() {
}

void URemnantAnalogCursorManager::SnapToWidget(UUserWidget* WidgetToSnap, bool bUseCursorTarget, const FVector2D& OverrideSnapPoint) {
}

URemnantAnalogCursorManager* URemnantAnalogCursorManager::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

URemnantAnalogCursorManager::URemnantAnalogCursorManager() {
    this->CachedSnapWidget = NULL;
}

