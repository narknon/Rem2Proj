#pragma once
#include "CoreMinimal.h"
#include "TileCoord.generated.h"

USTRUCT(BlueprintType)
struct FTileCoord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Z;
    
    GUNFIRERUNTIME_API FTileCoord();
};

