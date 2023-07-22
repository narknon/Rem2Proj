#pragma once
#include "CoreMinimal.h"
#include "TileAmbientSpawnDebugInfo.h"
#include "TileAmbientDebugInfo.generated.h"

USTRUCT(BlueprintType)
struct FTileAmbientDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TileID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTileAmbientSpawnDebugInfo> QueuedSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTileAmbientSpawnDebugInfo> ActiveSpawns;
    
    GUNFIRERUNTIME_API FTileAmbientDebugInfo();
};

