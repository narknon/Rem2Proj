#include "CompanionComponent.h"
#include "AIFollowTargetSelector.h"

AActor* UCompanionComponent::GetCurrentFollowTarget() const {
    return NULL;
}

UCompanionComponent::UCompanionComponent() {
    this->FollowTargetSelector = UAIFollowTargetSelector::StaticClass();
    this->FollowTarget = TEXT("FollowTarget");
}

