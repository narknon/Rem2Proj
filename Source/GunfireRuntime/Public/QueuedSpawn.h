#pragma once
#include "CoreMinimal.h"
#include "SpawnEntry.h"
#include "Templates/SubclassOf.h"
#include "QueuedSpawn.generated.h"

class AActor;
class ASpawnPointBase;
class ULevel;

USTRUCT(BlueprintType)
struct FQueuedSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpawnPointBase* SpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnEntry SpawnEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevel* OwningLevel;
    
    GUNFIRERUNTIME_API FQueuedSpawn();
};

