#include "ChallengeBlueprintFunctions.h"

void UChallengeBlueprintFunctions::UnlockChallenges(UObject* WorldContextObject, FChallengeEvent ObjectiveId) {
}

void UChallengeBlueprintFunctions::IncrementObjectivesFromObject(UObject* WorldContextObject, FChallengeEvent ObjectiveId, UObject* Object, const TArray<FName>& AdditionalTags, int32 Amount) {
}

void UChallengeBlueprintFunctions::IncrementObjectivesFor(APlayerController* Controller, FChallengeEvent ObjectiveId, const TArray<FName>& Tags, int32 Amount) {
}

void UChallengeBlueprintFunctions::IncrementObjectives(UObject* WorldContextObject, FChallengeEvent ObjectiveId, const TArray<FName>& Tags, int32 Amount) {
}

void UChallengeBlueprintFunctions::IncrementObjective(UObject* WorldContextObject, FChallengeObjectiveSelection ObjectiveSelection, int32 Amount) {
}

UChallengeObjective* UChallengeBlueprintFunctions::GetChallengeObjective(UObject* WorldContextObject, FChallengeObjectiveSelection ObjectiveSelection) {
    return NULL;
}

TArray<UChallenge*> UChallengeBlueprintFunctions::GetAllChallenges(UObject* WorldContextObject) {
    return TArray<UChallenge*>();
}

UChallengeBlueprintFunctions::UChallengeBlueprintFunctions() {
}

