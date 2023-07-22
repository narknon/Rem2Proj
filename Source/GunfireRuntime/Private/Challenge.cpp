#include "Challenge.h"

int32 UChallenge::GetTotalRanks() const {
    return 0;
}

UChallengeRank* UChallenge::GetRank(int32 RankId) const {
    return NULL;
}

int32 UChallenge::GetPoints(int32 MaxRank) const {
    return 0;
}

UChallenge::UChallenge() {
    this->Scope = EChallengeScope::LocalOnly;
    this->Icon = NULL;
    this->Locked = false;
    this->VisibleByDefault = true;
}

