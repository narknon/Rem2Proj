#pragma once
#include "CoreMinimal.h"
#include "PersistenceKey.h"
#include "SpawnEntry.h"
#include "AmbientSpawn.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAmbientSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSpawnEntry SpawnEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FPersistenceKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool Destroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    GUNFIRERUNTIME_API FAmbientSpawn();
};

