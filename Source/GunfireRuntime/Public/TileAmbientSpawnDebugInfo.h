#pragma once
#include "CoreMinimal.h"
#include "TileAmbientSpawnDebugInfo.generated.h"

USTRUCT(BlueprintType)
struct FTileAmbientSpawnDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    GUNFIRERUNTIME_API FTileAmbientSpawnDebugInfo();
};

