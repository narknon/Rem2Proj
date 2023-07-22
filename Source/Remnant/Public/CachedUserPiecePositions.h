#pragma once
#include "CoreMinimal.h"
#include "GraphPosition.h"
#include "CachedUserPiecePositions.generated.h"

USTRUCT(BlueprintType)
struct REMNANT_API FCachedUserPiecePositions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGraphPosition> PiecePositions;
    
    FCachedUserPiecePositions();
};

