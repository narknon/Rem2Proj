#pragma once
#include "CoreMinimal.h"
#include "SpawnEntry.h"
#include "SpawnedActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FSpawnedActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSpawnEntry SpawnEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    FSpawnedActor();
};

