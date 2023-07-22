#pragma once
#include "CoreMinimal.h"
#include "SpawnEntry.h"
#include "PersistenceKey.h"
#include "RemnantQuestEntityInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct REMNANT_API FRemnantQuestEntityInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSpawnEntry SpawnEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FPersistenceKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool Destroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    FRemnantQuestEntityInfo();
};

