#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "EWallCheckType.h"
#include "WallCheckCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UWallCheckCondition : public UCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWallCheckType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHitAngle;
    
    UWallCheckCondition();
};

