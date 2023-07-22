#include "PlayStateUtils.h"

void UPlayStateUtils::RequestPlayStates(const TArray<FName>& StateNames, UObject* Context, FName Reason) {
}

void UPlayStateUtils::RequestPlayState(const FName& NewStateName, UObject* Context, FName Reason) {
}

bool UPlayStateUtils::IsTransitioningPlayStates(const UObject* WorldContextObject) {
    return false;
}

FName UPlayStateUtils::GetRequestedPlayStateName(UObject* Context, FName Reason) {
    return NAME_None;
}

FName UPlayStateUtils::GetCurrentPlayStateName(const UObject* WorldContextObject) {
    return NAME_None;
}

UPlayStateEffect* UPlayStateUtils::GetActivePlayStateEffect(const UObject* WorldContextObject, UClass* Class) {
    return NULL;
}

void UPlayStateUtils::ClearRequestedPlayStatesForAllReasons(UObject* Context) {
}

void UPlayStateUtils::ClearRequestedPlayState(UObject* Context, FName Reason) {
}

UPlayStateUtils::UPlayStateUtils() {
}

