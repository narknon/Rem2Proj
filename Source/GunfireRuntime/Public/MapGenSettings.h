#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AudioVolumeSelector.h"
#include "MapGenAttribute.h"
#include "TileSpawnList.h"
#include "MapGenSettings.generated.h"

class UTileSet;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API AMapGenSettings : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTileSet* TileSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTileSpawnList> SpawnLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapGenAttribute> Attributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BorderTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAudioVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioVolumeSelector AudioVolumeOverride;
    
    AMapGenSettings();
};

