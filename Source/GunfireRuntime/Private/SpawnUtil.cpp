#include "SpawnUtil.h"

bool USpawnUtil::PickSingleItem(UObject* WorldContextObject, USpawnTable* SpawnTable, int32 Level, const TArray<FName>& SpawnTags, FSpawnEntry& Out) {
    return false;
}

bool USpawnUtil::FindRadialSpawnPosition(AActor* SpawnPoint, AActor* Actor, float Radius, int32 Slots, FTransform& SpawnPosition) {
    return false;
}

USpawnUtil::USpawnUtil() {
}

