#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MapTileEdgeInfo.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FMapTileEdgeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EdgeOffset;
    
    FMapTileEdgeInfo();
};

