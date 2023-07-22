#include "AIPointOfInterestManager.h"
#include "Templates/SubclassOf.h"

bool UAIPointOfInterestManager::HasPointsInNavRange(AActor* Actor, const FVector& SourceLocation, float NavRange, float SnapDistance, TSubclassOf<UAIPOIType> POIType) {
    return false;
}

void UAIPointOfInterestManager::GetPointsSweep(AActor* Source, const FVector& Start, const FVector& End, float Radius, TSubclassOf<UAIPOIType> POIType, TArray<AAIPointOfInterest*>& POIs) const {
}

void UAIPointOfInterestManager::GetPointsInNavRange(AActor* Actor, const FVector& SourceLocation, float NavRange, float SnapDistance, TSubclassOf<UAIPOIType> POIType, TArray<AAIPointOfInterest*>& POIs) const {
}

UAIPointOfInterestManager* UAIPointOfInterestManager::GetInstance(UObject* WorldContextObject) {
    return NULL;
}

void UAIPointOfInterestManager::EnablePointsOfInterestInGroup(FName GroupName, bool DeactivateOtherGroups) {
}

UAIPointOfInterestManager::UAIPointOfInterestManager() {
}

