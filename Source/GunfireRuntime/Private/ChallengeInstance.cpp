#include "ChallengeInstance.h"

bool UChallengeInstance::IsComplete() const {
    return false;
}

int32 UChallengeInstance::GetTotalRanks() const {
    return 0;
}

float UChallengeInstance::GetRankProgress() const {
    return 0.0f;
}

TArray<UChallengeRankInstance*> UChallengeInstance::GetRankInstances() const {
    return TArray<UChallengeRankInstance*>();
}

float UChallengeInstance::GetOverallProgress() const {
    return 0.0f;
}

int32 UChallengeInstance::GetObjectiveValue(const UChallengeObjectiveBase* Objective) const {
    return 0;
}

float UChallengeInstance::GetObjectiveProgress(const UChallengeObjectiveBase* Objective) const {
    return 0.0f;
}

int32 UChallengeInstance::GetCurrentRank() const {
    return 0;
}

FGuid UChallengeInstance::GetChallengeID() const {
    return FGuid{};
}

UChallengeComponent* UChallengeInstance::GetChallengeComponent() const {
    return NULL;
}

UChallenge* UChallengeInstance::GetChallenge() const {
    return NULL;
}

UChallengeRankInstance* UChallengeInstance::CreateRankInstance(int32 RankId) const {
    return NULL;
}

UChallengeInstance::UChallengeInstance() {
    this->Challenge = NULL;
    this->Component = NULL;
    this->CurrentRank = -1;
}

