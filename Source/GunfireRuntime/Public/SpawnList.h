#pragma once
#include "CoreMinimal.h"
#include "SpawnEntry.h"
#include "SpawnList.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FSpawnList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FSpawnEntry> Spawns;
    
    FSpawnList();
};

