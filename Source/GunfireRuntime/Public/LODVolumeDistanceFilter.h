#pragma once
#include "CoreMinimal.h"
#include "LODVolumeSubFilter.h"
#include "LODVolumeDistanceFilter.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FLODVolumeDistanceFilter : public FLODVolumeSubFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldApplyDistanceFade;
    
    FLODVolumeDistanceFilter();
};

