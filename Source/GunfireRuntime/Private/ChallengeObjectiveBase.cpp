#include "ChallengeObjectiveBase.h"

EObjectiveType UChallengeObjectiveBase::GetObjectiveType() const {
    return EObjectiveType::Standard;
}

int32 UChallengeObjectiveBase::GetObjectiveCount() const {
    return 0;
}

FText UChallengeObjectiveBase::GetDisplayLabel(UObject* WorldContextObject) const {
    return FText::GetEmpty();
}

bool UChallengeObjectiveBase::CanIncrement() const {
    return false;
}

UChallengeObjectiveBase::UChallengeObjectiveBase() {
    this->Challenge = NULL;
    this->ChallengeManager = NULL;
    this->RankIdx = 0;
}

