#pragma once
#include "CoreMinimal.h"
#include "SpawnList.h"
#include "TileResources.generated.h"

USTRUCT(BlueprintType)
struct FTileResources {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 TileID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSpawnList Resources;
    
    GUNFIRERUNTIME_API FTileResources();
};

