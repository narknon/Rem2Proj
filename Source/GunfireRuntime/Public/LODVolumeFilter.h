#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LODVolumeDistanceFilter.h"
#include "LODVolumeSubFilter.h"
#include "LODVolumeFilter.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API ULODVolumeFilter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLODVolumeSubFilter IgnoreFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLODVolumeDistanceFilter> DistanceFilters;
    
    ULODVolumeFilter();
};

