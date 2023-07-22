#pragma once
#include "CoreMinimal.h"
#include "ELODVolumeVisibility.h"
#include "LODVolumeInfo.generated.h"

class ALODVolume;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FLODVolumeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALODVolume* Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELODVolumeVisibility State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    FLODVolumeInfo();
};

