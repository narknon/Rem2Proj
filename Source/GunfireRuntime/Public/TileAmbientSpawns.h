#pragma once
#include "CoreMinimal.h"
#include "AmbientSpawn.h"
#include "EAmbientSpawnState.h"
#include "TileAmbientSpawnRegion.h"
#include "TileAmbientSpawns.generated.h"

USTRUCT(BlueprintType)
struct FTileAmbientSpawns {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 TileID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FAmbientSpawn> Spawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FTileAmbientSpawnRegion> Regions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool HasBeenActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EAmbientSpawnState State;
    
    GUNFIRERUNTIME_API FTileAmbientSpawns();
};

