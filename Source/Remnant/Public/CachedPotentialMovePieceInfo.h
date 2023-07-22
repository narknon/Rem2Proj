#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GraphPosition.h"
#include "CachedPotentialMovePieceInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct REMNANT_API FCachedPotentialMovePieceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* MovePieceVisualActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGraphPosition Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGraphPosition RootPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldPosition;
    
    FCachedPotentialMovePieceInfo();
};

