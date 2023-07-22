#include "ChallengeComponent.h"
#include "Templates/SubclassOf.h"

void UChallengeComponent::ServerResetAllChallenges_Implementation() {
}

void UChallengeComponent::ServerGiveRewardsForChallengeRank_Implementation(UChallengeRank* ChallengeRank) {
}

void UChallengeComponent::RequestUpdateActiveServerObjectives_Implementation(const TArray<int32>& ObjectivesToAdd, const TArray<int32>& ObjectivesToRemove) {
}

bool UChallengeComponent::HasChallengeInstance(const UChallenge* Challenge) const {
    return false;
}

TArray<UChallenge*> UChallengeComponent::GetChallengesByCategory(const FChallengeCategory& Category, bool bVisibleOnly) const {
    return TArray<UChallenge*>();
}

UChallengeInstance* UChallengeComponent::GetChallengeInstance(const UChallenge* Challenge) const {
    return NULL;
}

float UChallengeComponent::GetCategoryProgress(const FChallengeCategory& Category, FPointSet& ChallengeProgress, FPointSet& PointProgress, bool bVisibleOnly) const {
    return 0.0f;
}







void UChallengeComponent::ClientUnlockChallenge_Implementation(FGuid ChallengeId) {
}

void UChallengeComponent::ClientReceiveReward_Implementation(TSubclassOf<UChallengeReward> RewardClass) {
}

void UChallengeComponent::ClientIncrementObjective_Implementation(int32 ObjectiveId, int32 Amount) {
}

UChallengeComponent::UChallengeComponent() {
    this->ChallengeManager = NULL;
    this->AchievementController = NULL;
}

