#pragma once
#include "CoreMinimal.h"
#include "SpawnEntry.h"
#include "EncounterSpawn.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FEncounterSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnEntry Spawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    FEncounterSpawn();
};

