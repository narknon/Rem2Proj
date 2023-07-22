#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "TileRegistry.generated.h"

class UMapTileInfoAsset;
class UTileSet;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UTileRegistry : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMapTileInfoAsset*> MapTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTileSet*> InitializedTileSets;
    
public:
    UTileRegistry();
};

