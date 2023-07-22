#pragma once
#include "CoreMinimal.h"
#include "SpawnPointTransform.h"
#include "Templates/SubclassOf.h"
#include "SpawnPointList.generated.h"

class ASpawnPoint;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FSpawnPointList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASpawnPoint> SpawnPointBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnPointTransform> Points;
    
    FSpawnPointList();
};

