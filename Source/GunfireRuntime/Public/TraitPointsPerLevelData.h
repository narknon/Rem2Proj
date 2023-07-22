#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TraitPointsPerLevelData.generated.h"

USTRUCT(BlueprintType)
struct FTraitPointsPerLevelData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TraitPoints;
    
    GUNFIRERUNTIME_API FTraitPointsPerLevelData();
};

