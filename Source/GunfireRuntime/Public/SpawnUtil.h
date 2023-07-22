#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "SpawnEntry.h"
#include "SpawnUtil.generated.h"

class AActor;
class USpawnTable;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API USpawnUtil : public UObject {
    GENERATED_BODY()
public:
    USpawnUtil();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PickSingleItem(UObject* WorldContextObject, USpawnTable* SpawnTable, int32 Level, const TArray<FName>& SpawnTags, FSpawnEntry& Out);
    
    UFUNCTION(BlueprintCallable)
    static bool FindRadialSpawnPosition(AActor* SpawnPoint, AActor* Actor, float Radius, int32 Slots, FTransform& SpawnPosition);
    
};

