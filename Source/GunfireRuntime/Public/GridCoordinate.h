#pragma once
#include "CoreMinimal.h"
#include "GridCoordinate.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FGridCoordinate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int16 X;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int16 Y;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int16 Z;
    
    FGridCoordinate();
};

