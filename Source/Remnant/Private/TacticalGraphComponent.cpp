#include "TacticalGraphComponent.h"
#include "Templates/SubclassOf.h"

void UTacticalGraphComponent::Stop() {
}

bool UTacticalGraphComponent::MoveTo(TSubclassOf<UTacticalGraphQueryParams> Params, float InAcceptanceRadius, bool InUpdateTacticalPoint, bool InNavigatePath, FName InBlackboardKey, FName InStatusKey) {
    return false;
}

bool UTacticalGraphComponent::IsFollowingPath() const {
    return false;
}

int32 UTacticalGraphComponent::GetCurrentPathIndex() const {
    return 0;
}

FTacticalGraphPath UTacticalGraphComponent::GetCurrentPath() const {
    return FTacticalGraphPath{};
}

bool UTacticalGraphComponent::FindPath(TSubclassOf<UTacticalGraphQueryParams> Params, FTacticalGraphPath& OutPath) {
    return false;
}

UTacticalGraphComponent::UTacticalGraphComponent() {
}

