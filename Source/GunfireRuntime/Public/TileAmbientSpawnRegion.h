#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AmbientSpawn.h"
#include "TileAmbientSpawnRegion.generated.h"

USTRUCT(BlueprintType)
struct FTileAmbientSpawnRegion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector TileRelativePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FAmbientSpawn> Spawns;
    
    GUNFIRERUNTIME_API FTileAmbientSpawnRegion();
};

