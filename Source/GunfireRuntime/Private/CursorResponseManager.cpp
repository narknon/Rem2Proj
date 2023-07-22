#include "CursorResponseManager.h"

void UCursorResponseManager::SetClickBehavior(ECursorInteractBehavior Behavior) {
}

void UCursorResponseManager::SetActiveState(bool bShouldBeActive) {
}

UCursorResponseManager* UCursorResponseManager::GetInstance(APlayerController* Controller) {
    return NULL;
}

bool UCursorResponseManager::GetActiveState() {
    return false;
}

UCursorResponseManager::UCursorResponseManager() {
    this->CachedController = NULL;
}

