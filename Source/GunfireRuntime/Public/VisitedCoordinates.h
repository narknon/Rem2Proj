#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GridCoordinate.h"
#include "VisitedCoordinates.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FVisitedCoordinates {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FGridCoordinate> VisitedGridCoordinates;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    double GridResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector GridOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bApplyMapOffset;
    
    FVisitedCoordinates();
};

