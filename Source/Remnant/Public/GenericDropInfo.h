#pragma once
#include "CoreMinimal.h"
#include "SpawnList.h"
#include "GenericDropInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct REMNANT_API FGenericDropInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TargetIsHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSpawnList CachedSpawnList;
    
    FGenericDropInfo();
};

