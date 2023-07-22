#pragma once
#include "CoreMinimal.h"
#include "AIPathBranchPoint.generated.h"

class AAIPathPoint;

USTRUCT(BlueprintType)
struct FAIPathBranchPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIPathPoint* Point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    GUNFIRERUNTIME_API FAIPathBranchPoint();
};

