#pragma once
#include "CoreMinimal.h"
#include "AITacticalPoint.h"
#include "TacticalGraphPath.generated.h"

USTRUCT(BlueprintType)
struct REMNANT_API FTacticalGraphPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAITacticalPoint> Points;
    
    FTacticalGraphPath();
};

